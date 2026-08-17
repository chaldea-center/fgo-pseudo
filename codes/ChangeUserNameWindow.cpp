void ChangeUserNameWindow___ctor(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596B62D & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596B62D = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ChangeUserNameWindow__Callback(
        ChangeUserNameWindow_o *this,
        bool result,
        System_String_o *name,
        const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct ChangeUserNameWindow_CallbackFunc_o *v9; // x21
  struct ChangeUserNameWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, name, (System_String_o *)method, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, System_String_o *, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      name,
      v9->fields.method);
  }
}


void ChangeUserNameWindow__Close(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ChangeUserNameWindow__Close_39926124(this, 0, v2);
}


void ChangeUserNameWindow__Close_39926124(
        ChangeUserNameWindow_o *this,
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

  if ( (byte_596B629 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ChangeUserNameWindow_EndClose__);
    byte_596B629 = 1;
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
  this->fields.state = 3;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_ChangeUserNameWindow_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void ChangeUserNameWindow__EndClose(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_o *v5; // x2
  System_String_o *v6; // x3
  int32_t v7; // w4
  int32_t v8; // w5
  bool v9; // w6
  bool v10; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ChangeUserNameWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v5, v6, v7, v8, v9, v10);
    ((void (__fastcall *)(intptr_t, intptr_t))v12->fields.invoke_impl)(v12->fields.method_code, v12->fields.method);
  }
}


void ChangeUserNameWindow__EndOpen(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 2;
}


void ChangeUserNameWindow__Init(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_2213CDC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void ChangeUserNameWindow__OnChangeInput(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UILineInput_o *nameInput; // x0
  System_String_o *Text; // x20
  System_String_o *v5; // x0
  int32_t v6; // w21
  uint16_t Chars; // w0
  __int64 v8; // x2
  bool IsNullOrEmpty; // w20
  float v10; // s0 OVERLAPPED
  float v11; // s3
  float v12; // s1
  float v13; // s2
  System_String_o *v14; // x0

  if ( (byte_596B627 & 1) == 0 )
  {
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_43/*"\n"*/);
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B627 = 1;
  }
  nameInput = this->fields.nameInput;
  if ( !nameInput )
    goto LABEL_23;
  Text = UILineInput__GetText(nameInput, 0);
  nameInput = (UILineInput_o *)System_String__IsNullOrEmpty(Text, 0);
  if ( ((unsigned __int8)nameInput & 1) != 0 )
    goto LABEL_12;
  if ( !Text )
    goto LABEL_23;
  v5 = System_String__Trim(Text, 0);
  if ( System_String__op_Equality(v5, (System_String_o *)StringLiteral_1/*""*/, 0) )
    goto LABEL_12;
  if ( Text->fields._stringLength >= 1 )
  {
    v6 = 0;
    do
    {
      Chars = System_String__get_Chars(Text, v6, 0);
      if ( EmojiUtility__IsEmojiChar(Chars, 0) )
        goto LABEL_12;
    }
    while ( ++v6 < Text->fields._stringLength );
  }
  if ( System_String__IndexOf_75715196(Text, (System_String_o *)StringLiteral_43/*"\n"*/, 0) < 0 )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v8);
    nameInput = (UILineInput_o *)LocalizationManager__ReplaceNameTag(Text, 0, 0);
    if ( nameInput )
    {
      v14 = System_String__Trim((System_String_o *)nameInput, 0);
      IsNullOrEmpty = System_String__IsNullOrEmpty(v14, 0);
      goto LABEL_13;
    }
LABEL_23:
    sub_2213CDC(nameInput, method);
  }
LABEL_12:
  IsNullOrEmpty = 1;
LABEL_13:
  nameInput = (UILineInput_o *)this->fields.submitBtn;
  if ( !nameInput )
    goto LABEL_23;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)nameInput, !IsNullOrEmpty, 0);
  nameInput = (UILineInput_o *)this->fields.submitBtn;
  if ( !nameInput )
    goto LABEL_23;
  ((void (__fastcall *)(UILineInput_o *, bool, const char *))nameInput->klass[1]._1.name)(
    nameInput,
    !IsNullOrEmpty,
    nameInput->klass[1]._1.namespaze);
  nameInput = (UILineInput_o *)this->fields.submitBtn;
  if ( !nameInput )
    goto LABEL_23;
  v10 = 1.0;
  v11 = 1.0;
  if ( IsNullOrEmpty )
    v10 = 0.5;
  v12 = v10;
  v13 = v10;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)nameInput, *(UnityEngine_Color_o *)&v10, 0);
}


