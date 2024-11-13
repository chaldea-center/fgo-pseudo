void __fastcall SupportSelectCopyDeckSelectMenu___ctor(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12ADB & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B12ADB = 1;
  }
  this->fields.currentState = 2;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectCopyDeckSelectMenu__Close(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  System_Action_o *v7; // x20

  if ( (byte_4B12AD7 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportSelectCopyDeckSelectMenu_OnFinishedClose__, v5, v6);
    byte_4B12AD7 = 1;
  }
  this->fields.currentState = 2;
  v7 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, method, v2, v3);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_SupportSelectCopyDeckSelectMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall SupportSelectCopyDeckSelectMenu__OnClickCancel(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // x8

  if ( (byte_4B12AD9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__, method, v2);
    byte_4B12AD9 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v4 = Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectCopyDeckSelectMenu_OnClickCancel__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 1, 0LL);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o **p_onSelected; // x19
  __int64 v9; // x1
  ListViewManager_o *v10; // x0

  this->fields.onSelected = 0LL;
  p_onSelected = &this->fields.onSelected;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.onSelected, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = (ListViewManager_o *)*(p_onSelected - 2);
  if ( !v10 )
    sub_1BCAA3C(0LL, v9);
  ListViewManager__DestroyList(v10, 0LL);
}


void __fastcall SupportSelectCopyDeckSelectMenu__OnFinishedOpen(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x1
  __int64 v6; // x2
  SupportSelectDeckListViewManager_o *deckListViewManager; // x20
  SupportSelectDeckListViewObject_OnSelectEvent_o *v8; // x21
  const MethodInfo *v9; // x3
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_4B12AD6 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__, v5, v6);
    byte_4B12AD6 = 1;
  }
  this->fields.currentState = 1;
  deckListViewManager = this->fields.deckListViewManager;
  v8 = (SupportSelectDeckListViewObject_OnSelectEvent_o *)sub_1BCAA2C(
                                                            SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo,
                                                            method,
                                                            v2,
                                                            v3);
  SupportSelectDeckListViewObject_OnSelectEvent___ctor(
    v8,
    (Il2CppObject *)this,
    (intptr_t)Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__,
    v9);
  if ( !deckListViewManager )
    sub_1BCAA3C(v10, v11);
  SupportSelectDeckListViewManager__SetMode_33903996(deckListViewManager, 2, v8, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectCopyDeckSelectMenu__OnSelectedDeck(
        SupportSelectCopyDeckSelectMenu_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  _QWORD *v5; // x0
  System_Reflection_MethodBase_o *v6; // x0
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // x8

  if ( (byte_4B12AD8 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__, *(_QWORD *)&deckId, method);
    byte_4B12AD8 = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    v5 = Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__;
    if ( (*((_BYTE *)Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__ + 83) & 2) != 0 )
      v5 = (_QWORD *)sub_1BCA7F8(Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__);
    v6 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v5, v5[4]);
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
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v22; // x1
  const MethodInfo *v23; // x4
  const MethodInfo *v24; // x3
  __int64 v25; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  int64_t v29; // x2
  int32_t v30; // w3
  System_String_o *v31; // x4
  BattleSetupInfo_o *v32; // x5
  FollowerInfo_o *v33; // x6
  PartyListViewItem_o *v34; // x7
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  System_Action_o *v38; // x20

  if ( (byte_4B12AD5 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, targetDeckList, sameKindIdxList);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_SupportSelectCopyDeckSelectMenu_OnFinishedOpen__, v13, v14);
    sub_1BCA7E0(&StringLiteral_12580/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/, v15, v16);
    sub_1BCA7E0(&StringLiteral_12579/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/, v17, v18);
    sub_1BCA7E0(&StringLiteral_12581/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_TITLE"*/, v19, v20);
    byte_4B12AD5 = 1;
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
      v23);
    gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
    if ( !gameObject )
      goto LABEL_14;
    SupportSelectDeckListViewManager__SetMode_33903996((SupportSelectDeckListViewManager_o *)gameObject, 1, 0LL, v24);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v25);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12581/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_TITLE"*/, 0LL);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
          messageLabel = this->fields.messageLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12580/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/, 0LL),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12579/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/, 0LL),
          !cancelButtonLabel) )
    {
LABEL_14:
      sub_1BCAA3C(gameObject, v22);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
    this->fields.onSelected = onSelected;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&this->fields.onSelected,
      (int64_t)onSelected,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    v38 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v35, v36, v37);
    System_Action___ctor(v38, (Il2CppObject *)this, Method_SupportSelectCopyDeckSelectMenu_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v38, 0, 0LL);
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

  if ( (byte_4B12AD3 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, value, method);
    byte_4B12AD3 = 1;
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
    v9 = sub_1C05CD0(p_onSelected, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  SupportSelectCopyDeckSelectMenu__remove_onSelected(v11, v12, v13);
}


System_String_o *__fastcall SupportSelectCopyDeckSelectMenu__get_closeBtnPath(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B12ADA & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_3217/*"BaseWindow/CacnelButton"*/, method, v2);
    byte_4B12ADA = 1;
  }
  return (System_String_o *)StringLiteral_3217/*"BaseWindow/CacnelButton"*/;
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

  if ( (byte_4B12AD4 & 1) == 0 )
  {
    sub_1BCA7E0(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, value, method);
    byte_4B12AD4 = 1;
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
    v9 = sub_1C05CD0(p_onSelected, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1BCACFC(v8);
  SupportSelectCopyDeckSelectMenu__Open(v11, v12, v13, v14, v15, v16);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A09680;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A09638;
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_4B12ADC & 1) == 0 )
  {
    sub_1BCA7E0(&int_TypeInfo, *(_QWORD *)&selectDeckId, callback);
    byte_4B12ADC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall SupportSelectCopyDeckSelectMenu_OnSelectEvent__EndInvoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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