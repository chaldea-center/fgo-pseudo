void __fastcall PartyOrganizationConfirmCopyMenu___ctor(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_42B3546 & 1) == 0 )
  {
    sub_B52984(&BaseDialog_TypeInfo);
    byte_42B3546 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmCopyMenu__Callback(
        PartyOrganizationConfirmCopyMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  PartyOrganizationConfirmCopyMenu_CallbackFunc_o *v9; // x19
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B52920(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmCopyMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmCopyMenu__Close(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmCopyMenu__Close_31209804(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmCopyMenu__Close_31209804(
        PartyOrganizationConfirmCopyMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_42B3543 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&Method_PartyOrganizationConfirmCopyMenu_EndClose__);
    byte_42B3543 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationConfirmCopyMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall PartyOrganizationConfirmCopyMenu__EndClose(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
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

  PartyOrganizationConfirmCopyMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B52920(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmCopyMenu__EndOpen(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationConfirmCopyMenu__Init(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_42B3541 & 1) == 0 )
  {
    sub_B52984(&StringLiteral_1/*""*/);
    byte_42B3541 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL) )
  {
    sub_B52A5C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmCopyMenu__OnClickCancel(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B3545 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3545 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    PartyOrganizationConfirmCopyMenu__Callback(this, 0, v3);
  }
}


void __fastcall PartyOrganizationConfirmCopyMenu__OnClickDecide(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_42B3544 & 1) == 0 )
  {
    sub_B52984(&SoundManager_TypeInfo);
    byte_42B3544 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(8, 0LL);
    PartyOrganizationConfirmCopyMenu__Callback(this, 1, v3);
  }
}


void __fastcall PartyOrganizationConfirmCopyMenu__Open(
        PartyOrganizationConfirmCopyMenu_o *this,
        int32_t kind,
        PartyListViewItem_o *basePartyItem,
        PartyListViewItem_o *editPartyItem,
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  UILabel_o *baseDeckTitleLabel; // x21
  UILabel_o *editDeckTitleLabel; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *v22; // x20
  System_Action_o *v23; // x20
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_42B3542 & 1) == 0 )
  {
    sub_B52984(&System_Action_TypeInfo);
    sub_B52984(&AndroidBackKeyManager_TypeInfo);
    sub_B52984(&LocalizationManager_TypeInfo);
    sub_B52984(&Method_PartyOrganizationConfirmCopyMenu_EndOpen__);
    sub_B52984(&StringLiteral_10296/*"PARTY_ORGANIZATION_CONFIRM_COPY_FROM_PARTY_TITLE"*/);
    sub_B52984(&StringLiteral_10298/*"PARTY_ORGANIZATION_CONFIRM_COPY_TITLE"*/);
    sub_B52984(&StringLiteral_10294/*"PARTY_ORGANIZATION_CONFIRM_COPY_CANCEL"*/);
    sub_B52984(&StringLiteral_10297/*"PARTY_ORGANIZATION_CONFIRM_COPY_MESSAGE"*/);
    sub_B52984(&StringLiteral_10295/*"PARTY_ORGANIZATION_CONFIRM_COPY_DECIDE"*/);
    sub_B52984(&StringLiteral_10299/*"PARTY_ORGANIZATION_CONFIRM_COPY_TO_PARTY_TITLE"*/);
    byte_42B3542 = 1;
  }
  state = this->fields.state;
  if ( state != 4 )
  {
    if ( state == 3 )
    {
      this->fields.callbackFunc = callback;
      p_callbackFunc = &this->fields.callbackFunc;
      sub_B52920(
        (BattleServantConfConponent_o *)p_callbackFunc,
        (System_Int32_array **)callback,
        (System_String_array **)basePartyItem,
        (System_String_array **)editPartyItem,
        (System_Boolean_array **)callback,
        (System_Int32_array **)method,
        v6,
        v7);
      *((_DWORD *)p_callbackFunc - 2) = 2;
      return;
    }
    if ( state )
      return;
  }
  this->fields.callbackFunc = callback;
  sub_B52920(
    (BattleServantConfConponent_o *)&this->fields.callbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)basePartyItem,
    (System_String_array **)editPartyItem,
    (System_Boolean_array **)callback,
    (System_Int32_array **)method,
    v6,
    v7);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !gameObject )
    goto LABEL_32;
  UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
  if ( !gameObject )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
    gameObject,
    0LL,
    1LL,
    gameObject->klass[1]._1.interfaceOffsets);
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_32;
  ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
    gameObject,
    0LL,
    1LL,
    gameObject->klass[1]._1.interfaceOffsets);
  gameObject = (UnityEngine_GameObject_o *)this->fields.baseDeckObject;
  if ( !gameObject )
    goto LABEL_32;
  DeckListViewItemDraw__SetItem_16897324((DeckListViewItemDraw_o *)gameObject, basePartyItem, 2, 0LL);
  gameObject = (UnityEngine_GameObject_o *)this->fields.editDeckObject;
  if ( !gameObject )
    goto LABEL_32;
  DeckListViewItemDraw__SetItem_16897324((DeckListViewItemDraw_o *)gameObject, editPartyItem, 2, 0LL);
  baseDeckTitleLabel = this->fields.baseDeckTitleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10296/*"PARTY_ORGANIZATION_CONFIRM_COPY_FROM_PARTY_TITLE"*/, 0LL);
  if ( !baseDeckTitleLabel )
    goto LABEL_32;
  UILabel__set_text(baseDeckTitleLabel, (System_String_o *)gameObject, 0LL);
  editDeckTitleLabel = this->fields.editDeckTitleLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10299/*"PARTY_ORGANIZATION_CONFIRM_COPY_TO_PARTY_TITLE"*/, 0LL);
  if ( !editDeckTitleLabel )
    goto LABEL_32;
  UILabel__set_text(editDeckTitleLabel, (System_String_o *)gameObject, 0LL);
  if ( kind )
    goto LABEL_25;
  titleLabel = this->fields.titleLabel;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10298/*"PARTY_ORGANIZATION_CONFIRM_COPY_TITLE"*/, 0LL);
  if ( !titleLabel )
    goto LABEL_32;
  UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
  messageLabel = this->fields.messageLabel;
  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10297/*"PARTY_ORGANIZATION_CONFIRM_COPY_MESSAGE"*/, 0LL);
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL),
        decideLabel = this->fields.decideLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10295/*"PARTY_ORGANIZATION_CONFIRM_COPY_DECIDE"*/, 0LL),
        !decideLabel)
    || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
        cancelLabel = this->fields.cancelLabel,
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10294/*"PARTY_ORGANIZATION_CONFIRM_COPY_CANCEL"*/, 0LL),
        !cancelLabel) )
  {
LABEL_32:
    sub_B52A5C(gameObject, v15);
  }
  UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
