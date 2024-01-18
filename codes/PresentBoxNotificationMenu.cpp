void __fastcall PresentBoxNotificationMenu___ctor(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4187A30 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4187A30 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxNotificationMenu__BackBuyBankItem(
        PresentBoxNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187A2C & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_10036/*"OnMoveEnd"*/, method);
    byte_4187A2C = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10036/*"OnMoveEnd"*/,
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
  sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_4187A2B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_PresentBoxNotificationMenu_OnMoveEnd__, v10);
    byte_4187A2B = 1;
  }
  if ( this->fields.state )
  {
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
    this->fields.state = 5;
    v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v11, (Il2CppObject *)this, Method_PresentBoxNotificationMenu_OnMoveEnd__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
  }
  else if ( callback )
  {
    System_Action__Invoke(callback, 0LL);
  }
}


void __fastcall PresentBoxNotificationMenu__Init(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *message1Label; // x0

  if ( (byte_4187A29 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_4187A29 = 1;
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
    sub_B2C434(message1Label, method);
  }
  PresentBoxNotificationListViewManager__DestroyList((PresentBoxNotificationListViewManager_o *)message1Label, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxNotificationMenu__OnClickClose(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_4187A2E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_4187A2E = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  PresentBoxNotificationMenu__Callback(this, 0, v3);
}


void __fastcall PresentBoxNotificationMenu__OnMoveEnd(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  int32_t v4; // w8
  PresentBoxNotificationListViewManager_o *ItemListViewManager; // x20
  PresentBoxNotificationListViewManager_CallbackFunc_o *v6; // x21
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v16; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_4187A2D & 1) == 0 )
  {
    sub_B2C35C(&PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_PresentBoxNotificationMenu_OnSelectBuyItem__, v3);
    byte_4187A2D = 1;
  }
  switch ( this->fields.state )
  {
    case 2:
      v4 = 3;
      goto LABEL_6;
    case 3:
      this->fields.state = 4;
      ItemListViewManager = this->fields.ItemListViewManager;
      v6 = (PresentBoxNotificationListViewManager_CallbackFunc_o *)sub_B2C42C(PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo);
      PresentBoxNotificationListViewManager_CallbackFunc___ctor(
        v6,
        (Il2CppObject *)this,
        Method_PresentBoxNotificationMenu_OnSelectBuyItem__,
        0LL);
      if ( !ItemListViewManager )
        sub_B2C434(v7, v8);
      PresentBoxNotificationListViewManager__SetMode(ItemListViewManager, 1, v6, 0LL);
      break;
    case 5:
      v4 = 6;
LABEL_6:
      this->fields.state = v4;
      break;
    case 6:
      PresentBoxNotificationMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
      v16 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0LL;
        sub_B2C2F8(p_closeCallbackFunc, 0LL, v9, v10, v11, v12, v13, v14);
        System_Action__Invoke(v16, 0LL);
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
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v13; // x1
  System_String_array **v14; // x2
  System_String_array **v15; // x3
  System_Boolean_array **v16; // x4
  System_Int32_array **v17; // x5
  System_Int32_array *v18; // x6
  System_Int32_array *v19; // x7
  UILabel_o *message1Label; // x21
  UILabel_o *message2Label; // x21
  UILabel_o *closeLabel; // x21
  System_Action_o *v23; // x20

  if ( (byte_4187A2A & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, presentList);
    sub_B2C35C(&LocalizationManager_TypeInfo, v7);
    sub_B2C35C(&Method_PresentBoxNotificationMenu_OnMoveEnd__, v8);
    sub_B2C35C(&StringLiteral_10492/*"PRESENT_BOX_NOTIFICATION_MESSAGE2"*/, v9);
    sub_B2C35C(&StringLiteral_10491/*"PRESENT_BOX_NOTIFICATION_MESSAGE1"*/, v10);
    sub_B2C35C(&StringLiteral_10490/*"PRESENT_BOX_NOTIFICATION_CLOSE"*/, v11);
    byte_4187A2A = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10491/*"PRESENT_BOX_NOTIFICATION_MESSAGE1"*/, 0LL);
    if ( !message1Label )
      goto LABEL_14;
    UILabel__set_text(message1Label, (System_String_o *)gameObject, 0LL);
    message2Label = this->fields.message2Label;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10492/*"PRESENT_BOX_NOTIFICATION_MESSAGE2"*/, 0LL);
    if ( !message2Label
      || (UILabel__set_text(message2Label, (System_String_o *)gameObject, 0LL),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10490/*"PRESENT_BOX_NOTIFICATION_CLOSE"*/, 0LL),
          !closeLabel)
      || (UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.ItemListViewManager) == 0LL) )
    {
LABEL_14:
      sub_B2C434(gameObject, v13);
    }
    PresentBoxNotificationListViewManager__CreateList(
      (PresentBoxNotificationListViewManager_o *)gameObject,
      0,
      presentList,
      0LL);
    this->fields.state = 2;
    v23 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v23, (Il2CppObject *)this, Method_PresentBoxNotificationMenu_OnMoveEnd__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0LL);
  }
}


