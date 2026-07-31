void SupportSelectCopyDeckSelectMenu___ctor(SupportSelectCopyDeckSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_5934B02 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5934B02 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.currentState = 2;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SupportSelectCopyDeckSelectMenu__Close(SupportSelectCopyDeckSelectMenu_o *this, const MethodInfo *method)
{
  System_Action_c *v3; // x0
  System_Action_o *v4; // x20

  if ( (byte_5934AFE & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_SupportSelectCopyDeckSelectMenu_OnFinishedClose__);
    byte_5934AFE = 1;
  }
  v3 = System_Action_TypeInfo;
  this->fields.currentState = 2;
  v4 = (System_Action_o *)sub_21FFEBC(v3);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectCopyDeckSelectMenu_OnFinishedClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0);
}


void SupportSelectCopyDeckSelectMenu__OnClickCancel(SupportSelectCopyDeckSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // x8

  if ( (byte_5934B00 & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__);
    byte_5934B00 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    onSelected = this->fields.onSelected;
    if ( onSelected )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))onSelected->fields.invoke_impl)(
        onSelected->fields.method_code,
        0xFFFFFFFFLL,
        onSelected->fields.method);
  }
}


void SupportSelectCopyDeckSelectMenu__OnFinishedClose(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o **p_onSelected; // x19
  __int64 v9; // x1
  ListViewManager_o *v10; // x0

  this->fields.onSelected = 0;
  p_onSelected = &this->fields.onSelected;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.onSelected, 0, v2, v3, v4, v5, v6, v7);
  v10 = (ListViewManager_o *)*(p_onSelected - 2);
  if ( !v10 )
    sub_21FFECC(0, v9);
  ListViewManager__DestroyList(v10, 0);
}


void SupportSelectCopyDeckSelectMenu__OnFinishedOpen(SupportSelectCopyDeckSelectMenu_o *this, const MethodInfo *method)
{
  SupportSelectDeckListViewObject_OnSelectEvent_c *v3; // x0
  SupportSelectDeckListViewManager_o *deckListViewManager; // x20
  SupportSelectDeckListViewObject_OnSelectEvent_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  const MethodInfo *v9; // x3

  if ( (byte_5934AFD & 1) == 0 )
  {
    sub_21FFC50(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo);
    sub_21FFC50(&Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__);
    byte_5934AFD = 1;
  }
  v3 = SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo;
  deckListViewManager = this->fields.deckListViewManager;
  this->fields.currentState = 1;
  v5 = (SupportSelectDeckListViewObject_OnSelectEvent_o *)sub_21FFEBC(v3);
  SupportSelectDeckListViewObject_OnSelectEvent___ctor(
    v5,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__,
    v6);
  if ( !deckListViewManager )
    sub_21FFECC(v7, v8);
  SupportSelectDeckListViewManager__SetMode_42434428(deckListViewManager, 2, v5, v9);
}


void SupportSelectCopyDeckSelectMenu__OnSelectedDeck(
        SupportSelectCopyDeckSelectMenu_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // x8

  if ( (byte_5934AFF & 1) == 0 )
  {
    sub_21FFC50(&Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__);
    byte_5934AFF = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v5 = Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__;
    if ( (*((_BYTE *)Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_21FFC68(Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__);
    v6 = (System_Reflection_MethodBase_o *)sub_21FFC34(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0, 0);
    onSelected = this->fields.onSelected;
    if ( onSelected )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))onSelected->fields.invoke_impl)(
        onSelected->fields.method_code,
        (unsigned int)deckId,
        onSelected->fields.method);
  }
}


