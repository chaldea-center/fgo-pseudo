void WarehouseConfirmMenu___ctor(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C2507A & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C2507A = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void WarehouseConfirmMenu__Callback(WarehouseConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct WarehouseConfirmMenu_CallbackFunc_o *v5; // x20
  struct WarehouseConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void WarehouseConfirmMenu__Close(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseConfirmMenu__Close_38144616(this, 0, v2);
}


void WarehouseConfirmMenu__Close_38144616(
        WarehouseConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C25076 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_WarehouseConfirmMenu_EndClose__);
    byte_4C25076 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void WarehouseConfirmMenu__EndClose(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  WarehouseConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C2D434(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void WarehouseConfirmMenu__EndOpen(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void WarehouseConfirmMenu__Init(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C25074 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C25074 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void WarehouseConfirmMenu__OnClickCancel(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C25078 & 1) == 0 )
  {
    sub_1C2D490(&Method_WarehouseConfirmMenu_OnClickCancel__);
    byte_4C25078 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WarehouseConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_WarehouseConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_WarehouseConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    WarehouseConfirmMenu__Callback(this, 0, v5);
  }
}


void WarehouseConfirmMenu__OnClickClose(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C25079 & 1) == 0 )
  {
    sub_1C2D490(&Method_WarehouseConfirmMenu_OnClickClose__);
    byte_4C25079 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WarehouseConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_WarehouseConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_WarehouseConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    WarehouseConfirmMenu__Callback(this, 0, v5);
  }
}


void WarehouseConfirmMenu__OnClickDecide(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  unsigned int kind; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4C25077 & 1) == 0 )
  {
    sub_1C2D490(&Method_WarehouseConfirmMenu_OnClickDecide__);
    byte_4C25077 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    kind = this->fields.kind;
    v4 = Method_WarehouseConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_WarehouseConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C2D4A8(Method_WarehouseConfirmMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C2D474(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * (kind < 4), 0, 0);
    WarehouseConfirmMenu__Callback(this, 1, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void WarehouseConfirmMenu__Open(
        WarehouseConfirmMenu_o *this,
        int32_t kind,
        WarehouseConfirmMenu_CallbackFunc_o *callback,
        int32_t param1,
        int32_t param2,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UnityEngine_GameObject_o *v13; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v18; // x8
  UILabel_o *v19; // x20
  UILabel_o *v20; // x20
  UILabel_o *v21; // x20
  UILabel_o *v22; // x20
  UILabel_o *v23; // x20
  UILabel_o *v24; // x20
  UILabel_o *v25; // x20
  UILabel_o *v26; // x22
  UILabel_o *v27; // x22
  __int64 *v28; // x8
  UILabel_o *v29; // x22
  System_String_o *v30; // x23
  __int64 v31; // x2
  __int64 v32; // x3
  __int64 v33; // x4
  Il2CppObject *v34; // x21
  __int64 v35; // x2
  __int64 v36; // x3
  __int64 v37; // x4
  Il2CppObject *v38; // x0
  UILabel_o *v39; // x22
  UILabel_o *v40; // x22
  __int64 *v41; // x8
  UILabel_o *v42; // x22
  System_String_o *v43; // x23
  __int64 v44; // x2
  __int64 v45; // x3
  __int64 v46; // x4
  Il2CppObject *v47; // x21
  __int64 v48; // x2
  __int64 v49; // x3
  __int64 v50; // x4
  Il2CppObject *v51; // x0
  System_Action_o *v52; // x20
  int32_t v53; // [xsp+8h] [xbp-38h] BYREF
  int32_t v54; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4C25075 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_WarehouseConfirmMenu_EndOpen__);
    sub_1C2D490(&StringLiteral_15440/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/);
    sub_1C2D490(&StringLiteral_15459/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/);
    sub_1C2D490(&StringLiteral_15456/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_15458/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/);
    sub_1C2D490(&StringLiteral_15442/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_15454/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/);
    sub_1C2D490(&StringLiteral_15451/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/);
    sub_1C2D490(&StringLiteral_15460/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_15461/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_15453/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_15437/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/);
    sub_1C2D490(&StringLiteral_15455/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/);
    sub_1C2D490(&StringLiteral_15438/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_15449/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/);
    sub_1C2D490(&StringLiteral_15462/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/);
    sub_1C2D490(&StringLiteral_15450/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_15452/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/);
    sub_1C2D490(&StringLiteral_15457/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_15436/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/);
    sub_1C2D490(&StringLiteral_15443/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/);
    sub_1C2D490(&StringLiteral_15441/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/);
    sub_1C2D490(&StringLiteral_15439/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/);
    byte_4C25075 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      *(const MethodInfo **)&param1);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_73;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    if ( (unsigned int)kind < 4 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_73;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_73;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject
        || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
        || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0)
        || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
              gameObject,
              0,
              1,
              gameObject->klass[1]._1.implementedInterfaces),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0)
        || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
              gameObject,
              0,
              1,
              gameObject->klass[1]._1.implementedInterfaces),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0) )
      {
LABEL_73:
        sub_1C2D6EC(gameObject, v12);
      }
    }
    else
    {
      if ( (unsigned int)(kind - 4) > 7 )
        goto LABEL_26;
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_73;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_73;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_73;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_73;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
        gameObject,
        0,
        1,
        gameObject->klass[1]._1.implementedInterfaces);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_73;
    }
    v13 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    AndroidBackKeyManager__AddBackBtn(v13, 0);
