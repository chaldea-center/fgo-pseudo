void SupportSelectCopyDeckSelectMenu___ctor(SupportSelectCopyDeckSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4C23967 & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C23967 = 1;
  }
  this->fields.currentState = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void SupportSelectCopyDeckSelectMenu__Close(SupportSelectCopyDeckSelectMenu_o *this, const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4C23963 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_SupportSelectCopyDeckSelectMenu_OnFinishedClose__);
    byte_4C23963 = 1;
  }
  this->fields.currentState = 2;
  v3 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SupportSelectCopyDeckSelectMenu_OnFinishedClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0);
}


void SupportSelectCopyDeckSelectMenu__OnClickCancel(SupportSelectCopyDeckSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // x8

  if ( (byte_4C23965 & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__);
    byte_4C23965 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
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
  int32_t v2; // w2
  const MethodInfo *v3; // x3
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o **p_onSelected; // x19
  __int64 v5; // x1
  ListViewManager_o *v6; // x0

  this->fields.onSelected = 0;
  p_onSelected = &this->fields.onSelected;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onSelected, 0, v2, v3);
  v6 = (ListViewManager_o *)*(p_onSelected - 2);
  if ( !v6 )
    sub_1C2D6EC(0, v5);
  ListViewManager__DestroyList(v6, 0);
}


void SupportSelectCopyDeckSelectMenu__OnFinishedOpen(SupportSelectCopyDeckSelectMenu_o *this, const MethodInfo *method)
{
  SupportSelectDeckListViewManager_o *deckListViewManager; // x20
  SupportSelectDeckListViewObject_OnSelectEvent_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4C23962 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo);
    sub_1C2D490(&Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__);
    byte_4C23962 = 1;
  }
  this->fields.currentState = 1;
  deckListViewManager = this->fields.deckListViewManager;
  v4 = (SupportSelectDeckListViewObject_OnSelectEvent_o *)sub_1C2D6DC(SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo);
  SupportSelectDeckListViewObject_OnSelectEvent___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__,
    v5);
  if ( !deckListViewManager )
    sub_1C2D6EC(v6, v7);
  SupportSelectDeckListViewManager__SetMode_35482224(deckListViewManager, 2, v4, v8);
}


void SupportSelectCopyDeckSelectMenu__OnSelectedDeck(
        SupportSelectCopyDeckSelectMenu_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // x8

  if ( (byte_4C23964 & 1) == 0 )
  {
    sub_1C2D490(&Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__);
    byte_4C23964 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v5 = Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__;
    if ( (*((_BYTE *)Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1C2D4A8(Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__);
    v6 = (System_Reflection_MethodBase_o *)sub_1C2D474(v5, v5[4]);
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
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  int32_t v18; // w2
  const MethodInfo *v19; // x3
  System_Action_o *v20; // x20

  if ( (byte_4C23961 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&Method_SupportSelectCopyDeckSelectMenu_OnFinishedOpen__);
    sub_1C2D490(&StringLiteral_12523/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/);
    sub_1C2D490(&StringLiteral_12522/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/);
    sub_1C2D490(&StringLiteral_12524/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_TITLE"*/);
    byte_4C23961 = 1;
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
    SupportSelectDeckListViewManager__SetMode_35482224((SupportSelectDeckListViewManager_o *)gameObject, 1, 0, v14);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12524/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_TITLE"*/, 0);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0),
          messageLabel = this->fields.messageLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12523/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/, 0),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12522/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/, 0),
          !cancelButtonLabel) )
    {
LABEL_14:
      sub_1C2D6EC(gameObject, v12);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0);
    this->fields.onSelected = onSelected;
    sub_1C2D434((CGThumbnailListItem_o *)&this->fields.onSelected, (int32_t)onSelected, v18, v19);
    v20 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SupportSelectCopyDeckSelectMenu_OnFinishedOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0);
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
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectCopyDeckSelectMenu_o *v11; // x0
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C2395F & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
    byte_4C2395F = 1;
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
    v9 = sub_1C676E8(p_onSelected, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  SupportSelectCopyDeckSelectMenu__remove_onSelected(v11, v12, v13);
}


System_String_o *SupportSelectCopyDeckSelectMenu__get_closeBtnPath(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C23966 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_3068/*"BaseWindow/CacnelButton"*/);
    byte_4C23966 = 1;
  }
  return (System_String_o *)StringLiteral_3068/*"BaseWindow/CacnelButton"*/;
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
  __int64 v9; // x0
  bool v10; // zf
  SupportSelectCopyDeckSelectMenu_o *v11; // x0
  SupportServantData_array *v12; // x1
  System_Int32_array *v13; // x2
  System_Int32_array *v14; // x3
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v15; // x4
  const MethodInfo *v16; // x5

  if ( (byte_4C23960 & 1) == 0 )
  {
    sub_1C2D490(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
    byte_4C23960 = 1;
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
    v9 = sub_1C676E8(p_onSelected, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  SupportSelectCopyDeckSelectMenu__Open(v11, v12, v13, v14, v15, v16);
}


void SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  intptr_t v4; // x8
  int v8; // w22
  Il2CppObject *m_target; // x9
  __int64 v10; // x0

  v4 = *(_QWORD *)(method + 8);
  this->fields.method = method;
  this->fields.method_ptr = v4;
  this->fields.m_target = object;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C2D550(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C2D708(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C2D5B8(v10, 0);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1A6E6BC;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6E674;
}


System_IAsyncResult_o *SupportSelectCopyDeckSelectMenu_OnSelectEvent__BeginInvoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        int32_t selectDeckId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = selectDeckId;
  if ( (byte_4C23968 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    byte_4C23968 = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void SupportSelectCopyDeckSelectMenu_OnSelectEvent__EndInvoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
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