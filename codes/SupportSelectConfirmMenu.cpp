void SupportSelectConfirmMenu___ctor(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4D2CEA2 & 1) == 0 )
  {
    sub_1C93AD4(&BaseDialog_TypeInfo);
    byte_4D2CEA2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SupportSelectConfirmMenu__Callback(SupportSelectConfirmMenu_o *this, bool result, const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct SupportSelectConfirmMenu_CallbackFunc_o *v9; // x20
  struct SupportSelectConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C93A78(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void SupportSelectConfirmMenu__Close(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectConfirmMenu__Close_36197548(this, 0, v2);
}


void SupportSelectConfirmMenu__Close_36197548(
        SupportSelectConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4D2CE9E & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectConfirmMenu_EndClose__);
    byte_4D2CE9E = 1;
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
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SupportSelectConfirmMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void SupportSelectConfirmMenu__EndClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
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

  SupportSelectConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C93A78(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void SupportSelectConfirmMenu__EndOpen(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void SupportSelectConfirmMenu__Init(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4D2CE9B & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CE9B = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0) )
  {
LABEL_9:
    sub_1C93D2C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SupportSelectConfirmMenu__OnCancelClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2CEA0 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SupportSelectConfirmMenu_OnCancelClose__);
    byte_4D2CEA0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SupportSelectConfirmMenu_OnCancelClose__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmMenu_OnCancelClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_SupportSelectConfirmMenu_OnCancelClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SupportSelectConfirmMenu__Callback(this, 0, v5);
  }
}


void SupportSelectConfirmMenu__OnClickClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2CE9F & 1) == 0 )
  {
    sub_1C93AD4(&Method_SupportSelectConfirmMenu_OnClickClose__);
    byte_4D2CE9F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SupportSelectConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_SupportSelectConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SupportSelectConfirmMenu__Callback(this, 1, v5);
  }
}


void SupportSelectConfirmMenu__OnDecideClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4D2CEA1 & 1) == 0 )
  {
    sub_1C93AD4(&Method_SupportSelectConfirmMenu_OnDecideClose__);
    byte_4D2CEA1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SupportSelectConfirmMenu_OnDecideClose__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmMenu_OnDecideClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C93AEC(Method_SupportSelectConfirmMenu_OnDecideClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C93AB8(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    SupportSelectConfirmMenu__Callback(this, 1, v5);
  }
}


void SupportSelectConfirmMenu__Open(
        SupportSelectConfirmMenu_o *this,
        int32_t kind,
        SupportSelectConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_4D2CE9C & 1) == 0 )
  {
    sub_1C93AD4(&StringLiteral_1/*""*/);
    byte_4D2CE9C = 1;
  }
  SupportSelectConfirmMenu__Open_36196136(
    this,
    kind,
    callback,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v4);
}


void SupportSelectConfirmMenu__Open_36196136(
        SupportSelectConfirmMenu_o *this,
        int32_t kind,
        SupportSelectConfirmMenu_CallbackFunc_o *callback,
        System_String_o *class1,
        System_String_o *class2,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  bool v17; // w1
  UILabel_o *v18; // x20
  struct UILabel_o *v19; // x20
  __int64 *v20; // x8
  UILabel_o *v21; // x20
  UILabel_o *v22; // x20
  System_String_o *v23; // x1
  UILabel_o *v24; // x0
  UILabel_o *v25; // x22
  struct UILabel_o *v26; // x22
  System_String_o *v27; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *decideLabel; // x20
  UnityEngine_GameObject_o *v31; // x0
  UnityEngine_GameObject_o *v32; // x0
  System_Action_o *v33; // x20

  if ( (byte_4D2CE9D & 1) == 0 )
  {
    sub_1C93AD4(&System_Action_TypeInfo);
    sub_1C93AD4(&LocalizationManager_TypeInfo);
    sub_1C93AD4(&Method_SupportSelectConfirmMenu_EndOpen__);
    sub_1C93AD4(&StringLiteral_12645/*"SUPPORT_SELECT_EQUIP_CHANGE_TITLE"*/);
    sub_1C93AD4(&StringLiteral_12608/*"SUPPORT_SELECT_ALL_CLEAR_TITLE"*/);
    sub_1C93AD4(&StringLiteral_12647/*"SUPPORT_SELECT_EQUIP_CLEAR_WARNING"*/);
    sub_1C93AD4(&StringLiteral_12662/*"SUPPORT_SELECT_WARNING_DIALOG_CLOSE"*/);
    sub_1C93AD4(&StringLiteral_12657/*"SUPPORT_SELECT_SERVANT_CLEAR_TITLE"*/);
    sub_1C93AD4(&StringLiteral_12654/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/);
    sub_1C93AD4(&StringLiteral_12655/*"SUPPORT_SELECT_NO_SERVANT_WARNING"*/);
    sub_1C93AD4(&StringLiteral_12644/*"SUPPORT_SELECT_EQUIP_CHANGE_MESSAGE"*/);
    sub_1C93AD4(&StringLiteral_12663/*"SUPPORT_SELECT_WARNING_DIALOG_DECIDE"*/);
    sub_1C93AD4(&StringLiteral_12658/*"SUPPORT_SELECT_SERVANT_CLEAR_WARNING"*/);
    sub_1C93AD4(&StringLiteral_12661/*"SUPPORT_SELECT_WARNING_DIALOG_CANCEL"*/);
    sub_1C93AD4(&StringLiteral_12609/*"SUPPORT_SELECT_ALL_CLEAR_WARNING"*/);
    sub_1C93AD4(&StringLiteral_12646/*"SUPPORT_SELECT_EQUIP_CLEAR_TITLE"*/);
    byte_4D2CE9D = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C93A78(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (int32_t)class1,
      class2,
      (int32_t)method,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
LABEL_61:
      sub_1C93D2C(gameObject, v14);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    switch ( kind )
    {
      case 1:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12654/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/, 0);
        if ( !titleLabel )
          goto LABEL_61;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12655/*"SUPPORT_SELECT_NO_SERVANT_WARNING"*/, 0);
        if ( !messageLabel )
          goto LABEL_61;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_61;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_61;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_61;
        v17 = 0;
        goto LABEL_44;
      case 2:
        v18 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12657/*"SUPPORT_SELECT_SERVANT_CLEAR_TITLE"*/, 0);
        if ( !v18 )
          goto LABEL_61;
        UILabel__set_text(v18, (System_String_o *)gameObject, 0);
        v19 = this->fields.messageLabel;
        v20 = &StringLiteral_12658/*"SUPPORT_SELECT_SERVANT_CLEAR_WARNING"*/;
        goto LABEL_30;
      case 3:
        v21 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12646/*"SUPPORT_SELECT_EQUIP_CLEAR_TITLE"*/, 0);
        if ( !v21 )
          goto LABEL_61;
        UILabel__set_text(v21, (System_String_o *)gameObject, 0);
        v19 = this->fields.messageLabel;
        v20 = &StringLiteral_12647/*"SUPPORT_SELECT_EQUIP_CLEAR_WARNING"*/;
        goto LABEL_30;
      case 4:
        v22 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12608/*"SUPPORT_SELECT_ALL_CLEAR_TITLE"*/, 0);
        if ( !v22 )
          goto LABEL_61;
        UILabel__set_text(v22, (System_String_o *)gameObject, 0);
        v19 = this->fields.messageLabel;
        v20 = &StringLiteral_12609/*"SUPPORT_SELECT_ALL_CLEAR_WARNING"*/;