LABEL_26:
    switch ( kind )
    {
      case 0:
      case 1:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15439/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/, 0);
        if ( !titleLabel )
          goto LABEL_73;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15438/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/, 0);
        if ( !messageLabel )
          goto LABEL_73;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
        decideLabel = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15437/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/, 0);
        if ( !decideLabel )
          goto LABEL_73;
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        v18 = &StringLiteral_15436/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/;
        goto LABEL_69;
      case 2:
      case 3:
        v19 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15443/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/, 0);
        if ( !v19 )
          goto LABEL_73;
        UILabel__set_text(v19, (System_String_o *)gameObject, 0);
        v20 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15442/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/, 0);
        if ( !v20 )
          goto LABEL_73;
        UILabel__set_text(v20, (System_String_o *)gameObject, 0);
        v21 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15441/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/, 0);
        if ( !v21 )
          goto LABEL_73;
        UILabel__set_text(v21, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        v18 = &StringLiteral_15440/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/;
        goto LABEL_69;
      case 4:
      case 5:
        v22 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15451/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/, 0);
        if ( !v22 )
          goto LABEL_73;
        UILabel__set_text(v22, (System_String_o *)gameObject, 0);
        v23 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15450/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/, 0);
        if ( !v23 )
          goto LABEL_73;
        UILabel__set_text(v23, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.closeLabel;
        v18 = &StringLiteral_15449/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/;
        goto LABEL_69;
      case 6:
      case 7:
        v24 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15454/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/, 0);
        if ( !v24 )
          goto LABEL_73;
        UILabel__set_text(v24, (System_String_o *)gameObject, 0);
        v25 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15453/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/, 0);
        if ( !v25 )
          goto LABEL_73;
        UILabel__set_text(v25, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.closeLabel;
        v18 = &StringLiteral_15452/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/;
        goto LABEL_69;
      case 8:
        v26 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15458/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/, 0);
        if ( !v26 )
          goto LABEL_73;
        UILabel__set_text(v26, (System_String_o *)gameObject, 0);
        v27 = this->fields.messageLabel;
        v28 = &StringLiteral_15457/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/;
        goto LABEL_57;
      case 9:
        v29 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15458/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/, 0);
        if ( !v29 )
          goto LABEL_73;
        UILabel__set_text(v29, (System_String_o *)gameObject, 0);
        v27 = this->fields.messageLabel;
        v28 = &StringLiteral_15456/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/;
LABEL_57:
        v30 = LocalizationManager__Get((System_String_o *)*v28, 0);
        v54 = param1;
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v31, v32, v33);
        v53 = param2;
        v38 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v35, v36, v37);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_63499156(v30, v34, v38, 0);
        if ( !v27 )
          goto LABEL_73;
        UILabel__set_text(v27, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.closeLabel;
        v18 = &StringLiteral_15455/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/;
        goto LABEL_69;
      case 10:
        v39 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15462/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/, 0);
        if ( !v39 )
          goto LABEL_73;
        UILabel__set_text(v39, (System_String_o *)gameObject, 0);
        v40 = this->fields.messageLabel;
        v41 = &StringLiteral_15461/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/;
        goto LABEL_67;
      case 11:
        v42 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15462/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/, 0);
        if ( !v42 )
          goto LABEL_73;
        UILabel__set_text(v42, (System_String_o *)gameObject, 0);
        v40 = this->fields.messageLabel;
        v41 = &StringLiteral_15460/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/;
LABEL_67:
        v43 = LocalizationManager__Get((System_String_o *)*v41, 0);
        v54 = param1;
        v47 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v54, v44, v45, v46);
        v53 = param2;
        v51 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v53, v48, v49, v50);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_63499156(v43, v47, v51, 0);
        if ( !v40 )
          goto LABEL_73;
        UILabel__set_text(v40, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.closeLabel;
        v18 = &StringLiteral_15459/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/;
LABEL_69:
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v18, 0);
        if ( !cancelLabel )
          goto LABEL_73;
        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
LABEL_71:
        this->fields.state = 1;
        v52 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
        System_Action___ctor(v52, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndOpen__, 0);
        BaseDialog__Open((BaseDialog_o *)this, v52, 0, 0);
        break;
      default:
        goto LABEL_71;
    }
  }
}


void WarehouseConfirmMenu__add_callbackFunc(
        WarehouseConfirmMenu_o *this,
        WarehouseConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WarehouseConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WarehouseConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WarehouseConfirmMenu_o *v11; // x0
  WarehouseConfirmMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C25072 & 1) == 0 )
  {
    sub_1C2D490(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    byte_4C25072 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WarehouseConfirmMenu_CallbackFunc_c *)v8->klass != WarehouseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  WarehouseConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void WarehouseConfirmMenu__remove_callbackFunc(
        WarehouseConfirmMenu_o *this,
        WarehouseConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct WarehouseConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct WarehouseConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  WarehouseConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C25073 & 1) == 0 )
  {
    sub_1C2D490(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    byte_4C25073 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (WarehouseConfirmMenu_CallbackFunc_c *)v8->klass != WarehouseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  WarehouseConfirmMenu__Init(v11, v12);
}


void WarehouseConfirmMenu_CallbackFunc___ctor(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A702F0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A702A8;
}


System_IAsyncResult_o *WarehouseConfirmMenu_CallbackFunc__BeginInvoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4C2507B & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C2507B = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void WarehouseConfirmMenu_CallbackFunc__EndInvoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void WarehouseConfirmMenu_CallbackFunc__Invoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}