LABEL_25:
  gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
  if ( !gameObject )
    goto LABEL_32;
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
  if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
  }
  AndroidBackKeyManager__AddBackBtn(v22, 0LL);
  this->fields.state = 1;
  v23 = (System_Action_o *)sub_B52A54(System_Action_TypeInfo);
  System_Action___ctor(v23, (Il2CppObject *)this, Method_PartyOrganizationConfirmCopyMenu_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v23, 0, 0LL);
}


void __fastcall PartyOrganizationConfirmCopyMenu__add_callbackFunc(
        PartyOrganizationConfirmCopyMenu_o *this,
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmCopyMenu_o *v11; // x0
  PartyOrganizationConfirmCopyMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_42B353F & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo);
    byte_42B353F = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmCopyMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  PartyOrganizationConfirmCopyMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationConfirmCopyMenu__remove_callbackFunc(
        PartyOrganizationConfirmCopyMenu_o *this,
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmCopyMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_42B3540 & 1) == 0 )
  {
    sub_B52984(&PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo);
    byte_42B3540 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmCopyMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B4739C(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B52D50(v8);
  PartyOrganizationConfirmCopyMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmCopyMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *this,
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
  sub_B52920(p_method);
}


System_IAsyncResult_o *__fastcall PartyOrganizationConfirmCopyMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_42AD40B & 1) == 0 )
  {
    sub_B52984(&bool_TypeInfo);
    byte_42AD40B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B52928(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmCopyMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5292C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmCopyMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  PartyOrganizationConfirmCopyMenu_CallbackFunc_o **v8; // x25
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
  PartyOrganizationConfirmCopyMenu_CallbackFunc_o *v20; // x8
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
  PartyOrganizationConfirmCopyMenu_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (PartyOrganizationConfirmCopyMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B52A40(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B529B4(v22) & 1) == 0 )
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
      v24 = sub_B529AC(v22);
      v25 = sub_B52DB0(v22);
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
            v18 = sub_AEB880(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B52A34(v17, v22);
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
            v16 = sub_AEB880(v21, class_0, v10, v12);
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