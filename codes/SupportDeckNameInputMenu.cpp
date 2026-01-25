void SupportDeckNameInputMenu___ctor(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CEAB94 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CEAB94 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SupportDeckNameInputMenu__Callback(
        SupportDeckNameInputMenu_o *this,
        bool result,
        System_String_o *name,
        const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct SupportDeckNameInputMenu_CallbackFunc_o *v9; // x21
  struct SupportDeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, (int32_t)name, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, System_String_o *, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      name,
      v9->fields.method);
  }
}


void SupportDeckNameInputMenu__Close(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SupportDeckNameInputMenu__Close_36071528(this, 0, v2);
}


void SupportDeckNameInputMenu__Close_36071528(
        SupportDeckNameInputMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  __int64 v10; // x1
  UnityEngine_Component_o *inputTarget; // x0
  System_Action_o *v12; // x20

  if ( (byte_4CEAB8E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C7BAE8(&Method_SupportDeckNameInputMenu_EndClose__);
    byte_4CEAB8E = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
  this->fields.state = 3;
  if ( !inputTarget
    || (inputTarget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   inputTarget,
                                                   (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_1C7BD40(inputTarget, v10);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 0, 0);
  v12 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0);
}


void SupportDeckNameInputMenu__EndClose(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
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

  SupportDeckNameInputMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C7BD40(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void SupportDeckNameInputMenu__EndOpen(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *inputTarget; // x0

  if ( (byte_4CEAB8D & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4CEAB8D = 1;
  }
  if ( this->fields.state == 1 )
  {
    inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
    this->fields.state = 2;
    if ( !inputTarget
      || (inputTarget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     inputTarget,
                                                     (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
    {
      sub_1C7BD40(inputTarget, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 1, 0);
  }
}


void SupportDeckNameInputMenu__Init(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4CEAB89 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider___);
    byte_4CEAB89 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0),
        gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget,
        this->fields.state = 0,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0 )
  {
    sub_1C7BD40(gameObject, v4);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void SupportDeckNameInputMenu__OnChangeInput(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( (byte_4CEAB8B & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEAB8B = 1;
  }
  SupportDeckNameInputMenu__changeInput(this, (System_String_o *)StringLiteral_1/*""*/, v2);
}


void SupportDeckNameInputMenu__OnClickCancel(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4CEAB90 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SupportDeckNameInputMenu_OnClickCancel__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEAB90 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportDeckNameInputMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportDeckNameInputMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SupportDeckNameInputMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    SupportDeckNameInputMenu__Callback(this, 0, (System_String_o *)StringLiteral_1/*""*/, v5);
  }
}


void SupportDeckNameInputMenu__OnClickClear(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v7; // x1

  if ( (byte_4CEAB91 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SupportDeckNameInputMenu_OnClickClear__);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEAB91 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportDeckNameInputMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_SupportDeckNameInputMenu_OnClickClear__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SupportDeckNameInputMenu_OnClickClear__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    inputTarget = this->fields.inputTarget;
    if ( !inputTarget )
      sub_1C7BD40(0, v5);
    UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0);
    SupportDeckNameInputMenu__OnChangeInput(this, v7);
  }
}


void SupportDeckNameInputMenu__OnClickDecide(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  System_String_o *changeName; // x20
  System_String_o *v6; // x2
  const MethodInfo *v7; // x3

  if ( (byte_4CEAB8F & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_SupportDeckNameInputMenu_OnClickDecide__);
    byte_4CEAB8F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportDeckNameInputMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_SupportDeckNameInputMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SupportDeckNameInputMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    changeName = this->fields.changeName;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v6 = LocalizationManager__ReplaceNameTag(changeName, 1, 0);
    SupportDeckNameInputMenu__Callback(this, 1, v6, v7);
  }
}


void SupportDeckNameInputMenu__OnClickInit(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4CEAB92 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_SupportDeckNameInputMenu_OnClickInit__);
    byte_4CEAB92 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_SupportDeckNameInputMenu_OnClickInit__;
    if ( (*((_BYTE *)Method_SupportDeckNameInputMenu_OnClickInit__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_SupportDeckNameInputMenu_OnClickInit__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    inputTarget = this->fields.inputTarget;
    if ( !inputTarget )
      sub_1C7BD40(0, v5);
    UIInput__set_value(inputTarget, this->fields.initName, 0);
    SupportDeckNameInputMenu__changeInput(this, this->fields.initName, v7);
  }
}


void SupportDeckNameInputMenu__Open(
        SupportDeckNameInputMenu_o *this,
        System_String_o *deckName,
        System_String_o *initName,
        SupportDeckNameInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v10; // x1
  int32_t v11; // w2
  int32_t v12; // w3
  System_String_o *v13; // x4
  int32_t v14; // w5
  int64_t v15; // x6
  System_String_o *v16; // x7
  int32_t v17; // w2
  int32_t v18; // w3
  System_String_o *v19; // x4
  int32_t v20; // w5
  int64_t v21; // x6
  System_String_o *v22; // x7
  int32_t v23; // w2
  int32_t v24; // w3
  System_String_o *v25; // x4
  int32_t v26; // w5
  int64_t v27; // x6
  System_String_o *v28; // x7
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  UILabel_o *clearLabel; // x21
  UILabel_o *initLabel; // x21
  struct UIInput_o *inputTarget; // x20
  UIInput_OnValidate_o *v40; // x21
  int32_t v41; // w2
  int32_t v42; // w3
  System_String_o *v43; // x4
  int32_t v44; // w5
  int64_t v45; // x6
  System_String_o *v46; // x7
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v49; // x20

  if ( (byte_4CEAB8A & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_UnityEngine_Component_GetComponent_Collider___);
    sub_1C7BAE8(&Method_EmojiUtility_ValidateNameText__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&UIInput_OnValidate_TypeInfo);
    sub_1C7BAE8(&Method_SupportDeckNameInputMenu_EndOpen__);
    sub_1C7BAE8(&StringLiteral_12612/*"SUPPORT_SELECT_INPUT_DECK_NAME_EXPLANATION"*/);
    sub_1C7BAE8(&StringLiteral_12613/*"SUPPORT_SELECT_INPUT_DECK_NAME_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_12616/*"SUPPORT_SELECT_NAME_CLEAR"*/);
    sub_1C7BAE8(&StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C7BAE8(&StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_12597/*"SUPPORT_SELECT_DECK_NAME_INIT"*/);
    byte_4CEAB8A = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.changeName = deckName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.changeName, (int32_t)deckName, v11, v12, v13, v14, v15, v16);
  this->fields.baseName = deckName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.baseName, (int32_t)deckName, v17, v18, v19, v20, v21, v22);
  this->fields.initName = initName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.initName, (int32_t)initName, v23, v24, v25, v26, v27, v28);
  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12613/*"SUPPORT_SELECT_INPUT_DECK_NAME_TITLE"*/, 0);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12612/*"SUPPORT_SELECT_INPUT_DECK_NAME_EXPLANATION"*/, 0);
  if ( !explanationLabel )
    goto LABEL_18;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0);
  clearLabel = this->fields.clearLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12616/*"SUPPORT_SELECT_NAME_CLEAR"*/, 0);
  if ( !clearLabel )
    goto LABEL_18;
  UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0);
  initLabel = this->fields.initLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12597/*"SUPPORT_SELECT_DECK_NAME_INIT"*/, 0);
  if ( !initLabel )
    goto LABEL_18;
  UILabel__set_text(initLabel, (System_String_o *)gameObject, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_18;
  UIInput__set_value((UIInput_o *)gameObject, deckName, 0);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_3166BC4 *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0);
  inputTarget = this->fields.inputTarget;
  v40 = (UIInput_OnValidate_o *)sub_1C7BD34(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v40, 0, Method_EmojiUtility_ValidateNameText__, 0);
  if ( !inputTarget )
    goto LABEL_18;
  inputTarget->fields.onValidate = v40;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&inputTarget->fields.onValidate,
    (int32_t)v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3692/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !decideLabel
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3690/*"COMMON_CONFIRM_CANCEL"*/, 0),
        !cancelLabel)
    || (UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0) )
  {
LABEL_18:
    sub_1C7BD40(gameObject, v10);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, const char *))gameObject->klass[1]._1.name)(
    gameObject,
    0,
    gameObject->klass[1]._1.namespaze);
  this->fields.state = 1;
  v49 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v49, (Il2CppObject *)this, Method_SupportDeckNameInputMenu_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0, 0);
}


