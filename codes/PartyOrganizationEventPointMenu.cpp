void PartyOrganizationEventPointMenu___ctor(PartyOrganizationEventPointMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CE9FA2 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE9FA2 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void PartyOrganizationEventPointMenu__Callback(
        PartyOrganizationEventPointMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct PartyOrganizationEventPointMenu_CallbackFunc_o *v9; // x20
  struct PartyOrganizationEventPointMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, (int32_t)method, v3, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      result,
      v9->fields.method);
  }
}


void PartyOrganizationEventPointMenu__Close(PartyOrganizationEventPointMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationEventPointMenu__Close_34635608(this, 0, v2);
}


void PartyOrganizationEventPointMenu__Close_34635608(
        PartyOrganizationEventPointMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4CE9F9F & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationEventPointMenu_EndClose__);
    byte_4CE9F9F = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    (int32_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v10 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_PartyOrganizationEventPointMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0);
}


void PartyOrganizationEventPointMenu__EndClose(PartyOrganizationEventPointMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  System_String_o *v5; // x4
  int32_t v6; // w5
  int64_t v7; // x6
  System_String_o *v8; // x7
  GrandQuestFolderBoardItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationEventPointMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C7BA8C(p_closeCallbackFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void PartyOrganizationEventPointMenu__EndOpen(PartyOrganizationEventPointMenu_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void PartyOrganizationEventPointMenu__Init(PartyOrganizationEventPointMenu_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  struct PartyOrganizationEventPointListViewManager_o *eventPointListViewManager; // x20
  int32_t v5; // w2
  int32_t v6; // w3
  System_String_o *v7; // x4
  int32_t v8; // w5
  int64_t v9; // x6
  System_String_o *v10; // x7

  if ( (byte_4CE9F9D & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_1/*""*/);
    byte_4CE9F9D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.annotationLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0), (titleLabel = this->fields.closeLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (eventPointListViewManager = this->fields.eventPointListViewManager) == 0) )
  {
LABEL_9:
    sub_1C7BD40(titleLabel, method);
  }
  ListViewManager__DestroyList((ListViewManager_o *)this->fields.eventPointListViewManager, 0);
  eventPointListViewManager->fields.eventMargeUpValInfoList = 0;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&eventPointListViewManager->fields.eventMargeUpValInfoList,
    0,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void PartyOrganizationEventPointMenu__OnClickCancel(PartyOrganizationEventPointMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4CE9FA0 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_PartyOrganizationEventPointMenu_OnClickCancel__);
    byte_4CE9FA0 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationEventPointMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationEventPointMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_PartyOrganizationEventPointMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    PartyOrganizationEventPointMenu__Callback(this, 0, v5);
  }
}


void PartyOrganizationEventPointMenu__Open(
        PartyOrganizationEventPointMenu_o *this,
        EventUpValSetupInfo_o *setupInfo,
        PartyListViewItem_o *partyItem,
        PartyOrganizationEventPointMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *annotationLabel; // x21
  UILabel_o *closeLabel; // x21
  bool IsDuplicateEventBonus; // w21
  float v17; // s0
  const MethodInfo *v18; // x2
  System_Action_o *v19; // x20

  if ( (byte_4CE9F9E & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&Method_PartyOrganizationEventPointMenu_EndOpen__);
    sub_1C7BAE8(&StringLiteral_10259/*"PARTY_ORGANIZATION_EVENT_MEMBER_ANNOTATION"*/);
    sub_1C7BAE8(&StringLiteral_10260/*"PARTY_ORGANIZATION_EVENT_MEMBER_CLOSE"*/);
    sub_1C7BAE8(&StringLiteral_10266/*"PARTY_ORGANIZATION_EVENT_MEMBER_TITLE"*/);
    byte_4CE9F9E = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      (int32_t)callback,
      (System_String_o *)method,
      v5,
      v6,
      v7);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10266/*"PARTY_ORGANIZATION_EVENT_MEMBER_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_17;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    annotationLabel = this->fields.annotationLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10259/*"PARTY_ORGANIZATION_EVENT_MEMBER_ANNOTATION"*/, 0);
    if ( !annotationLabel )
      goto LABEL_17;
    UILabel__set_text(annotationLabel, (System_String_o *)gameObject, 0);
    closeLabel = this->fields.closeLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10260/*"PARTY_ORGANIZATION_EVENT_MEMBER_CLOSE"*/, 0);
    if ( !closeLabel )
      goto LABEL_17;
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0);
    if ( !partyItem )
      goto LABEL_17;
    IsDuplicateEventBonus = PartyListViewItem__IsDuplicateEventBonus(partyItem, 0);
    v17 = 210.0;
    if ( IsDuplicateEventBonus )
      v17 = 226.0;
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.titleLabel, v17, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.annotationLabel;
    if ( !gameObject
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0)) == 0
      || (UnityEngine_GameObject__SetActive(gameObject, IsDuplicateEventBonus, 0),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.eventPointListViewManager) == 0) )
    {
LABEL_17:
      sub_1C7BD40(gameObject, v12);
    }
    PartyOrganizationEventPointListViewManager__CreateList(
      (PartyOrganizationEventPointListViewManager_o *)gameObject,
      partyItem,
      v18);
    this->fields.state = 1;
    v19 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
    System_Action___ctor(v19, (Il2CppObject *)this, Method_PartyOrganizationEventPointMenu_EndOpen__, 0);
    BaseDialog__SafeOpen((BaseDialog_o *)this, v19, 0, 0);
  }
}


