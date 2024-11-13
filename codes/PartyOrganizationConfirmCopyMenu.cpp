void __fastcall PartyOrganizationConfirmCopyMenu___ctor(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B11EF2 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B11EF2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmCopyMenu__Callback(
        PartyOrganizationConfirmCopyMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o **p_callbackFunc; // x0
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o *v4; // x20
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v4 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_1BCA784(p_callbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      result,
      *(_QWORD *)&v4->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationConfirmCopyMenu__Close(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmCopyMenu__Close_32547860(this, 0LL, v2);
}


void __fastcall PartyOrganizationConfirmCopyMenu__Close_32547860(
        PartyOrganizationConfirmCopyMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x3
  System_Action_o *v10; // x20

  if ( (byte_4B11EEF & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_PartyOrganizationConfirmCopyMenu_EndClose__, v5, v6);
    byte_4B11EEF = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCA784(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v7, v8, v9);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationConfirmCopyMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
}


void __fastcall PartyOrganizationConfirmCopyMenu__EndClose(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmCopyMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_1BCA784(p_closeCallbackFunc, 0LL);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v4->fields.m_target)(
      v4->fields.original_method_info,
      *(_QWORD *)&v4->fields.extra_arg);
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
  __int64 v2; // x2
  UILabel_o *titleLabel; // x0

  if ( (byte_4B11EED & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B11EED = 1;
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
    sub_1BCAA3C(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationConfirmCopyMenu__OnClickCancel(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11EF1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationConfirmCopyMenu_OnClickCancel__, method, v2);
    byte_4B11EF1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationConfirmCopyMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmCopyMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationConfirmCopyMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
    PartyOrganizationConfirmCopyMenu__Callback(this, 0, v6);
  }
}


void __fastcall PartyOrganizationConfirmCopyMenu__OnClickDecide(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  const MethodInfo *v6; // x2

  if ( (byte_4B11EF0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_PartyOrganizationConfirmCopyMenu_OnClickDecide__, method, v2);
    byte_4B11EF0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v4 = Method_PartyOrganizationConfirmCopyMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmCopyMenu_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_PartyOrganizationConfirmCopyMenu_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8, 0LL);
    PartyOrganizationConfirmCopyMenu__Callback(this, 1, v6);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationConfirmCopyMenu__Open(
        PartyOrganizationConfirmCopyMenu_o *this,
        int32_t kind,
        PartyListViewItem_o *basePartyItem,
        PartyListViewItem_o *editPartyItem,
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v29; // x1
  __int64 v30; // x1
  UILabel_o *baseDeckTitleLabel; // x21
  UILabel_o *editDeckTitleLabel; // x21
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *v37; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x3
  System_Action_o *v41; // x20
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_4B11EEE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, *(_QWORD *)&kind, basePartyItem);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_PartyOrganizationConfirmCopyMenu_EndOpen__, v13, v14);
    sub_1BCA7E0(&StringLiteral_10282/*"PARTY_ORGANIZATION_CONFIRM_COPY_FROM_PARTY_TITLE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_10284/*"PARTY_ORGANIZATION_CONFIRM_COPY_TITLE"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_10280/*"PARTY_ORGANIZATION_CONFIRM_COPY_CANCEL"*/, v19, v20);
    sub_1BCA7E0(&StringLiteral_10283/*"PARTY_ORGANIZATION_CONFIRM_COPY_MESSAGE"*/, v21, v22);
    sub_1BCA7E0(&StringLiteral_10281/*"PARTY_ORGANIZATION_CONFIRM_COPY_DECIDE"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_10285/*"PARTY_ORGANIZATION_CONFIRM_COPY_TO_PARTY_TITLE"*/, v25, v26);
    byte_4B11EEE = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 4:
LABEL_6:
      this->fields.callbackFunc = callback;
      sub_1BCA784(&this->fields.callbackFunc, callback);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
            gameObject,
            0LL,
            1LL,
            gameObject->klass[1]._1.interfaceOffsets);
          gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
          if ( gameObject )
          {
            ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
              gameObject,
              0LL,
              1LL,
              gameObject->klass[1]._1.interfaceOffsets);
            gameObject = (UnityEngine_GameObject_o *)this->fields.baseDeckObject;
            if ( gameObject )
            {
              DeckListViewItemDraw__SetItem_32397232((DeckListViewItemDraw_o *)gameObject, basePartyItem, 2, 0LL);
              gameObject = (UnityEngine_GameObject_o *)this->fields.editDeckObject;
              if ( gameObject )
              {
                DeckListViewItemDraw__SetItem_32397232((DeckListViewItemDraw_o *)gameObject, editPartyItem, 2, 0LL);
                baseDeckTitleLabel = this->fields.baseDeckTitleLabel;
                if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v30);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_10282/*"PARTY_ORGANIZATION_CONFIRM_COPY_FROM_PARTY_TITLE"*/,
                                                           0LL);
                if ( baseDeckTitleLabel )
                {
                  UILabel__set_text(baseDeckTitleLabel, (System_String_o *)gameObject, 0LL);
                  editDeckTitleLabel = this->fields.editDeckTitleLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_10285/*"PARTY_ORGANIZATION_CONFIRM_COPY_TO_PARTY_TITLE"*/,
                                                             0LL);
                  if ( editDeckTitleLabel )
                  {
                    UILabel__set_text(editDeckTitleLabel, (System_String_o *)gameObject, 0LL);
                    if ( !kind )
                    {
                      titleLabel = this->fields.titleLabel;
                      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v29);
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_10284/*"PARTY_ORGANIZATION_CONFIRM_COPY_TITLE"*/,
                                                                 0LL);
                      if ( !titleLabel )
                        goto LABEL_27;
                      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
                      messageLabel = this->fields.messageLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_10283/*"PARTY_ORGANIZATION_CONFIRM_COPY_MESSAGE"*/,
                                                                 0LL);
                      if ( !messageLabel )
                        goto LABEL_27;
                      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL);
                      decideLabel = this->fields.decideLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_10281/*"PARTY_ORGANIZATION_CONFIRM_COPY_DECIDE"*/,
                                                                 0LL);
                      if ( !decideLabel )
                        goto LABEL_27;
                      UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL);
                      cancelLabel = this->fields.cancelLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_10280/*"PARTY_ORGANIZATION_CONFIRM_COPY_CANCEL"*/,
                                                                 0LL);
                      if ( !cancelLabel )
                        goto LABEL_27;
                      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
                    }
                    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                    if ( gameObject )
                    {
                      v37 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
                      AndroidBackKeyManager__AddBackBtn(v37, 0LL);
                      this->fields.state = 1;
                      v41 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v38, v39, v40);
                      System_Action___ctor(
                        v41,
                        (Il2CppObject *)this,
                        Method_PartyOrganizationConfirmCopyMenu_EndOpen__,
                        0LL);
                      BaseDialog__Open((BaseDialog_o *)this, v41, 0, 0LL);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_27:
      sub_1BCAA3C(gameObject, v29);
    case 3:
      this->fields.callbackFunc = callback;
      p_callbackFunc = &this->fields.callbackFunc;
      sub_1BCA784(p_callbackFunc, callback);
      *((_DWORD *)p_callbackFunc - 2) = 2;
      break;
    case 0:
      goto LABEL_6;
  }
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

  if ( (byte_4B11EEB & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11EEB = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmCopyMenu_o *)sub_1BCACFC(v8);
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

  if ( (byte_4B11EEC & 1) == 0 )
  {
    sub_1BCA7E0(&PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo, value, method);
    byte_4B11EEC = 1;
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
    v9 = sub_1C05CD0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationConfirmCopyMenu_o *)sub_1BCACFC(v8);
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
  __int64 v6; // x21
  int v8; // w22
  struct System_Reflection_MethodInfo_o *v9; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v6 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v4;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(&this->fields.method, object);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A0717C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07134;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationConfirmCopyMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B11EF3 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, result, callback);
    byte_4B11EF3 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall PartyOrganizationConfirmCopyMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
}


void __fastcall PartyOrganizationConfirmCopyMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}