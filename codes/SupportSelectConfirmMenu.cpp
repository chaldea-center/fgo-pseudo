void __fastcall SupportSelectConfirmMenu___ctor(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4AFE689 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFE689 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectConfirmMenu__Callback(
        SupportSelectConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct SupportSelectConfirmMenu_CallbackFunc_o *v5; // x20
  struct SupportSelectConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BC2FAC(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall SupportSelectConfirmMenu__Close(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectConfirmMenu__Close_34694204(this, 0LL, v2);
}


void __fastcall SupportSelectConfirmMenu__Close_34694204(
        SupportSelectConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4AFE685 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_SupportSelectConfirmMenu_EndClose__, v6);
    byte_4AFE685 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SupportSelectConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SupportSelectConfirmMenu__EndClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SupportSelectConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BC2FAC(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall SupportSelectConfirmMenu__EndOpen(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SupportSelectConfirmMenu__Init(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4AFE682 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, method);
    byte_4AFE682 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.messageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL) )
  {
LABEL_9:
    sub_1BC3264(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectConfirmMenu__OnCancelClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AFE687 & 1) == 0 )
  {
    sub_1BC3008(&Method_SupportSelectConfirmMenu_OnCancelClose__, method);
    byte_4AFE687 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SupportSelectConfirmMenu_OnCancelClose__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmMenu_OnCancelClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_SupportSelectConfirmMenu_OnCancelClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    SupportSelectConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall SupportSelectConfirmMenu__OnClickClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AFE686 & 1) == 0 )
  {
    sub_1BC3008(&Method_SupportSelectConfirmMenu_OnClickClose__, method);
    byte_4AFE686 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SupportSelectConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_SupportSelectConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    SupportSelectConfirmMenu__Callback(this, 1, v5);
  }
}


void __fastcall SupportSelectConfirmMenu__OnDecideClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4AFE688 & 1) == 0 )
  {
    sub_1BC3008(&Method_SupportSelectConfirmMenu_OnDecideClose__, method);
    byte_4AFE688 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SupportSelectConfirmMenu_OnDecideClose__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmMenu_OnDecideClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_SupportSelectConfirmMenu_OnDecideClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    SupportSelectConfirmMenu__Callback(this, 1, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmMenu__Open(
        SupportSelectConfirmMenu_o *this,
        int32_t kind,
        SupportSelectConfirmMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v4; // x5

  if ( (byte_4AFE683 & 1) == 0 )
  {
    sub_1BC3008(&StringLiteral_1/*""*/, *(_QWORD *)&kind);
    byte_4AFE683 = 1;
  }
  SupportSelectConfirmMenu__Open_34692796(
    this,
    kind,
    callback,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmMenu__Open_34692796(
        SupportSelectConfirmMenu_o *this,
        int32_t kind,
        SupportSelectConfirmMenu_CallbackFunc_o *callback,
        System_String_o *class1,
        System_String_o *class2,
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  bool v30; // w1
  UILabel_o *v31; // x20
  struct UILabel_o *v32; // x20
  __int64 *v33; // x8
  UILabel_o *v34; // x20
  UILabel_o *v35; // x20
  System_String_o *v36; // x1
  UILabel_o *v37; // x0
  UILabel_o *v38; // x22
  struct UILabel_o *v39; // x22
  System_String_o *v40; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *decideLabel; // x20
  UnityEngine_GameObject_o *v44; // x0
  UnityEngine_GameObject_o *v45; // x0
  System_Action_o *v46; // x20

  if ( (byte_4AFE684 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&LocalizationManager_TypeInfo, v11);
    sub_1BC3008(&Method_SupportSelectConfirmMenu_EndOpen__, v12);
    sub_1BC3008(&StringLiteral_12431/*"SUPPORT_SELECT_EQUIP_CHANGE_TITLE"*/, v13);
    sub_1BC3008(&StringLiteral_12394/*"SUPPORT_SELECT_ALL_CLEAR_TITLE"*/, v14);
    sub_1BC3008(&StringLiteral_12433/*"SUPPORT_SELECT_EQUIP_CLEAR_WARNING"*/, v15);
    sub_1BC3008(&StringLiteral_12448/*"SUPPORT_SELECT_WARNING_DIALOG_CLOSE"*/, v16);
    sub_1BC3008(&StringLiteral_12443/*"SUPPORT_SELECT_SERVANT_CLEAR_TITLE"*/, v17);
    sub_1BC3008(&StringLiteral_12440/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/, v18);
    sub_1BC3008(&StringLiteral_12441/*"SUPPORT_SELECT_NO_SERVANT_WARNING"*/, v19);
    sub_1BC3008(&StringLiteral_12430/*"SUPPORT_SELECT_EQUIP_CHANGE_MESSAGE"*/, v20);
    sub_1BC3008(&StringLiteral_12449/*"SUPPORT_SELECT_WARNING_DIALOG_DECIDE"*/, v21);
    sub_1BC3008(&StringLiteral_12444/*"SUPPORT_SELECT_SERVANT_CLEAR_WARNING"*/, v22);
    sub_1BC3008(&StringLiteral_12447/*"SUPPORT_SELECT_WARNING_DIALOG_CANCEL"*/, v23);
    sub_1BC3008(&StringLiteral_12395/*"SUPPORT_SELECT_ALL_CLEAR_WARNING"*/, v24);
    sub_1BC3008(&StringLiteral_12432/*"SUPPORT_SELECT_EQUIP_CLEAR_TITLE"*/, v25);
    byte_4AFE684 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)callback,
      (const MethodInfo *)class1);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
LABEL_61:
      sub_1BC3264(gameObject, v27);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    switch ( kind )
    {
      case 1:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12440/*"SUPPORT_SELECT_NO_SERVANT_TITLE"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_61;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12441/*"SUPPORT_SELECT_NO_SERVANT_WARNING"*/, 0LL);
        if ( !messageLabel )
          goto LABEL_61;
        UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_61;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_61;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_61;
        v30 = 0;
        goto LABEL_44;
      case 2:
        v31 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12443/*"SUPPORT_SELECT_SERVANT_CLEAR_TITLE"*/, 0LL);
        if ( !v31 )
          goto LABEL_61;
        UILabel__set_text(v31, (System_String_o *)gameObject, 0LL);
        v32 = this->fields.messageLabel;
        v33 = &StringLiteral_12444/*"SUPPORT_SELECT_SERVANT_CLEAR_WARNING"*/;
        goto LABEL_30;
      case 3:
        v34 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12432/*"SUPPORT_SELECT_EQUIP_CLEAR_TITLE"*/, 0LL);
        if ( !v34 )
          goto LABEL_61;
        UILabel__set_text(v34, (System_String_o *)gameObject, 0LL);
        v32 = this->fields.messageLabel;
        v33 = &StringLiteral_12433/*"SUPPORT_SELECT_EQUIP_CLEAR_WARNING"*/;
        goto LABEL_30;
      case 4:
        v35 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12394/*"SUPPORT_SELECT_ALL_CLEAR_TITLE"*/, 0LL);
        if ( !v35 )
          goto LABEL_61;
        UILabel__set_text(v35, (System_String_o *)gameObject, 0LL);
        v32 = this->fields.messageLabel;
        v33 = &StringLiteral_12395/*"SUPPORT_SELECT_ALL_CLEAR_WARNING"*/;
LABEL_30:
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v33, 0LL);
        if ( !v32 )
          goto LABEL_61;
        v36 = (System_String_o *)gameObject;
        v37 = v32;