void PartyOrganizationEventPointMenu__SerializeFieldNotNullCheck(
        PartyOrganizationEventPointMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void PartyOrganizationEventPointMenu__add_callbackFunc(
        PartyOrganizationEventPointMenu_o *this,
        PartyOrganizationEventPointMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationEventPointMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationEventPointMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationEventPointMenu_o *v11; // x0
  PartyOrganizationEventPointMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4CE9F9B & 1) == 0 )
  {
    sub_1C7BAE8(&PartyOrganizationEventPointMenu_CallbackFunc_TypeInfo);
    byte_4CE9F9B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationEventPointMenu_CallbackFunc_c *)v8->klass != PartyOrganizationEventPointMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointMenu_o *)sub_1C7C0DC(v8);
  PartyOrganizationEventPointMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *PartyOrganizationEventPointMenu__get_closeBtnPath(
        PartyOrganizationEventPointMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4CE9FA1 & 1) == 0 )
  {
    sub_1C7BAE8(&StringLiteral_3077/*"BaseWindow/CloseButton"*/);
    byte_4CE9FA1 = 1;
  }
  return (System_String_o *)StringLiteral_3077/*"BaseWindow/CloseButton"*/;
}


void PartyOrganizationEventPointMenu__remove_callbackFunc(
        PartyOrganizationEventPointMenu_o *this,
        PartyOrganizationEventPointMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct PartyOrganizationEventPointMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct PartyOrganizationEventPointMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  PartyOrganizationEventPointMenu_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4CE9F9C & 1) == 0 )
  {
    sub_1C7BAE8(&PartyOrganizationEventPointMenu_CallbackFunc_TypeInfo);
    byte_4CE9F9C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (PartyOrganizationEventPointMenu_CallbackFunc_c *)v8->klass != PartyOrganizationEventPointMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointMenu_o *)sub_1C7C0DC(v8);
  PartyOrganizationEventPointMenu__Init(v11, v12);
}


void PartyOrganizationEventPointMenu_CallbackFunc___ctor(
        PartyOrganizationEventPointMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  intptr_t v8; // x8
  int v12; // w22
  Il2CppObject *m_target; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v8;
  this->fields.m_target = object;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.m_target,
    (int32_t)object,
    method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C7BBA8(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C7BD5C(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C7BC10(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1AABB4C;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AABB04;
}


System_IAsyncResult_o *PartyOrganizationEventPointMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationEventPointMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4CE9FA3 & 1) == 0 )
  {
    sub_1C7BAE8(&bool_TypeInfo);
    byte_4CE9FA3 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v9, callback, object);
}


void PartyOrganizationEventPointMenu_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void PartyOrganizationEventPointMenu_CallbackFunc__Invoke(
        PartyOrganizationEventPointMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}