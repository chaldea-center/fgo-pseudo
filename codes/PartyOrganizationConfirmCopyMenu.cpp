void PartyOrganizationConfirmCopyMenu___ctor(PartyOrganizationConfirmCopyMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BF9C & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596BF9C = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmCopyMenu__Callback(
        PartyOrganizationConfirmCopyMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o *v9; // x20
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, (System_String_o *)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void PartyOrganizationConfirmCopyMenu__Close(PartyOrganizationConfirmCopyMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationConfirmCopyMenu__Close_40915880(this, 0, v2);
}


void PartyOrganizationConfirmCopyMenu__Close_40915880(
        PartyOrganizationConfirmCopyMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_596BF99 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationConfirmCopyMenu_EndClose__);
    byte_596BF99 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_2213CCC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_PartyOrganizationConfirmCopyMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void PartyOrganizationConfirmCopyMenu__EndClose(PartyOrganizationConfirmCopyMenu_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationConfirmCopyMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_2213A04(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void PartyOrganizationConfirmCopyMenu__EndOpen(PartyOrganizationConfirmCopyMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationConfirmCopyMenu__Init(PartyOrganizationConfirmCopyMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_596BF97 & 1) == 0 )
  {
    sub_2213A60(&StringLiteral_1/*""*/);
    byte_596BF97 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0) )
  {
    sub_2213CDC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PartyOrganizationConfirmCopyMenu__OnClickCancel(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596BF9B & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationConfirmCopyMenu_OnClickCancel__);
    byte_596BF9B = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmCopyMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmCopyMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationConfirmCopyMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    PartyOrganizationConfirmCopyMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationConfirmCopyMenu__OnClickDecide(
        PartyOrganizationConfirmCopyMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_596BF9A & 1) == 0 )
  {
    sub_2213A60(&Method_PartyOrganizationConfirmCopyMenu_OnClickDecide__);
    byte_596BF9A = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationConfirmCopyMenu_OnClickDecide__;
    if ( (*((_BYTE *)Method_PartyOrganizationConfirmCopyMenu_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_PartyOrganizationConfirmCopyMenu_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    PartyOrganizationConfirmCopyMenu__Callback(this, 1, v5);
  }
}


void PartyOrganizationConfirmCopyMenu__Open(
        PartyOrganizationConfirmCopyMenu_o *this,
        int32_t kind,
        PartyListViewItem_o *basePartyItem,
        PartyListViewItem_o *editPartyItem,
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x2
  UILabel_o *baseDeckTitleLabel; // x21
  UILabel_o *editDeckTitleLabel; // x21
  __int64 v20; // x2
  UILabel_o *titleLabel; // x20
  UILabel_o *messageLabel; // x20
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  UnityEngine_GameObject_o *v25; // x0
  System_Action_o *v26; // x20
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o **p_callbackFunc; // x19

  if ( (byte_596BF98 & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&Method_PartyOrganizationConfirmCopyMenu_EndOpen__);
    sub_2213A60(&StringLiteral_10535/*"PARTY_ORGANIZATION_CONFIRM_COPY_FROM_PARTY_TITLE"*/);
    sub_2213A60(&StringLiteral_10537/*"PARTY_ORGANIZATION_CONFIRM_COPY_TITLE"*/);
    sub_2213A60(&StringLiteral_10533/*"PARTY_ORGANIZATION_CONFIRM_COPY_CANCEL"*/);
    sub_2213A60(&StringLiteral_10536/*"PARTY_ORGANIZATION_CONFIRM_COPY_MESSAGE"*/);
    sub_2213A60(&StringLiteral_10534/*"PARTY_ORGANIZATION_CONFIRM_COPY_DECIDE"*/);
    sub_2213A60(&StringLiteral_10538/*"PARTY_ORGANIZATION_CONFIRM_COPY_TO_PARTY_TITLE"*/);
    byte_596BF98 = 1;
  }
  state = this->fields.state;
  switch ( state )
  {
    case 4:
LABEL_6:
      this->fields.callbackFunc = callback;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
        (int32_t)callback,
        (System_String_o *)basePartyItem,
        (System_String_o *)editPartyItem,
        (int32_t)callback,
        (int32_t)method,
        v6,
        v7);
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
      if ( gameObject )
      {
        UnityEngine_GameObject__SetActive(gameObject, 1, 0);
        gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
        if ( gameObject )
        {
          ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
            gameObject,
            0,
            1,
            gameObject->klass[1]._1.implementedInterfaces);
          gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
          if ( gameObject )
          {
            ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
              gameObject,
              0,
              1,
              gameObject->klass[1]._1.implementedInterfaces);
            gameObject = (UnityEngine_GameObject_o *)this->fields.baseDeckObject;
            if ( gameObject )
            {
              DeckListViewItemDraw__SetItem_40736472((DeckListViewItemDraw_o *)gameObject, basePartyItem, 2, 0);
              gameObject = (UnityEngine_GameObject_o *)this->fields.editDeckObject;
              if ( gameObject )
              {
                DeckListViewItemDraw__SetItem_40736472((DeckListViewItemDraw_o *)gameObject, editPartyItem, 2, 0);
                baseDeckTitleLabel = this->fields.baseDeckTitleLabel;
                if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                  j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v16, v17);
                gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                           (System_String_o *)StringLiteral_10535/*"PARTY_ORGANIZATION_CONFIRM_COPY_FROM_PARTY_TITLE"*/,
                                                           0);
                if ( baseDeckTitleLabel )
                {
                  UILabel__set_text(baseDeckTitleLabel, (System_String_o *)gameObject, 0);
                  editDeckTitleLabel = this->fields.editDeckTitleLabel;
                  gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                             (System_String_o *)StringLiteral_10538/*"PARTY_ORGANIZATION_CONFIRM_COPY_TO_PARTY_TITLE"*/,
                                                             0);
                  if ( editDeckTitleLabel )
                  {
                    UILabel__set_text(editDeckTitleLabel, (System_String_o *)gameObject, 0);
                    if ( !kind )
                    {
                      titleLabel = this->fields.titleLabel;
                      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
                        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v20);
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_10537/*"PARTY_ORGANIZATION_CONFIRM_COPY_TITLE"*/,
                                                                 0);
                      if ( !titleLabel )
                        goto LABEL_27;
                      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
                      messageLabel = this->fields.messageLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_10536/*"PARTY_ORGANIZATION_CONFIRM_COPY_MESSAGE"*/,
                                                                 0);
                      if ( !messageLabel )
                        goto LABEL_27;
                      UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0);
                      decideLabel = this->fields.decideLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_10534/*"PARTY_ORGANIZATION_CONFIRM_COPY_DECIDE"*/,
                                                                 0);
                      if ( !decideLabel )
                        goto LABEL_27;
                      UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0);
                      cancelLabel = this->fields.cancelLabel;
                      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get(
                                                                 (System_String_o *)StringLiteral_10533/*"PARTY_ORGANIZATION_CONFIRM_COPY_CANCEL"*/,
                                                                 0);
                      if ( !cancelLabel )
                        goto LABEL_27;
                      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
                    }
                    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
                    if ( gameObject )
                    {
                      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
                      AndroidBackKeyManager__AddBackBtn(v25, 0);
                      this->fields.state = 1;
                      v26 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
                      System_Action___ctor(
                        v26,
                        (Il2CppObject *)this,
                        Method_PartyOrganizationConfirmCopyMenu_EndOpen__,
                        0);
                      BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0, 0);
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
      sub_2213CDC(gameObject, v15);
    case 3:
      this->fields.callbackFunc = callback;
      p_callbackFunc = &this->fields.callbackFunc;
      sub_2213A04(
        (MissionNaviTransitionBoardItem_o *)p_callbackFunc,
        (int32_t)callback,
        (System_String_o *)basePartyItem,
        (System_String_o *)editPartyItem,
        (int32_t)callback,
        (int32_t)method,
        v6,
        v7);
      *((_DWORD *)p_callbackFunc - 2) = 2;
      break;
    case 0:
      goto LABEL_6;
  }
}


