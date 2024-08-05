void __fastcall WarehouseConfirmMenu___ctor(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_49FC522 & 1) == 0 )
  {
    sub_1B64870(&BaseDialog_TypeInfo, method);
    byte_49FC522 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall WarehouseConfirmMenu__Callback(WarehouseConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct WarehouseConfirmMenu_CallbackFunc_o *v5; // x20
  struct WarehouseConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B64814(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall WarehouseConfirmMenu__Close(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  WarehouseConfirmMenu__Close_35480092(this, 0LL, v2);
}


void __fastcall WarehouseConfirmMenu__Close_35480092(
        WarehouseConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_49FC51E & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, callback);
    sub_1B64870(&Method_WarehouseConfirmMenu_EndClose__, v6);
    byte_49FC51E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1B64814(
    (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall WarehouseConfirmMenu__EndClose(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  WarehouseConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B64814(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall WarehouseConfirmMenu__EndOpen(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall WarehouseConfirmMenu__Init(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_49FC51C & 1) == 0 )
  {
    sub_1B64870(&StringLiteral_1/*""*/, method);
    byte_49FC51C = 1;
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
    sub_1B64ACC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall WarehouseConfirmMenu__OnClickCancel(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49FC520 & 1) == 0 )
  {
    sub_1B64870(&Method_WarehouseConfirmMenu_OnClickCancel__, method);
    byte_49FC520 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WarehouseConfirmMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_WarehouseConfirmMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_WarehouseConfirmMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    WarehouseConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall WarehouseConfirmMenu__OnClickClose(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_49FC521 & 1) == 0 )
  {
    sub_1B64870(&Method_WarehouseConfirmMenu_OnClickClose__, method);
    byte_49FC521 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_WarehouseConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_WarehouseConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B64888(Method_WarehouseConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B64854(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0LL);
    WarehouseConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall WarehouseConfirmMenu__OnClickDecide(WarehouseConfirmMenu_o *this, const MethodInfo *method)
{
  unsigned int kind; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_49FC51F & 1) == 0 )
  {
    sub_1B64870(&Method_WarehouseConfirmMenu_OnClickDecide__, method);
    byte_49FC51F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    kind = this->fields.kind;
    v4 = Method_WarehouseConfirmMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_WarehouseConfirmMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1B64888(Method_WarehouseConfirmMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1B64854(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * (kind < 4), 0LL);
    WarehouseConfirmMenu__Callback(this, 1, v6);
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
  __int64 v11; // x1
  __int64 v12; // x1
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v37; // x1
  UnityEngine_GameObject_o *v38; // x0
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  __int64 *v43; // x8
  UILabel_o *v44; // x20
  UILabel_o *v45; // x20
  UILabel_o *v46; // x20
  UILabel_o *v47; // x20
  UILabel_o *v48; // x20
  UILabel_o *v49; // x20
  UILabel_o *v50; // x20
  UILabel_o *v51; // x22
  UILabel_o *v52; // x22
  __int64 *v53; // x8
  UILabel_o *v54; // x22
  System_String_o *v55; // x23
  __int64 v56; // x2
  __int64 v57; // x3
  __int64 v58; // x4
  Il2CppObject *v59; // x21
  __int64 v60; // x2
  __int64 v61; // x3
  __int64 v62; // x4
  Il2CppObject *v63; // x0
  UILabel_o *v64; // x22
  UILabel_o *v65; // x22
  __int64 *v66; // x8
  UILabel_o *v67; // x22
  System_String_o *v68; // x23
  __int64 v69; // x2
  __int64 v70; // x3
  __int64 v71; // x4
  Il2CppObject *v72; // x21
  __int64 v73; // x2
  __int64 v74; // x3
  __int64 v75; // x4
  Il2CppObject *v76; // x0
  System_Action_o *v77; // x20
  int32_t v78; // [xsp+8h] [xbp-38h] BYREF
  int32_t v79; // [xsp+Ch] [xbp-34h] BYREF

  if ( (byte_49FC51D & 1) == 0 )
  {
    sub_1B64870(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1B64870(&int_TypeInfo, v11);
    sub_1B64870(&LocalizationManager_TypeInfo, v12);
    sub_1B64870(&Method_WarehouseConfirmMenu_EndOpen__, v13);
    sub_1B64870(&StringLiteral_15389/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/, v14);
    sub_1B64870(&StringLiteral_15408/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/, v15);
    sub_1B64870(&StringLiteral_15405/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/, v16);
    sub_1B64870(&StringLiteral_15407/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/, v17);
    sub_1B64870(&StringLiteral_15391/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/, v18);
    sub_1B64870(&StringLiteral_15403/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/, v19);
    sub_1B64870(&StringLiteral_15400/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/, v20);
    sub_1B64870(&StringLiteral_15409/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/, v21);
    sub_1B64870(&StringLiteral_15410/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/, v22);
    sub_1B64870(&StringLiteral_15402/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/, v23);
    sub_1B64870(&StringLiteral_15386/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/, v24);
    sub_1B64870(&StringLiteral_15404/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/, v25);
    sub_1B64870(&StringLiteral_15387/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/, v26);
    sub_1B64870(&StringLiteral_15398/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/, v27);
    sub_1B64870(&StringLiteral_15411/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/, v28);
    sub_1B64870(&StringLiteral_15399/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/, v29);
    sub_1B64870(&StringLiteral_15401/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/, v30);
    sub_1B64870(&StringLiteral_15406/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/, v31);
    sub_1B64870(&StringLiteral_15385/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/, v32);
    sub_1B64870(&StringLiteral_15392/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/, v33);
    sub_1B64870(&StringLiteral_15390/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/, v34);
    sub_1B64870(&StringLiteral_15388/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/, v35);
    byte_49FC51D = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.kind = kind;
    this->fields.callbackFunc = callback;
    sub_1B64814(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      param1);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_73;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( (unsigned int)kind < 4 )
    {
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_73;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_73;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_73;
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
LABEL_73:
        sub_1B64ACC(gameObject, v37);
      }
    }
    else
    {
      if ( (unsigned int)(kind - 4) > 7 )
        goto LABEL_26;
      gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
      if ( !gameObject )
        goto LABEL_73;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
      if ( !gameObject )
        goto LABEL_73;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_73;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
      if ( !gameObject )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_73;
      ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
        gameObject,
        0LL,
        1LL,
        gameObject->klass[1]._1.interfaceOffsets);
      gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
      if ( !gameObject )
        goto LABEL_73;
    }
    v38 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    AndroidBackKeyManager__AddBackBtn(v38, 0LL);
LABEL_26:
    switch ( kind )
    {
      case 0:
      case 1:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15388/*"WAREHOUSE_CONFIRM_PUT_IN_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_73;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15387/*"WAREHOUSE_CONFIRM_PUT_IN_MESSAGE"*/, 0LL);
        if ( !messageLabel )
          goto LABEL_73;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
        decideLabel = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15386/*"WAREHOUSE_CONFIRM_PUT_IN_DECIDE"*/, 0LL);
        if ( !decideLabel )
          goto LABEL_73;
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v43 = &StringLiteral_15385/*"WAREHOUSE_CONFIRM_PUT_IN_CANCEL"*/;
        goto LABEL_69;
      case 2:
      case 3:
        v44 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15392/*"WAREHOUSE_CONFIRM_PUT_OUT_TITLE"*/, 0LL);
        if ( !v44 )
          goto LABEL_73;
        UILabel__set_text(v44, (System_String_o *)gameObject, 0LL);
        v45 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15391/*"WAREHOUSE_CONFIRM_PUT_OUT_MESSAGE"*/, 0LL);
        if ( !v45 )
          goto LABEL_73;
        UILabel__set_text(v45, (System_String_o *)gameObject, 0LL);
        v46 = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15390/*"WAREHOUSE_CONFIRM_PUT_OUT_DECIDE"*/, 0LL);
        if ( !v46 )
          goto LABEL_73;
        UILabel__set_text(v46, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        v43 = &StringLiteral_15389/*"WAREHOUSE_CONFIRM_PUT_OUT_CANCEL"*/;
        goto LABEL_69;
      case 4:
      case 5:
        v47 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15400/*"WAREHOUSE_NOTIFICATION_PUT_IN_TITLE"*/, 0LL);
        if ( !v47 )
          goto LABEL_73;
        UILabel__set_text(v47, (System_String_o *)gameObject, 0LL);
        v48 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15399/*"WAREHOUSE_NOTIFICATION_PUT_IN_MESSAGE"*/, 0LL);
        if ( !v48 )
          goto LABEL_73;
        UILabel__set_text(v48, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.closeLabel;
        v43 = &StringLiteral_15398/*"WAREHOUSE_NOTIFICATION_PUT_IN_CLOSE"*/;
        goto LABEL_69;
      case 6:
      case 7:
        v49 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15403/*"WAREHOUSE_NOTIFICATION_PUT_OUT_TITLE"*/, 0LL);
        if ( !v49 )
          goto LABEL_73;
        UILabel__set_text(v49, (System_String_o *)gameObject, 0LL);
        v50 = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15402/*"WAREHOUSE_NOTIFICATION_PUT_OUT_MESSAGE"*/, 0LL);
        if ( !v50 )
          goto LABEL_73;
        UILabel__set_text(v50, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.closeLabel;
        v43 = &StringLiteral_15401/*"WAREHOUSE_NOTIFICATION_PUT_OUT_CLOSE"*/;
        goto LABEL_69;
      case 8:
        v51 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15407/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/, 0LL);
        if ( !v51 )
          goto LABEL_73;
        UILabel__set_text(v51, (System_String_o *)gameObject, 0LL);
        v52 = this->fields.messageLabel;
        v53 = &StringLiteral_15406/*"WAREHOUSE_OVER_PUT_IN_SERVANT_MESSAGE"*/;
        goto LABEL_57;
      case 9:
        v54 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15407/*"WAREHOUSE_OVER_PUT_IN_TITLE"*/, 0LL);
        if ( !v54 )
          goto LABEL_73;
        UILabel__set_text(v54, (System_String_o *)gameObject, 0LL);
        v52 = this->fields.messageLabel;
        v53 = &StringLiteral_15405/*"WAREHOUSE_OVER_PUT_IN_SERVANT_EQUIP_MESSAGE"*/;
LABEL_57:
        v55 = LocalizationManager__Get((System_String_o *)*v53, 0LL);
        v79 = param1;
        v59 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79, v56, v57, v58);
        v78 = param2;
        v63 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78, v60, v61, v62);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_61397948(v55, v59, v63, 0LL);
        if ( !v52 )
          goto LABEL_73;
        UILabel__set_text(v52, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.closeLabel;
        v43 = &StringLiteral_15404/*"WAREHOUSE_OVER_PUT_IN_CLOSE"*/;
        goto LABEL_69;
      case 10:
        v64 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15411/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/, 0LL);
        if ( !v64 )
          goto LABEL_73;
        UILabel__set_text(v64, (System_String_o *)gameObject, 0LL);
        v65 = this->fields.messageLabel;
        v66 = &StringLiteral_15410/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_MESSAGE"*/;
        goto LABEL_67;
      case 11:
        v67 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_15411/*"WAREHOUSE_OVER_PUT_OUT_TITLE"*/, 0LL);
        if ( !v67 )
          goto LABEL_73;
        UILabel__set_text(v67, (System_String_o *)gameObject, 0LL);
        v65 = this->fields.messageLabel;
        v66 = &StringLiteral_15409/*"WAREHOUSE_OVER_PUT_OUT_SERVANT_EQUIP_MESSAGE"*/;