LABEL_37:
        UILabel__set_text(v37, v36, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_61;
        UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_61;
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_61;
        v30 = 1;
LABEL_44:
        UnityEngine_GameObject__SetActive(gameObject, v30, 0LL);
LABEL_45:
        closeLabel = this->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12448/*"SUPPORT_SELECT_WARNING_DIALOG_CLOSE"*/, 0LL);
        if ( !closeLabel )
          goto LABEL_61;
        UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12447/*"SUPPORT_SELECT_WARNING_DIALOG_CANCEL"*/, 0LL);
        if ( !cancelLabel )
          goto LABEL_61;
        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
        decideLabel = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12449/*"SUPPORT_SELECT_WARNING_DIALOG_DECIDE"*/, 0LL);
        if ( !decideLabel )
          goto LABEL_61;
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_61;
        if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
          goto LABEL_55;
        gameObject = (UnityEngine_GameObject_o *)this->fields.closeButton;
        if ( !gameObject )
          goto LABEL_61;
        v44 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        AndroidBackKeyManager__AddBackBtn(v44, 0LL);
LABEL_55:
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_61;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        if ( !gameObject )
          goto LABEL_61;
        if ( !UnityEngine_GameObject__get_activeSelf(gameObject, 0LL) )
          goto LABEL_60;
        gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
        if ( !gameObject )
          goto LABEL_61;
        v45 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        AndroidBackKeyManager__AddBackBtn(v45, 0LL);
LABEL_60:
        this->fields.state = 1;
        v46 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
        System_Action___ctor(v46, (Il2CppObject *)this, Method_SupportSelectConfirmMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)this, v46, 0, 0LL);
        break;
      case 5:
        v38 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12431/*"SUPPORT_SELECT_EQUIP_CHANGE_TITLE"*/, 0LL);
        if ( !v38 )
          goto LABEL_61;
        UILabel__set_text(v38, (System_String_o *)gameObject, 0LL);
        v39 = this->fields.messageLabel;
        v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12430/*"SUPPORT_SELECT_EQUIP_CHANGE_MESSAGE"*/, 0LL);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_62389940(
                                                   v40,
                                                   (Il2CppObject *)class1,
                                                   (Il2CppObject *)class2,
                                                   0LL);
        if ( !v39 )
          goto LABEL_61;
        v36 = (System_String_o *)gameObject;
        v37 = v39;
        goto LABEL_37;
      default:
        goto LABEL_45;
    }
  }
}


void __fastcall SupportSelectConfirmMenu__add_callbackFunc(
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

  if ( (byte_4AFE680 & 1) == 0 )
  {
    sub_1BC3008(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4AFE680 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectConfirmMenu_CallbackFunc_c *)v8->klass != SupportSelectConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  SupportSelectConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SupportSelectConfirmMenu__remove_callbackFunc(
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

  if ( (byte_4AFE681 & 1) == 0 )
  {
    sub_1BC3008(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4AFE681 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectConfirmMenu_CallbackFunc_c *)v8->klass != SupportSelectConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BC3524(v8);
  SupportSelectConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmMenu_CallbackFunc___ctor(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A09C74;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09C2C;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall SupportSelectConfirmMenu_CallbackFunc__BeginInvoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4AFE68A & 1) == 0 )
  {
    sub_1BC3008(&bool_TypeInfo, result);
    byte_4AFE68A = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v9, callback, object);
}


void __fastcall SupportSelectConfirmMenu_CallbackFunc__EndInvoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
}


void __fastcall SupportSelectConfirmMenu_CallbackFunc__Invoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}