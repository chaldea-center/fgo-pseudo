void __fastcall WarehouseConfirmMenu___ctor(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_438BE54 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438BE54 = 1;
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
    sub_B77560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    WarehouseConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall WarehouseConfirmMenu__Close(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseConfirmMenu__Close_26621320(this, 0LL, v2);
}


void __fastcall WarehouseConfirmMenu__Close_26621320(
        WarehouseConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438BE50 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_WarehouseConfirmMenu_EndClose__);
    byte_438BE50 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_B77560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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

  if ( (byte_438BE4E & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438BE4E = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL) )
  {
LABEL_9:
    sub_B7769C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarehouseConfirmMenu__OnClickCancel(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438BE52 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438BE52 = 1;
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

  if ( (byte_438BE53 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438BE53 = 1;
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

  if ( (byte_438BE51 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438BE51 = 1;
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UnityEngine_GameObject_o *v15; // x23
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
  __int64 v33; // x2
  Il2CppObject *v34; // x21
  __int64 v35; // x2
  Il2CppObject *v36; // x0
  UILabel_o *v37; // x22
  UILabel_o *v38; // x22
  __int64 *v39; // x8
  UILabel_o *v40; // x22
  System_String_o *v41; // x23
  __int64 v42; // x2
  Il2CppObject *v43; // x21
  __int64 v44; // x2
  Il2CppObject *v45; // x0
  System_Action_o *v46; // x20
  int32_t v47; // [xsp+8h] [xbp-38h] BYREF
  int32_t v48; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_438BE4F & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&int_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_WarehouseConfirmMenu_EndOpen__);
    sub_B775C4(&StringLiteral_15563/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/);
    sub_B775C4(&StringLiteral_15582/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/);
    sub_B775C4(&StringLiteral_15579/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/);
    sub_B775C4(&StringLiteral_15581/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/);
    sub_B775C4(&StringLiteral_15565/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/);
    sub_B775C4(&StringLiteral_15577/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/);
    sub_B775C4(&StringLiteral_15574/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/);
    sub_B775C4(&StringLiteral_15583/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/);
    sub_B775C4(&StringLiteral_15584/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/);
    sub_B775C4(&StringLiteral_15576/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/);
    sub_B775C4(&StringLiteral_15560/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/);
    sub_B775C4(&StringLiteral_15578/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/);
    sub_B775C4(&StringLiteral_15561/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/);
    sub_B775C4(&StringLiteral_15572/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/);
    sub_B775C4(&StringLiteral_15585/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/);
    sub_B775C4(&StringLiteral_15573/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/);
    sub_B775C4(&StringLiteral_15575/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/);
    sub_B775C4(&StringLiteral_15580/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/);
    sub_B775C4(&StringLiteral_15559/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/);
    sub_B775C4(&StringLiteral_15566/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/);
    sub_B775C4(&StringLiteral_15564/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/);
    sub_B775C4(&StringLiteral_15562/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/);
    byte_438BE4F = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_B77560(
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
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject
        || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
        || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL)
        || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
              gameObject,
              0LL,
              1LL,
              gameObject->klass[1]._1.interfaceOffsets),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0LL)
        || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
              gameObject,
              0LL,
              1LL,
              gameObject->klass[1]._1.interfaceOffsets),
            (gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton) == 0LL) )
      {
LABEL_84:
        sub_B7769C(gameObject, v14);
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
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15562/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/,
                                                       0LL);
            if ( !titleLabel )
              goto LABEL_84;
            UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
            messageLabel = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15561/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/,
                                                       0LL);
            if ( !messageLabel )
              goto LABEL_84;
            UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
            decideLabel = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15560/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/,
                                                       0LL);
            if ( !decideLabel )
              goto LABEL_84;
            UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v20 = &StringLiteral_15559/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/;
            goto LABEL_80;
          case 2:
          case 3:
            v23 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15566/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/,
                                                       0LL);
            if ( !v23 )
              goto LABEL_84;
            UILabel__set_text(v23, (System_String_o *)gameObject, 0LL);
            v24 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15565/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/,
                                                       0LL);
            if ( !v24 )
              goto LABEL_84;
            UILabel__set_text(v24, (System_String_o *)gameObject, 0LL);
            v25 = this->fields.decideLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15564/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/,
                                                       0LL);
            if ( !v25 )
              goto LABEL_84;
            UILabel__set_text(v25, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.cancelLabel;
            v20 = &StringLiteral_15563/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/;
            goto LABEL_80;
          case 4:
          case 5:
            v21 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15574/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/,
                                                       0LL);
            if ( !v21 )
              goto LABEL_84;
            UILabel__set_text(v21, (System_String_o *)gameObject, 0LL);
            v22 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15573/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/,
                                                       0LL);
            if ( !v22 )
              goto LABEL_84;
            UILabel__set_text(v22, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v20 = &StringLiteral_15572/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/;
            goto LABEL_80;
          case 6:
          case 7:
            v26 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15577/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/,
                                                       0LL);
            if ( !v26 )
              goto LABEL_84;
            UILabel__set_text(v26, (System_String_o *)gameObject, 0LL);
            v27 = this->fields.messageLabel;
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15576/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/,
                                                       0LL);
            if ( !v27 )
              goto LABEL_84;
            UILabel__set_text(v27, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v20 = &StringLiteral_15575/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/;
            goto LABEL_80;
          case 8:
            v28 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15581/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/,
                                                       0LL);
            if ( !v28 )
              goto LABEL_84;
            UILabel__set_text(v28, (System_String_o *)gameObject, 0LL);
            v29 = this->fields.messageLabel;
            v30 = &StringLiteral_15580/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/;
            goto LABEL_66;
          case 9:
            v31 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15581/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/,
                                                       0LL);
            if ( !v31 )
              goto LABEL_84;
            UILabel__set_text(v31, (System_String_o *)gameObject, 0LL);
            v29 = this->fields.messageLabel;
            v30 = &StringLiteral_15579/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/;
