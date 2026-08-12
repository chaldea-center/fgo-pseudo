void WarehouseConfirmMenu___ctor(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596E4A1 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596E4A1 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void WarehouseConfirmMenu__Callback(WarehouseConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct WarehouseConfirmMenu_CallbackFunc_o *v9; // x20
  struct WarehouseConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void WarehouseConfirmMenu__Close(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseConfirmMenu__Close_45260044(this, 0, v2);
}


void WarehouseConfirmMenu__Close_45260044(
        WarehouseConfirmMenu_o *this,
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

  if ( (byte_596E49D & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_WarehouseConfirmMenu_EndClose__);
    byte_596E49D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
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
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void WarehouseConfirmMenu__EndClose(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  WarehouseConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_596E49B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596E49B = 1;
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
    sub_2213CDC(titleLabel, method);
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

  if ( (byte_596E49F & 1) == 0 )
  {
    sub_2213A60(&Method_WarehouseConfirmMenu_OnClickCancel__);
    byte_596E49F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WarehouseConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_WarehouseConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    WarehouseConfirmMenu__Callback(this, 0, v5);
  }
}


void WarehouseConfirmMenu__OnClickClose(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596E4A0 & 1) == 0 )
  {
    sub_2213A60(&Method_WarehouseConfirmMenu_OnClickClose__);
    byte_596E4A0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WarehouseConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_WarehouseConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_WarehouseConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    WarehouseConfirmMenu__Callback(this, 0, v5);
  }
}


void WarehouseConfirmMenu__OnClickDecide(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  unsigned int kind; // w9
  _QWORD *v4; // x0
  int32_t v5; // w20
  System_Reflection_MethodBase_o *v6; // x0
  const MethodInfo *v7; // x2

  if ( (byte_596E49E & 1) == 0 )
  {
    sub_2213A60(&Method_WarehouseConfirmMenu_OnClickDecide__);
    byte_596E49E = 1;
  }
  if ( this->fields.state == 2 )
  {
    kind = this->fields.kind;
    this->fields.state = 3;
    v4 = Method_WarehouseConfirmMenu_OnClickDecide__;
    v5 = 8 * (kind < 4);
    if ( (*((_BYTE *)Method_WarehouseConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_2213A78(Method_WarehouseConfirmMenu_OnClickDecide__);
    v6 = (System_Reflection_MethodBase_o *)sub_2213A44(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, v5, 0, 0);
    WarehouseConfirmMenu__Callback(this, 1, v7);
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
  bool v6; // w6
  bool v7; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  UnityEngine_GameObject_o *v16; // x0
  UILabel_o *v17; // x20
  UILabel_o *v18; // x20
  __int64 *v19; // x8
  UILabel_o *v20; // x20
  UILabel_o *v21; // x20
  UILabel_o *v22; // x22
  __int64 *v23; // x8
  UILabel_o *v24; // x20
  UILabel_o *v25; // x20
  UILabel_o *v26; // x20
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *closeLabel; // x20
  UILabel_o *v31; // x22
  __int64 *v32; // x8
  UILabel_o *v33; // x22
  UILabel_o *v34; // x22
  System_String_o *v35; // x23
  Il2CppObject *v36; // x21
  Il2CppObject *v37; // x0
  UILabel_o *v38; // x22
  UILabel_o *v39; // x22
  System_String_o *v40; // x23
  Il2CppObject *v41; // x21
  Il2CppObject *v42; // x0
  System_Action_o *v43; // x20
  int32_t v44; // [xsp+8h] [xbp-38h] BYREF
  int32_t v45; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_596E49C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_WarehouseConfirmMenu_EndOpen__);
    sub_2213A60(&StringLiteral_16054/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/);
    sub_2213A60(&StringLiteral_16073/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/);
    sub_2213A60(&StringLiteral_16070/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16072/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/);
    sub_2213A60(&StringLiteral_16056/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16068/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/);
    sub_2213A60(&StringLiteral_16065/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/);
    sub_2213A60(&StringLiteral_16074/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16075/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16067/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16051/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/);
    sub_2213A60(&StringLiteral_16069/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/);
    sub_2213A60(&StringLiteral_16052/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16063/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/);
    sub_2213A60(&StringLiteral_16076/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/);
    sub_2213A60(&StringLiteral_16064/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16066/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/);
    sub_2213A60(&StringLiteral_16071/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/);
    sub_2213A60(&StringLiteral_16050/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/);
    sub_2213A60(&StringLiteral_16057/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/);
    sub_2213A60(&StringLiteral_16055/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/);
    sub_2213A60(&StringLiteral_16053/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/);
    byte_596E49C = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)callback,
      *(System_String_o **)&param1,
      param2,
      (int32_t)method,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    if ( (unsigned int)kind < 4 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_84;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
        gameObject,
        0,
        1,
        gameObject->klass[1]._1.implementedInterfaces);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_84;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
        gameObject,
        0,
        1,
        gameObject->klass[1]._1.implementedInterfaces);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_84;
    }
    else
    {
      if ( (unsigned int)(kind - 12) < 0xFFFFFFF8 )
        goto LABEL_26;
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_84;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
        gameObject,
        0,
        1,
        gameObject->klass[1]._1.implementedInterfaces);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_84;
    }
    v16 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    AndroidBackKeyManager__AddBackBtn(v16, 0);
LABEL_26:
    if ( kind <= 5 )
    {
      if ( (unsigned int)kind < 2 )
      {
        titleLabel = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16053/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/, 0);
        if ( !titleLabel )
          goto LABEL_84;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16052/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/, 0);
        if ( !messageLabel )
          goto LABEL_84;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
        decideLabel = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16051/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/, 0);
        if ( !decideLabel )
          goto LABEL_84;
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
        v19 = &StringLiteral_16050/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/;
      }
      else
      {
        if ( (unsigned int)(kind - 2) >= 2 )
        {
          if ( (unsigned int)(kind - 4) < 2 )
          {
            v17 = this->fields.titleLabel;
            if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16065/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/, 0);
            if ( v17 )
            {
              UILabel__set_text(v17, (System_String_o *)gameObject, 0);
              v18 = this->fields.messageLabel;
              gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                         (System_String_o *)StringLiteral_16064/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/,
                                                         0);
              if ( v18 )
              {
                UILabel__set_text(v18, (System_String_o *)gameObject, 0);
                v19 = &StringLiteral_16063/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/;
LABEL_79:
                closeLabel = this->fields.closeLabel;
                goto LABEL_80;
              }
            }
            goto LABEL_84;
          }
          goto LABEL_82;
        }
        v24 = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16057/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/, 0);
        if ( !v24 )
          goto LABEL_84;
        UILabel__set_text(v24, (System_String_o *)gameObject, 0);
        v25 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16056/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/, 0);
        if ( !v25 )
          goto LABEL_84;
        UILabel__set_text(v25, (System_String_o *)gameObject, 0);
        v26 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16055/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/, 0);
        if ( !v26 )
          goto LABEL_84;
        UILabel__set_text(v26, (System_String_o *)gameObject, 0);
        v19 = &StringLiteral_16054/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/;
      }
      closeLabel = this->fields.cancelLabel;
