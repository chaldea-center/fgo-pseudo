void __fastcall SelectMyServantOrNpcDialog___ctor(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  if ( (byte_438C450 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438C450 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectMyServantOrNpcDialog__Callback(
        SelectMyServantOrNpcDialog_o *this,
        int32_t result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  SelectMyServantOrNpcDialog_CallbackFunc_o *v9; // x20
  struct SelectMyServantOrNpcDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    SelectMyServantOrNpcDialog_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall SelectMyServantOrNpcDialog__Close(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  SelectMyServantOrNpcDialog__Close_27386520(this, 0LL, v2);
}


void __fastcall SelectMyServantOrNpcDialog__Close_27386520(
        SelectMyServantOrNpcDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438C44C & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_SelectMyServantOrNpcDialog_EndClose__);
    byte_438C44C = 1;
  }
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
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_SelectMyServantOrNpcDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall SelectMyServantOrNpcDialog__EndClose(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  SelectMyServantOrNpcDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B77560(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall SelectMyServantOrNpcDialog__EndOpen(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall SelectMyServantOrNpcDialog__Init(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_438C44A & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438C44A = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
  {
    sub_B7769C(titleLabel, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall SelectMyServantOrNpcDialog__OnClickCancel(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438C44F & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438C44F = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    SelectMyServantOrNpcDialog__Callback(this, 2, v3);
  }
}


void __fastcall SelectMyServantOrNpcDialog__OnClickMyServant(
        SelectMyServantOrNpcDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438C44D & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438C44D = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SelectMyServantOrNpcDialog__Callback(this, 0, v3);
  }
}


void __fastcall SelectMyServantOrNpcDialog__OnClickNpc(SelectMyServantOrNpcDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438C44E & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438C44E = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    SelectMyServantOrNpcDialog__Callback(this, 1, v3);
  }
}


void __fastcall SelectMyServantOrNpcDialog__Open(
        SelectMyServantOrNpcDialog_o *this,
        System_String_o *name,
        SelectMyServantOrNpcDialog_CallbackFunc_o *callback,
        bool canMaskTouchClose,
        bool isSelectableSupport,
        bool isNotIndividuality,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  System_String_array **v15; // x2
  System_String_array **v16; // x3
  System_Boolean_array **v17; // x4
  System_Int32_array **v18; // x5
  System_Int32_array *v19; // x6
  System_Int32_array *v20; // x7
  UnityEngine_Object_o *titleLabel; // x24
  UILabel_o *v22; // x24
  UnityEngine_Object_o *messageLabel; // x24
  UILabel_o *v24; // x24
  __int64 *v25; // x8
  System_String_o *v26; // x0
  UnityEngine_Object_o *closeBtnLabel; // x21
  UILabel_o *v28; // x21
  UnityEngine_Object_o *myServantBtnLabel; // x21
  UILabel_o *v30; // x21
  UnityEngine_Object_o *npcBtnLabel; // x21
  UILabel_o *v32; // x21
  UnityEngine_GameObject_o *closeBtn; // x20
  System_Action_o *v34; // x20

  if ( (byte_438C44B & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&AndroidBackKeyManager_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&UnityEngine_Object_TypeInfo);
    sub_B775C4(&Method_SelectMyServantOrNpcDialog_EndOpen__);
    sub_B775C4(&StringLiteral_10606/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_MESSAGE"*/);
    sub_B775C4(&StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_10603/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MY_SERVANT_BUTTON"*/);
    sub_B775C4(&StringLiteral_10602/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MESSAGE"*/);
    sub_B775C4(&StringLiteral_10604/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_NPC_BUTTON"*/);
    sub_B775C4(&StringLiteral_10607/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_FREE_DIALOG_MESSAGE"*/);
    sub_B775C4(&StringLiteral_10605/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_TITLE"*/);
    byte_438C44B = 1;
  }
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_65;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  this->fields.callbackFunc = callback;
  sub_B77560(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    v15,
    v16,
    v17,
    v18,
    v19,
    v20);
  this->fields.state = 1;
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    v22 = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10605/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_TITLE"*/, 0LL);
    if ( !v22 )
      goto LABEL_65;
    UILabel__set_text(v22, (System_String_o *)gameObject, 0LL);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    v24 = this->fields.messageLabel;
    if ( isSelectableSupport )
    {
      if ( isNotIndividuality )
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = &StringLiteral_10607/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_FREE_DIALOG_MESSAGE"*/;
      }
      else
      {
        if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !LocalizationManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        }
        v25 = &StringLiteral_10606/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_SUPPORT_DIALOG_MESSAGE"*/;
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)*v25, 0LL);
      if ( !v24 )
        goto LABEL_65;
    }
    else
    {
      if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      v26 = LocalizationManager__Get((System_String_o *)StringLiteral_10602/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MESSAGE"*/, 0LL);
      gameObject = (UnityEngine_GameObject_o *)System_String__Format(v26, (Il2CppObject *)name, 0LL);
      if ( !v24 )
        goto LABEL_65;
    }
    UILabel__set_text(v24, (System_String_o *)gameObject, 0LL);
  }
  closeBtnLabel = (UnityEngine_Object_o *)this->fields.closeBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(closeBtnLabel, 0LL, 0LL) )
  {
    v28 = this->fields.closeBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3386/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
    if ( !v28 )
      goto LABEL_65;
    UILabel__set_text(v28, (System_String_o *)gameObject, 0LL);
  }
  myServantBtnLabel = (UnityEngine_Object_o *)this->fields.myServantBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(myServantBtnLabel, 0LL, 0LL) )
  {
    v30 = this->fields.myServantBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10603/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_MY_SERVANT_BUTTON"*/, 0LL);
    if ( !v30 )
      goto LABEL_65;
    UILabel__set_text(v30, (System_String_o *)gameObject, 0LL);
  }
  npcBtnLabel = (UnityEngine_Object_o *)this->fields.npcBtnLabel;
  if ( (BYTE3(UnityEngine_Object_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !UnityEngine_Object_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  }
  if ( UnityEngine_Object__op_Inequality(npcBtnLabel, 0LL, 0LL) )
  {
    v32 = this->fields.npcBtnLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10604/*"PARTY_ORGANIZATION_SERVANT_SELECT_MY_SERVANT_OR_NPC_DAIALOG_NPC_BUTTON"*/, 0LL);
    if ( v32 )
    {
      UILabel__set_text(v32, (System_String_o *)gameObject, 0LL);
      goto LABEL_61;
    }
LABEL_65:
    sub_B7769C(gameObject, v14);
  }
LABEL_61:
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  closeBtn = this->fields.closeBtn;
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(closeBtn, 0LL);
  v34 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
  System_Action___ctor(v34, (Il2CppObject *)this, Method_SelectMyServantOrNpcDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v34, 0, 0LL);
}


void __fastcall SelectMyServantOrNpcDialog__add_callbackFunc(
        SelectMyServantOrNpcDialog_o *this,
        SelectMyServantOrNpcDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SelectMyServantOrNpcDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SelectMyServantOrNpcDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SelectMyServantOrNpcDialog_o *v11; // x0
  SelectMyServantOrNpcDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438C448 & 1) == 0 )
  {
    sub_B775C4(&SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo);
    byte_438C448 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SelectMyServantOrNpcDialog_CallbackFunc_c *)v8->klass != SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectMyServantOrNpcDialog_o *)sub_B77990(v8);
  SelectMyServantOrNpcDialog__remove_callbackFunc(v11, v12, v13);
}


void __fastcall SelectMyServantOrNpcDialog__remove_callbackFunc(
        SelectMyServantOrNpcDialog_o *this,
        SelectMyServantOrNpcDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct SelectMyServantOrNpcDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct SelectMyServantOrNpcDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  SelectMyServantOrNpcDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438C449 & 1) == 0 )
  {
    sub_B775C4(&SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo);
    byte_438C449 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SelectMyServantOrNpcDialog_CallbackFunc_c *)v8->klass != SelectMyServantOrNpcDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (SelectMyServantOrNpcDialog_o *)sub_B77990(v8);
  SelectMyServantOrNpcDialog__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectMyServantOrNpcDialog_CallbackFunc___ctor(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
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
  sub_B77560(p_method);
}


System_IAsyncResult_o *__fastcall SelectMyServantOrNpcDialog_CallbackFunc__BeginInvoke(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        int32_t result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = result;
  if ( (byte_43887EB & 1) == 0 )
  {
    sub_B775C4(&SelectMyServantOrNpcDialog_ResultClicked_TypeInfo);
    byte_43887EB = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(SelectMyServantOrNpcDialog_ResultClicked_TypeInfo, &v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall SelectMyServantOrNpcDialog_CallbackFunc__EndInvoke(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SelectMyServantOrNpcDialog_CallbackFunc__Invoke(
        SelectMyServantOrNpcDialog_CallbackFunc_o *this,
        int32_t result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v5; // x24
  SelectMyServantOrNpcDialog_CallbackFunc_o **v6; // x25
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
  SelectMyServantOrNpcDialog_CallbackFunc_o *v18; // x8
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
  SelectMyServantOrNpcDialog_CallbackFunc_o *v31; // [xsp+8h] [xbp-48h] BYREF

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
    v6 = (SelectMyServantOrNpcDialog_CallbackFunc_o **)(v3 + 32);
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