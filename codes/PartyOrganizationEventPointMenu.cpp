void __fastcall PartyOrganizationEventPointMenu___ctor(
        PartyOrganizationEventPointMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B17FF5 & 1) == 0 )
  {
    sub_1BCAFF8(&BaseDialog_TypeInfo, method);
    byte_4B17FF5 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationEventPointMenu__Callback(
        PartyOrganizationEventPointMenu_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct PartyOrganizationEventPointMenu_CallbackFunc_o *v5; // x20
  struct PartyOrganizationEventPointMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BCAF9C(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      result,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationEventPointMenu__Close(
        PartyOrganizationEventPointMenu_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  PartyOrganizationEventPointMenu__Close_33485616(this, 0LL, v2);
}


void __fastcall PartyOrganizationEventPointMenu__Close_33485616(
        PartyOrganizationEventPointMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4B17FF2 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, callback);
    sub_1BCAFF8(&Method_PartyOrganizationEventPointMenu_EndClose__, v6);
    byte_4B17FF2 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_PartyOrganizationEventPointMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall PartyOrganizationEventPointMenu__EndClose(
        PartyOrganizationEventPointMenu_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  PartyOrganizationEventPointMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BCAF9C(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall PartyOrganizationEventPointMenu__EndOpen(
        PartyOrganizationEventPointMenu_o *this,
        const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall PartyOrganizationEventPointMenu__Init(
        PartyOrganizationEventPointMenu_o *this,
        const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0
  struct PartyOrganizationEventPointListViewManager_o *eventPointListViewManager; // x20
  int32_t v5; // w2
  const MethodInfo *v6; // x3

  if ( (byte_4B17FF0 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_1/*""*/, method);
    byte_4B17FF0 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.annotationLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.closeLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (eventPointListViewManager = this->fields.eventPointListViewManager) == 0LL) )
  {
LABEL_9:
    sub_1BCB254(titleLabel, method);
  }
  ListViewManager__DestroyList((ListViewManager_o *)this->fields.eventPointListViewManager, 0LL);
  eventPointListViewManager->fields.eventMargeUpValInfoList = 0LL;
  sub_1BCAF9C((CGThumbnailListItem_o *)&eventPointListViewManager->fields.eventMargeUpValInfoList, 0, v5, v6);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall PartyOrganizationEventPointMenu__OnClickCancel(
        PartyOrganizationEventPointMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4B17FF3 & 1) == 0 )
  {
    sub_1BCAFF8(&Method_PartyOrganizationEventPointMenu_OnClickCancel__, method);
    byte_4B17FF3 = 1;
  }
  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    v3 = Method_PartyOrganizationEventPointMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_PartyOrganizationEventPointMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BCB010(Method_PartyOrganizationEventPointMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BCAFDC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0LL);
    PartyOrganizationEventPointMenu__Callback(this, 0, v5);
  }
}


void __fastcall PartyOrganizationEventPointMenu__Open(
        PartyOrganizationEventPointMenu_o *this,
        EventUpValSetupInfo_o *setupInfo,
        PartyListViewItem_o *partyItem,
        PartyOrganizationEventPointMenu_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v14; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *annotationLabel; // x21
  UILabel_o *closeLabel; // x21
  bool IsDuplicateEventBonus; // w21
  float v19; // s0
  const MethodInfo *v20; // x2
  System_Action_o *v21; // x20

  if ( (byte_4B17FF1 & 1) == 0 )
  {
    sub_1BCAFF8(&System_Action_TypeInfo, setupInfo);
    sub_1BCAFF8(&LocalizationManager_TypeInfo, v8);
    sub_1BCAFF8(&Method_PartyOrganizationEventPointMenu_EndOpen__, v9);
    sub_1BCAFF8(&StringLiteral_10151/*"PARTY_ORGANIZATION_EVENT_MEMBER_ANNOTATION"*/, v10);
    sub_1BCAFF8(&StringLiteral_10152/*"PARTY_ORGANIZATION_EVENT_MEMBER_CLOSE"*/, v11);
    sub_1BCAFF8(&StringLiteral_10158/*"PARTY_ORGANIZATION_EVENT_MEMBER_TITLE"*/, v12);
    byte_4B17FF1 = 1;
  }
  if ( !this->fields.state )
  {
    this->fields.callbackFunc = callback;
    sub_1BCAF9C(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)partyItem,
      (const MethodInfo *)callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_17;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10158/*"PARTY_ORGANIZATION_EVENT_MEMBER_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_17;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    annotationLabel = this->fields.annotationLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10151/*"PARTY_ORGANIZATION_EVENT_MEMBER_ANNOTATION"*/, 0LL);
    if ( !annotationLabel )
      goto LABEL_17;
    UILabel__set_text(annotationLabel, (System_String_o *)gameObject, 0LL);
    closeLabel = this->fields.closeLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10152/*"PARTY_ORGANIZATION_EVENT_MEMBER_CLOSE"*/, 0LL);
    if ( !closeLabel )
      goto LABEL_17;
    UILabel__set_text(closeLabel, (System_String_o *)gameObject, 0LL);
    if ( !partyItem )
      goto LABEL_17;
    IsDuplicateEventBonus = PartyListViewItem__IsDuplicateEventBonus(partyItem, 0LL);
    v19 = 210.0;
    if ( IsDuplicateEventBonus )
      v19 = 226.0;
    ComponentHelper__SetLocalPositionY((UnityEngine_Component_o *)this->fields.titleLabel, v19, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.annotationLabel;
    if ( !gameObject
      || (gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL)) == 0LL
      || (UnityEngine_GameObject__SetActive(gameObject, IsDuplicateEventBonus, 0LL),
          (gameObject = (UnityEngine_GameObject_o *)this->fields.eventPointListViewManager) == 0LL) )
    {
LABEL_17:
      sub_1BCB254(gameObject, v14);
    }
    PartyOrganizationEventPointListViewManager__CreateList(
      (PartyOrganizationEventPointListViewManager_o *)gameObject,
      partyItem,
      v20);
    this->fields.state = 1;
    v21 = (System_Action_o *)sub_1BCB244(System_Action_TypeInfo);
    System_Action___ctor(v21, (Il2CppObject *)this, Method_PartyOrganizationEventPointMenu_EndOpen__, 0LL);
    BaseDialog__SafeOpen((BaseDialog_o *)this, v21, 0, 0LL);
  }
}


void __fastcall PartyOrganizationEventPointMenu__SerializeFieldNotNullCheck(
        PartyOrganizationEventPointMenu_o *this,
        const MethodInfo *method)
{
  ;
}


void __fastcall PartyOrganizationEventPointMenu__add_callbackFunc(
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

  if ( (byte_4B17FEE & 1) == 0 )
  {
    sub_1BCAFF8(&PartyOrganizationEventPointMenu_CallbackFunc_TypeInfo, value);
    byte_4B17FEE = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationEventPointMenu_CallbackFunc_c *)v8->klass != PartyOrganizationEventPointMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointMenu_o *)sub_1BCB514(v8);
  PartyOrganizationEventPointMenu__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall PartyOrganizationEventPointMenu__get_closeBtnPath(
        PartyOrganizationEventPointMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4B17FF4 & 1) == 0 )
  {
    sub_1BCAFF8(&StringLiteral_3057/*"BaseWindow/CloseButton"*/, method);
    byte_4B17FF4 = 1;
  }
  return (System_String_o *)StringLiteral_3057/*"BaseWindow/CloseButton"*/;
}