void ChangeUserNameWindow__OnClickCancel(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_596B62B & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B62B = 1;
  }
  ChangeUserNameWindow__Callback(this, 0, (System_String_o *)StringLiteral_1/*""*/, v2);
}


void ChangeUserNameWindow__OnClickDecide(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UILineInput_o *submitBtn; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *Text; // x20
  System_String_o *v7; // x2
  const MethodInfo *v8; // x3
  _QWORD *v9; // x0
  System_Reflection_MethodBase_o *v10; // x0

  if ( (byte_596B62A & 1) == 0 )
  {
    sub_2213A60(&Method_ChangeUserNameWindow_OnClickDecide__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    byte_596B62A = 1;
  }
  submitBtn = (UILineInput_o *)this->fields.submitBtn;
  if ( !submitBtn )
    goto LABEL_12;
  if ( (((__int64 (__fastcall *)(UILineInput_o *, void *))submitBtn->klass[1]._1.image)(
          submitBtn,
          submitBtn->klass[1]._1.gc_desc)
      & 1) != 0 )
  {
    submitBtn = this->fields.nameInput;
    if ( submitBtn )
    {
      Text = UILineInput__GetText(submitBtn, 0);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v4, v5);
      v7 = LocalizationManager__ReplaceNameTag(Text, 1, 0);
      ChangeUserNameWindow__Callback(this, 1, v7, v8);
      return;
    }
LABEL_12:
    sub_2213CDC(submitBtn, method);
  }
  v9 = Method_ChangeUserNameWindow_OnClickDecide__;
  if ( (*((_BYTE *)Method_ChangeUserNameWindow_OnClickDecide__ + 83) & 2) != 0 )
    v9 = (_QWORD *)sub_2213A78(Method_ChangeUserNameWindow_OnClickDecide__);
  v10 = (System_Reflection_MethodBase_o *)sub_2213A44(v9, v9[4]);
  OverwriteAssetSoundName__PlaySystemSe(v10, 2, 0, 0);
}


void ChangeUserNameWindow__OpenChangeNameWindow(
        ChangeUserNameWindow_o *this,
        System_String_o *usrName,
        ChangeUserNameWindow_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UILabel_o *submitTxtLb; // x22
  System_String_o *gameObject; // x0
  __int64 v9; // x1
  UILabel_o *cancelTxtLb; // x22
  const MethodInfo *v11; // x1
  System_String_o *v12; // x2
  System_String_o *v13; // x3
  int32_t v14; // w4
  int32_t v15; // w5
  bool v16; // w6
  bool v17; // w7
  struct UIInput_o *inputTarget; // x21
  UIInput_OnValidate_o *v19; // x22
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UILabel_o *titleTxtLb; // x21
  UILabel_o *titleLb; // x21
  System_Action_c *v28; // x0
  System_Action_o *v29; // x20
  UnityEngine_Color_o v30; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_596B626 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_ChangeUserNameWindow_EndOpen__);
    sub_2213A60(&Method_EmojiUtility_ValidateNameText__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&UIInput_OnValidate_TypeInfo);
    sub_2213A60(&StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/);
    sub_2213A60(&StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/);
    sub_2213A60(&StringLiteral_3464/*"CHANGE_NAME_TITLE"*/);
    sub_2213A60(&StringLiteral_3468/*"CHANGE_TITLE"*/);
    byte_596B626 = 1;
  }
  submitTxtLb = this->fields.submitTxtLb;
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, usrName, callback);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3829/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !submitTxtLb )
    goto LABEL_16;
  UILabel__set_text(submitTxtLb, gameObject, 0);
  cancelTxtLb = this->fields.cancelTxtLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3827/*"COMMON_CONFIRM_CANCEL"*/, 0);
  if ( !cancelTxtLb )
    goto LABEL_16;
  UILabel__set_text(cancelTxtLb, gameObject, 0);
  gameObject = (System_String_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 1, 0);
  ChangeUserNameWindow__resetInputVal(this, v11);
  gameObject = (System_String_o *)this->fields.submitBtn;
  if ( !gameObject )
    goto LABEL_16;
  UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)gameObject, 0, 0);
  gameObject = (System_String_o *)this->fields.submitBtn;
  if ( !gameObject )
    goto LABEL_16;
  ((void (__fastcall *)(System_String_o *, _QWORD, const MethodInfo *))gameObject->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.methodPtr)(
    gameObject,
    0,
    gameObject->klass->vtable._5_System_Collections_IEnumerable_GetEnumerator.method);
  gameObject = (System_String_o *)this->fields.submitBtn;
  if ( !gameObject )
    goto LABEL_16;
  v30.fields.r = 0.5;
  v30.fields.g = 0.5;
  v30.fields.b = 0.5;
  v30.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)gameObject, v30, 0);
  this->fields.callbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
    (int32_t)callback,
    v12,
    v13,
    v14,
    v15,
    v16,
    v17);
  inputTarget = this->fields.inputTarget;
  v19 = (UIInput_OnValidate_o *)sub_2213CCC(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v19, 0, Method_EmojiUtility_ValidateNameText__, 0);
  if ( !inputTarget )
    goto LABEL_16;
  inputTarget->fields.onValidate = v19;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&inputTarget->fields.onValidate,
    (int32_t)v19,
    v20,
    v21,
    v22,
    v23,
    v24,
    v25);
  titleTxtLb = this->fields.titleTxtLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3468/*"CHANGE_TITLE"*/, 0);
  if ( !titleTxtLb
    || (UILabel__set_text(titleTxtLb, gameObject, 0),
        titleLb = this->fields.titleLb,
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3464/*"CHANGE_NAME_TITLE"*/, 0),
        !titleLb)
    || (UILabel__set_text(titleLb, gameObject, 0), (gameObject = (System_String_o *)this->fields.nameText) == 0) )
  {
LABEL_16:
    sub_2213CDC(gameObject, v9);
  }
  UILabel__set_text((UILabel_o *)gameObject, usrName, 0);
  v28 = System_Action_TypeInfo;
  this->fields.state = 1;
  v29 = (System_Action_o *)sub_2213CCC(v28);
  System_Action___ctor(v29, (Il2CppObject *)this, Method_ChangeUserNameWindow_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0, 0);
}


