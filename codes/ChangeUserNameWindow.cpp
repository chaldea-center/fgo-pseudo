void __fastcall ChangeUserNameWindow___ctor(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  if ( (byte_40FCFA9 & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FCFA9 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall ChangeUserNameWindow__Callback(
        ChangeUserNameWindow_o *this,
        bool result,
        System_String_o *name,
        const MethodInfo *method)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  ChangeUserNameWindow_CallbackFunc_o *v9; // x20
  struct ChangeUserNameWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)name, (System_String_array **)method, v4, v5, v6, v7);
    ChangeUserNameWindow_CallbackFunc__Invoke(v9, result, name, 0LL);
  }
}


void __fastcall ChangeUserNameWindow__Close(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ChangeUserNameWindow__Close_30599144(this, 0LL, v2);
}


void __fastcall ChangeUserNameWindow__Close_30599144(
        ChangeUserNameWindow_o *this,
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

  if ( (byte_40FCFA5 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_ChangeUserNameWindow_EndClose__, v10);
    byte_40FCFA5 = 1;
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
  this->fields.state = 3;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ChangeUserNameWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall ChangeUserNameWindow__EndClose(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  System_String_array **v4; // x2
  System_String_array **v5; // x3
  System_Boolean_array **v6; // x4
  System_Int32_array **v7; // x5
  System_Int32_array *v8; // x6
  System_Int32_array *v9; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v11; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ChangeUserNameWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v11 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B16F98(p_closeCallbackFunc, 0LL, v4, v5, v6, v7, v8, v9);
    System_Action__Invoke(v11, 0LL);
  }
}


void __fastcall ChangeUserNameWindow__EndOpen(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 2;
}


void __fastcall ChangeUserNameWindow__Init(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B170D4();
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeUserNameWindow__OnChangeInput(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UILineInput_o *nameInput; // x0
  System_String_o *Text; // x20
  System_String_o *v7; // x0
  int32_t v8; // w21
  uint16_t Chars; // w0
  bool IsNullOrEmpty; // w20
  UnityEngine_Behaviour_o *submitBtn; // x0
  struct UIButton_o *v12; // x0
  UIButtonColor_o *v13; // x19
  int v14; // s0
  System_String_o *v18; // x0
  System_String_o *v19; // x0

  if ( (byte_40FCFA3 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&StringLiteral_26/*"\n"*/, v3);
    sub_B16FFC(&StringLiteral_1/*""*/, v4);
    byte_40FCFA3 = 1;
  }
  nameInput = this->fields.nameInput;
  if ( !nameInput )
    goto LABEL_25;
  Text = UILineInput__GetText(nameInput, 0LL);
  if ( System_String__IsNullOrEmpty(Text, 0LL) )
    goto LABEL_12;
  if ( !Text )
    goto LABEL_25;
  v7 = System_String__Trim_43731064(Text, 0LL);
  if ( System_String__op_Equality(v7, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    goto LABEL_12;
  if ( Text->fields.m_stringLength >= 1 )
  {
    v8 = 0;
    do
    {
      Chars = System_String__get_Chars(Text, v8, 0LL);
      if ( EmojiUtility__IsEmojiChar(Chars, 0LL) )
        goto LABEL_12;
    }
    while ( ++v8 < Text->fields.m_stringLength );
  }
  if ( (System_String__IndexOf_43816080(Text, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL) & 0x80000000) != 0 )
  {
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v18 = LocalizationManager__ReplaceNameTag(Text, 0, 0LL);
    if ( v18 )
    {
      v19 = System_String__Trim_43731064(v18, 0LL);
      IsNullOrEmpty = System_String__IsNullOrEmpty(v19, 0LL);
      goto LABEL_13;
    }
LABEL_25:
    sub_B170D4();
  }
LABEL_12:
  IsNullOrEmpty = 1;
LABEL_13:
  submitBtn = (UnityEngine_Behaviour_o *)this->fields.submitBtn;
  if ( !submitBtn )
    goto LABEL_25;
  UnityEngine_Behaviour__set_enabled(submitBtn, !IsNullOrEmpty, 0LL);
  v12 = this->fields.submitBtn;
  if ( !v12 )
    goto LABEL_25;
  ((void (__fastcall *)(struct UIButton_o *, bool, Il2CppMethodPointer))v12->klass->vtable._5_set_isEnabled.method)(
    v12,
    !IsNullOrEmpty,
    v12->klass->vtable._6_OnInit.methodPtr);
  v13 = (UIButtonColor_o *)this->fields.submitBtn;
  if ( IsNullOrEmpty )
  {
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_gray(0LL);
    if ( !v13 )
      goto LABEL_25;
  }
  else
  {
    *(UnityEngine_Color_o *)&v14 = UnityEngine_Color__get_white(0LL);
    if ( !v13 )
      goto LABEL_25;
  }
  UIButtonColor__set_defaultColor(v13, *(UnityEngine_Color_o *)&v14, 0LL);
}


void __fastcall ChangeUserNameWindow__OnClickCancel(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_40FCFA7 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FCFA7 = 1;
  }
  ChangeUserNameWindow__Callback(this, 0, (System_String_o *)StringLiteral_1/*""*/, v2);
}


void __fastcall ChangeUserNameWindow__OnClickDecide(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct UIButton_o *submitBtn; // x0
  UILineInput_o *nameInput; // x0
  System_String_o *Text; // x20
  System_String_o *v7; // x2
  const MethodInfo *v8; // x3

  if ( (byte_40FCFA6 & 1) == 0 )
  {
    sub_B16FFC(&LocalizationManager_TypeInfo, method);
    sub_B16FFC(&SoundManager_TypeInfo, v3);
    byte_40FCFA6 = 1;
  }
  submitBtn = this->fields.submitBtn;
  if ( !submitBtn )
    goto LABEL_14;
  if ( (((__int64 (__fastcall *)(struct UIButton_o *, Il2CppMethodPointer))submitBtn->klass->vtable._4_get_isEnabled.method)(
          submitBtn,
          submitBtn->klass->vtable._5_set_isEnabled.methodPtr) & 1) != 0 )
  {
    nameInput = this->fields.nameInput;
    if ( nameInput )
    {
      Text = UILineInput__GetText(nameInput, 0LL);
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v7 = LocalizationManager__ReplaceNameTag(Text, 1, 0LL);
      ChangeUserNameWindow__Callback(this, 1, v7, v8);
      return;
    }
LABEL_14:
    sub_B170D4();
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(2, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeUserNameWindow__OpenChangeNameWindow(
        ChangeUserNameWindow_o *this,
        System_String_o *usrName,
        ChangeUserNameWindow_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  UILabel_o *submitTxtLb; // x22
  System_String_o *v16; // x0
  UILabel_o *cancelTxtLb; // x22
  System_String_o *v18; // x0
  UnityEngine_GameObject_o *gameObject; // x0
  const MethodInfo *v20; // x1
  UnityEngine_Behaviour_o *submitBtn; // x0
  struct UIButton_o *v22; // x0
  UIButtonColor_o *v23; // x22
  int v24; // s0
  System_String_array **v28; // x2
  System_String_array **v29; // x3
  System_Boolean_array **v30; // x4
  System_Int32_array **v31; // x5
  System_Int32_array *v32; // x6
  System_Int32_array *v33; // x7
  struct UIInput_o *inputTarget; // x21
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  UIInput_OnValidate_o *v39; // x22
  System_String_array **v40; // x2
  System_String_array **v41; // x3
  System_Boolean_array **v42; // x4
  System_Int32_array **v43; // x5
  System_Int32_array *v44; // x6
  System_Int32_array *v45; // x7
  UILabel_o *titleTxtLb; // x21
  System_String_o *v47; // x0
  UILabel_o *titleLb; // x21
  System_String_o *v49; // x0
  UILabel_o *nameText; // x0
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x3
  __int64 v54; // x4
  System_Action_o *v55; // x20

  if ( (byte_40FCFA2 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, usrName);
    sub_B16FFC(&Method_ChangeUserNameWindow_EndOpen__, v7);
    sub_B16FFC(&Method_EmojiUtility_ValidateNameText__, v8);
    sub_B16FFC(&LocalizationManager_TypeInfo, v9);
    sub_B16FFC(&UIInput_OnValidate_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, v11);
    sub_B16FFC(&StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, v12);
    sub_B16FFC(&StringLiteral_2946/*"CHANGE_NAME_TITLE"*/, v13);
    sub_B16FFC(&StringLiteral_2950/*"CHANGE_TITLE"*/, v14);
    byte_40FCFA2 = 1;
  }
  submitTxtLb = this->fields.submitTxtLb;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_3253/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !submitTxtLb )
    goto LABEL_17;
  UILabel__set_text(submitTxtLb, v16, 0LL);
  cancelTxtLb = this->fields.cancelTxtLb;
  v18 = LocalizationManager__Get((System_String_o *)StringLiteral_3251/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
  if ( !cancelTxtLb )
    goto LABEL_17;
  UILabel__set_text(cancelTxtLb, v18, 0LL);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_17;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  ChangeUserNameWindow__resetInputVal(this, v20);
  submitBtn = (UnityEngine_Behaviour_o *)this->fields.submitBtn;
  if ( !submitBtn )
    goto LABEL_17;
  UnityEngine_Behaviour__set_enabled(submitBtn, 0, 0LL);
  v22 = this->fields.submitBtn;
  if ( !v22 )
    goto LABEL_17;
  ((void (__fastcall *)(struct UIButton_o *, _QWORD, Il2CppMethodPointer))v22->klass->vtable._5_set_isEnabled.method)(
    v22,
    0LL,
    v22->klass->vtable._6_OnInit.methodPtr);
  v23 = (UIButtonColor_o *)this->fields.submitBtn;
  *(UnityEngine_Color_o *)&v24 = UnityEngine_Color__get_gray(0LL);
  if ( !v23 )
    goto LABEL_17;
  UIButtonColor__set_defaultColor(v23, *(UnityEngine_Color_o *)&v24, 0LL);
  this->fields.callbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33);
  inputTarget = this->fields.inputTarget;
  v39 = (UIInput_OnValidate_o *)sub_B170CC(UIInput_OnValidate_TypeInfo, v35, v36, v37, v38);
  UIInput_OnValidate___ctor(v39, 0LL, Method_EmojiUtility_ValidateNameText__, 0LL);
  if ( !inputTarget )
    goto LABEL_17;
  inputTarget->fields.onValidate = v39;
  sub_B16F98(
    (BattleServantConfConponent_o *)&inputTarget->fields.onValidate,
    (System_Int32_array **)v39,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45);
  titleTxtLb = this->fields.titleTxtLb;
  v47 = LocalizationManager__Get((System_String_o *)StringLiteral_2950/*"CHANGE_TITLE"*/, 0LL);
  if ( !titleTxtLb
    || (UILabel__set_text(titleTxtLb, v47, 0LL),
        titleLb = this->fields.titleLb,
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_2946/*"CHANGE_NAME_TITLE"*/, 0LL),
        !titleLb)
    || (UILabel__set_text(titleLb, v49, 0LL), (nameText = this->fields.nameText) == 0LL) )
  {
LABEL_17:
    sub_B170D4();
  }
  UILabel__set_text(nameText, usrName, 0LL);
  this->fields.state = 1;
  v55 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v51, v52, v53, v54);
  System_Action___ctor(v55, (Il2CppObject *)this, Method_ChangeUserNameWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v55, 0, 0LL);
}


void __fastcall ChangeUserNameWindow__add_callbackFunc(
        ChangeUserNameWindow_o *this,
        ChangeUserNameWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ChangeUserNameWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ChangeUserNameWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ChangeUserNameWindow_o *v11; // x0
  ChangeUserNameWindow_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_40FCFA0 & 1) == 0 )
  {
    sub_B16FFC(&ChangeUserNameWindow_CallbackFunc_TypeInfo, value);
    byte_40FCFA0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ChangeUserNameWindow_CallbackFunc_c *)v8->klass != ChangeUserNameWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ChangeUserNameWindow__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall ChangeUserNameWindow__get_closeBtnPath(
        ChangeUserNameWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FCFA8 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_2730/*"BaseWindow/CancleBtn"*/, method);
    byte_40FCFA8 = 1;
  }
  return (System_String_o *)StringLiteral_2730/*"BaseWindow/CancleBtn"*/;
}


