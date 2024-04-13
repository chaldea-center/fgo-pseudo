void __fastcall PresentBoxNotificationMenu___ctor(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E87B0 & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E87B0 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxNotificationMenu__BackBuyBankItem(
        PresentBoxNotificationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E87AC & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_10142/*"OnMoveEnd"*/, (_DWORD)method, v2, v3);
    byte_42E87AC = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10142/*"OnMoveEnd"*/,
      0.1,
      0LL);
  }
}


void __fastcall PresentBoxNotificationMenu__Callback(
        PresentBoxNotificationMenu_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  PresentBoxNotificationMenu_CallbackFunc_o *v9; // x20
  struct PresentBoxNotificationMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  p_callbackFunc->klass = 0LL;
  sub_B5D560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
  if ( callbackFunc )
    PresentBoxNotificationMenu_CallbackFunc__Invoke(v9, result, 0LL);
}


void __fastcall PresentBoxNotificationMenu__Close(
        PresentBoxNotificationMenu_o *this,
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

  if ( (byte_42E87AB & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)callback, (_DWORD)method, v3);
    sub_B5D5C4(&Method_PresentBoxNotificationMenu_OnMoveEnd__, v10, v11, v12);
    byte_42E87AB = 1;
  }
  if ( this->fields.state )
  {
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
    this->fields.state = 5;
    v13 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v13, (Il2CppObject *)this, Method_PresentBoxNotificationMenu_OnMoveEnd__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v13, 0LL);
  }
  else if ( callback )
  {
    System_Action__Invoke(callback, 0LL);
  }
}


