void __fastcall SupportSelectCopyDeckSelectMenu___ctor(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A57AD8 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A57AD8 = 1;
  }
  this->fields.currentState = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectCopyDeckSelectMenu__Close(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  System_Action_o *v3; // x20

  if ( (byte_4A57AD4 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_SupportSelectCopyDeckSelectMenu_OnFinishedClose__);
    byte_4A57AD4 = 1;
  }
  this->fields.currentState = 2;
  v3 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v3, (Il2CppObject *)this, Method_SupportSelectCopyDeckSelectMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v3, 0LL);
}


void __fastcall SupportSelectCopyDeckSelectMenu__OnClickCancel(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // x8

  if ( (byte_4A57AD6 & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__);
    byte_4A57AD6 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v3 = Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    onSelected = this->fields.onSelected;
    if ( onSelected )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))onSelected->fields.m_target)(
        onSelected->fields.original_method_info,
        0xFFFFFFFFLL,
        *(_QWORD *)&onSelected->fields.extra_arg);
  }
}


void __fastcall SupportSelectCopyDeckSelectMenu__OnFinishedClose(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o **p_onSelected; // x19
  __int64 v5; // x1
  ListViewManager_o *v6; // x0

  this->fields.onSelected = 0LL;
  p_onSelected = &this->fields.onSelected;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onSelected, 0, v2, v3);
  v6 = (ListViewManager_o *)*(p_onSelected - 2);
  if ( !v6 )
    sub_1B8880C(0LL, v5);
  ListViewManager__DestroyList(v6, 0LL);
}


void __fastcall SupportSelectCopyDeckSelectMenu__OnFinishedOpen(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  SupportSelectDeckListViewManager_o *deckListViewManager; // x20
  SupportSelectDeckListViewObject_OnSelectEvent_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_4A57AD3 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo);
    sub_1B885B0(&Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__);
    byte_4A57AD3 = 1;
  }
  this->fields.currentState = 1;
  deckListViewManager = this->fields.deckListViewManager;
  v4 = (SupportSelectDeckListViewObject_OnSelectEvent_o *)sub_1B887FC(SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo);
  SupportSelectDeckListViewObject_OnSelectEvent___ctor(
    v4,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__,
    v5);
  if ( !deckListViewManager )
    sub_1B8880C(v6, v7);
  SupportSelectDeckListViewManager__SetMode_33230068(deckListViewManager, 2, v4, v8);
}


void __fastcall SupportSelectCopyDeckSelectMenu__OnSelectedDeck(
        SupportSelectCopyDeckSelectMenu_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // x8

  if ( (byte_4A57AD5 & 1) == 0 )
  {
    sub_1B885B0(&Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__);
    byte_4A57AD5 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v5 = Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__;
    if ( (*((_BYTE *)Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1B885C8(Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__);
    v6 = (System_Reflection_MethodBase_o *)sub_1B88594(v5, v5[4]);
    OverwriteAssetSoundName__PlaySystemSe(v6, 0, 0LL);
    onSelected = this->fields.onSelected;
    if ( onSelected )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD))onSelected->fields.m_target)(
        onSelected->fields.original_method_info,
        (unsigned int)deckId,
        *(_QWORD *)&onSelected->fields.extra_arg);
  }
}


void __fastcall SupportSelectCopyDeckSelectMenu__Open(
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
  int32_t v19; // w3
  System_Action_o *v20; // x20

  if ( (byte_4A57AD2 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_SupportSelectCopyDeckSelectMenu_OnFinishedOpen__);
    sub_1B885B0(&StringLiteral_12424/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/);
    sub_1B885B0(&StringLiteral_12423/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/);
    sub_1B885B0(&StringLiteral_12425/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_TITLE"*/);
    byte_4A57AD2 = 1;
  }
  if ( this->fields.currentState == 2 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_14;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
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
    SupportSelectDeckListViewManager__SetMode_33230068((SupportSelectDeckListViewManager_o *)gameObject, 1, 0LL, v14);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12425/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_TITLE"*/, 0LL);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
          messageLabel = this->fields.messageLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12424/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/, 0LL),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12423/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/, 0LL),
          !cancelButtonLabel) )
    {
LABEL_14:
      sub_1B8880C(gameObject, v12);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
    this->fields.onSelected = onSelected;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.onSelected, (int32_t)onSelected, v18, v19);
    v20 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v20, (Il2CppObject *)this, Method_SupportSelectCopyDeckSelectMenu_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v20, 0, 0LL);
  }
}


void __fastcall SupportSelectCopyDeckSelectMenu__add_onSelected(
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

  if ( (byte_4A57AD0 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
    byte_4A57AD0 = 1;
  }
  onSelected = this->fields.onSelected;
  p_onSelected = &this->fields.onSelected;
  v6 = (System_Delegate_o *)onSelected;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectCopyDeckSelectMenu_OnSelectEvent_c *)v8->klass != SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_onSelected, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  SupportSelectCopyDeckSelectMenu__remove_onSelected(v11, v12, v13);
}


System_String_o *__fastcall SupportSelectCopyDeckSelectMenu__get_closeBtnPath(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_4A57AD7 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_3193/*"BaseWindow/CacnelButton"*/);
    byte_4A57AD7 = 1;
  }
  return (System_String_o *)StringLiteral_3193/*"BaseWindow/CacnelButton"*/;
}


void __fastcall SupportSelectCopyDeckSelectMenu__remove_onSelected(
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

  if ( (byte_4A57AD1 & 1) == 0 )
  {
    sub_1B885B0(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo);
    byte_4A57AD1 = 1;
  }
  onSelected = this->fields.onSelected;
  p_onSelected = &this->fields.onSelected;
  v6 = (System_Delegate_o *)onSelected;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (SupportSelectCopyDeckSelectMenu_OnSelectEvent_c *)v8->klass != SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_onSelected, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1B88ACC(v8);
  SupportSelectCopyDeckSelectMenu__Open(v11, v12, v13, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19CB118;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19CB0D0;
}


System_IAsyncResult_o *__fastcall SupportSelectCopyDeckSelectMenu_OnSelectEvent__BeginInvoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        int32_t selectDeckId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-34h] BYREF

  v10 = selectDeckId;
  if ( (byte_4A57AD9 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    byte_4A57AD9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall SupportSelectCopyDeckSelectMenu_OnSelectEvent__EndInvoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall SupportSelectCopyDeckSelectMenu_OnSelectEvent__Invoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        int32_t selectDeckId,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    selectDeckId,
    *(_QWORD *)&this->fields.extra_arg);
}