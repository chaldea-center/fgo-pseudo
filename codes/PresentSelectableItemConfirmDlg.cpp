void __fastcall PresentSelectableItemConfirmDlg___ctor(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E87D2 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E87D2 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__Close(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentSelectableItemConfirmDlg__Close_25088376(this, 0LL, v2);
}


void __fastcall PresentSelectableItemConfirmDlg__Close_25088376(
        PresentSelectableItemConfirmDlg_o *this,
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

  if ( (byte_42E87CE & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PresentSelectableItemConfirmDlg_EndClose__, v10, v11, v12);
    byte_42E87CE = 1;
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
  System_Action___ctor(v13, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__EndClose(
        PresentSelectableItemConfirmDlg_o *this,
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
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PresentSelectableItemConfirmDlg__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall PresentSelectableItemConfirmDlg__EndOpen(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PresentSelectableItemConfirmDlg__Init(
        PresentSelectableItemConfirmDlg_o *this,
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


void __fastcall PresentSelectableItemConfirmDlg__OnClickCancel(
        PresentSelectableItemConfirmDlg_o *this,
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

  if ( (byte_42E87D0 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PresentSelectableItemConfirmDlg__OnClickCancel_b__26_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E87D0 = 1;
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
      Method_PresentSelectableItemConfirmDlg__OnClickCancel_b__26_0__,
      0LL);
    PresentSelectableItemConfirmDlg__Close_25088376(this, v11, v12);
  }
}


void __fastcall PresentSelectableItemConfirmDlg__OnClickDecide(
        PresentSelectableItemConfirmDlg_o *this,
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

  if ( (byte_42E87CF & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PresentSelectableItemConfirmDlg__OnClickDecide_b__25_0__, v5, v6, v7);
    sub_B5D5C4(&SoundManager_TypeInfo, v8, v9, v10);
    byte_42E87CF = 1;
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
      Method_PresentSelectableItemConfirmDlg__OnClickDecide_b__25_0__,
      0LL);
    PresentSelectableItemConfirmDlg__Close_25088376(this, v11, v12);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableItemConfirmDlg__Open(
        PresentSelectableItemConfirmDlg_o *this,
        ItemSelectEntity_o *entity,
        ItemEntity_o *itemEnt,
        int32_t itemHold,
        ItemEntity_o *ticketEnt,
        int32_t ticketsHave,
        PresentSelectableItemConfirmDlg_CallbackFunc_o *callback,
        int32_t btnSpriteId,
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
  System_String_array **v36; // x2
  System_String_array **v37; // x3
  System_Boolean_array **v38; // x4
  System_Int32_array **v39; // x5
  System_Int32_array *v40; // x6
  System_Int32_array *v41; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v43; // x1
  UILabel_o *TitleLabel; // x24
  UILabel_o *DetailLabel; // x24
  UILabel_o *priceNumLabel; // x24
  BalanceConfig_c *v47; // x0
  int32_t UserItemMax; // w8
  UILabel_o *v49; // x21
  __int64 *v50; // x8
  const MethodInfo *v51; // x5
  System_Action_o *v52; // x20

  if ( (byte_42E87CD & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)entity, (_DWORD)itemEnt, *(_QWORD *)&itemHold);
    sub_B5D5C4(&BalanceConfig_TypeInfo, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&Method_PresentSelectableItemConfirmDlg_EndOpen__, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_10619/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_TITLE"*/, v24, v25, v26);
    sub_B5D5C4(&StringLiteral_10639/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/, v27, v28, v29);
    sub_B5D5C4(&StringLiteral_10618/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_DETAIL"*/, v30, v31, v32);
    sub_B5D5C4(&StringLiteral_10638/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/, v33, v34, v35);
    byte_42E87CD = 1;
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
      *(System_Int32_array **)&btnSpriteId);
    this->fields.itemSelectEntity = entity;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.itemSelectEntity,
      (System_Int32_array **)entity,
      v36,
      v37,
      v38,
      v39,
      v40,
      v41);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_37;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    TitleLabel = this->fields.TitleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10619/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_TITLE"*/, 0LL);
    if ( !TitleLabel )
      goto LABEL_37;
    UILabel__set_text(TitleLabel, (System_String_o *)gameObject, 0LL);
    DetailLabel = this->fields.DetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10618/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_DETAIL"*/, 0LL);
    if ( !DetailLabel )
      goto LABEL_37;
    UILabel__set_text(DetailLabel, (System_String_o *)gameObject, 0LL);
    if ( !ticketEnt )
      goto LABEL_37;
    gameObject = (UnityEngine_GameObject_o *)this->fields.priceDataLabel;
    if ( !gameObject )
      goto LABEL_37;
    UILabel__set_text((UILabel_o *)gameObject, ticketEnt->fields.name, 0LL);
    if ( !entity )
      goto LABEL_37;
    priceNumLabel = this->fields.priceNumLabel;
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)entity + 28, 0LL);
    if ( !priceNumLabel )
      goto LABEL_37;
    UILabel__set_text(priceNumLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.ticketIcon;
    if ( !gameObject )
      goto LABEL_37;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)gameObject, ticketEnt->fields.imageId, 0LL);
    v47 = BalanceConfig_TypeInfo;
    if ( (BYTE3(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v47 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v47->static_fields->UserItemMax;
    if ( UserItemMax <= itemHold )
    {
      v49 = this->fields.DetailLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v50 = &StringLiteral_10638/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/;
    }
    else
    {
      if ( (BYTE3(v47->vtable._0_Equals.methodPtr) & 4) != 0 && !v47->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v47);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( itemHold + 1 <= UserItemMax )
      {
        v43 = 0LL;
LABEL_34:
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
            gameObject,
            v43,
            1LL,
            gameObject->klass[1]._1.interfaceOffsets);
          gameObject = (UnityEngine_GameObject_o *)this->fields.itemInfo;
          if ( gameObject )
          {
            PresentSelectableItemComponent__setItemInfo(
              (PresentSelectableItemComponent_o *)gameObject,
              this->fields.itemSelectEntity,
              ticketsHave,
              0,
              0LL,
              v51);
            this->fields.state = 1;
            v52 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
            System_Action___ctor(v52, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0LL);
            return;
          }
        }
LABEL_37:
        sub_B5D69C(gameObject, v43);
      }
      v49 = this->fields.DetailLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v50 = &StringLiteral_10639/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v50, 0LL);
    if ( !v49 )
      goto LABEL_37;
    UILabel__set_text(v49, (System_String_o *)gameObject, 0LL);
    v43 = 3LL;
    goto LABEL_34;
  }
}


void __fastcall PresentSelectableItemConfirmDlg___OnClickCancel_b__26_0(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B5D69C(0LL, method);
  PresentSelectableItemConfirmDlg_CallbackFunc__Invoke(callbackFunc, 0, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg___OnClickDecide_b__25_0(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // x0

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_B5D69C(0LL, method);
  PresentSelectableItemConfirmDlg_CallbackFunc__Invoke(callbackFunc, 1, 0LL);
}


void __fastcall PresentSelectableItemConfirmDlg__add_callbackFunc(
        PresentSelectableItemConfirmDlg_o *this,
        PresentSelectableItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PresentSelectableItemConfirmDlg_o *v12; // x0
  PresentSelectableItemConfirmDlg_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E87CB & 1) == 0 )
  {
    sub_B5D5C4(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E87CB = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PresentSelectableItemConfirmDlg_CallbackFunc_c *)v9->klass != PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PresentSelectableItemConfirmDlg_o *)sub_B5D990(v9);
  PresentSelectableItemConfirmDlg__remove_callbackFunc(v12, v13, v14);
}


UnityEngine_GameObject_o *__fastcall PresentSelectableItemConfirmDlg__get_closeBtnObject(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v6; // x1
  UnityEngine_Component_o *v8; // x0

  if ( (byte_42E87D1 & 1) == 0 )
  {
    sub_B5D5C4(&UnityEngine_Object_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E87D1 = 1;
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


void __fastcall PresentSelectableItemConfirmDlg__remove_callbackFunc(
        PresentSelectableItemConfirmDlg_o *this,
        PresentSelectableItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PresentSelectableItemConfirmDlg_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E87CC & 1) == 0 )
  {
    sub_B5D5C4(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E87CC = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PresentSelectableItemConfirmDlg_CallbackFunc_c *)v9->klass != PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PresentSelectableItemConfirmDlg_o *)sub_B5D990(v9);
  PresentSelectableItemConfirmDlg__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableItemConfirmDlg_CallbackFunc___ctor(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall PresentSelectableItemConfirmDlg_CallbackFunc__BeginInvoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_42E5ABA & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5ABA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PresentSelectableItemConfirmDlg_CallbackFunc__EndInvoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentSelectableItemConfirmDlg_CallbackFunc__Invoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PresentSelectableItemConfirmDlg_CallbackFunc_o **v7; // x25
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
  PresentSelectableItemConfirmDlg_CallbackFunc_o *v19; // x8
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
  PresentSelectableItemConfirmDlg_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (PresentSelectableItemConfirmDlg_CallbackFunc_o **)(v3 + 32);
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