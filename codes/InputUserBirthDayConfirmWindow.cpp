void __fastcall InputUserBirthDayConfirmWindow___ctor(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA4D5 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA4D5 = 1;
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
    sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    InputUserBirthDayConfirmWindow_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall InputUserBirthDayConfirmWindow__Close(InputUserBirthDayConfirmWindow_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  InputUserBirthDayConfirmWindow__Close_28476632(this, 0LL, v2);
}


void __fastcall InputUserBirthDayConfirmWindow__Close_28476632(
        InputUserBirthDayConfirmWindow_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  System_Action_o *v13; // x20

  if ( (byte_42EA4D2 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_InputUserBirthDayConfirmWindow_EndClose__, v10, v11, v12);
    byte_42EA4D2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 2;
  v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_InputUserBirthDayConfirmWindow_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v12 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B5D560(p_closeCallbackFunc, 0LL, v5, v6, v7, v8, v9, v10);
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
    sub_B5D69C(0LL, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall InputUserBirthDayConfirmWindow__OnClickCancel(
        InputUserBirthDayConfirmWindow_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42EA4D3 & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EA4D3 = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  InputUserBirthDayConfirmWindow__Callback(this, 0, v5);
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
  int v15; // w1
  int v16; // w2
  __int64 v17; // x3
  int v18; // w1
  int v19; // w2
  __int64 v20; // x3
  int v21; // w1
  int v22; // w2
  __int64 v23; // x3
  int v24; // w1
  int v25; // w2
  __int64 v26; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  System_String_array **v29; // x2
  System_String_array **v30; // x3
  System_Boolean_array **v31; // x4
  System_Int32_array **v32; // x5
  System_Int32_array *v33; // x6
  System_Int32_array *v34; // x7
  UnityEngine_GameObject_o *v35; // x0
  UILabel_o *confirmTxt; // x20
  UILabel_o *cancelTxt; // x20
  System_Action_o *v38; // x20

  if ( (byte_42EA4D1 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)title, (_DWORD)message, notice);
    sub_B5D5C4(&Method_InputUserBirthDayConfirmWindow_EndOpen__, v15, v16, v17);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v18, v19, v20);
    sub_B5D5C4(&StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, v21, v22, v23);
    sub_B5D5C4(&StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, v24, v25, v26);
    byte_42EA4D1 = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive(gameObject, 0, 0LL);
  this->fields.callbackFunc = callback;
  sub_B5D560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
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
  v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  GameObjectExtensions__SetLocalPositionY(v35, (float)infoPosY, 0LL);
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
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3328/*"COMMON_CONFIRM_DECIDE"*/, 0LL);
  if ( !confirmTxt
    || (UILabel__set_text(confirmTxt, (System_String_o *)gameObject, 0LL),
        cancelTxt = this->fields.cancelTxt,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3326/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
        !cancelTxt) )
  {
LABEL_15:
    sub_B5D69C(gameObject, v28);
  }
  UILabel__set_text(cancelTxt, (System_String_o *)gameObject, 0LL);
  this->fields.state = 1;
  v38 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v38, (Il2CppObject *)this, Method_InputUserBirthDayConfirmWindow_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
}


void __fastcall InputUserBirthDayConfirmWindow__add_callbackFunc(
        InputUserBirthDayConfirmWindow_o *this,
        InputUserBirthDayConfirmWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  InputUserBirthDayConfirmWindow_o *v12; // x0
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EA4CF & 1) == 0 )
  {
    sub_B5D5C4(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA4CF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (InputUserBirthDayConfirmWindow_CallbackFunc_c *)v9->klass != InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (InputUserBirthDayConfirmWindow_o *)sub_B5D990(v9);
  InputUserBirthDayConfirmWindow__remove_callbackFunc(v12, v13, v14);
}


System_String_o *__fastcall InputUserBirthDayConfirmWindow__get_closeBtnPath(
        InputUserBirthDayConfirmWindow_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EA4D4 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2796/*"BaseWindow/CancleBtn"*/, (_DWORD)method, v2, v3);
    byte_42EA4D4 = 1;
  }
  return (System_String_o *)StringLiteral_2796/*"BaseWindow/CancleBtn"*/;
}


void __fastcall InputUserBirthDayConfirmWindow__remove_callbackFunc(
        InputUserBirthDayConfirmWindow_o *this,
        InputUserBirthDayConfirmWindow_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct InputUserBirthDayConfirmWindow_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  InputUserBirthDayConfirmWindow_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42EA4D0 & 1) == 0 )
  {
    sub_B5D5C4(&InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EA4D0 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (InputUserBirthDayConfirmWindow_CallbackFunc_c *)v9->klass != InputUserBirthDayConfirmWindow_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (InputUserBirthDayConfirmWindow_o *)sub_B5D990(v9);
  InputUserBirthDayConfirmWindow__Init(v12, v13);
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
  sub_B5D560(p_method);
}


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
  if ( (byte_42E56FF & 1) == 0 )
  {
    sub_B5D5C4(&bool_TypeInfo, result, (_DWORD)callback, object);
    byte_42E56FF = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall InputUserBirthDayConfirmWindow_CallbackFunc__EndInvoke(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall InputUserBirthDayConfirmWindow_CallbackFunc__Invoke(
        InputUserBirthDayConfirmWindow_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  InputUserBirthDayConfirmWindow_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, bool, _QWORD); // x0
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(bool, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  InputUserBirthDayConfirmWindow_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (InputUserBirthDayConfirmWindow_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(bool, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22(result, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, result, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v15)(v20, result, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            result,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v22)(v20, result, v21);
    goto LABEL_37;
  }
}