void __fastcall ChangeUserNameWindow__remove_callbackFunc(
        ChangeUserNameWindow_o *this,
        ChangeUserNameWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ChangeUserNameWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ChangeUserNameWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ChangeUserNameWindow_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_40FCFA1 & 1) == 0 )
  {
    sub_B16FFC(&ChangeUserNameWindow_CallbackFunc_TypeInfo, value);
    byte_40FCFA1 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (ChangeUserNameWindow_CallbackFunc_c *)v8->klass != ChangeUserNameWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  ChangeUserNameWindow__Init(v11, v12);
}


void __fastcall ChangeUserNameWindow__resetInputVal(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0

  if ( (byte_40FCFA4 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1/*""*/, method);
    byte_40FCFA4 = 1;
  }
  inputTarget = this->fields.inputTarget;
  if ( !inputTarget )
    sub_B170D4();
  UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeUserNameWindow_CallbackFunc___ctor(
        ChangeUserNameWindow_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall ChangeUserNameWindow_CallbackFunc__BeginInvoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v11[3]; // [xsp+8h] [xbp-48h] BYREF
  char v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v12[0] = result;
  if ( (byte_40F70BC & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F70BC = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12);
  v11[1] = (__int64)changeName;
  return (System_IAsyncResult_o *)sub_B16FA0(this, v11, callback, object);
}


void __fastcall ChangeUserNameWindow_CallbackFunc__EndInvoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall ChangeUserNameWindow_CallbackFunc__Invoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v8; // x25
  ChangeUserNameWindow_CallbackFunc_o **v9; // x26
  __int64 v10; // x27
  unsigned int v11; // w24
  __int64 class_0; // x0
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, System_String_o *, _QWORD); // x0
  ChangeUserNameWindow_CallbackFunc_o *v20; // x8
  __int64 *v21; // x22
  __int64 v22; // x23
  void (__fastcall *v23)(bool, System_String_o *, __int64); // x24
  char v24; // w24
  char v25; // w0
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  ChangeUserNameWindow_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v9 = &v31;
    v8 = 1LL;
    goto LABEL_5;
  }
  v8 = *(_QWORD *)(v4 + 24);
  if ( v8 )
  {
    v9 = (ChangeUserNameWindow_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v10 = 0LL;
    while ( 1 )
    {
      v20 = v9[v10];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, System_String_o *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v20->fields.extra_arg, result, changeName);
      if ( (sub_B1702C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 2 )
        goto LABEL_35;
      v23(result, changeName, v22);
LABEL_36:
      if ( ++v10 == v8 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B17024(v22);
      v25 = sub_B17428(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v26 = *v21;
          v27 = *(_QWORD *)(v22 + 24);
          v28 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_34;
            }
            v18 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_34:
            v18 = sub_AAFEF8(v21, v27, v28);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))sub_B170AC(v17, v22);
        (*v19)(v21, result, changeName, v19);
      }
      else
      {
        v11 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v11) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AAFEF8(v21, class_0, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))v16)(
            v21,
            result,
            changeName,
            *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, System_String_o *, _QWORD))(*v21
                                                                             + 16LL * *(unsigned __int16 *)(v22 + 72)
                                                                             + 312))(
            v21,
            result,
            changeName,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_36;
    }
LABEL_35:
    ((void (__fastcall *)(__int64 *, bool, System_String_o *, __int64))v23)(v21, result, changeName, v22);
    goto LABEL_36;
  }
}