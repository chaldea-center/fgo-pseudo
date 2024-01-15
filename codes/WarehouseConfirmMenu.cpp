void __fastcall WarehouseConfirmMenu___ctor(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_40FA96A & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FA96A = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarehouseConfirmMenu__Callback(WarehouseConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  WarehouseConfirmMenu_CallbackFunc_o *v9; // x19
  struct WarehouseConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    WarehouseConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall WarehouseConfirmMenu__Close(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseConfirmMenu__Close_26404608(this, 0LL, v2);
}


void __fastcall WarehouseConfirmMenu__Close_26404608(
        WarehouseConfirmMenu_o *this,
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

  if ( (byte_40FA966 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_WarehouseConfirmMenu_EndClose__, v10);
    byte_40FA966 = 1;
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
  System_Action___ctor(v15, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall WarehouseConfirmMenu__EndClose(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  WarehouseConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall WarehouseConfirmMenu__EndOpen(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall WarehouseConfirmMenu__Init(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0
  UILabel_o *closeLabel; // x0

  if ( (byte_40FA964 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FA964 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (decideLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (cancelLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (closeLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  UILabel__set_text(closeLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarehouseConfirmMenu__OnClickCancel(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FA968 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA968 = 1;
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
    WarehouseConfirmMenu__Callback(this, 0, v3);
  }
}


void __fastcall WarehouseConfirmMenu__OnClickClose(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_40FA969 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA969 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    WarehouseConfirmMenu__Callback(this, 0, v3);
  }
}


void __fastcall WarehouseConfirmMenu__OnClickDecide(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w0
  const MethodInfo *v4; // x2

  if ( (byte_40FA967 & 1) == 0 )
  {
    sub_B16FFC(&SoundManager_TypeInfo, method);
    byte_40FA967 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( this->fields.kind > 3u )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 0;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 8;
    }
    SoundManager__playSystemSe(v3, 0LL);
    WarehouseConfirmMenu__Callback(this, 1, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseConfirmMenu__Open(
        WarehouseConfirmMenu_o *this,
        int32_t kind,
        WarehouseConfirmMenu_CallbackFunc_o *callback,
        int32_t param1,
        int32_t param2,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v13; // x1
  __int64 v14; // x1
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
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x3
  __int64 v43; // x4
  UnityEngine_Component_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  UnityEngine_Component_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  UnityEngine_Component_o *v48; // x0
  UnityEngine_GameObject_o *v49; // x0
  struct UICommonButton_o *v50; // x0
  UnityEngine_Component_o *v51; // x0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v53; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v55; // x0
  UnityEngine_Component_o *closeButton; // x0
  UnityEngine_GameObject_o *v57; // x0
  struct UICommonButton_o *v58; // x0
  struct UICommonButton_o *v59; // x0
  UnityEngine_GameObject_o *v60; // x23
  UILabel_o *titleLabel; // x20
  System_String_o *v62; // x0
  UILabel_o *messageLabel; // x20
  System_String_o *v64; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v66; // x0
  UILabel_o *cancelLabel; // x20
  __int64 *v68; // x8
  UILabel_o *v69; // x20
  System_String_o *v70; // x0
  UILabel_o *v71; // x20
  System_String_o *v72; // x0
  UILabel_o *v73; // x20
  System_String_o *v74; // x0
  UILabel_o *v75; // x20
  System_String_o *v76; // x0
  UILabel_o *v77; // x20
  System_String_o *v78; // x0
  UILabel_o *v79; // x20
  System_String_o *v80; // x0
  UILabel_o *v81; // x20
  System_String_o *v82; // x0
  UILabel_o *v83; // x22
  System_String_o *v84; // x0
  UILabel_o *v85; // x22
  __int64 *v86; // x8
  UILabel_o *v87; // x22
  System_String_o *v88; // x0
  System_String_o *v89; // x23
  Il2CppObject *v90; // x21
  Il2CppObject *v91; // x0
  System_String_o *v92; // x0
  UILabel_o *v93; // x22
  System_String_o *v94; // x0
  UILabel_o *v95; // x22
  __int64 *v96; // x8
  UILabel_o *v97; // x22
  System_String_o *v98; // x0
  System_String_o *v99; // x23
  Il2CppObject *v100; // x21
  Il2CppObject *v101; // x0
  System_String_o *v102; // x0
  System_String_o *v103; // x0
  System_Action_o *v104; // x20
  int32_t v105; // [xsp+8h] [xbp-38h] BYREF
  int32_t v106; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_40FA965 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B16FFC(&AndroidBackKeyManager_TypeInfo, v13);
    sub_B16FFC(&int_TypeInfo, v14);
    sub_B16FFC(&LocalizationManager_TypeInfo, v15);
    sub_B16FFC(&Method_WarehouseConfirmMenu_EndOpen__, v16);
    sub_B16FFC(&StringLiteral_15243/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/, v17);
    sub_B16FFC(&StringLiteral_15262/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/, v18);
    sub_B16FFC(&StringLiteral_15259/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/, v19);
    sub_B16FFC(&StringLiteral_15261/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/, v20);
    sub_B16FFC(&StringLiteral_15245/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/, v21);
    sub_B16FFC(&StringLiteral_15257/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/, v22);
    sub_B16FFC(&StringLiteral_15254/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/, v23);
    sub_B16FFC(&StringLiteral_15263/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/, v24);
    sub_B16FFC(&StringLiteral_15264/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/, v25);
    sub_B16FFC(&StringLiteral_15256/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/, v26);
    sub_B16FFC(&StringLiteral_15240/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/, v27);
    sub_B16FFC(&StringLiteral_15258/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/, v28);
    sub_B16FFC(&StringLiteral_15241/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/, v29);
    sub_B16FFC(&StringLiteral_15252/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/, v30);
    sub_B16FFC(&StringLiteral_15265/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/, v31);
    sub_B16FFC(&StringLiteral_15253/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/, v32);
    sub_B16FFC(&StringLiteral_15255/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/, v33);
    sub_B16FFC(&StringLiteral_15260/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/, v34);
    sub_B16FFC(&StringLiteral_15239/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/, v35);
    sub_B16FFC(&StringLiteral_15246/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/, v36);
    sub_B16FFC(&StringLiteral_15244/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/, v37);
    sub_B16FFC(&StringLiteral_15242/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/, v38);
    byte_40FA965 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B16F98(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)callback,
      *(System_String_array ***)&param1,
      *(System_Boolean_array ***)&param2,
      (System_Int32_array **)method,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_84;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( (unsigned int)kind < 4 )
    {
      decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
      if ( !decideButton )
        goto LABEL_84;
      v53 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
      if ( !v53 )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(v53, 1, 0LL);
      cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
      if ( !cancelButton )
        goto LABEL_84;
      v55 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
      if ( !v55 )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(v55, 1, 0LL);
      closeButton = (UnityEngine_Component_o *)this->fields.closeButton;
      if ( !closeButton
        || (v57 = UnityEngine_Component__get_gameObject(closeButton, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive(v57, 0, 0LL), (v58 = this->fields.decideButton) == 0LL)
        || (((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v58->klass->vtable._14_SetState.method)(
              v58,
              0LL,
              1LL,
              v58->klass->vtable._15_OnPress.methodPtr),
            (v59 = this->fields.cancelButton) == 0LL)
        || (((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v59->klass->vtable._14_SetState.method)(
              v59,
              0LL,
              1LL,
              v59->klass->vtable._15_OnPress.methodPtr),
            (v51 = (UnityEngine_Component_o *)this->fields.cancelButton) == 0LL) )
      {
LABEL_84:
        sub_B170D4();
      }
    }
    else
    {
      if ( (unsigned int)(kind - 4) > 7 )
      {
LABEL_29:
        switch ( kind )
        {
          case 0:
          case 1:
            titleLabel = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v62 = LocalizationManager__Get((System_String_o *)StringLiteral_15242/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/, 0LL);
            if ( !titleLabel )
              goto LABEL_84;
            UILabel__set_text(titleLabel, v62, 0LL);
            messageLabel = this->fields.messageLabel;
            v64 = LocalizationManager__Get((System_String_o *)StringLiteral_15241/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/, 0LL);
            if ( !messageLabel )
              goto LABEL_84;
            UILabel__set_text(messageLabel, v64, 0LL);
            decideLabel = this->fields.decideLabel;
            v66 = LocalizationManager__Get((System_String_o *)StringLiteral_15240/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/, 0LL);
            if ( !decideLabel )
              goto LABEL_84;
            UILabel__set_text(decideLabel, v66, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v68 = &StringLiteral_15239/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/;
            goto LABEL_80;
          case 2:
          case 3:
            v73 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v74 = LocalizationManager__Get((System_String_o *)StringLiteral_15246/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/, 0LL);
            if ( !v73 )
              goto LABEL_84;
            UILabel__set_text(v73, v74, 0LL);
            v75 = this->fields.messageLabel;
            v76 = LocalizationManager__Get((System_String_o *)StringLiteral_15245/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/, 0LL);
            if ( !v75 )
              goto LABEL_84;
            UILabel__set_text(v75, v76, 0LL);
            v77 = this->fields.decideLabel;
            v78 = LocalizationManager__Get((System_String_o *)StringLiteral_15244/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/, 0LL);
            if ( !v77 )
              goto LABEL_84;
            UILabel__set_text(v77, v78, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v68 = &StringLiteral_15243/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/;
            goto LABEL_80;
          case 4:
          case 5:
            v69 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v70 = LocalizationManager__Get((System_String_o *)StringLiteral_15254/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/, 0LL);
            if ( !v69 )
              goto LABEL_84;
            UILabel__set_text(v69, v70, 0LL);
            v71 = this->fields.messageLabel;
            v72 = LocalizationManager__Get((System_String_o *)StringLiteral_15253/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/, 0LL);
            if ( !v71 )
              goto LABEL_84;
            UILabel__set_text(v71, v72, 0LL);
            cancelLabel = this->fields.closeLabel;
            v68 = &StringLiteral_15252/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/;
            goto LABEL_80;
          case 6:
          case 7:
            v79 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v80 = LocalizationManager__Get((System_String_o *)StringLiteral_15257/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/, 0LL);
            if ( !v79 )
              goto LABEL_84;
            UILabel__set_text(v79, v80, 0LL);
            v81 = this->fields.messageLabel;
            v82 = LocalizationManager__Get((System_String_o *)StringLiteral_15256/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/, 0LL);
            if ( !v81 )
              goto LABEL_84;
            UILabel__set_text(v81, v82, 0LL);
            cancelLabel = this->fields.closeLabel;
            v68 = &StringLiteral_15255/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/;
            goto LABEL_80;
          case 8:
            v83 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v84 = LocalizationManager__Get((System_String_o *)StringLiteral_15261/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/, 0LL);
            if ( !v83 )
              goto LABEL_84;
            UILabel__set_text(v83, v84, 0LL);
            v85 = this->fields.messageLabel;
            v86 = &StringLiteral_15260/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/;
            goto LABEL_66;
          case 9:
            v87 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v88 = LocalizationManager__Get((System_String_o *)StringLiteral_15261/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/, 0LL);
            if ( !v87 )
              goto LABEL_84;
            UILabel__set_text(v87, v88, 0LL);
            v85 = this->fields.messageLabel;
            v86 = &StringLiteral_15259/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/;
LABEL_66:
            v89 = LocalizationManager__Get((System_String_o *)*v86, 0LL);
            v106 = param1;
            v90 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106);
            v105 = param2;
            v91 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
            v92 = System_String__Format_43739268(v89, v90, v91, 0LL);
            if ( !v85 )
              goto LABEL_84;
            UILabel__set_text(v85, v92, 0LL);
            cancelLabel = this->fields.closeLabel;
            v68 = &StringLiteral_15258/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/;
            goto LABEL_80;
          case 10:
            v93 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v94 = LocalizationManager__Get((System_String_o *)StringLiteral_15265/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/, 0LL);
            if ( !v93 )
              goto LABEL_84;
            UILabel__set_text(v93, v94, 0LL);
            v95 = this->fields.messageLabel;
            v96 = &StringLiteral_15264/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/;
            goto LABEL_78;
          case 11:
            v97 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            v98 = LocalizationManager__Get((System_String_o *)StringLiteral_15265/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/, 0LL);
            if ( !v97 )
              goto LABEL_84;
            UILabel__set_text(v97, v98, 0LL);
            v95 = this->fields.messageLabel;
            v96 = &StringLiteral_15263/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/;
LABEL_78:
            v99 = LocalizationManager__Get((System_String_o *)*v96, 0LL);
            v106 = param1;
            v100 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v106);
            v105 = param2;
            v101 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v105);
            v102 = System_String__Format_43739268(v99, v100, v101, 0LL);
            if ( !v95 )
              goto LABEL_84;
            UILabel__set_text(v95, v102, 0LL);
            cancelLabel = this->fields.closeLabel;
            v68 = &StringLiteral_15262/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/;
LABEL_80:
            v103 = LocalizationManager__Get((System_String_o *)*v68, 0LL);
            if ( !cancelLabel )
              goto LABEL_84;
            UILabel__set_text(cancelLabel, v103, 0LL);
LABEL_82:
            this->fields.state = 1;
            v104 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v40, v41, v42, v43);
            System_Action___ctor(v104, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v104, 0, 0LL);
            break;
          default:
            goto LABEL_82;
        }
        return;
      }
      v44 = (UnityEngine_Component_o *)this->fields.decideButton;
      if ( !v44 )
        goto LABEL_84;
      v45 = UnityEngine_Component__get_gameObject(v44, 0LL);
      if ( !v45 )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(v45, 0, 0LL);
      v46 = (UnityEngine_Component_o *)this->fields.cancelButton;
      if ( !v46 )
        goto LABEL_84;
      v47 = UnityEngine_Component__get_gameObject(v46, 0LL);
      if ( !v47 )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(v47, 0, 0LL);
      v48 = (UnityEngine_Component_o *)this->fields.closeButton;
      if ( !v48 )
        goto LABEL_84;
      v49 = UnityEngine_Component__get_gameObject(v48, 0LL);
      if ( !v49 )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(v49, 1, 0LL);
      v50 = this->fields.closeButton;
      if ( !v50 )
        goto LABEL_84;
      ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v50->klass->vtable._14_SetState.method)(
        v50,
        0LL,
        1LL,
        v50->klass->vtable._15_OnPress.methodPtr);
      v51 = (UnityEngine_Component_o *)this->fields.closeButton;
      if ( !v51 )
        goto LABEL_84;
    }
    v60 = UnityEngine_Component__get_gameObject(v51, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(v60, 0LL);
    goto LABEL_29;
  }
}


void __fastcall WarehouseConfirmMenu__add_callbackFunc(
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

  if ( (byte_40FA962 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_40FA962 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WarehouseConfirmMenu_CallbackFunc_c *)v8->klass != WarehouseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseConfirmMenu_o *)sub_B173C8(v8);
  WarehouseConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall WarehouseConfirmMenu__remove_callbackFunc(
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

  if ( (byte_40FA963 & 1) == 0 )
  {
    sub_B16FFC(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_40FA963 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (WarehouseConfirmMenu_CallbackFunc_c *)v8->klass != WarehouseConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseConfirmMenu_o *)sub_B173C8(v8);
  WarehouseConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseConfirmMenu_CallbackFunc___ctor(
        WarehouseConfirmMenu_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall WarehouseConfirmMenu_CallbackFunc__BeginInvoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_40F7891 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F7891 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall WarehouseConfirmMenu_CallbackFunc__EndInvoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseConfirmMenu_CallbackFunc__Invoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  WarehouseConfirmMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  WarehouseConfirmMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  WarehouseConfirmMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

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
    v7 = (WarehouseConfirmMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
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
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
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
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}