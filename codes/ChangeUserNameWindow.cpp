void ChangeUserNameWindow___ctor(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4C223D2 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C223D2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ChangeUserNameWindow__Callback(
        ChangeUserNameWindow_o *this,
        bool result,
        System_String_o *name,
        const MethodInfo *method)
{
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct ChangeUserNameWindow_CallbackFunc_o *v5; // x21
  struct ChangeUserNameWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)name, method);
    ((void (__fastcall *)(intptr_t, bool, System_String_o *, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      name,
      v5->fields.method);
  }
}


void ChangeUserNameWindow__Close(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ChangeUserNameWindow__Close_33019484(this, 0, v2);
}


void ChangeUserNameWindow__Close_33019484(
        ChangeUserNameWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C223CE & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ChangeUserNameWindow_EndClose__);
    byte_4C223CE = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 3;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ChangeUserNameWindow_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void ChangeUserNameWindow__EndClose(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ChangeUserNameWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C2D6EC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v8 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C2D434(p_closeCallbackFunc, 0, v5, v6);
    ((void (__fastcall *)(intptr_t, intptr_t))v8->fields.invoke_impl)(v8->fields.method_code, v8->fields.method);
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
    sub_1C2D6EC(0, v4);
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
  bool IsNullOrEmpty; // w20
  float v9; // s0 OVERLAPPED
  float v10; // s3
  float v11; // s1
  float v12; // s2
  System_String_o *v13; // x0

  if ( (byte_4C223CC & 1) == 0 )
  {
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C223CC = 1;
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
  if ( (System_String__IndexOf_63516240(Text, (System_String_o *)StringLiteral_43/*"\n"*/, 0) & 0x80000000) == 0 )
  {
LABEL_12:
    IsNullOrEmpty = 1;
    goto LABEL_13;
  }
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  nameInput = (UILineInput_o *)LocalizationManager__ReplaceNameTag(Text, 0, 0);
  if ( !nameInput )
LABEL_23:
    sub_1C2D6EC(nameInput, method);
  v13 = System_String__Trim((System_String_o *)nameInput, 0);
  IsNullOrEmpty = System_String__IsNullOrEmpty(v13, 0);
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
  v9 = 1.0;
  if ( IsNullOrEmpty )
    v9 = 0.5;
  if ( !nameInput )
    goto LABEL_23;
  v10 = 1.0;
  v11 = v9;
  v12 = v9;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)nameInput, *(UnityEngine_Color_o *)&v9, 0);
}