void ChangeUserNameWindow__add_callbackFunc(
        ChangeUserNameWindow_o *this,
        ChangeUserNameWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ChangeUserNameWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ChangeUserNameWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ChangeUserNameWindow_o *v13; // x0
  ChangeUserNameWindow_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596B624 & 1) == 0 )
  {
    sub_2213A60(&ChangeUserNameWindow_CallbackFunc_TypeInfo);
    byte_596B624 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ChangeUserNameWindow_CallbackFunc_c *)v8->klass != ChangeUserNameWindow_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ChangeUserNameWindow_o *)sub_221405C(v8, ChangeUserNameWindow_CallbackFunc_TypeInfo, v9, v10);
  ChangeUserNameWindow__remove_callbackFunc(v13, v14, v15);
}


System_String_o *ChangeUserNameWindow__get_closeBtnPath(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  if ( (byte_596B62C & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_3195/*"BaseWindow/CancleBtn"*/);
    byte_596B62C = 1;
  }
  return (System_String_o *)StringLiteral_3195/*"BaseWindow/CancleBtn"*/;
}


void ChangeUserNameWindow__remove_callbackFunc(
        ChangeUserNameWindow_o *this,
        ChangeUserNameWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ChangeUserNameWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ChangeUserNameWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  ChangeUserNameWindow_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596B625 & 1) == 0 )
  {
    sub_2213A60(&ChangeUserNameWindow_CallbackFunc_TypeInfo);
    byte_596B625 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ChangeUserNameWindow_CallbackFunc_c *)v8->klass != ChangeUserNameWindow_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (ChangeUserNameWindow_o *)sub_221405C(v8, ChangeUserNameWindow_CallbackFunc_TypeInfo, v9, v10);
  ChangeUserNameWindow__Init(v13, v14);
}


void ChangeUserNameWindow__resetInputVal(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0

  if ( (byte_596B628 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596B628 = 1;
  }
  inputTarget = this->fields.inputTarget;
  if ( !inputTarget )
    sub_2213CDC(0, method);
  UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void ChangeUserNameWindow_CallbackFunc___ctor(
        ChangeUserNameWindow_CallbackFunc_o *this,
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
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20020B0;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2002058;
}


System_IAsyncResult_o *ChangeUserNameWindow_CallbackFunc__BeginInvoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-48h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-24h] BYREF

  v12[0] = result;
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(qword_5984328, v12);
  v11[1] = changeName;
  return (System_IAsyncResult_o *)sub_2213A14(this, v11, callback, object);
}


void ChangeUserNameWindow_CallbackFunc__EndInvoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void ChangeUserNameWindow_CallbackFunc__Invoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
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