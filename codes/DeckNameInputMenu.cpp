void __fastcall DeckNameInputMenu___ctor(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C1D9DE & 1) == 0 )
  {
    sub_1C3B764(&BaseDialog_TypeInfo, method);
    byte_4C1D9DE = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall DeckNameInputMenu__Callback(
        DeckNameInputMenu_o *this,
        bool result,
        System_String_o *name,
        const MethodInfo *method)
{
  struct DeckNameInputMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct DeckNameInputMenu_CallbackFunc_o *v5; // x21
  struct DeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1C3B708(p_callbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, System_String_o *, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      name,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall DeckNameInputMenu__ChangeInput(
        DeckNameInputMenu_o *this,
        System_String_o *inputName,
        const MethodInfo *method)
{
  __int64 v5; // x1
  struct System_String_o **p_changeName; // x20
  __int64 v7; // x1
  System_String_o *decideButton; // x0
  System_String_o *v9; // x0
  _BOOL4 v10; // w8
  System_String_o *v11; // x20
  int32_t v12; // w21
  uint16_t Chars; // w0
  System_String_o *name; // x20
  System_String_o *v15; // x0

  if ( (byte_4C1D9D6 & 1) == 0 )
  {
    sub_1C3B764(&LocalizationManager_TypeInfo, inputName);
    sub_1C3B764(&StringLiteral_1/*""*/, v5);
    byte_4C1D9D6 = 1;
  }
  this->fields.changeName = inputName;
  p_changeName = &this->fields.changeName;
  sub_1C3B708(&this->fields.changeName);
  if ( System_String__IsNullOrEmpty(this->fields.changeName, 0LL) )
    goto LABEL_7;
  decideButton = *p_changeName;
  if ( !*p_changeName )
    goto LABEL_19;
  v9 = System_String__Trim(decideButton, 0LL);
  if ( System_String__op_Equality(v9, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_7;
  decideButton = (System_String_o *)System_String__op_Equality(this->fields.changeName, this->fields.baseName, 0LL);
  if ( ((unsigned __int8)decideButton & 1) != 0 )
    goto LABEL_7;
  v11 = *p_changeName;
  if ( !v11 )
    goto LABEL_19;
  if ( v11->fields._stringLength >= 1 )
  {
    v12 = 0;
    while ( 1 )
    {
      Chars = System_String__get_Chars(v11, v12, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        break;
      if ( ++v12 >= v11->fields._stringLength )
        goto LABEL_15;
    }
LABEL_7:
    LOBYTE(v10) = 0;
    goto LABEL_8;
  }
LABEL_15:
  name = UnityEngine_Object__get_name((UnityEngine_Object_o *)this, 0LL);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  decideButton = LocalizationManager__ReplaceNameTag(name, 0, 0LL);
  if ( !decideButton )
LABEL_19:
    sub_1C3B9C0(decideButton, v7);
  v15 = System_String__Trim(decideButton, 0LL);
  v10 = !System_String__IsNullOrEmpty(v15, 0LL);
LABEL_8:
  decideButton = (System_String_o *)this->fields.decideButton;
  if ( !decideButton )
    goto LABEL_19;
  ((void (__fastcall *)(System_String_o *, _BOOL4, Il2CppMethodPointer))decideButton->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method)(
    decideButton,
    v10,
    decideButton->klass->vtable._6_System_Collections_Generic_IEnumerable_System_Char__GetEnumerator.methodPtr);
}


void __fastcall DeckNameInputMenu__Close(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DeckNameInputMenu__Close_32944296(this, 0LL, v2);
}


void __fastcall DeckNameInputMenu__Close_32944296(
        DeckNameInputMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  UnityEngine_Component_o *inputTarget; // x0
  System_Action_o *v9; // x20

  if ( (byte_4C1D9D8 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, callback);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, v5);
    sub_1C3B764(&Method_DeckNameInputMenu_EndClose__, v6);
    byte_4C1D9D8 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C3B708(&this->fields.closeCallbackFunc);
  inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
  this->fields.state = 3;
  if ( !inputTarget
    || (inputTarget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                   inputTarget,
                                                   (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1C3B9C0(inputTarget, v7);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 0, 0LL);
  v9 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_DeckNameInputMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall DeckNameInputMenu__EndClose(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DeckNameInputMenu__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_1C3B9C0(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1C3B708(p_closeCallbackFunc);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall DeckNameInputMenu__EndOpen(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *inputTarget; // x0

  if ( (byte_4C1D9D7 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4C1D9D7 = 1;
  }
  if ( this->fields.state == 1 )
  {
    inputTarget = (UnityEngine_Component_o *)this->fields.inputTarget;
    this->fields.state = 2;
    if ( !inputTarget
      || (inputTarget = (UnityEngine_Component_o *)UnityEngine_Component__GetComponent_object_(
                                                     inputTarget,
                                                     (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
    {
      sub_1C3B9C0(inputTarget, method);
    }
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)inputTarget, 1, 0LL);
  }
}


void __fastcall DeckNameInputMenu__Init(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  if ( (byte_4C1D9D4 & 1) == 0 )
  {
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, method);
    byte_4C1D9D4 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject
    || (UnityEngine_GameObject__SetActive(gameObject, 0, 0LL),
        gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget,
        this->fields.state = 0,
        !gameObject)
    || (gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                                   (UnityEngine_Component_o *)gameObject,
                                                   (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___)) == 0LL )
  {
    sub_1C3B9C0(gameObject, v4);
  }
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DeckNameInputMenu__OnChangeInput(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  UILineInput_o *nameInput; // x0
  System_String_o *Text; // x1
  const MethodInfo *v5; // x2

  nameInput = this->fields.nameInput;
  if ( !nameInput )
    sub_1C3B9C0(0LL, method);
  Text = UILineInput__GetText(nameInput, 0LL);
  DeckNameInputMenu__ChangeInput(this, Text, v5);
}


void __fastcall DeckNameInputMenu__OnClickCancel(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x3

  if ( (byte_4C1D9DA & 1) == 0 )
  {
    sub_1C3B764(&Method_DeckNameInputMenu_OnClickCancel__, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v3);
    byte_4C1D9DA = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_DeckNameInputMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_DeckNameInputMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3B77C(Method_DeckNameInputMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0, 0LL);
    DeckNameInputMenu__Callback(this, 0, (System_String_o *)StringLiteral_1/*""*/, v6);
  }
}


void __fastcall DeckNameInputMenu__OnClickClear(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  __int64 v6; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v8; // x1

  if ( (byte_4C1D9DB & 1) == 0 )
  {
    sub_1C3B764(&Method_DeckNameInputMenu_OnClickClear__, method);
    sub_1C3B764(&StringLiteral_1/*""*/, v3);
    byte_4C1D9DB = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_DeckNameInputMenu_OnClickClear__;
    if ( (*((_BYTE *)Method_DeckNameInputMenu_OnClickClear__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3B77C(Method_DeckNameInputMenu_OnClickClear__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 0, 0, 0LL);
    inputTarget = this->fields.inputTarget;
    if ( !inputTarget )
      sub_1C3B9C0(0LL, v6);
    UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    DeckNameInputMenu__OnChangeInput(this, v8);
  }
}


void __fastcall DeckNameInputMenu__OnClickDecide(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  System_String_o *changeName; // x20
  System_String_o *v7; // x2
  const MethodInfo *v8; // x3

  if ( (byte_4C1D9D9 & 1) == 0 )
  {
    sub_1C3B764(&Method_DeckNameInputMenu_OnClickDecide__, method);
    sub_1C3B764(&LocalizationManager_TypeInfo, v3);
    byte_4C1D9D9 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v4 = Method_DeckNameInputMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_DeckNameInputMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C3B77C(Method_DeckNameInputMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3B748(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0, 0LL);
    changeName = this->fields.changeName;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v7 = LocalizationManager__ReplaceNameTag(changeName, 1, 0LL);
    DeckNameInputMenu__Callback(this, 1, v7, v8);
  }
}


void __fastcall DeckNameInputMenu__OnClickInit(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  __int64 v5; // x1
  UIInput_o *inputTarget; // x0
  const MethodInfo *v7; // x2

  if ( (byte_4C1D9DC & 1) == 0 )
  {
    sub_1C3B764(&Method_DeckNameInputMenu_OnClickInit__, method);
    byte_4C1D9DC = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_DeckNameInputMenu_OnClickInit__;
    if ( (*((_BYTE *)Method_DeckNameInputMenu_OnClickInit__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C3B77C(Method_DeckNameInputMenu_OnClickInit__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3B748(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    inputTarget = this->fields.inputTarget;
    if ( !inputTarget )
      sub_1C3B9C0(0LL, v5);
    UIInput__set_value(inputTarget, this->fields.initName, 0LL);
    DeckNameInputMenu__ChangeInput(this, this->fields.initName, v7);
  }
}


void __fastcall DeckNameInputMenu__Open(
        DeckNameInputMenu_o *this,
        System_String_o *deckName,
        System_String_o *initName,
        DeckNameInputMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *explanationLabel; // x21
  struct UIInput_o *inputTarget; // x20
  UIInput_OnValidate_o *v25; // x21
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UILabel_o *clearLabel; // x20
  UILabel_o *initLabel; // x20
  System_Action_o *v30; // x20

  if ( (byte_4C1D9D5 & 1) == 0 )
  {
    sub_1C3B764(&System_Action_TypeInfo, deckName);
    sub_1C3B764(&Method_UnityEngine_Component_GetComponent_Collider___, v9);
    sub_1C3B764(&Method_DeckNameInputMenu_EndOpen__, v10);
    sub_1C3B764(&Method_EmojiUtility_ValidateNameText__, v11);
    sub_1C3B764(&LocalizationManager_TypeInfo, v12);
    sub_1C3B764(&UIInput_OnValidate_TypeInfo, v13);
    sub_1C3B764(&StringLiteral_10476/*"Prefix '{0}' is not valid, because it contains special characters."*/, v14);
    sub_1C3B764(&StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, v15);
    sub_1C3B764(&StringLiteral_10480/*"Present "*/, v16);
    sub_1C3B764(&StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, v17);
    sub_1C3B764(&StringLiteral_10475/*"Prefix '{0}' is already assigned to namespace '{1}' and cannot be reassigned to '{2}' on this tag."*/, v18);
    sub_1C3B764(&StringLiteral_10479/*"PreparePurchaseShopIds"*/, v19);
    byte_4C1D9D5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.changeName = deckName;
  sub_1C3B708(&this->fields.changeName);
  this->fields.baseName = deckName;
  sub_1C3B708(&this->fields.baseName);
  this->fields.initName = initName;
  sub_1C3B708(&this->fields.initName);
  this->fields.callbackFunc = callback;
  sub_1C3B708(&this->fields.callbackFunc);
  titleLabel = this->fields.titleLabel;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10476/*"Prefix '{0}' is not valid, because it contains special characters."*/, 0LL);
  if ( !titleLabel )
    goto LABEL_18;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  explanationLabel = this->fields.explanationLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10475/*"Prefix '{0}' is already assigned to namespace '{1}' and cannot be reassigned to '{2}' on this tag."*/, 0LL);
  if ( !explanationLabel )
    goto LABEL_18;
  UILabel__set_text(explanationLabel, (System_String_o *)gameObject, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_18;
  UIInput__set_value((UIInput_o *)gameObject, deckName, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.inputTarget;
  if ( !gameObject )
    goto LABEL_18;
  gameObject = (UnityEngine_GameObject_o *)UnityEngine_Component__GetComponent_object_(
                                             (UnityEngine_Component_o *)gameObject,
                                             (const MethodInfo_2FE6C0C *)Method_UnityEngine_Component_GetComponent_Collider___);
  if ( !gameObject )
    goto LABEL_18;
  UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)gameObject, 0, 0LL);
  inputTarget = this->fields.inputTarget;
  v25 = (UIInput_OnValidate_o *)sub_1C3B9B0(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v25, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_18;
  inputTarget->fields.onValidate = v25;
  sub_1C3B708(&inputTarget->fields.onValidate);
  decideLabel = this->fields.decideLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3800/*"COSTUME_SELECT_SERVANT_EVENT_ITEM_COSTUME_MSG"*/, 0LL);
  if ( !decideLabel )
    goto LABEL_18;
  UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
  cancelLabel = this->fields.cancelLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3798/*"COSTUME_OPEN_WARNING"*/, 0LL);
  if ( !cancelLabel )
    goto LABEL_18;
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
  clearLabel = this->fields.clearLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10479/*"PreparePurchaseShopIds"*/, 0LL);
  if ( !clearLabel
    || (UILabel__set_text(clearLabel, (System_String_o *)gameObject, 0LL),
        initLabel = this->fields.initLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10480/*"Present "*/, 0LL),
        !initLabel)
    || (UILabel__set_text(initLabel, (System_String_o *)gameObject, 0LL),
        (gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton) == 0LL) )
  {
LABEL_18:
    sub_1C3B9C0(gameObject, v21);
  }
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, void *))gameObject->klass[1]._1.namespaze)(
    gameObject,
    0LL,
    gameObject->klass[1]._1.byval_arg.data);
  this->fields.state = 1;
  v30 = (System_Action_o *)sub_1C3B9B0(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_DeckNameInputMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0LL);
}


void __fastcall DeckNameInputMenu__add_callbackFunc(
        DeckNameInputMenu_o *this,
        DeckNameInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct DeckNameInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct DeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  DeckNameInputMenu_o *v11; // x0
  DeckNameInputMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C1D9D2 & 1) == 0 )
  {
    sub_1C3B764(&DeckNameInputMenu_CallbackFunc_TypeInfo, value);
    byte_4C1D9D2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (DeckNameInputMenu_CallbackFunc_c *)v8->klass != DeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckNameInputMenu_o *)sub_1C3BC80(v8);
  DeckNameInputMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall DeckNameInputMenu__get_closeBtnPath(DeckNameInputMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C1D9DD & 1) == 0 )
  {
    sub_1C3B764(&StringLiteral_3230/*"Breton (France)"*/, method);
    byte_4C1D9DD = 1;
  }
  return (System_String_o *)StringLiteral_3230/*"Breton (France)"*/;
}


void __fastcall DeckNameInputMenu__remove_callbackFunc(
        DeckNameInputMenu_o *this,
        DeckNameInputMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct DeckNameInputMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct DeckNameInputMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  DeckNameInputMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C1D9D3 & 1) == 0 )
  {
    sub_1C3B764(&DeckNameInputMenu_CallbackFunc_TypeInfo, value);
    byte_4C1D9D3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (DeckNameInputMenu_CallbackFunc_c *)v8->klass != DeckNameInputMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C76C54(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckNameInputMenu_o *)sub_1C3BC80(v8);
  DeckNameInputMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckNameInputMenu_CallbackFunc___ctor(
        DeckNameInputMenu_CallbackFunc_o *this,
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
  sub_1C3B708(&this->fields.method);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1C3B824(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C3B9DC(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C3B88C(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A76530;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A764D8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall DeckNameInputMenu_CallbackFunc__BeginInvoke(
        DeckNameInputMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-58h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = result;
  if ( (byte_4C1D9DF & 1) == 0 )
  {
    sub_1C3B764(&bool_TypeInfo, result);
    byte_4C1D9DF = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12, changeName, callback, object);
  v11[1] = (__int64)changeName;
  return (System_IAsyncResult_o *)sub_1C3B718(this, v11, callback, object);
}


void __fastcall DeckNameInputMenu_CallbackFunc__EndInvoke(
        DeckNameInputMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C3B71C(result, 0LL, method);
}


void __fastcall DeckNameInputMenu_CallbackFunc__Invoke(
        DeckNameInputMenu_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, System_String_o *, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    changeName,
    *(_QWORD *)&this->fields.extra_arg);
}