void __fastcall PresentBoxNotificationMenu__Init(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  UILabel_o *message1Label; // x0

  if ( (byte_42E87A9 & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_1/*""*/, (_DWORD)method, v2, v3);
    byte_42E87A9 = 1;
  }
  message1Label = this->fields.message1Label;
  if ( !message1Label
    || (UILabel__set_text(message1Label, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (message1Label = this->fields.message2Label) == 0LL)
    || (UILabel__set_text(message1Label, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (message1Label = this->fields.closeLabel) == 0LL)
    || (UILabel__set_text(message1Label, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (message1Label = (UILabel_o *)this->fields.ItemListViewManager) == 0LL) )
  {
    sub_B5D69C(message1Label, method);
  }
  ListViewManager__DestroyList((ListViewManager_o *)message1Label, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxNotificationMenu__OnClickClose(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  const MethodInfo *v5; // x2

  if ( (byte_42E87AE & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42E87AE = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  PresentBoxNotificationMenu__Callback(this, 0, v5);
}


void __fastcall PresentBoxNotificationMenu__OnMoveEnd(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  int32_t v8; // w8
  struct PresentBoxNotificationListViewManager_o *ItemListViewManager; // x20
  PresentBoxNotificationListViewManager_CallbackFunc_o *v10; // x21
  __int64 v11; // x0
  __int64 v12; // x1
  System_String_array **v13; // x2
  System_String_array **v14; // x3
  System_Boolean_array **v15; // x4
  System_Int32_array **v16; // x5
  System_Int32_array *v17; // x6
  System_Int32_array *v18; // x7
  const MethodInfo *v19; // x2
  System_String_array **v20; // x2
  System_String_array **v21; // x3
  System_Boolean_array **v22; // x4
  System_Int32_array **v23; // x5
  System_Int32_array *v24; // x6
  System_Int32_array *v25; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v27; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_42E87AD & 1) == 0 )
  {
    sub_B5D5C4(&PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_PresentBoxNotificationMenu_OnSelectBuyItem__, v5, v6, v7);
    byte_42E87AD = 1;
  }
  switch ( this->fields.state )
  {
    case 2:
      v8 = 3;
      goto LABEL_6;
    case 3:
      this->fields.state = 4;
      ItemListViewManager = this->fields.ItemListViewManager;
      v10 = (PresentBoxNotificationListViewManager_CallbackFunc_o *)sub_B5D694(PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo);
      PresentBoxNotificationListViewManager_CallbackFunc___ctor(
        v10,
        (Il2CppObject *)this,
        Method_PresentBoxNotificationMenu_OnSelectBuyItem__,
        0LL);
      if ( !ItemListViewManager )
        sub_B5D69C(v11, v12);
      ItemListViewManager->fields.callbackFunc = v10;
      sub_B5D560(
        (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
        (System_Int32_array **)v10,
        v13,
        v14,
        v15,
        v16,
        v17,
        v18);
      PresentBoxNotificationListViewManager__SetMode_25072916(ItemListViewManager, 1, v19);
      break;
    case 5:
      v8 = 6;
LABEL_6:
      this->fields.state = v8;
      break;
    case 6:
      PresentBoxNotificationMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
      v27 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0LL;
        sub_B5D560(p_closeCallbackFunc, 0LL, v20, v21, v22, v23, v24, v25);
        System_Action__Invoke(v27, 0LL);
      }
      break;
    default:
      return;
  }
}


void __fastcall PresentBoxNotificationMenu__OnSelectBuyItem(
        PresentBoxNotificationMenu_o *this,
        int32_t n,
        const MethodInfo *method)
{
  this->fields.selectItemNum = n;
}


void __fastcall PresentBoxNotificationMenu__Open(
        PresentBoxNotificationMenu_o *this,
        UserPresentBoxEntity_array *presentList,
        PresentBoxNotificationMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int v7; // w1
  int v8; // w2
  __int64 v9; // x3
  int v10; // w1
  int v11; // w2
  __int64 v12; // x3
  int v13; // w1
  int v14; // w2
  __int64 v15; // x3
  int v16; // w1
  int v17; // w2
  __int64 v18; // x3
  int v19; // w1
  int v20; // w2
  __int64 v21; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  System_String_array **v24; // x2
  System_String_array **v25; // x3
  System_Boolean_array **v26; // x4
  System_Int32_array **v27; // x5
  System_Int32_array *v28; // x6
  System_Int32_array *v29; // x7
  UILabel_o *message1Label; // x21
  UILabel_o *message2Label; // x21
  UILabel_o *closeLabel; // x21
  const MethodInfo *v33; // x3
  System_Action_o *v34; // x20

  if ( (byte_42E87AA & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)presentList, (_DWORD)callback, method);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v7, v8, v9);
    sub_B5D5C4(&Method_PresentBoxNotificationMenu_OnMoveEnd__, v10, v11, v12);
    sub_B5D5C4(&StringLiteral_10609/*"PRESENT_BOX_NOTIFICATION_MESSAGE2"*/, v13, v14, v15);
    sub_B5D5C4(&StringLiteral_10608/*"PRESENT_BOX_NOTIFICATION_MESSAGE1"*/, v16, v17, v18);
    sub_B5D5C4(&StringLiteral_10607/*"PRESENT_BOX_NOTIFICATION_CLOSE"*/, v19, v20, v21);
    byte_42E87AA = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.callbackFunc = callback;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v24,
      v25,
      v26,
      v27,
      v28,
      v29);
    gameObject = (UnityEngine_GameObject_o *)this->fields.ItemListViewManager;
    if ( !gameObject )
      goto LABEL_14;
    ListViewManager__set_IsInput((ListViewManager_o *)gameObject, 0, 0LL);
    message1Label = this->fields.message1Label;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10608/*"PRESENT_BOX_NOTIFICATION_MESSAGE1"*/, 0LL);
    if ( !message1Label )
      goto LABEL_14;
    UILabel__set_text(message1Label, (System_String_o *)gameObject, 0LL);
    message2Label = this->fields.message2Label;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10609/*"PRESENT_BOX_NOTIFICATION_MESSAGE2"*/, 0LL);
    if ( !message2Label
      || (UILabel__set_text(message2Label, (System_String_o *)gameObject, 0LL),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10607/*"PRESENT_BOX_NOTIFICATION_CLOSE"*/, 0LL),
          !closeLabel)
      || (UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.ItemListViewManager) == 0LL) )
    {
LABEL_14:
      sub_B5D69C(gameObject, v23);
    }
    PresentBoxNotificationListViewManager__CreateList(
      (PresentBoxNotificationListViewManager_o *)gameObject,
      0,
      presentList,
      v33);
    this->fields.state = 2;
    v34 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v34, (Il2CppObject *)this, Method_PresentBoxNotificationMenu_OnMoveEnd__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0LL);
  }
}