void SupportDeckNameInputMenu__add_callbackFunc(
        SupportDeckNameInputMenu_o *this,
        SupportDeckNameInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportDeckNameInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportDeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportDeckNameInputMenu_o *v11; // x0
  SupportDeckNameInputMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CEAB87 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo);
    byte_4CEAB87 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportDeckNameInputMenu_CallbackFunc_c *)v8->klass != SupportDeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  SupportDeckNameInputMenu__remove_callbackFunc(v11, v12, v13);
}


void SupportDeckNameInputMenu__changeInput(
        SupportDeckNameInputMenu_o *this,
        System_String_o *initName,
        const MethodInfo *method)
{
  UILineInput_o *IsNullOrEmpty; // x0
  __int64 v6; // x1
  int32_t v7; // w2
  int32_t v8; // w3
  System_String_o *v9; // x4
  int32_t v10; // w5
  int64_t v11; // x6
  System_String_o *v12; // x7
  struct System_String_o **p_changeName; // x20
  System_String_o *v14; // x0
  _BOOL4 v15; // w8
  System_String_o *v16; // x20
  int32_t v17; // w21
  uint16_t Chars; // w0
  System_String_o *name; // x20
  System_String_o *v20; // x0

  if ( (byte_4CEAB8C & 1) == 0 )
  {
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CEAB8C = 1;
  }
  IsNullOrEmpty = (UILineInput_o *)System_String__IsNullOrEmpty(initName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
  {
    IsNullOrEmpty = this->fields.nameInput;
    if ( !IsNullOrEmpty )
      goto LABEL_23;
    initName = UILineInput__GetText(IsNullOrEmpty, 0);
  }
  else if ( !this )
  {
    goto LABEL_23;
  }
  this->fields.changeName = initName;
  p_changeName = &this->fields.changeName;
  sub_1C7BA8C((GrandQuestFolderBoardItem_o *)&this->fields.changeName, (int32_t)initName, v7, v8, v9, v10, v11, v12);
  if ( System_String__IsNullOrEmpty(this->fields.changeName, 0) )
    goto LABEL_11;
  IsNullOrEmpty = (UILineInput_o *)*p_changeName;
  if ( !*p_changeName )
    goto LABEL_23;
  v14 = System_String__Trim((System_String_o *)IsNullOrEmpty, 0);
  if ( System_String__op_Equality(v14, (System_String_o *)StringLiteral_1/*""*/, 0) )
    goto LABEL_11;
  IsNullOrEmpty = (UILineInput_o *)System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0);
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    goto LABEL_11;
  v16 = *p_changeName;
  if ( !v16 )
    goto LABEL_23;
  if ( v16->fields._stringLength >= 1 )
  {
    v17 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v16, v17, 0);
      if ( EmojiUtility__IsEmojiChar(Chars, 0) )
        break;
      if ( ++v17 >= v16->fields._stringLength )
        goto LABEL_19;
    }
