void __fastcall PartyOrganizationConfirmMenu___cctor(const MethodInfo *method)
{
  if ( (byte_438E523 & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationConfirmMenu_TypeInfo);
    byte_438E523 = 1;
  }
  PartyOrganizationConfirmMenu_TypeInfo->static_fields->DETAIL_FONT_SIZE = 30;
  PartyOrganizationConfirmMenu_TypeInfo->static_fields->DETAIL_FONT_SIZE_FRIEND_CHOCOLATE = 20;
}


void __fastcall PartyOrganizationConfirmMenu___ctor(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  if ( (byte_438E522 & 1) == 0 )
  {
    sub_B775C4(&BaseDialog_TypeInfo);
    byte_438E522 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmMenu__Callback(
        PartyOrganizationConfirmMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  PartyOrganizationConfirmMenu_CallbackFunc_o *v9; // x19
  struct PartyOrganizationConfirmMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B77560(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    PartyOrganizationConfirmMenu_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall PartyOrganizationConfirmMenu__Close(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmMenu__Close_31250416(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmMenu__Close_31250416(
        PartyOrganizationConfirmMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_438E51F & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationConfirmMenu_EndClose__);
    byte_438E51F = 1;
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
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationConfirmMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall PartyOrganizationConfirmMenu__EndClose(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
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

  PartyOrganizationConfirmMenu__Init(this, method);
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


void __fastcall PartyOrganizationConfirmMenu__EndOpen(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationConfirmMenu__Init(PartyOrganizationConfirmMenu_o *this, const MethodInfo *method)
{
  UILabel_o *messageLabel; // x0

  if ( (byte_438E51D & 1) == 0 )
  {
    sub_B775C4(&StringLiteral_1/*""*/);
    byte_438E51D = 1;
  }
  messageLabel = this->fields.messageLabel;
  if ( !messageLabel
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (messageLabel = this->fields.cancelLabel) == 0LL) )
  {
    sub_B7769C(messageLabel, method);
  }
  UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmMenu__OnClickCancel(
        PartyOrganizationConfirmMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x2

  if ( (byte_438E521 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E521 = 1;
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
    PartyOrganizationConfirmMenu__Callback(this, 0, v3);
  }
}


void __fastcall PartyOrganizationConfirmMenu__OnClickDecide(
        PartyOrganizationConfirmMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w0
  const MethodInfo *v4; // x2

  if ( (byte_438E520 & 1) == 0 )
  {
    sub_B775C4(&SoundManager_TypeInfo);
    byte_438E520 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    if ( this->fields.kind == 1 )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 8;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      v3 = 0;
    }
    SoundManager__playSystemSe(v3, 0LL);
    PartyOrganizationConfirmMenu__Callback(this, 1, v4);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmMenu__Open(
        PartyOrganizationConfirmMenu_o *this,
        int32_t kind,
        System_String_o *message,
        PartyOrganizationConfirmMenu_CallbackFunc_o *callback,
        bool isFriendChocolate,
        const MethodInfo *method)
{
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  PartyOrganizationConfirmMenu_c *v15; // x0
  int32_t *p_DETAIL_FONT_SIZE_FRIEND_CHOCOLATE; // x8
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v19; // x20

  if ( (byte_438E51E & 1) == 0 )
  {
    sub_B775C4(&System_Action_TypeInfo);
    sub_B775C4(&LocalizationManager_TypeInfo);
    sub_B775C4(&Method_PartyOrganizationConfirmMenu_EndOpen__);
    sub_B775C4(&PartyOrganizationConfirmMenu_TypeInfo);
    sub_B775C4(&StringLiteral_2693/*"BOOST_ITEM_USE_CONFIRM_CANCEL"*/);
    sub_B775C4(&StringLiteral_2694/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/);
    byte_438E51E = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B77560(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      (System_String_array **)message,
      (System_String_array **)callback,
      (System_Boolean_array **)isFriendChocolate,
      (System_Int32_array **)method,
      v6,
      v7);
    this->fields.kind = kind;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( gameObject )
    {
      UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
      if ( this->fields.kind != 1 )
      {
LABEL_22:
        this->fields.state = 1;
        v19 = (System_Action_o *)sub_B77694(System_Action_TypeInfo);
        System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyOrganizationConfirmMenu_EndOpen__, 0LL);
        BaseDialog__Open((BaseDialog_o *)this, v19, 0, 0LL);
        return;
      }
      v15 = PartyOrganizationConfirmMenu_TypeInfo;
      if ( isFriendChocolate )
      {
        if ( (WORD1(PartyOrganizationConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyOrganizationConfirmMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMenu_TypeInfo);
          v15 = PartyOrganizationConfirmMenu_TypeInfo;
        }
        p_DETAIL_FONT_SIZE_FRIEND_CHOCOLATE = &v15->static_fields->DETAIL_FONT_SIZE_FRIEND_CHOCOLATE;
      }
      else
      {
        if ( (WORD1(PartyOrganizationConfirmMenu_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
          && !PartyOrganizationConfirmMenu_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(PartyOrganizationConfirmMenu_TypeInfo);
          v15 = PartyOrganizationConfirmMenu_TypeInfo;
        }
        p_DETAIL_FONT_SIZE_FRIEND_CHOCOLATE = (int32_t *)v15->static_fields;
      }
      WrapControlText__textAdjust(this->fields.messageLabel, message, *p_DETAIL_FONT_SIZE_FRIEND_CHOCOLATE, 0, 0, 0LL);
      decideLabel = this->fields.decideLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2694/*"BOOST_ITEM_USE_CONFIRM_DECIDE"*/, 0LL);
      if ( decideLabel )
      {
        UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
        cancelLabel = this->fields.cancelLabel;
        gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_2693/*"BOOST_ITEM_USE_CONFIRM_CANCEL"*/, 0LL);
        if ( cancelLabel )
        {
          UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
          goto LABEL_22;
        }
      }
    }
    sub_B7769C(gameObject, v14);
  }
}


void __fastcall PartyOrganizationConfirmMenu__add_callbackFunc(
        PartyOrganizationConfirmMenu_o *this,
        PartyOrganizationConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmMenu_o *v11; // x0
  PartyOrganizationConfirmMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_438E51B & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo);
    byte_438E51B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  PartyOrganizationConfirmMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall PartyOrganizationConfirmMenu__remove_callbackFunc(
        PartyOrganizationConfirmMenu_o *this,
        PartyOrganizationConfirmMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationConfirmMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_438E51C & 1) == 0 )
  {
    sub_B775C4(&PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo);
    byte_438E51C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B6BFDC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B77990(v8);
  PartyOrganizationConfirmMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
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


System_IAsyncResult_o *__fastcall PartyOrganizationConfirmMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_438A0B5 & 1) == 0 )
  {
    sub_B775C4(&bool_TypeInfo);
    byte_438A0B5 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback);
  return (System_IAsyncResult_o *)sub_B77568(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B7756C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  PartyOrganizationConfirmMenu_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  PartyOrganizationConfirmMenu_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  PartyOrganizationConfirmMenu_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (PartyOrganizationConfirmMenu_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B77680(*(_QWORD *)&v18->fields.extra_arg, result);
      if ( (sub_B775F4(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B775EC(v20);
      v23 = sub_B779F0(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_B0F4C0(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B77674(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_B0F4C0(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}