LABEL_67:
        v68 = LocalizationManager__Get((System_String_o *)*v66, 0LL);
        v79 = param1;
        v72 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v79, v69, v70, v71);
        v78 = param2;
        v76 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v78, v73, v74, v75);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_61397948(v68, v72, v76, 0LL);
        if ( !v65 )
          goto LABEL_73;
        UILabel__set_text(v65, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.closeLabel;
        v43 = &StringLiteral_15408/*"WAREHOUSE_OVER_PUT_OUT_CLOSE"*/;
LABEL_69:
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v43, 0LL);
        if ( !cancelLabel )
          goto LABEL_73;
        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_71:
        this->fields.state = 1;
        v77 = (System_Action_o *)sub_1B64ABC(System_Action_TypeInfo);
        System_Action___ctor(v77, (Il2CppObject *)this, Method_WarehouseConfirmMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)this, v77, 0, 0LL);
        break;
      default:
        goto LABEL_71;
    }
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

  if ( (byte_49FC51A & 1) == 0 )
  {
    sub_1B64870(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_49FC51A = 1;
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
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64D8C(v8);
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

  if ( (byte_49FC51B & 1) == 0 )
  {
    sub_1B64870(&WarehouseConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_49FC51B = 1;
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
    v9 = sub_1B9FD60(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B64D8C(v8);
  WarehouseConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall WarehouseConfirmMenu_CallbackFunc___ctor(
        WarehouseConfirmMenu_CallbackFunc_o *this,
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
  sub_1B64814((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64930(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64AE8(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B64998(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19AADC8;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19AAD80;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall WarehouseConfirmMenu_CallbackFunc__BeginInvoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_49FC523 & 1) == 0 )
  {
    sub_1B64870(&bool_TypeInfo, result);
    byte_49FC523 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B64824(this, v9, callback, object);
}


void __fastcall WarehouseConfirmMenu_CallbackFunc__EndInvoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64828(result, 0LL, method);
}


void __fastcall WarehouseConfirmMenu_CallbackFunc__Invoke(
        WarehouseConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}