void SupportSelectCopyDeckSelectMenu__Open(
        SupportSelectCopyDeckSelectMenu_o *this,
        SupportServantData_array *targetDeckList,
        System_Int32_array *sameKindIdxList,
        System_Int32_array *notCopyIdxList,
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v12; // x1
  const MethodInfo *v13; // x4
  const MethodInfo *v14; // x3
  __int64 v15; // x1
  __int64 v16; // x2
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  System_Action_o *v26; // x20

  if ( (byte_5934AFC & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_SupportSelectCopyDeckSelectMenu_OnFinishedOpen__);
    sub_21FFC50(&StringLiteral_13028/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/);
    sub_21FFC50(&StringLiteral_13027/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/);
    sub_21FFC50(&StringLiteral_13029/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_TITLE"*/);
    byte_5934AFC = 1;
  }
  if ( this->fields.currentState == 2 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
    if ( !gameObject )
      goto LABEL_14;
    SupportSelectDeckListViewManager__CreateList(
      (SupportSelectDeckListViewManager_o *)gameObject,
      targetDeckList,
      sameKindIdxList,
      notCopyIdxList,
      v13);
    gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
    if ( !gameObject )
      goto LABEL_14;
    SupportSelectDeckListViewManager__SetMode_42434428((SupportSelectDeckListViewManager_o *)gameObject, 1, 0, v14);
    titleLabel = this->fields.titleLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v15, v16);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13029/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_TITLE"*/, 0);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0),
          messageLabel = this->fields.messageLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13028/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/, 0),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13027/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/, 0),
          !cancelButtonLabel) )
    {
LABEL_14:
      sub_21FFECC(gameObject, v12);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
    this->fields.onSelected = onSelected;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.onSelected,
      (int32_t)onSelected,
      v20,
      v21,
      v22,
      v23,
      v24,
      v25);
    v26 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v26, (Il2CppObject *)this, Method_SupportSelectCopyDeckSelectMenu_OnFinishedOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0, 0);
  }
}


void SupportSelectCopyDeckSelectMenu__add_onSelected(
        SupportSelectCopyDeckSelectMenu_o *this,
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o **p_onSelected; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SupportSelectCopyDeckSelectMenu_o *v13; // x0
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_5934AFA & 1) == 0 )
  {
    sub_21FFC50(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
    byte_5934AFA = 1;
  }
  onSelected = this->fields.onSelected;
  p_onSelected = &this->fields.onSelected;
  v6 = (System_Delegate_o *)onSelected;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectCopyDeckSelectMenu_OnSelectEvent_c *)v8->klass != SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_onSelected, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, v9, v10);
  SupportSelectCopyDeckSelectMenu__remove_onSelected(v13, v14, v15);
}


System_String_o *SupportSelectCopyDeckSelectMenu__get_closeBtnPath(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_5934B01 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_3189/*"BaseWindow/CacnelButton"*/);
    byte_5934B01 = 1;
  }
  return (System_String_o *)StringLiteral_3189/*"BaseWindow/CacnelButton"*/;
}


void SupportSelectCopyDeckSelectMenu__remove_onSelected(
        SupportSelectCopyDeckSelectMenu_o *this,
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *value,
        const MethodInfo *method)
{
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o **p_onSelected; // x20
  System_Delegate_o *v6; // x21
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  SupportSelectCopyDeckSelectMenu_o *v13; // x0
  SupportServantData_array *v14; // x1
  System_Int32_array *v15; // x2
  System_Int32_array *v16; // x3
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v17; // x4
  const MethodInfo *v18; // x5

  if ( (byte_5934AFB & 1) == 0 )
  {
    sub_21FFC50(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
    byte_5934AFB = 1;
  }
  onSelected = this->fields.onSelected;
  p_onSelected = &this->fields.onSelected;
  v6 = (System_Delegate_o *)onSelected;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (SupportSelectCopyDeckSelectMenu_OnSelectEvent_c *)v8->klass != SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo )
        break;
    }
    v11 = sub_223767C(p_onSelected, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  sub_220024C(v8, SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, v9, v10);
  SupportSelectCopyDeckSelectMenu__Open(v13, v14, v15, v16, v17, v18);
}


void SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1FF4184;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF413C;
}


System_IAsyncResult_o *SupportSelectCopyDeckSelectMenu_OnSelectEvent__BeginInvoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        int32_t selectDeckId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = selectDeckId;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C070, &v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void SupportSelectCopyDeckSelectMenu_OnSelectEvent__EndInvoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void SupportSelectCopyDeckSelectMenu_OnSelectEvent__Invoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        int32_t selectDeckId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    selectDeckId,
    this->fields.method);
}