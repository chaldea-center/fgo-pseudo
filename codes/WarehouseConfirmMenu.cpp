void WarehouseConfirmMenu___ctor(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CC5147 & 1) == 0 )
  {
    sub_1C713B0(&BaseDialog_TypeInfo);
    byte_4CC5147 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void WarehouseConfirmMenu__Callback(WarehouseConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct WarehouseConfirmMenu_CallbackFunc_o *v9; // x20
  struct WarehouseConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C71354(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void WarehouseConfirmMenu__Close(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseConfirmMenu__Close_38623876(this, 0, v2);
}


void WarehouseConfirmMenu__Close_38623876(
        WarehouseConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CC5143 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&Method_WarehouseConfirmMenu_EndClose__);
    byte_4CC5143 = 1;
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
  System_Action___ctor(v10, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void WarehouseConfirmMenu__EndClose(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  WarehouseConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C71354(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void WarehouseConfirmMenu__EndOpen(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void WarehouseConfirmMenu__Init(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4CC5141 & 1) == 0 )
  {
    sub_1C713B0(&StringLiteral_1/*""*/);
    byte_4CC5141 = 1;
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
    sub_1C71608(titleLabel, method);
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

  if ( (byte_4CC5145 & 1) == 0 )
  {
    sub_1C713B0(&Method_WarehouseConfirmMenu_OnClickCancel__);
    byte_4CC5145 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WarehouseConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_WarehouseConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_WarehouseConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    WarehouseConfirmMenu__Callback(this, 0, v5);
  }
}


void WarehouseConfirmMenu__OnClickClose(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CC5146 & 1) == 0 )
  {
    sub_1C713B0(&Method_WarehouseConfirmMenu_OnClickClose__);
    byte_4CC5146 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WarehouseConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_WarehouseConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C713C8(Method_WarehouseConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C71394(v3, v3[4]);
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

  if ( (byte_4CC5144 & 1) == 0 )
  {
    sub_1C713B0(&Method_WarehouseConfirmMenu_OnClickDecide__);
    byte_4CC5144 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    kind = this->fields.kind;
    v4 = Method_WarehouseConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_WarehouseConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C713C8(Method_WarehouseConfirmMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C71394(v4, v4[4]);
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
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v20; // x8
  UILabel_o *v21; // x20
  UILabel_o *v22; // x20
  UILabel_o *v23; // x20
  UILabel_o *v24; // x20
  UILabel_o *v25; // x20
  UILabel_o *v26; // x20
  UILabel_o *v27; // x20
  UILabel_o *v28; // x22
  UILabel_o *v29; // x22
  __int64 *v30; // x8
  UILabel_o *v31; // x22
  System_String_o *v32; // x23
  Il2CppObject *v33; // x21
  Il2CppObject *v34; // x0
  UILabel_o *v35; // x22
  UILabel_o *v36; // x22
  __int64 *v37; // x8
  UILabel_o *v38; // x22
  System_String_o *v39; // x23
  Il2CppObject *v40; // x21
  Il2CppObject *v41; // x0
  System_Action_o *v42; // x20
  int32_t v43; // [xsp+8h] [xbp-38h] BYREF
  int32_t v44; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_4CC5142 & 1) == 0 )
  {
    sub_1C713B0(&System_Action_TypeInfo);
    sub_1C713B0(&int_TypeInfo);
    sub_1C713B0(&LocalizationManager_TypeInfo);
    sub_1C713B0(&Method_WarehouseConfirmMenu_EndOpen__);
    sub_1C713B0(&StringLiteral_15446/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/);
    sub_1C713B0(&StringLiteral_15465/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/);
    sub_1C713B0(&StringLiteral_15462/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_15464/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/);
    sub_1C713B0(&StringLiteral_15448/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_15460/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/);
    sub_1C713B0(&StringLiteral_15457/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/);
    sub_1C713B0(&StringLiteral_15466/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_15467/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_15459/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_15443/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/);
    sub_1C713B0(&StringLiteral_15461/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/);
    sub_1C713B0(&StringLiteral_15444/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_15455/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/);
    sub_1C713B0(&StringLiteral_15468/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/);
    sub_1C713B0(&StringLiteral_15456/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_15458/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/);
    sub_1C713B0(&StringLiteral_15463/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/);
    sub_1C713B0(&StringLiteral_15442/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/);
    sub_1C713B0(&StringLiteral_15449/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/);
    sub_1C713B0(&StringLiteral_15447/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/);
    sub_1C713B0(&StringLiteral_15445/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/);
    byte_4CC5142 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1C71354(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      param1,
      *(System_String_o **)&param2,
      (int32_t)method,
      v6,
      v7);
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
        sub_1C71608(gameObject, v14);
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
    v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    AndroidBackKeyManager__AddBackBtn(v15, 0);
LABEL_26:
    switch ( kind )
    {
      case 0:
      case 1:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15445/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/, 0);
        if ( !titleLabel )
          goto LABEL_73;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15444/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/, 0);
        if ( !messageLabel )
          goto LABEL_73;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
        decideLabel = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15443/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/, 0);
        if ( !decideLabel )
          goto LABEL_73;
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        v20 = &StringLiteral_15442/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/;
        goto LABEL_69;
      case 2:
      case 3:
        v21 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15449/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/, 0);
        if ( !v21 )
          goto LABEL_73;
        UILabel__set_text(v21, (System_String_o *)gameObject, 0);
        v22 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15448/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/, 0);
        if ( !v22 )
          goto LABEL_73;
        UILabel__set_text(v22, (System_String_o *)gameObject, 0);
        v23 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15447/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/, 0);
        if ( !v23 )
          goto LABEL_73;
        UILabel__set_text(v23, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        v20 = &StringLiteral_15446/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/;
        goto LABEL_69;
      case 4:
      case 5:
        v24 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15457/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/, 0);
        if ( !v24 )
          goto LABEL_73;
        UILabel__set_text(v24, (System_String_o *)gameObject, 0);
        v25 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15456/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/, 0);
        if ( !v25 )
          goto LABEL_73;
        UILabel__set_text(v25, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.closeLabel;
        v20 = &StringLiteral_15455/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/;
        goto LABEL_69;
      case 6:
      case 7:
        v26 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15460/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/, 0);
        if ( !v26 )
          goto LABEL_73;
        UILabel__set_text(v26, (System_String_o *)gameObject, 0);
        v27 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15459/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/, 0);
        if ( !v27 )
          goto LABEL_73;
        UILabel__set_text(v27, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.closeLabel;
        v20 = &StringLiteral_15458/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/;
        goto LABEL_69;
      case 8:
        v28 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15464/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/, 0);
        if ( !v28 )
          goto LABEL_73;
        UILabel__set_text(v28, (System_String_o *)gameObject, 0);
        v29 = this->fields.messageLabel;
        v30 = &StringLiteral_15463/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/;
        goto LABEL_57;
      case 9:
        v31 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15464/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/, 0);
        if ( !v31 )
          goto LABEL_73;
        UILabel__set_text(v31, (System_String_o *)gameObject, 0);
        v29 = this->fields.messageLabel;
        v30 = &StringLiteral_15462/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/;