void __fastcall PartyOrganizationEventPointMenu__remove_callbackFunc(
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

  if ( (byte_4B17FEF & 1) == 0 )
  {
    sub_1BCAFF8(&PartyOrganizationEventPointMenu_CallbackFunc_TypeInfo, value);
    byte_4B17FEF = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (PartyOrganizationEventPointMenu_CallbackFunc_c *)v8->klass != PartyOrganizationEventPointMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C05088(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (PartyOrganizationEventPointMenu_o *)sub_1BCB514(v8);
  PartyOrganizationEventPointMenu__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall PartyOrganizationEventPointMenu_CallbackFunc___ctor(
        PartyOrganizationEventPointMenu_CallbackFunc_o *this,
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
  sub_1BCAF9C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCB0B8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BCB270(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCB120(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A0FB98;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A0FB50;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall PartyOrganizationEventPointMenu_CallbackFunc__BeginInvoke(
        PartyOrganizationEventPointMenu_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4B17FF6 & 1) == 0 )
  {
    sub_1BCAFF8(&bool_TypeInfo, result);
    byte_4B17FF6 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BCAFAC(this, v9, callback, object);
}


void __fastcall PartyOrganizationEventPointMenu_CallbackFunc__EndInvoke(
        PartyOrganizationEventPointMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCAFB0(result, 0LL, method);
}


void __fastcall PartyOrganizationEventPointMenu_CallbackFunc__Invoke(
        PartyOrganizationEventPointMenu_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    *(_QWORD *)&this->fields.extra_arg);
}