void ChangeUserNameWindow__OnClickCancel(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x3

  if ( (byte_4C223D0 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C223D0 = 1;
  }
  ChangeUserNameWindow__Callback(this, 0, (System_String_o *)StringLiteral_1/*""*/, v2);
}


void ChangeUserNameWindow__OnClickDecide(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UILineInput_o *submitBtn; // x0
  System_String_o *Text; // x20
  System_String_o *v5; // x2
  const MethodInfo *v6; // x3
  _QWORD *v7; // x0
  System_Reflection_MethodBase_o *v8; // x0

  if ( (byte_4C223CF & 1) == 0 )
  {
    sub_1C2D490(&Method_ChangeUserNameWindow_OnClickDecide__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    byte_4C223CF = 1;
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
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v5 = LocalizationManager__ReplaceNameTag(Text, 1, 0);
      ChangeUserNameWindow__Callback(this, 1, v5, v6);
      return;
    }
LABEL_12:
    sub_1C2D6EC(submitBtn, method);
  }
  v7 = Method_ChangeUserNameWindow_OnClickDecide__;
  if ( (*((_BYTE *)Method_ChangeUserNameWindow_OnClickDecide__ + 83) & 2) != 0 )
    v7 = (_QWORD *)sub_1C2D4A8(Method_ChangeUserNameWindow_OnClickDecide__);
  v8 = (System_Reflection_MethodBase_o *)sub_1C2D474(v7, v7[4]);
  OverwriteAssetSoundName__PlaySystemSe(v8, 2, 0, 0);
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
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CGThumbnailListItem_o *inputTarget; // x21
  UIInput_OnValidate_o *v15; // x22
  int32_t v16; // w2
  const MethodInfo *v17; // x3
  UILabel_o *titleTxtLb; // x21
  UILabel_o *titleLb; // x21
  System_Action_o *v20; // x20
  UnityEngine_Color_o v21; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4

  if ( (byte_4C223CB & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ChangeUserNameWindow_EndOpen__);
    sub_1C2D490(&Method_EmojiUtility_ValidateNameText__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&UIInput_OnValidate_TypeInfo);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_3324/*"CHANGE_NAME_TITLE"*/);
    sub_1C2D490(&StringLiteral_3328/*"CHANGE_TITLE"*/);
    byte_4C223CB = 1;
  }
  submitTxtLb = this->fields.submitTxtLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0);
  if ( !submitTxtLb )
    goto LABEL_16;
  UILabel__set_text(submitTxtLb, gameObject, 0);
  cancelTxtLb = this->fields.cancelTxtLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0);
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
  v21.fields.r = 0.5;
  v21.fields.g = 0.5;
  v21.fields.b = 0.5;
  v21.fields.a = 1.0;
  UIButtonColor__set_defaultColor((UIButtonColor_o *)gameObject, v21, 0);
  this->fields.callbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v12, v13);
  inputTarget = (CGThumbnailListItem_o *)this->fields.inputTarget;
  v15 = (UIInput_OnValidate_o *)sub_1C2D6DC(UIInput_OnValidate_TypeInfo);
  UIInput_OnValidate___ctor(v15, 0, Method_EmojiUtility_ValidateNameText__, 0);
  if ( !inputTarget )
    goto LABEL_16;
  inputTarget[1].klass = (CGThumbnailListItem_c *)v15;
  sub_1C2D434(inputTarget + 1, (int32_t)v15, v16, v17);
  titleTxtLb = this->fields.titleTxtLb;
  gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"CHANGE_TITLE"*/, 0);
  if ( !titleTxtLb
    || (UILabel__set_text(titleTxtLb, gameObject, 0),
        titleLb = this->fields.titleLb,
        gameObject = LocalizationManager__Get((System_String_o *)StringLiteral_3324/*"CHANGE_NAME_TITLE"*/, 0),
        !titleLb)
    || (UILabel__set_text(titleLb, gameObject, 0), (gameObject = (System_String_o *)this->fields.nameText) == 0) )
  {
LABEL_16:
    sub_1C2D6EC(gameObject, v9);
  }
  UILabel__set_text((UILabel_o *)gameObject, usrName, 0);
  this->fields.state = 1;
  v20 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v20, (Il2CppObject *)this, Method_ChangeUserNameWindow_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0);
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
  __int64 v9; // x0
  bool v10; // zf
  ChangeUserNameWindow_o *v11; // x0
  ChangeUserNameWindow_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C223C9 & 1) == 0 )
  {
    sub_1C2D490(&ChangeUserNameWindow_CallbackFunc_TypeInfo);
    byte_4C223C9 = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ChangeUserNameWindow_o *)sub_1C2D9AC(v8);
  ChangeUserNameWindow__remove_callbackFunc(v11, v12, v13);
}


System_String_o *ChangeUserNameWindow__get_closeBtnPath(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4C223D1 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3070/*"BaseWindow/CancleBtn"*/);
    byte_4C223D1 = 1;
  }
  return (System_String_o *)StringLiteral_3070/*"BaseWindow/CancleBtn"*/;
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
  __int64 v9; // x0
  bool v10; // zf
  ChangeUserNameWindow_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C223CA & 1) == 0 )
  {
    sub_1C2D490(&ChangeUserNameWindow_CallbackFunc_TypeInfo);
    byte_4C223CA = 1;
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
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ChangeUserNameWindow_o *)sub_1C2D9AC(v8);
  ChangeUserNameWindow__Init(v11, v12);
}


void ChangeUserNameWindow__resetInputVal(ChangeUserNameWindow_o *this, const MethodInfo *method)
{
  UIInput_o *inputTarget; // x0

  if ( (byte_4C223CD & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C223CD = 1;
  }
  inputTarget = this->fields.inputTarget;
  if ( !inputTarget )
    sub_1C2D6EC(0, method);
  UIInput__set_value(inputTarget, (System_String_o *)StringLiteral_1/*""*/, 0);
}


void ChangeUserNameWindow_CallbackFunc___ctor(
        ChangeUserNameWindow_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6A918;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6A8C0;
}


System_IAsyncResult_o *ChangeUserNameWindow_CallbackFunc__BeginInvoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
        bool result,
        System_String_o *changeName,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v11[3]; // [xsp+8h] [xbp-58h] BYREF
  bool v12[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v12[0] = result;
  if ( (byte_4C223D3 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C223D3 = 1;
  }
  v11[2] = 0;
  v11[0] = j_il2cpp_value_box_0(bool_TypeInfo, v12, changeName, callback, object);
  v11[1] = changeName;
  return (System_IAsyncResult_o *)sub_1C2D444(this, v11, callback, object);
}


void ChangeUserNameWindow_CallbackFunc__EndInvoke(
        ChangeUserNameWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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