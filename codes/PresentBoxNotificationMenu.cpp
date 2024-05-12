void __fastcall PresentBoxNotificationMenu___ctor(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  if ( (byte_438B5AD & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438B5AD = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxNotificationMenu__BackBuyBankItem(
        PresentBoxNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_438B5A9 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_10218/*"OnMoveEnd"*/);
    byte_438B5A9 = 1;
  }
  if ( this->fields.state == 4 )
  {
    this->fields.state = 5;
    UnityEngine_MonoBehaviour__Invoke(
      (UnityEngine_MonoBehaviour_o *)this,
      (System_String_o *)StringLiteral_10218/*"OnMoveEnd"*/,
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
  sub_B77560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
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
  System_Action_o *v10; // x20

  if ( (byte_438B5A8 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PresentBoxNotificationMenu_OnMoveEnd__);
    byte_438B5A8 = 1;
  }
  if ( this->fields.state )
  {
    this->fields.closeCallbackFunc = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)method,
      v3,
      v4,
      v5,
      v6,
      v7);
    this->fields.state = 5;
    v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v10, (Il2CppObject *)this, Method_PresentBoxNotificationMenu_OnMoveEnd__, 0LL);
    BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
  }
  else if ( callback )
  {
    System_Action__Invoke(callback, 0LL);
  }
}