LABEL_11:
    LOBYTE(v15) = 0;
    goto LABEL_12;
  }
LABEL_19:
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  IsNullOrEmpty = (UILineInput_o *)LocalizationManager__ReplaceNameTag(name, 0, 0);
  if ( !IsNullOrEmpty )
LABEL_23:
    sub_1C7BD40(IsNullOrEmpty, v6);
  v20 = System_String__Trim((System_String_o *)IsNullOrEmpty, 0);
  v15 = !System_String__IsNullOrEmpty(v20, 0);
LABEL_12:
  IsNullOrEmpty = (UILineInput_o *)this->fields.decideButton;
  if ( !IsNullOrEmpty )
    goto LABEL_23;
  ((void (__fastcall *)(UILineInput_o *, _BOOL4, const char *))IsNullOrEmpty->klass[1]._1.name)(
    IsNullOrEmpty,
    v15,
    IsNullOrEmpty->klass[1]._1.namespaze);
}


System_String_o *SupportDeckNameInputMenu__get_closeBtnPath(SupportDeckNameInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CEAB93 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3071/*"BaseWindow/ButtonRoot/CancleButton"*/);
    byte_4CEAB93 = 1;
  }
  return (System_String_o *)StringLiteral_3071/*"BaseWindow/ButtonRoot/CancleButton"*/;
}


void SupportDeckNameInputMenu__remove_callbackFunc(
        SupportDeckNameInputMenu_o *this,
        SupportDeckNameInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SupportDeckNameInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SupportDeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SupportDeckNameInputMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CEAB88 & 1) == 0 )
  {
    sub_1C7BAE8(&SupportDeckNameInputMenu_CallbackFunc_TypeInfo);
    byte_4CEAB88 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportDeckNameInputMenu_CallbackFunc_c *)v8->klass != SupportDeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C7C0DC(v8);
  SupportDeckNameInputMenu__Init(v11, v12);
}


void SupportDeckNameInputMenu__setCallbackFunc(
        SupportDeckNameInputMenu_o *this,
        SupportDeckNameInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7

  this->fields.callbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
}


void SupportDeckNameInputMenu_CallbackFunc___ctor(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
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
  sub_1C7BA8C(
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
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AADBFC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AADBA4;
}


System_IAsyncResult_o *SupportDeckNameInputMenu_CallbackFunc__BeginInvoke(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = result;
  if ( (byte_4CEAB95 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CEAB95 = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = changeName;
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v11, callback, object);
}


void SupportDeckNameInputMenu_CallbackFunc__EndInvoke(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void SupportDeckNameInputMenu_CallbackFunc__Invoke(
        SupportDeckNameInputMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, System_String_o *, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    changeName,
    this->fields.method);
}