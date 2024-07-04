void __fastcall PresentSelectableBulkItemConfirmDlg___ctor(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  if ( (byte_48E159E & 1) == 0 )
  {
    sub_1B00CCC(&BaseDialog_TypeInfo, method);
    byte_48E159E = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__Close(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentSelectableBulkItemConfirmDlg__Close_36180540(this, 0LL, v2);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__Close_36180540(
        PresentSelectableBulkItemConfirmDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_48E1599 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, callback);
    sub_1B00CCC(&Method_PresentSelectableBulkItemConfirmDlg_EndClose__, v6);
    byte_48E1599 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B00C70(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PresentSelectableBulkItemConfirmDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__EndClose(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  struct System_Action_o *closeCallbackFunc; // x20

  PresentSelectableBulkItemConfirmDlg__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B00F28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    this->fields.closeCallbackFunc = 0LL;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))closeCallbackFunc->fields.m_target)(
      closeCallbackFunc->fields.original_method_info,
      *(_QWORD *)&closeCallbackFunc->fields.extra_arg);
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
  int32_t v5; // w2
  int32_t v6; // w3

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1B00F28(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  this->fields.itemSelectEntity = 0LL;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.itemSelectEntity, 0, v5, v6);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__Modify(
        PresentSelectableBulkItemConfirmDlg_o *this,
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3

  this->fields.state = 2;
  this->fields.callbackFunc = callback;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)method, v3);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__OnClickCancel(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_48E159B & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_PresentSelectableBulkItemConfirmDlg_OnClickCancel__, v3);
    sub_1B00CCC(&Method_PresentSelectableBulkItemConfirmDlg__OnClickCancel_b__39_0__, v4);
    byte_48E159B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PresentSelectableBulkItemConfirmDlg_OnClickCancel__;
    if ( (*((_BYTE *)Method_PresentSelectableBulkItemConfirmDlg_OnClickCancel__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B00CE4(Method_PresentSelectableBulkItemConfirmDlg_OnClickCancel__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 1, 0LL);
    v7 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PresentSelectableBulkItemConfirmDlg__OnClickCancel_b__39_0__,
      0LL);
    PresentSelectableBulkItemConfirmDlg__Close_36180540(this, v7, v8);
  }
}


void __fastcall PresentSelectableBulkItemConfirmDlg__OnClickDecide(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  System_Action_o *v7; // x20
  const MethodInfo *v8; // x2

  if ( (byte_48E159A & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, method);
    sub_1B00CCC(&Method_PresentSelectableBulkItemConfirmDlg_OnClickDecide__, v3);
    sub_1B00CCC(&Method_PresentSelectableBulkItemConfirmDlg__OnClickDecide_b__38_0__, v4);
    byte_48E159A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v5 = Method_PresentSelectableBulkItemConfirmDlg_OnClickDecide__;
    if ( (*((_BYTE *)Method_PresentSelectableBulkItemConfirmDlg_OnClickDecide__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B00CE4(Method_PresentSelectableBulkItemConfirmDlg_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B00CB0(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 8, 0LL);
    v7 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
    System_Action___ctor(
      v7,
      (Il2CppObject *)this,
      Method_PresentSelectableBulkItemConfirmDlg__OnClickDecide_b__38_0__,
      0LL);
    PresentSelectableBulkItemConfirmDlg__Close_36180540(this, v7, v8);
  }
}


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
  int32_t v27; // w2
  int32_t v28; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v30; // x1
  int v31; // w1
  UILabel_o *TitleLabel; // x25
  UILabel_o *DetailLabel; // x25
  UILabel_o *UnderDetailLabel; // x25
  UILabel_o *exchangeOrigin; // x25
  UILabel_o *exchangeOriginCountKind; // x25
  UILabel_o *exchangeDestination; // x25
  UILabel_o *exchangeDestinationCountKind; // x25
  const MethodInfo *v39; // x5
  UILabel_o *exchangeOriginItemName; // x8
  const MethodInfo *v41; // x2
  BalanceConfig_c *v42; // x0
  int32_t UserItemMax; // w8
  UILabel_o *v44; // x20
  __int64 *v45; // x8
  System_Action_o *v46; // x20

  if ( (byte_48E1598 & 1) == 0 )
  {
    sub_1B00CCC(&System_Action_TypeInfo, entity);
    sub_1B00CCC(&BalanceConfig_TypeInfo, v15);
    sub_1B00CCC(&LocalizationManager_TypeInfo, v16);
    sub_1B00CCC(&Method_PresentSelectableBulkItemConfirmDlg_EndOpen__, v17);
    sub_1B00CCC(&StringLiteral_10311/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_TITLE"*/, v18);
    sub_1B00CCC(&StringLiteral_10310/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UPPER"*/, v19);
    sub_1B00CCC(&StringLiteral_10313/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION_KIND"*/, v20);
    sub_1B00CCC(&StringLiteral_10315/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN_KIND"*/, v21);
    sub_1B00CCC(&StringLiteral_10309/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UNDER"*/, v22);
    sub_1B00CCC(&StringLiteral_10314/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN"*/, v23);
    sub_1B00CCC(&StringLiteral_10337/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/, v24);
    sub_1B00CCC(&StringLiteral_10312/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION"*/, v25);
    sub_1B00CCC(&StringLiteral_10336/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/, v26);
    byte_48E1598 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1B00C70(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)itemEnt,
      itemHold);
    this->fields.itemSelectEntity = entity;
    sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.itemSelectEntity, (int32_t)entity, v27, v28);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_42;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.buyCount = 1;
    if ( !entity )
      goto LABEL_42;
    gameObject = (UnityEngine_GameObject_o *)this->fields.itemSlider;
    if ( !gameObject )
      goto LABEL_42;
    if ( ticketsHave / entity->fields.requireNum >= 99 )
      v31 = 99;
    else
      v31 = ticketsHave / entity->fields.requireNum;
    UISliderWithButton__init((UISliderWithButton_o *)gameObject, v31, 0, 1, 0LL);
    TitleLabel = this->fields.TitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10311/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_TITLE"*/, 0LL);
    if ( !TitleLabel )
      goto LABEL_42;
    UILabel__set_text(TitleLabel, (System_String_o *)gameObject, 0LL);
    DetailLabel = this->fields.DetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10310/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UPPER"*/, 0LL);
    if ( !DetailLabel )
      goto LABEL_42;
    UILabel__set_text(DetailLabel, (System_String_o *)gameObject, 0LL);
    UnderDetailLabel = this->fields.UnderDetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10309/*"PRESENT_BOX_SELECTABLE_BULK_CONFIRM_DLG_DETAIL_UNDER"*/, 0LL);
    if ( !UnderDetailLabel )
      goto LABEL_42;
    UILabel__set_text(UnderDetailLabel, (System_String_o *)gameObject, 0LL);
    exchangeOrigin = this->fields.exchangeOrigin;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10314/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN"*/, 0LL);
    if ( !exchangeOrigin )
      goto LABEL_42;
    UILabel__set_text(exchangeOrigin, (System_String_o *)gameObject, 0LL);
    exchangeOriginCountKind = this->fields.exchangeOriginCountKind;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10315/*"PRESENT_BOX_SELECTABLE_BULK_ORIGIN_KIND"*/, 0LL);
    if ( !exchangeOriginCountKind )
      goto LABEL_42;
    UILabel__set_text(exchangeOriginCountKind, (System_String_o *)gameObject, 0LL);
    exchangeDestination = this->fields.exchangeDestination;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10312/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION"*/, 0LL);
    if ( !exchangeDestination )
      goto LABEL_42;
    UILabel__set_text(exchangeDestination, (System_String_o *)gameObject, 0LL);
    exchangeDestinationCountKind = this->fields.exchangeDestinationCountKind;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10313/*"PRESENT_BOX_SELECTABLE_BULK_DESTINATION_KIND"*/, 0LL);
    if ( !exchangeDestinationCountKind )
      goto LABEL_42;
    UILabel__set_text(exchangeDestinationCountKind, (System_String_o *)gameObject, 0LL);
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
                                               0LL,
                                               v39);
    exchangeOriginItemName = this->fields.exchangeOriginItemName;
    this->fields.itemCountPerExchange = (int)gameObject;
    if ( !exchangeOriginItemName )
      goto LABEL_42;
    UILabel__set_text(exchangeOriginItemName, ticketEnt->fields.name, 0LL);
    if ( !itemEnt )
      goto LABEL_42;
    gameObject = (UnityEngine_GameObject_o *)this->fields.exchangeDestinationItemName;
    if ( !gameObject )
      goto LABEL_42;
    UILabel__set_text((UILabel_o *)gameObject, itemEnt->fields.name, 0LL);
    PresentSelectableBulkItemConfirmDlg__UpdateCountValue(this, this->fields.buyCount, v41);
    gameObject = (UnityEngine_GameObject_o *)this->fields.itemSlider;
    if ( !gameObject )
      goto LABEL_42;
    UISliderWithButton__normalMode((UISliderWithButton_o *)gameObject, 0LL);
    v42 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v42 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v42->static_fields->UserItemMax;
    if ( UserItemMax <= itemHold )
    {
      v44 = this->fields.UnderDetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = &StringLiteral_10336/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/;
    }
    else
    {
      if ( !v42->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v42);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( UserItemMax > itemHold )
      {
        v30 = 0LL;
LABEL_40:
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
            gameObject,
            v30,
            1LL,
            gameObject->klass[1]._1.interfaceOffsets);
          this->fields.state = 1;
          v46 = (System_Action_o *)sub_1B00F18(System_Action_TypeInfo);
          System_Action___ctor(v46, (Il2CppObject *)this, Method_PresentSelectableBulkItemConfirmDlg_EndOpen__, 0LL);
          BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
          return;
        }
LABEL_42:
        sub_1B00F28(gameObject, v30);
      }
      v44 = this->fields.UnderDetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v45 = &StringLiteral_10337/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v45, 0LL);
    if ( !v44 )
      goto LABEL_42;
    UILabel__set_text(v44, (System_String_o *)gameObject, 0LL);
    v30 = 3LL;
    goto LABEL_40;
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
  if ( (byte_48E159C & 1) == 0 )
  {
    this = (PresentSelectableBulkItemConfirmDlg_o *)sub_1B00CCC(&LocalizationManager_TypeInfo, *(_QWORD *)&count);
    byte_48E159C = 1;
  }
  itemSelectEntity = v4->fields.itemSelectEntity;
  if ( !itemSelectEntity )
    goto LABEL_9;
  exchangeOriginCount = v4->fields.exchangeOriginCount;
  requireNum = itemSelectEntity->fields.requireNum;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
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
LABEL_9:
    sub_1B00F28(this, *(_QWORD *)&count);
  }
  UILabel__set_text(exchangeDestinationCount, (System_String_o *)this, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg___OnClickCancel_b__39_0(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1B00F28(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
    callbackFunc->fields.original_method_info,
    0LL,
    *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall PresentSelectableBulkItemConfirmDlg___OnClickDecide_b__38_0(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  struct PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1B00F28(this, method);
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))callbackFunc->fields.m_target)(
    callbackFunc->fields.original_method_info,
    (unsigned int)this->fields.buyCount,
    *(_QWORD *)&callbackFunc->fields.extra_arg);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__add_callbackFunc(
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

  if ( (byte_48E1596 & 1) == 0 )
  {
    sub_1B00CCC(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, value);
    byte_48E1596 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Combine(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PresentSelectableBulkItemConfirmDlg_CallbackFunc_c *)v7->klass != PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1B3C1BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B011E8(v7);
  PresentSelectableBulkItemConfirmDlg__remove_callbackFunc(v10, v11, v12);
}


UnityEngine_GameObject_o *__fastcall PresentSelectableBulkItemConfirmDlg__get_closeBtnObject(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_48E159D & 1) == 0 )
  {
    sub_1B00CCC(&UnityEngine_Object_TypeInfo, method);
    byte_48E159D = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0LL, 0LL) )
    return 0LL;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1B00F28(0LL, v4);
  return UnityEngine_Component__get_gameObject(v6, 0LL);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__remove_callbackFunc(
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

  if ( (byte_48E1597 & 1) == 0 )
  {
    sub_1B00CCC(&PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo, value);
    byte_48E1597 = 1;
  }
  callbackFunc = (System_Delegate_o *)this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  while ( 1 )
  {
    v7 = System_Delegate__Remove(callbackFunc, (System_Delegate_o *)value, 0LL);
    if ( v7 )
    {
      if ( (PresentSelectableBulkItemConfirmDlg_CallbackFunc_c *)v7->klass != PresentSelectableBulkItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v8 = sub_1B3C1BC(p_callbackFunc, v7, callbackFunc);
    v9 = callbackFunc == (System_Delegate_o *)v8;
    callbackFunc = (System_Delegate_o *)v8;
    if ( v9 )
      return;
  }
  sub_1B011E8(v7);
  PresentSelectableBulkItemConfirmDlg__Init(v10, v11);
}


void __fastcall PresentSelectableBulkItemConfirmDlg__sliderValueChange(
        PresentSelectableBulkItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UISliderWithButton_o *itemSlider; // x0
  int32_t v4; // w1
  const MethodInfo *v5; // x2

  itemSlider = this->fields.itemSlider;
  if ( !itemSlider )
    sub_1B00F28(0LL, method);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1B00C70((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B00D8C(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B00F44(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B00DF4(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_194A1E0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_194A198;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PresentSelectableBulkItemConfirmDlg_CallbackFunc__BeginInvoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_48E159F & 1) == 0 )
  {
    sub_1B00CCC(&int_TypeInfo, *(_QWORD *)&result);
    byte_48E159F = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B00C80(this, v9, callback, object);
}


void __fastcall PresentSelectableBulkItemConfirmDlg_CallbackFunc__EndInvoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B00C84(result, 0LL, method);
}


void __fastcall PresentSelectableBulkItemConfirmDlg_CallbackFunc__Invoke(
        PresentSelectableBulkItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}