void __fastcall PresentBoxNotificationMenu__add_callbackFunc(
        PresentBoxNotificationMenu_o *this,
        PresentBoxNotificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PresentBoxNotificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PresentBoxNotificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PresentBoxNotificationMenu_o *v12; // x0
  PresentBoxNotificationMenu_CallbackFunc_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42E87A7 & 1) == 0 )
  {
    sub_B5D5C4(&PresentBoxNotificationMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E87A7 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PresentBoxNotificationMenu_CallbackFunc_c *)v9->klass != PresentBoxNotificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PresentBoxNotificationMenu_o *)sub_B5D990(v9);
  PresentBoxNotificationMenu__remove_callbackFunc(v12, v13, v14);
}


System_String_o *__fastcall PresentBoxNotificationMenu__get_closeBtnPath(
        PresentBoxNotificationMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42E87AF & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_8989/*"MainPanel/BaseView/CloseButton"*/, (_DWORD)method, v2, v3);
    byte_42E87AF = 1;
  }
  return (System_String_o *)StringLiteral_8989/*"MainPanel/BaseView/CloseButton"*/;
}


void __fastcall PresentBoxNotificationMenu__remove_callbackFunc(
        PresentBoxNotificationMenu_o *this,
        PresentBoxNotificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct PresentBoxNotificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v7; // x21
  struct PresentBoxNotificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  PresentBoxNotificationMenu_o *v12; // x0
  const MethodInfo *v13; // x1

  if ( (byte_42E87A8 & 1) == 0 )
  {
    sub_B5D5C4(&PresentBoxNotificationMenu_CallbackFunc_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42E87A8 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v7 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (PresentBoxNotificationMenu_CallbackFunc_c *)v9->klass != PresentBoxNotificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_callbackFunc, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  v12 = (PresentBoxNotificationMenu_o *)sub_B5D990(v9);
  PresentBoxNotificationMenu__Init(v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationMenu_CallbackFunc___ctor(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall PresentBoxNotificationMenu_CallbackFunc__BeginInvoke(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_42E5AB4 & 1) == 0 )
  {
    sub_B5D5C4(&PresentBoxNotificationMenu_Result_TypeInfo, result, (_DWORD)callback, object);
    byte_42E5AB4 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(PresentBoxNotificationMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall PresentBoxNotificationMenu_CallbackFunc__EndInvoke(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationMenu_CallbackFunc__Invoke(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  PresentBoxNotificationMenu_CallbackFunc_o **v6; // x25
  __int64 v7; // x26
  unsigned int v8; // w23
  __int64 class_0; // x0
  __int64 v10; // x3
  __int64 v11; // x8
  unsigned int v12; // w22
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  PresentBoxNotificationMenu_CallbackFunc_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(unsigned int *, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  unsigned int v26; // w23
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  unsigned int v32; // [xsp+4h] [xbp-4Ch] BYREF
  PresentBoxNotificationMenu_CallbackFunc_o *v33; // [xsp+8h] [xbp-48h] BYREF

  v33 = this;
  v32 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v33;
    v5 = 1LL;
    goto LABEL_5;
  }
  v5 = *(_QWORD *)(v3 + 24);
  if ( v5 )
  {
    v6 = (PresentBoxNotificationMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v7 = 0LL;
    while ( 1 )
    {
      v19 = v6[v7];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(unsigned int *, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&result, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int *)v32, v21);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v20 )
    {
      v22(&v32 - 4, v21);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        v26 = v32;
        if ( (v24 & 1) != 0 )
        {
          v27 = *v20;
          v28 = *(_QWORD *)(v21 + 24);
          v29 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v28, v29, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, v26, v18);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v11 = *v20;
          v12 = v32;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v11 + 16LL * (int)(*v14 + v8) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v8, v10);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, v12, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            v32,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, v32, v21);
    goto LABEL_38;
  }
}