LABEL_66:
            v32 = LocalizationManager__Get((System_String_o *)*v30, 0LL);
            v48 = param1;
            v34 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v33);
            v47 = param2;
            v36 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v35);
            gameObject = (UnityEngine_GameObject_o *)System_String__Format_44897472(v32, v34, v36, 0LL);
            if ( !v29 )
              goto LABEL_84;
            UILabel__set_text(v29, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v20 = &StringLiteral_15578/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/;
            goto LABEL_80;
          case 10:
            v37 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15585/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/,
                                                       0LL);
            if ( !v37 )
              goto LABEL_84;
            UILabel__set_text(v37, (System_String_o *)gameObject, 0LL);
            v38 = this->fields.messageLabel;
            v39 = &StringLiteral_15584/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/;
            goto LABEL_78;
          case 11:
            v40 = this->fields.titleLabel;
            if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
              && !LocalizationManager_TypeInfo->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
            }
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                       (System_String_o *)StringLiteral_15585/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/,
                                                       0LL);
            if ( !v40 )
              goto LABEL_84;
            UILabel__set_text(v40, (System_String_o *)gameObject, 0LL);
            v38 = this->fields.messageLabel;
            v39 = &StringLiteral_15583/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/;
LABEL_78:
            v41 = LocalizationManager__Get((System_String_o *)*v39, 0LL);
            v48 = param1;
            v43 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v48, v42);
            v47 = param2;
            v45 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v47, v44);
            gameObject = (UnityEngine_GameObject_o *)System_String__Format_44897472(v41, v43, v45, 0LL);
            if ( !v38 )
              goto LABEL_84;
            UILabel__set_text(v38, (System_String_o *)gameObject, 0LL);
            cancelLabel = this->fields.closeLabel;
            v20 = &StringLiteral_15582/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/;
LABEL_80:
            gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v20, 0LL);
            if ( !cancelLabel )
              goto LABEL_84;
            UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_82:
            this->fields.state = 1;
            v46 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
            System_Action___ctor(v46, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndOpen__, 0LL);
            BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
            break;
          default:
            goto LABEL_82;
        }
        return;
      }
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_84;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_84;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_84;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
        gameObject,
        0LL,
        1LL,
        gameObject->klass[1]._1.interfaceOffsets);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_84;
    }
    v15 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
    }
    AndroidBackKeyManager__AddBackBtn(v15, 0LL);
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

  if ( (byte_438BE4C & 1) == 0 )
  {
    sub_B775C4(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    byte_438BE4C = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseConfirmMenu_o *)sub_B77990(v8);
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

  if ( (byte_438BE4D & 1) == 0 )
  {
    sub_B775C4(&WarehouseConfirmMenu_CallbackFunc_TypeInfo);
    byte_438BE4D = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (WarehouseConfirmMenu_o *)sub_B77990(v8);
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
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
}


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
  if ( (byte_43892A1 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_43892A1 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall WarehouseConfirmMenu_CallbackFunc__EndInvoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B775F4(v20) & 1) == 0 )
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
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
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
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
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
            v14 = sub_B0F4C0(v19, class_0, v9);
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