void __fastcall PresentBoxNotificationMenu__add_callbackFunc(
        PresentBoxNotificationMenu_o *this,
        PresentBoxNotificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentBoxNotificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentBoxNotificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentBoxNotificationMenu_o *v11; // x0
  PresentBoxNotificationMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4187A27 & 1) == 0 )
  {
    sub_B2C35C(&PresentBoxNotificationMenu_CallbackFunc_TypeInfo, value);
    byte_4187A27 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PresentBoxNotificationMenu_CallbackFunc_c *)v8->klass != PresentBoxNotificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentBoxNotificationMenu_o *)sub_B2C728(v8);
  PresentBoxNotificationMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall PresentBoxNotificationMenu__get_closeBtnPath(
        PresentBoxNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4187A2F & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_8898/*"MainPanel/BaseView/CloseButton"*/, method);
    byte_4187A2F = 1;
  }
  return (System_String_o *)StringLiteral_8898/*"MainPanel/BaseView/CloseButton"*/;
}


void __fastcall PresentBoxNotificationMenu__remove_callbackFunc(
        PresentBoxNotificationMenu_o *this,
        PresentBoxNotificationMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PresentBoxNotificationMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PresentBoxNotificationMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PresentBoxNotificationMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4187A28 & 1) == 0 )
  {
    sub_B2C35C(&PresentBoxNotificationMenu_CallbackFunc_TypeInfo, value);
    byte_4187A28 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PresentBoxNotificationMenu_CallbackFunc_c *)v8->klass != PresentBoxNotificationMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentBoxNotificationMenu_o *)sub_B2C728(v8);
  PresentBoxNotificationMenu__Init(v11, v12);
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
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_41852B6 & 1) == 0 )
  {
    sub_B2C35C(&PresentBoxNotificationMenu_Result_TypeInfo, *(_QWORD *)&result);
    byte_41852B6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(PresentBoxNotificationMenu_Result_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall PresentBoxNotificationMenu_CallbackFunc__EndInvoke(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationMenu_CallbackFunc__Invoke(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v6; // x24
  PresentBoxNotificationMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned int v13; // w22
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  PresentBoxNotificationMenu_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(unsigned int *, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  unsigned int v27; // w23
  __int64 v28; // x8
  __int64 v29; // x1
  __int64 v30; // x2
  unsigned __int64 v31; // x10
  _DWORD *v32; // x11
  unsigned int v33; // [xsp+4h] [xbp-4Ch] BYREF
  PresentBoxNotificationMenu_CallbackFunc_o *v34; // [xsp+8h] [xbp-48h] BYREF

  v34 = this;
  v33 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v7 = &v34;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 )
  {
    v7 = (PresentBoxNotificationMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v20 = v7[v8];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(unsigned int *, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int *)v33, v22);
LABEL_38:
      if ( ++v8 == v6 )
        return;
    }
    if ( !v21 )
    {
      v23(&v33 - 4, v22);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        v27 = v33;
        if ( (v25 & 1) != 0 )
        {
          v28 = *v21;
          v29 = *(_QWORD *)(v22 + 24);
          v30 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v31 = 0LL;
            v32 = (_DWORD *)(*(_QWORD *)(v28 + 176) + 8LL);
            while ( *((_QWORD *)v32 - 1) != v29 )
            {
              ++v31;
              v32 += 4;
              if ( v31 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v28 + 16LL * (*v32 + (int)v30) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v29, v30, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, v27, v19);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v12 = *v21;
          v13 = v33;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v12 + 16LL * (int)(*v15 + v9) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, v13, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            v33,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, v33, v22);
    goto LABEL_38;
  }
}