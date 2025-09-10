void ChangeGenderTypeWindow___ctor(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4C223C7 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C223C7 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void ChangeGenderTypeWindow__Callback(
        ChangeGenderTypeWindow_o *this,
        bool result,
        int32_t changeType,
        const MethodInfo *method)
{
  struct ChangeGenderTypeWindow_CallbackFunc_o **p_callbackFunc; // x0
  struct ChangeGenderTypeWindow_CallbackFunc_o *v6; // x21
  struct ChangeGenderTypeWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = callbackFunc;
  if ( callbackFunc )
  {
    this->fields.callbackFunc = 0;
    sub_1C2D434((CGThumbnailListItem_o *)p_callbackFunc, 0, changeType, method);
    ((void (__fastcall *)(intptr_t, bool, _QWORD, intptr_t))v6->fields.invoke_impl)(
      v6->fields.method_code,
      result,
      (unsigned int)this->fields.changeGenderType,
      v6->fields.method);
  }
}


void ChangeGenderTypeWindow__Close(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  ChangeGenderTypeWindow__Close_33017004(this, 0, v2);
}


void ChangeGenderTypeWindow__Close_33017004(
        ChangeGenderTypeWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C223C6 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ChangeGenderTypeWindow_EndClose__);
    byte_4C223C6 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_ChangeGenderTypeWindow_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void ChangeGenderTypeWindow__EndClose(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  int32_t v5; // w2
  const MethodInfo *v6; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v8; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  ChangeGenderTypeWindow__Init(this, method);
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


void ChangeGenderTypeWindow__EndOpen(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  if ( this->fields.state == 1 )
    this->fields.state = 2;
}


void ChangeGenderTypeWindow__Init(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
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


void ChangeGenderTypeWindow__OnClickFemale(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  bool v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  this->fields.changeGenderType = 2;
  v3 = !System_Int32__Equals_64968544((_DWORD)this + 152, 2, 0);
  ChangeGenderTypeWindow__Callback(this, v3, v4, v5);
}


void ChangeGenderTypeWindow__OnClickMale(ChangeGenderTypeWindow_o *this, const MethodInfo *method)
{
  bool v3; // w1
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  this->fields.changeGenderType = 1;
  v3 = !System_Int32__Equals_64968544((_DWORD)this + 152, 1, 0);
  ChangeGenderTypeWindow__Callback(this, v3, v4, v5);
}


void ChangeGenderTypeWindow__OpenChangeGenderWindow(
        ChangeGenderTypeWindow_o *this,
        int32_t currentType,
        ChangeGenderTypeWindow_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  UILabel_o *titleLb; // x20
  UILabel_o *inputInfoLb; // x20
  UILabel_o *femaleTxt; // x20
  UILabel_o *maleTxt; // x20
  System_Action_o *v15; // x20

  if ( (byte_4C223C5 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_ChangeGenderTypeWindow_EndOpen__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_8527/*"MALE_TEXT"*/);
    sub_1C2D490(&StringLiteral_6391/*"FEMALE_TEXT"*/);
    sub_1C2D490(&StringLiteral_3319/*"CHANGE_GENDER_INFO"*/);
    sub_1C2D490(&StringLiteral_3320/*"CHANGE_GENDER_TITLE"*/);
    byte_4C223C5 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    goto LABEL_11;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0);
  this->fields.callbackFunc = callback;
  this->fields.currentGenderType = currentType;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v9, v10);
  titleLb = this->fields.titleLb;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3320/*"CHANGE_GENDER_TITLE"*/, 0);
  if ( !titleLb )
    goto LABEL_11;
  UILabel__set_text(titleLb, (System_String_o *)gameObject, 0);
  inputInfoLb = this->fields.inputInfoLb;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3319/*"CHANGE_GENDER_INFO"*/, 0);
  if ( !inputInfoLb
    || (UILabel__set_text(inputInfoLb, (System_String_o *)gameObject, 0),
        femaleTxt = this->fields.femaleTxt,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_6391/*"FEMALE_TEXT"*/, 0),
        !femaleTxt)
    || (UILabel__set_text(femaleTxt, (System_String_o *)gameObject, 0),
        maleTxt = this->fields.maleTxt,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_8527/*"MALE_TEXT"*/, 0),
        !maleTxt) )
  {
LABEL_11:
    sub_1C2D6EC(gameObject, v8);
  }
  UILabel__set_text(maleTxt, (System_String_o *)gameObject, 0);
  this->fields.state = 1;
  v15 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_ChangeGenderTypeWindow_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v15, 0, 0);
}


void ChangeGenderTypeWindow__add_callbackFunc(
        ChangeGenderTypeWindow_o *this,
        ChangeGenderTypeWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ChangeGenderTypeWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ChangeGenderTypeWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ChangeGenderTypeWindow_o *v11; // x0
  ChangeGenderTypeWindow_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C223C3 & 1) == 0 )
  {
    sub_1C2D490(&ChangeGenderTypeWindow_CallbackFunc_TypeInfo);
    byte_4C223C3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ChangeGenderTypeWindow_CallbackFunc_c *)v8->klass != ChangeGenderTypeWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ChangeGenderTypeWindow_o *)sub_1C2D9AC(v8);
  ChangeGenderTypeWindow__remove_callbackFunc(v11, v12, v13);
}


void ChangeGenderTypeWindow__remove_callbackFunc(
        ChangeGenderTypeWindow_o *this,
        ChangeGenderTypeWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct ChangeGenderTypeWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct ChangeGenderTypeWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  ChangeGenderTypeWindow_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C223C4 & 1) == 0 )
  {
    sub_1C2D490(&ChangeGenderTypeWindow_CallbackFunc_TypeInfo);
    byte_4C223C4 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (ChangeGenderTypeWindow_CallbackFunc_c *)v8->klass != ChangeGenderTypeWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (ChangeGenderTypeWindow_o *)sub_1C2D9AC(v8);
  ChangeGenderTypeWindow__Init(v11, v12);
}


void ChangeGenderTypeWindow_CallbackFunc___ctor(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1A6A89C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6A844;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *ChangeGenderTypeWindow_CallbackFunc__BeginInvoke(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
        bool result,
        int32_t changeType,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  _QWORD v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  bool v15[4]; // [xsp+2Ch] [xbp-34h] BYREF

  v15[0] = result;
  v14 = changeType;
  if ( (byte_4C223C8 & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    sub_1C2D490(&int_TypeInfo);
    byte_4C223C8 = 1;
  }
  v13[2] = 0;
  v13[0] = j_il2cpp_value_box_0(bool_TypeInfo, v15, *(_QWORD *)&changeType, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v13, callback, object);
}


void ChangeGenderTypeWindow_CallbackFunc__EndInvoke(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void ChangeGenderTypeWindow_CallbackFunc__Invoke(
        ChangeGenderTypeWindow_CallbackFunc_o *this,
        bool result,
        int32_t changeType,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    changeType,
    this->fields.method);
}