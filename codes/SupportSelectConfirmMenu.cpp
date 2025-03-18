void __fastcall SupportSelectConfirmMenu___ctor(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C1E791 & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1E791 = 1;
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
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_callbackFunc; // x0
  struct SupportSelectConfirmMenu_CallbackFunc_o *v9; // x20
  struct SupportSelectConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (PartyOrganizationUtility_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1C3B708(p_callbackFunc, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      result,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall SupportSelectConfirmMenu__Close(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportSelectConfirmMenu__Close_34532980(this, 0LL, v2);
}


void __fastcall SupportSelectConfirmMenu__Close_34532980(
        SupportSelectConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4C1E78D & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_SupportSelectConfirmMenu_EndClose__, v10);
    byte_4C1E78D = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_SupportSelectConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall SupportSelectConfirmMenu__EndClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SupportSelectConfirmMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (PartyOrganizationUtility_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1C3B708(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall SupportSelectConfirmMenu__EndOpen(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SupportSelectConfirmMenu__Init(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C1E78A & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, method);
    byte_4C1E78A = 1;
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
    sub_1C3B9C0(titleLabel, method);
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

  if ( (byte_4C1E78F & 1) == 0 )
  {
    sub_1C3B764(&Method_SupportSelectConfirmMenu_OnCancelClose__, method);
    byte_4C1E78F = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SupportSelectConfirmMenu_OnCancelClose__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmMenu_OnCancelClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_SupportSelectConfirmMenu_OnCancelClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
    SupportSelectConfirmMenu__Callback(this, 0, v5);
  }
}


void __fastcall SupportSelectConfirmMenu__OnClickClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1E78E & 1) == 0 )
  {
    sub_1C3B764(&Method_SupportSelectConfirmMenu_OnClickClose__, method);
    byte_4C1E78E = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SupportSelectConfirmMenu_OnClickClose__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmMenu_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_SupportSelectConfirmMenu_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    SupportSelectConfirmMenu__Callback(this, 1, v5);
  }
}


void __fastcall SupportSelectConfirmMenu__OnDecideClose(SupportSelectConfirmMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C1E790 & 1) == 0 )
  {
    sub_1C3B764(&Method_SupportSelectConfirmMenu_OnDecideClose__, method);
    byte_4C1E790 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_SupportSelectConfirmMenu_OnDecideClose__;
    if ( (*((_BYTE *)Method_SupportSelectConfirmMenu_OnDecideClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_SupportSelectConfirmMenu_OnDecideClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
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

  if ( (byte_4C1E78B & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_1/*""*/, *(_QWORD *)&kind);
    byte_4C1E78B = 1;
  }
  SupportSelectConfirmMenu__Open_34531572(
    this,
    kind,
    callback,
    (System_String_o *)StringLiteral_1/*""*/,
    (System_String_o *)StringLiteral_1/*""*/,
    v4);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmMenu__Open_34531572(
        SupportSelectConfirmMenu_o *this,
        int32_t kind,
        SupportSelectConfirmMenu_CallbackFunc_o *callback,
        System_String_o *class1,
        System_String_o *class2,
        const MethodInfo *method)
{
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  bool v32; // w1
  UILabel_o *v33; // x20
  struct UILabel_o *v34; // x20
  __int64 *v35; // x8
  UILabel_o *v36; // x20
  UILabel_o *v37; // x20
  System_String_o *v38; // x1
  UILabel_o *v39; // x0
  UILabel_o *v40; // x22
  struct UILabel_o *v41; // x22
  System_String_o *v42; // x0
  UILabel_o *closeLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *decideLabel; // x20
  UnityEngine_GameObject_o *v46; // x0
  UnityEngine_GameObject_o *v47; // x0
  System_Action_o *v48; // x20

  if ( (byte_4C1E78C & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1C3B764(&LocalizationManager_TypeInfo, v13);
    sub_1C3B764(&Method_SupportSelectConfirmMenu_EndOpen__, v14);
    sub_1C3B764(&StringLiteral_12728/*"StartPostingAsyncOp"*/, v15);
    sub_1C3B764(&StringLiteral_12691/*"Square"*/, v16);
    sub_1C3B764(&StringLiteral_12730/*"StartRigidModule"*/, v17);
    sub_1C3B764(&StringLiteral_12745/*"StateLargeOut_End"*/, v18);
    sub_1C3B764(&StringLiteral_12740/*"State 1"*/, v19);
    sub_1C3B764(&StringLiteral_12737/*"Started serializing {0}"*/, v20);
    sub_1C3B764(&StringLiteral_12738/*"Started serializing {0} with converter {1}."*/, v21);
    sub_1C3B764(&StringLiteral_12727/*"StartOpenPanel"*/, v22);
    sub_1C3B764(&StringLiteral_12746/*"StateQaaEnd"*/, v23);
    sub_1C3B764(&StringLiteral_12741/*"State 5"*/, v24);
    sub_1C3B764(&StringLiteral_12744/*"StateLargeIn_End"*/, v25);
    sub_1C3B764(&StringLiteral_12692/*"SquareEnable"*/, v26);
    sub_1C3B764(&StringLiteral_12729/*"StartQuestClearReward"*/, v27);
    byte_4C1E78C = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C3B708(
      (PartyOrganizationUtility_o *)&this->fields.callbackFunc,
      (int64_t)callback,
      (int64_t)callback,
      (int32_t)class1,
      class2,
      (BattleSetupInfo_o *)method,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
LABEL_61:
      sub_1C3B9C0(gameObject, v29);
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    switch ( kind )
    {
      case 1:
        titleLabel = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12737/*"Started serializing {0}"*/, 0LL);
        if ( !titleLabel )
          goto LABEL_61;
        UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
        messageLabel = this->fields.messageLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12738/*"Started serializing {0} with converter {1}."*/, 0LL);
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
        v32 = 0;
        goto LABEL_44;
      case 2:
        v33 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12740/*"State 1"*/, 0LL);
        if ( !v33 )
          goto LABEL_61;
        UILabel__set_text(v33, (System_String_o *)gameObject, 0LL);
        v34 = this->fields.messageLabel;
        v35 = &StringLiteral_12741/*"State 5"*/;
        goto LABEL_30;
      case 3:
        v36 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12729/*"StartQuestClearReward"*/, 0LL);
        if ( !v36 )
          goto LABEL_61;
        UILabel__set_text(v36, (System_String_o *)gameObject, 0LL);
        v34 = this->fields.messageLabel;
        v35 = &StringLiteral_12730/*"StartRigidModule"*/;
        goto LABEL_30;
      case 4:
        v37 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12691/*"Square"*/, 0LL);
        if ( !v37 )
          goto LABEL_61;
        UILabel__set_text(v37, (System_String_o *)gameObject, 0LL);
        v34 = this->fields.messageLabel;
        v35 = &StringLiteral_12692/*"SquareEnable"*/;
LABEL_30:
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v35, 0LL);
        if ( !v34 )
          goto LABEL_61;
        v38 = (System_String_o *)gameObject;
        v39 = v34;
LABEL_37:
        UILabel__set_text(v39, v38, 0LL);
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
        v32 = 1;
LABEL_44:
        UnityEngine_GameObject__SetActive(gameObject, v32, 0LL);
LABEL_45:
        closeLabel = this->fields.closeLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12745/*"StateLargeOut_End"*/, 0LL);
        if ( !closeLabel )
          goto LABEL_61;
        UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12744/*"StateLargeIn_End"*/, 0LL);
        if ( !cancelLabel )
          goto LABEL_61;
        UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
        decideLabel = this->fields.decideLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12746/*"StateQaaEnd"*/, 0LL);
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
        v46 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        AndroidBackKeyManager__AddBackBtn(v46, 0LL);
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
        v47 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
        AndroidBackKeyManager__AddBackBtn(v47, 0LL);
LABEL_60:
        this->fields.state = 1;
        v48 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
        System_Action___ctor(v48, (Il2CppObject *)this, Method_SupportSelectConfirmMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)this, v48, 0, 0LL);
        break;
      case 5:
        v40 = this->fields.titleLabel;
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12728/*"StartPostingAsyncOp"*/, 0LL);
        if ( !v40 )
          goto LABEL_61;
        UILabel__set_text(v40, (System_String_o *)gameObject, 0LL);
        v41 = this->fields.messageLabel;
        v42 = LocalizationManager__Get((System_String_o *)StringLiteral_12727/*"StartOpenPanel"*/, 0LL);
        gameObject = (UnityEngine_GameObject_o *)System_String__Format_63382984(
                                                   v42,
                                                   (Il2CppObject *)class1,
                                                   (Il2CppObject *)class2,
                                                   0LL);
        if ( !v41 )
          goto LABEL_61;
        v38 = (System_String_o *)gameObject;
        v39 = v41;
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

  if ( (byte_4C1E788 & 1) == 0 )
  {
    sub_1C3B764(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4C1E788 = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
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

  if ( (byte_4C1E789 & 1) == 0 )
  {
    sub_1C3B764(&SupportSelectConfirmMenu_CallbackFunc_TypeInfo, value);
    byte_4C1E789 = 1;
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
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C3BC80(v8);
  SupportSelectConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectConfirmMenu_CallbackFunc___ctor(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1C3B708(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A78F68;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A78F20;
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
  if ( (byte_4C1E792 & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, result);
    byte_4C1E792 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C3B718(this, v9, callback, object);
}


void __fastcall SupportSelectConfirmMenu_CallbackFunc__EndInvoke(
        SupportSelectConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
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