LABEL_57:
        v32 = LocalizationManager__Get((System_String_o *)*v30, 0);
        v44 = param1;
        v33 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
        v43 = param2;
        v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_64073032(v32, v33, v34, 0);
        if ( !v29 )
          goto LABEL_73;
        UILabel__set_text(v29, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.closeLabel;
        v20 = &StringLiteral_15461/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/;
        goto LABEL_69;
      case 10:
        v35 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15468/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/, 0);
        if ( !v35 )
          goto LABEL_73;
        UILabel__set_text(v35, (System_String_o *)gameObject, 0);
        v36 = this->fields.messageLabel;
        v37 = &StringLiteral_15467/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/;
        goto LABEL_67;
      case 11:
        v38 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15468/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/, 0);
        if ( !v38 )
          goto LABEL_73;
        UILabel__set_text(v38, (System_String_o *)gameObject, 0);
        v36 = this->fields.messageLabel;
        v37 = &StringLiteral_15466/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/;
LABEL_67:
        v39 = LocalizationManager__Get((System_String_o *)*v37, 0);
        v44 = param1;
        v40 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v44);
        v43 = param2;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v43);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_64073032(v39, v40, v41, 0);
        if ( !v36 )
          goto LABEL_73;
        UILabel__set_text(v36, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.closeLabel;
        v20 = &StringLiteral_15465/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/;
LABEL_69:
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v20, 0);
        if ( !cancelLabel )
          goto LABEL_73;
        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
LABEL_71:
        this->fields.state = 1;
        v42 = (System_Action_o *)sub_1C715FC(System_Action_TypeInfo);
        System_Action___ctor(v42, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndOpen__, 0);
        BaseDialog__Open((BaseDialog_o *)this, v42, 0, 0, 0);
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

  if ( (byte_4CC513F & 1) == 0 )
  {
    sub_1C713B0(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    byte_4CC513F = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
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

  if ( (byte_4CC5140 & 1) == 0 )
  {
    sub_1C713B0(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    byte_4CC5140 = 1;
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
    v9 = sub_1CCD184(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C719A4(v8);
  WarehouseConfirmMenu__Init(v11, v12);
}


void WarehouseConfirmMenu_CallbackFunc___ctor(
        WarehouseConfirmMenu_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1AA5460;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AA5418;
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
  if ( (byte_4CC5148 & 1) == 0 )
  {
    sub_1C713B0(&bool_TypeInfo);
    byte_4CC5148 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C71364(this, v9, callback, object);
}


void WarehouseConfirmMenu_CallbackFunc__EndInvoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C71368(result, 0, method);
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