void PartyOrganizationConfirmCopyMenu__add_callbackFunc(
        PartyOrganizationConfirmCopyMenu_o *this,
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationConfirmCopyMenu_o *v13; // x0
  PartyOrganizationConfirmCopyMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BF95 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo);
    byte_596BF95 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmCopyMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationConfirmCopyMenu_o *)sub_221405C(
                                                v8,
                                                PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo,
                                                v9,
                                                v10);
  PartyOrganizationConfirmCopyMenu__remove_callbackFunc(v13, v14, v15);
}


void PartyOrganizationConfirmCopyMenu__remove_callbackFunc(
        PartyOrganizationConfirmCopyMenu_o *this,
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationConfirmCopyMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  PartyOrganizationConfirmCopyMenu_o *v13; // x0
  const MethodInfo *v14; // x1

  if ( (byte_596BF96 & 1) == 0 )
  {
    sub_2213A60(&PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo);
    byte_596BF96 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationConfirmCopyMenu_CallbackFunc_c *)v8->klass != PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo )
        break;
    }
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (PartyOrganizationConfirmCopyMenu_o *)sub_221405C(
                                                v8,
                                                PartyOrganizationConfirmCopyMenu_CallbackFunc_TypeInfo,
                                                v9,
                                                v10);
  PartyOrganizationConfirmCopyMenu__Init(v13, v14);
}


void PartyOrganizationConfirmCopyMenu_CallbackFunc___ctor(
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    (System_String_o *)method,
    (System_String_o *)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_2213B38(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_2213CF8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_2213BA0(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_20043C8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2004380;
}


System_IAsyncResult_o *PartyOrganizationConfirmCopyMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_5984328, v10);
  return sub_2213A14(this, v9, callback, object);
}


void PartyOrganizationConfirmCopyMenu_CallbackFunc__EndInvoke(
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
}


void PartyOrganizationConfirmCopyMenu_CallbackFunc__Invoke(
        PartyOrganizationConfirmCopyMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}