void __fastcall PresentBoxNotificationMenu__Init(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  UILabel_o *message1Label; // x0

  if ( (byte_438B5A6 & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438B5A6 = 1;
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
    sub_B7769C(message1Label, method);
  }
  ListViewManager__DestroyList((ListViewManager_o *)message1Label, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PresentBoxNotificationMenu__OnClickClose(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438B5AB & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438B5AB = 1;
  }
  if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !SoundManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
  SoundManager__playSystemSe(1, 0LL);
  PresentBoxNotificationMenu__Callback(this, 0, v3);
}


void __fastcall PresentBoxNotificationMenu__OnMoveEnd(PresentBoxNotificationMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w8
  struct PresentBoxNotificationListViewManager_o *ItemListViewManager; // x20
  PresentBoxNotificationListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  System_String_array **v8; // x2
  System_String_array **v9; // x3
  System_Boolean_array **v10; // x4
  System_Int32_array **v11; // x5
  System_Int32_array *v12; // x6
  System_Int32_array *v13; // x7
  const MethodInfo *v14; // x2
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v22; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  if ( (byte_438B5AA & 1) == 0 )
  {
    sub_B775C4(&PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo);
    sub_B775C4(&Method_PresentBoxNotificationMenu_OnSelectBuyItem__);
    byte_438B5AA = 1;
  }
  switch ( this->fields.state )
  {
    case 2:
      v3 = 3;
      goto LABEL_6;
    case 3:
      this->fields.state = 4;
      ItemListViewManager = this->fields.ItemListViewManager;
      v5 = (PresentBoxNotificationListViewManager_CallbackFunc_o *)sub_B77694(PresentBoxNotificationListViewManager_CallbackFunc_TypeInfo);
      PresentBoxNotificationListViewManager_CallbackFunc___ctor(
        v5,
        (Il2CppObject *)this,
        Method_PresentBoxNotificationMenu_OnSelectBuyItem__,
        0LL);
      if ( !ItemListViewManager )
        sub_B7769C(v6, v7);
      ItemListViewManager->fields.callbackFunc = v5;
      sub_B77560(
        (BattleServantConfConponent_o *)&ItemListViewManager->fields.callbackFunc,
        (System_Int32_array **)v5,
        v8,
        v9,
        v10,
        v11,
        v12,
        v13);
      PresentBoxNotificationListViewManager__SetMode_25701180(ItemListViewManager, 1, v14);
      break;
    case 5:
      v3 = 6;
LABEL_6:
      this->fields.state = v3;
      break;
    case 6:
      PresentBoxNotificationMenu__Init(this, method);
      closeCallbackFunc = this->fields.closeCallbackFunc;
      p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
      v22 = closeCallbackFunc;
      if ( closeCallbackFunc )
      {
        p_closeCallbackFunc->klass = 0LL;
        sub_B77560(p_closeCallbackFunc, 0LL, v15, v16, v17, v18, v19, v20);
        System_Action__Invoke(v22, 0LL);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v8; // x1
  System_String_array **v9; // x2
  System_String_array **v10; // x3
  System_Boolean_array **v11; // x4
  System_Int32_array **v12; // x5
  System_Int32_array *v13; // x6
  System_Int32_array *v14; // x7
  UILabel_o *message1Label; // x21
  UILabel_o *message2Label; // x21
  UILabel_o *closeLabel; // x21
  const MethodInfo *v18; // x3
  System_Action_o *v19; // x20

  if ( (byte_438B5A7 & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_PresentBoxNotificationMenu_OnMoveEnd__);
    sub_B775C4(&StringLiteral_10689/*"PRESENT_BOX_NOTIFICATION_MESSAGE2"*/);
    sub_B775C4(&StringLiteral_10688/*"PRESENT_BOX_NOTIFICATION_MESSAGE1"*/);
    sub_B775C4(&StringLiteral_10687/*"PRESENT_BOX_NOTIFICATION_CLOSE"*/);
    byte_438B5A7 = 1;
  }
  if ( !this->fields.state )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    this->fields.callbackFunc = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
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
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10688/*"PRESENT_BOX_NOTIFICATION_MESSAGE1"*/, 0LL);
    if ( !message1Label )
      goto LABEL_14;
    UILabel__set_text(message1Label, (System_String_o *)gameObject, 0LL);
    message2Label = this->fields.message2Label;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10689/*"PRESENT_BOX_NOTIFICATION_MESSAGE2"*/, 0LL);
    if ( !message2Label
      || (UILabel__set_text(message2Label, (System_String_o *)gameObject, 0LL),
          closeLabel = this->fields.closeLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10687/*"PRESENT_BOX_NOTIFICATION_CLOSE"*/, 0LL),
          !closeLabel)
      || (UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.ItemListViewManager) == 0LL) )
    {
LABEL_14:
      sub_B7769C(gameObject, v8);
    }
    PresentBoxNotificationListViewManager__CreateList(
      (PresentBoxNotificationListViewManager_o *)gameObject,
      0,
      presentList,
      v18);
    this->fields.state = 2;
    v19 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_PresentBoxNotificationMenu_OnMoveEnd__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
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

  if ( (byte_438B5A4 & 1) == 0 )
  {
    sub_B775C4(&PresentBoxNotificationMenu_CallbackFunc_TypeInfo);
    byte_438B5A4 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentBoxNotificationMenu_o *)sub_B77990(v8);
  PresentBoxNotificationMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall PresentBoxNotificationMenu__get_closeBtnPath(
        PresentBoxNotificationMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_438B5AC & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_9062/*"MainPanel/BaseView/CloseButton"*/);
    byte_438B5AC = 1;
  }
  return (System_String_o *)StringLiteral_9062/*"MainPanel/BaseView/CloseButton"*/;
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

  if ( (byte_438B5A5 & 1) == 0 )
  {
    sub_B775C4(&PresentBoxNotificationMenu_CallbackFunc_TypeInfo);
    byte_438B5A5 = 1;
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
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PresentBoxNotificationMenu_o *)sub_B77990(v8);
  PresentBoxNotificationMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PresentBoxNotificationMenu_CallbackFunc___ctor(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
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
  sub_B77560(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  if ( (byte_438B12D & 1) == 0 )
  {
    sub_B775C4(&PresentBoxNotificationMenu_Result_TypeInfo);
    byte_438B12D = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(PresentBoxNotificationMenu_Result_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall PresentBoxNotificationMenu_CallbackFunc__EndInvoke(
        PresentBoxNotificationMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
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
  __int64 v10; // x8
  unsigned int v11; // w22
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, _QWORD, _QWORD); // x0
  PresentBoxNotificationMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(unsigned int *, __int64); // x23
  char v22; // w23
  char v23; // w0
  unsigned int v24; // w23
  __int64 v25; // x8
  __int64 v26; // x1
  __int64 v27; // x2
  unsigned __int64 v28; // x10
  _DWORD *v29; // x11
  unsigned int v30; // [xsp+4h] [xbp-4Ch] BYREF
  PresentBoxNotificationMenu_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v30 = result;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v6 = &v31;
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
      v18 = v6[v7];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(unsigned int *, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, *(_QWORD *)&result);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21((unsigned int *)v30, v20);
LABEL_38:
      if ( ++v7 == v5 )
        return;
    }
    if ( !v19 )
    {
      v21(&v30 - 4, v20);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        v24 = v30;
        if ( (v23 & 1) != 0 )
        {
          v25 = *v19;
          v26 = *(_QWORD *)(v20 + 24);
          v27 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v28 = 0LL;
            v29 = (_DWORD *)(*(_QWORD *)(v25 + 176) + 8LL);
            while ( *((_QWORD *)v29 - 1) != v26 )
            {
              ++v28;
              v29 += 4;
              if ( v28 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v25 + 16LL * (*v29 + (int)v27) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v26, v27);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, v24, v17);
      }
      else
      {
        v8 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v10 = *v19;
          v11 = v30;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v10 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v10 + 16LL * (int)(*v13 + v8) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v8);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v14)(v19, v11, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            v30,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v21)(v19, v30, v20);
    goto LABEL_38;
  }
}