LABEL_30:
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v20, 0);
        if ( !v19 )
          goto LABEL_61;
        v23 = (System_String_o *)gameObject;
        v24 = v19;
LABEL_37:
        UILabel__set_text(v24, v23, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_61;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_61;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_61;
        v17 = 1;
LABEL_44:
        UnityEngine_GameObject__SetActive(gameObject, v17, 0);
LABEL_45:
        closeLabel = this->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12662/*"SUPPORT_SELECT_WARNING_DIALOG_CLOSE"*/, 0);
        if ( !closeLabel )
          goto LABEL_61;
        UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
        cancelLabel = this->fields.cancelLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12661/*"SUPPORT_SELECT_WARNING_DIALOG_CANCEL"*/, 0);
        if ( !cancelLabel )
          goto LABEL_61;
        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
        decideLabel = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12663/*"SUPPORT_SELECT_WARNING_DIALOG_DECIDE"*/, 0);
        if ( !decideLabel )
          goto LABEL_61;
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_61;
        if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
          goto LABEL_55;
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_61;
        v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        AndroidBackKeyManager__AddBackBtn(v31, 0);
LABEL_55:
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        if ( !gameObject )
          goto LABEL_61;
        if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0) )
          goto LABEL_60;
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_61;
        v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
        AndroidBackKeyManager__AddBackBtn(v32, 0);
LABEL_60:
        this->fields.state = 1;
        v33 = (System_Action_o *)sub_1C93D20(System_Action_TypeInfo);
        System_Action___ctor(v33, (Il2CppObject *)this, Method_SupportSelectConfirmMenu_EndOpen__, 0);
        BaseDialog__Open((BaseDialog_o *)this, v33, 0, 0, 0);
        break;
      case 5:
        v25 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12645/*"SUPPORT_SELECT_EQUIP_CHANGE_TITLE"*/, 0);
        if ( !v25 )
          goto LABEL_61;
        UILabel__set_text(v25, (System_String_o *)gameObject, 0);
        v26 = this->fields.messageLabel;
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_12644/*"SUPPORT_SELECT_EQUIP_CHANGE_MESSAGE"*/, 0);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_64467032(
                                                   v27,
                                                   (Il2CppObject *)class1,
                                                   (Il2CppObject *)class2,
                                                   0);
        if ( !v26 )
          goto LABEL_61;
        v23 = (System_String_o *)gameObject;
        v24 = v26;
        goto LABEL_37;
      default:
        goto LABEL_45;
    }
  }
}


void SupportSelectConfirmMenu__add_callbackFunc(
        SupportSelectConfirmMenu_o *this,
        SupportSelectConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectConfirmMenu_o *v11; // x0
  SupportSelectConfirmMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4D2CE99 & 1) == 0 )
  {
    sub_1C93AD4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    byte_4D2CE99 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectConfirmMenu_CallbackFunc_c *)v8->klass != SupportSelectConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  SupportSelectConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void SupportSelectConfirmMenu__remove_callbackFunc(
        SupportSelectConfirmMenu_o *this,
        SupportSelectConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportSelectConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4D2CE9A & 1) == 0 )
  {
    sub_1C93AD4(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo);
    byte_4D2CE9A = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectConfirmMenu_CallbackFunc_c *)v8->klass != SupportSelectConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CEF8A8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C940C8(v8);
  SupportSelectConfirmMenu__Init(v11, v12);
}


void SupportSelectConfirmMenu_CallbackFunc___ctor(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1AC4CE4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AC4C9C;
}


System_IAsyncResult_o *SupportSelectConfirmMenu_CallbackFunc__BeginInvoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4D2CEA3 & 1) == 0 )
  {
    sub_1C93AD4(&bool_TypeInfo);
    byte_4D2CEA3 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return sub_1C93A88(this, v9, callback, object);
}


void SupportSelectConfirmMenu_CallbackFunc__EndInvoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C93A8C(result, 0, method);
}


void SupportSelectConfirmMenu_CallbackFunc__Invoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}