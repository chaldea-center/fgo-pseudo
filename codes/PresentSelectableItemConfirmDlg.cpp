void PresentSelectableItemConfirmDlg___ctor(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
{
  if ( (byte_4D2F6A8 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2F6A8 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PresentSelectableItemConfirmDlg__Close(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PresentSelectableItemConfirmDlg__Close_40890020(this, 0, v2);
}


void PresentSelectableItemConfirmDlg__Close_40890020(
        PresentSelectableItemConfirmDlg_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2F6A4 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PresentSelectableItemConfirmDlg_EndClose__);
    byte_4D2F6A4 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C93A78(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void PresentSelectableItemConfirmDlg__EndClose(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PresentSelectableItemConfirmDlg__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C93A78(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void PresentSelectableItemConfirmDlg__EndOpen(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void PresentSelectableItemConfirmDlg__Init(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
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
    sub_1C93D2C(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  this->fields.itemSelectEntity = 0;
  sub_1C93A78((GrandQuestFolderBoardItem_o *)&this->fields.itemSelectEntity, 0, v5, v6, v7, v8, v9, v10);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PresentSelectableItemConfirmDlg__OnClickCancel(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4D2F6A6 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PresentSelectableItemConfirmDlg_OnClickCancel__);
    sub_1C93AD4(&Method_PresentSelectableItemConfirmDlg__OnClickCancel_b__26_0__);
    byte_4D2F6A6 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentSelectableItemConfirmDlg_OnClickCancel__;
    if ( (*((_BYTE *)Method_PresentSelectableItemConfirmDlg_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PresentSelectableItemConfirmDlg_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg__OnClickCancel_b__26_0__, 0);
    PresentSelectableItemConfirmDlg__Close_40890020(this, v5, v6);
  }
}


void PresentSelectableItemConfirmDlg__OnClickDecide(PresentSelectableItemConfirmDlg_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4D2F6A5 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_PresentSelectableItemConfirmDlg_OnClickDecide__);
    sub_1C93AD4(&Method_PresentSelectableItemConfirmDlg__OnClickDecide_b__25_0__);
    byte_4D2F6A5 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PresentSelectableItemConfirmDlg_OnClickDecide__;
    if ( (*((_BYTE *)Method_PresentSelectableItemConfirmDlg_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_PresentSelectableItemConfirmDlg_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    v5 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
    System_Action___ctor(v5, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg__OnClickDecide_b__25_0__, 0);
    PresentSelectableItemConfirmDlg__Close_40890020(this, v5, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void PresentSelectableItemConfirmDlg__Open(
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
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  UILabel_o *TitleLabel; // x24
  UILabel_o *DetailLabel; // x24
  UILabel_o *priceNumLabel; // x24
  BalanceConfig_c *v26; // x0
  int32_t UserItemMax; // w8
  UILabel_o *v28; // x21
  __int64 *v29; // x8
  const MethodInfo *v30; // x5
  System_Action_o *v31; // x20

  if ( (byte_4D2F6A3 & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&BalanceConfig_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_PresentSelectableItemConfirmDlg_EndOpen__);
    sub_1C93AD4(&StringLiteral_10516/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_TITLE"*/);
    sub_1C93AD4(&StringLiteral_10536/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/);
    sub_1C93AD4(&StringLiteral_10515/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_DETAIL"*/);
    sub_1C93AD4(&StringLiteral_10535/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/);
    byte_4D2F6A3 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)itemEnt,
      itemHold,
      (System_String_o *)ticketEnt,
      ticketsHave,
      (int64_t)callback,
      *(System_String_o **)&btnSpriteId);
    this->fields.itemSelectEntity = entity;
    sub_1C93A78(
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
      goto LABEL_32;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    TitleLabel = this->fields.TitleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10516/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_TITLE"*/, 0);
    if ( !TitleLabel )
      goto LABEL_32;
    UILabel__set_text(TitleLabel, (System_String_o *)gameObject, 0);
    DetailLabel = this->fields.DetailLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10515/*"PRESENT_BOX_SELECTABLE_CONFIRM_DLG_DETAIL"*/, 0);
    if ( !DetailLabel )
      goto LABEL_32;
    UILabel__set_text(DetailLabel, (System_String_o *)gameObject, 0);
    if ( !ticketEnt )
      goto LABEL_32;
    gameObject = (UnityEngine_GameObject_o *)this->fields.priceDataLabel;
    if ( !gameObject )
      goto LABEL_32;
    UILabel__set_text((UILabel_o *)gameObject, ticketEnt->fields.name, 0);
    if ( !entity )
      goto LABEL_32;
    priceNumLabel = this->fields.priceNumLabel;
    gameObject = (UnityEngine_GameObject_o *)System_Int32__ToString((int)entity + 28, 0);
    if ( !priceNumLabel )
      goto LABEL_32;
    UILabel__set_text(priceNumLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.ticketIcon;
    if ( !gameObject )
      goto LABEL_32;
    ItemIconComponent__SetItemImage((ItemIconComponent_o *)gameObject, ticketEnt->fields.imageId, 0);
    v26 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v26 = BalanceConfig_TypeInfo;
    }
    UserItemMax = v26->static_fields->UserItemMax;
    if ( UserItemMax <= itemHold )
    {
      v28 = this->fields.DetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = &StringLiteral_10535/*"PRESENT_SELECT_ITEM_FULL_WARNING"*/;
    }
    else
    {
      if ( !v26->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v26);
        UserItemMax = BalanceConfig_TypeInfo->static_fields->UserItemMax;
      }
      if ( UserItemMax > itemHold )
      {
        v22 = 0;
LABEL_29:
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, __int64, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
            gameObject,
            v22,
            1,
            gameObject->klass[1]._1.implementedInterfaces);
          gameObject = (UnityEngine_GameObject_o *)this->fields.itemInfo;
          if ( gameObject )
          {
            PresentSelectableItemComponent__setItemInfo(
              (PresentSelectableItemComponent_o *)gameObject,
              this->fields.itemSelectEntity,
              ticketsHave,
              0,
              0,
              v30);
            this->fields.state = 1;
            v31 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
            System_Action___ctor(v31, (Il2CppObject *)this, Method_PresentSelectableItemConfirmDlg_EndOpen__, 0);
            BaseDialog__Open((BaseDialog_o *)this, v31, 0, 0, 0);
            return;
          }
        }
LABEL_32:
        sub_1C93D2C(gameObject, v22);
      }
      v28 = this->fields.DetailLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v29 = &StringLiteral_10536/*"PRESENT_SELECT_ITEM_OVER_WARNING"*/;
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v29, 0);
    if ( !v28 )
      goto LABEL_32;
    UILabel__set_text(v28, (System_String_o *)gameObject, 0);
    v22 = 3;
    goto LABEL_29;
  }
}


void PresentSelectableItemConfirmDlg___OnClickCancel_b__26_0(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1C93D2C(this, method);
  ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    0,
    callbackFunc->fields.method);
}


void PresentSelectableItemConfirmDlg___OnClickDecide_b__25_0(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // x8

  callbackFunc = this->fields.callbackFunc;
  if ( !callbackFunc )
    sub_1C93D2C(this, method);
  ((void (__fastcall *)(intptr_t, __int64, intptr_t))callbackFunc->fields.invoke_impl)(
    callbackFunc->fields.method_code,
    1,
    callbackFunc->fields.method);
}


void PresentSelectableItemConfirmDlg__add_callbackFunc(
        PresentSelectableItemConfirmDlg_o *this,
        PresentSelectableItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentSelectableItemConfirmDlg_o *v11; // x0
  PresentSelectableItemConfirmDlg_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2F6A1 & 1) == 0 )
  {
    sub_1C93AD4(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo);
    byte_4D2F6A1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PresentSelectableItemConfirmDlg_CallbackFunc_c *)v8->klass != PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  PresentSelectableItemConfirmDlg__remove_callbackFunc(v11, v12, v13);
}


UnityEngine_GameObject_o *PresentSelectableItemConfirmDlg__get_closeBtnObject(
        PresentSelectableItemConfirmDlg_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *cancelButton; // x20
  __int64 v4; // x1
  UnityEngine_Component_o *v6; // x0

  if ( (byte_4D2F6A7 & 1) == 0 )
  {
    sub_1C93AD4(&UnityEngine_Object_TypeInfo);
    byte_4D2F6A7 = 1;
  }
  cancelButton = (UnityEngine_Object_o *)this->fields.cancelButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Equality(cancelButton, 0, 0) )
    return 0;
  v6 = (UnityEngine_Component_o *)this->fields.cancelButton;
  if ( !v6 )
    sub_1C93D2C(0, v4);
  return UnityEngine_Component__get_gameObject(v6, 0);
}


void PresentSelectableItemConfirmDlg__remove_callbackFunc(
        PresentSelectableItemConfirmDlg_o *this,
        PresentSelectableItemConfirmDlg_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentSelectableItemConfirmDlg_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentSelectableItemConfirmDlg_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2F6A2 & 1) == 0 )
  {
    sub_1C93AD4(&PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo);
    byte_4D2F6A2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PresentSelectableItemConfirmDlg_CallbackFunc_c *)v8->klass != PresentSelectableItemConfirmDlg_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  PresentSelectableItemConfirmDlg__Init(v11, v12);
}


void PresentSelectableItemConfirmDlg_CallbackFunc___ctor(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
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
  sub_1C93A78(
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
  if ( (sub_1C93B94(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C93D48(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C93BFC(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AC8004;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC7FBC;
}


System_IAsyncResult_o *PresentSelectableItemConfirmDlg_CallbackFunc__BeginInvoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = result;
  if ( (byte_4D2F6A9 & 1) == 0 )
  {
    sub_1C93AD4(&int_TypeInfo);
    byte_4D2F6A9 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return sub_1C93A88(this, v9, callback, object);
}


void PresentSelectableItemConfirmDlg_CallbackFunc__EndInvoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void PresentSelectableItemConfirmDlg_CallbackFunc__Invoke(
        PresentSelectableItemConfirmDlg_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}