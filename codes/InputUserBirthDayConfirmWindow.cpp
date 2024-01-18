void __fastcall InputUserBirthDayConfirmWindow___ctor(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  if ( (byte_4188F7D & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4188F7D = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall InputUserBirthDayConfirmWindow__Callback(
        InputUserBirthDayConfirmWindow_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v9; // x19
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    InputUserBirthDayConfirmWindow_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall InputUserBirthDayConfirmWindow__Close(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  InputUserBirthDayConfirmWindow__Close_27373628(this, 0LL, v2);
}


void __fastcall InputUserBirthDayConfirmWindow__Close_27373628(
        InputUserBirthDayConfirmWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4188F7A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_InputUserBirthDayConfirmWindow_EndClose__, v10);
    byte_4188F7A = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_InputUserBirthDayConfirmWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


void __fastcall InputUserBirthDayConfirmWindow__EndClose(
        InputUserBirthDayConfirmWindow_o *this,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  System_String_array **v5; // x2
  System_String_array **v6; // x3
  System_Boolean_array **v7; // x4
  System_Int32_array **v8; // x5
  System_Int32_array *v9; // x6
  System_Int32_array *v10; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v12; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  InputUserBirthDayConfirmWindow__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
    System_Action__Invoke(v12, 0LL);
  }
}


void __fastcall InputUserBirthDayConfirmWindow__EndOpen(
        InputUserBirthDayConfirmWindow_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall InputUserBirthDayConfirmWindow__Init(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1

  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    sub_B2C434(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall InputUserBirthDayConfirmWindow__OnClickCancel(
        InputUserBirthDayConfirmWindow_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4188F7B & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4188F7B = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  InputUserBirthDayConfirmWindow__Callback(this, 0, v3);
}


void __fastcall InputUserBirthDayConfirmWindow__OnClickDecide(
        InputUserBirthDayConfirmWindow_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  InputUserBirthDayConfirmWindow__Callback(this, 1, v2);
}


void __fastcall InputUserBirthDayConfirmWindow__OpenConfirmWindow(
        InputUserBirthDayConfirmWindow_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *notice,
        InputUserBirthDayConfirmWindow_CallbackFunc_o *callback,
        int32_t infoPosY,
        int32_t infoSpacingY,
        const MethodInfo *method)
{
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  System_String_array **v21; // x2
  System_String_array **v22; // x3
  System_Boolean_array **v23; // x4
  System_Int32_array **v24; // x5
  System_Int32_array *v25; // x6
  System_Int32_array *v26; // x7
  UnityEngine_GameObject_o *v27; // x0
  UILabel_o *confirmTxt; // x20
  UILabel_o *cancelTxt; // x20
  System_Action_o *v30; // x20

  if ( (byte_4188F79 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, title);
    sub_B2C35C(&Method_InputUserBirthDayConfirmWindow_EndOpen__, v15);
    sub_B2C35C(&LocalizationManager_TypeInfo, v16);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v17);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v18);
    byte_4188F79 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v21,
    v22,
    v23,
    v24,
    v25,
    v26);
  gameObject = (UnityEngine_GameObject_o *)this->fields.titleLb;
  if ( !gameObject )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)gameObject, title, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.infoLb;
  if ( !gameObject )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)gameObject, message, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.noticeLb;
  if ( !gameObject )
    goto LABEL_15;
  UILabel__set_text((UILabel_o *)gameObject, notice, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.infoLb;
  if ( !gameObject )
    goto LABEL_15;
  v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPositionY(v27, (float)infoPosY, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.infoLb;
  if ( !gameObject )
    goto LABEL_15;
  UILabel__set_spacingY((UILabel_o *)gameObject, infoSpacingY, 0LL);
  confirmTxt = this->fields.confirmTxt;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmTxt
    || (UILabel__set_text(confirmTxt, (System_String_o *)gameObject, 0LL),
        cancelTxt = this->fields.cancelTxt,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelTxt) )
  {
LABEL_15:
    sub_B2C434(gameObject, v20);
  }
  UILabel__set_text(cancelTxt, (System_String_o *)gameObject, 0LL);
  this->fields.state = 1;
  v30 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v30, (Il2CppObject *)this, Method_InputUserBirthDayConfirmWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0LL);
}


void __fastcall InputUserBirthDayConfirmWindow__add_callbackFunc(
        InputUserBirthDayConfirmWindow_o *this,
        InputUserBirthDayConfirmWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  InputUserBirthDayConfirmWindow_o *v11; // x0
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4188F77 & 1) == 0 )
  {
    sub_B2C35C(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, value);
    byte_4188F77 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (InputUserBirthDayConfirmWindow_CallbackFunc_c *)v8->klass != InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayConfirmWindow_o *)sub_B2C728(v8);
  InputUserBirthDayConfirmWindow__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall InputUserBirthDayConfirmWindow__get_closeBtnPath(
        InputUserBirthDayConfirmWindow_o *this,
        const MethodInfo *method)
{
  if ( (byte_4188F7C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2742/*"BaseWindow/CancleBtn"*/, method);
    byte_4188F7C = 1;
  }
  return (System_String_o *)StringLiteral_2742/*"BaseWindow/CancleBtn"*/;
}


void __fastcall InputUserBirthDayConfirmWindow__remove_callbackFunc(
        InputUserBirthDayConfirmWindow_o *this,
        InputUserBirthDayConfirmWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  InputUserBirthDayConfirmWindow_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4188F78 & 1) == 0 )
  {
    sub_B2C35C(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, value);
    byte_4188F78 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (InputUserBirthDayConfirmWindow_CallbackFunc_c *)v8->klass != InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (InputUserBirthDayConfirmWindow_o *)sub_B2C728(v8);
  InputUserBirthDayConfirmWindow__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayConfirmWindow_CallbackFunc___ctor(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall InputUserBirthDayConfirmWindow_CallbackFunc__BeginInvoke(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_41841FA & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_41841FA = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall InputUserBirthDayConfirmWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayConfirmWindow_CallbackFunc__Invoke(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  InputUserBirthDayConfirmWindow_CallbackFunc_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (InputUserBirthDayConfirmWindow_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
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
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}