LABEL_80:
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v19, 0);
      if ( !closeLabel )
        goto LABEL_84;
      UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
      goto LABEL_82;
    }
    if ( kind > 8 )
    {
      if ( kind != 9 )
      {
        if ( kind == 10 )
        {
          v38 = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16076/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/, 0);
          if ( !v38 )
            goto LABEL_84;
          UILabel__set_text(v38, (System_String_o *)gameObject, 0);
          v23 = &StringLiteral_16075/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/;
        }
        else
        {
          if ( kind != 11 )
            goto LABEL_82;
          v22 = this->fields.titleLabel;
          if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16076/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/, 0);
          if ( !v22 )
            goto LABEL_84;
          UILabel__set_text(v22, (System_String_o *)gameObject, 0);
          v23 = &StringLiteral_16074/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/;
        }
        v39 = this->fields.messageLabel;
        v40 = LocalizationManager__Get((System_String_o *)*v23, 0);
        v45 = param1;
        v41 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v45);
        v44 = param2;
        v42 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v44);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_75697880(v40, v41, v42, 0);
        if ( !v39 )
          goto LABEL_84;
        UILabel__set_text(v39, (System_String_o *)gameObject, 0);
        v19 = &StringLiteral_16073/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/;
        goto LABEL_79;
      }
      v33 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16072/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/, 0);
      if ( !v33 )
        goto LABEL_84;
      UILabel__set_text(v33, (System_String_o *)gameObject, 0);
      v32 = &StringLiteral_16070/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/;
    }
    else
    {
      if ( (unsigned int)(kind - 6) < 2 )
      {
        v20 = this->fields.titleLabel;
        if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16068/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/, 0);
        if ( v20 )
        {
          UILabel__set_text(v20, (System_String_o *)gameObject, 0);
          v21 = this->fields.messageLabel;
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16067/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/, 0);
          if ( v21 )
          {
            UILabel__set_text(v21, (System_String_o *)gameObject, 0);
            v19 = &StringLiteral_16066/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/;
            goto LABEL_79;
          }
        }
LABEL_84:
        sub_2213CDC(gameObject, v14);
      }
      if ( kind != 8 )
      {
LABEL_82:
        this->fields.state = 1;
        v43 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
        System_Action___ctor(v43, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndOpen__, 0);
        BaseDialog__Open((BaseDialog_o *)this, v43, 0, 0, 0);
        return;
      }
      v31 = this->fields.titleLabel;
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v14, v15);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_16072/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/, 0);
      if ( !v31 )
        goto LABEL_84;
      UILabel__set_text(v31, (System_String_o *)gameObject, 0);
      v32 = &StringLiteral_16071/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/;
    }
    v34 = this->fields.messageLabel;
    v35 = LocalizationManager__Get((System_String_o *)*v32, 0);
    v45 = param1;
    v36 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v45);
    v44 = param2;
    v37 = (Il2CppObject *)j_il2cpp_value_box_0(qword_5984348, &v44);
    gameObject = (UnityEngine_GameObject_o *)System_String__Format_75697880(v35, v36, v37, 0);
    if ( !v34 )
      goto LABEL_84;
    UILabel__set_text(v34, (System_String_o *)gameObject, 0);
    v19 = &StringLiteral_16069/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/;
    goto LABEL_79;
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WarehouseConfirmMenu_o *v13; // x0
  WarehouseConfirmMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596E499 & 1) == 0 )
  {
    sub_2213A60(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    byte_596E499 = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, WarehouseConfirmMenu_CallbackFunc_TypeInfo, v9, v10);
  WarehouseConfirmMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  WarehouseConfirmMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596E49A & 1) == 0 )
  {
    sub_2213A60(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    byte_596E49A = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_221405C(v8, WarehouseConfirmMenu_CallbackFunc_TypeInfo, v9, v10);
  WarehouseConfirmMenu__Init(v13, v14);
}


void WarehouseConfirmMenu_CallbackFunc___ctor(
        WarehouseConfirmMenu_CallbackFunc_o *this,
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
  sub_2213A04(
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
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_200A378;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_200A330;
}


System_IAsyncResult_o *WarehouseConfirmMenu_CallbackFunc__BeginInvoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void WarehouseConfirmMenu_CallbackFunc__EndInvoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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