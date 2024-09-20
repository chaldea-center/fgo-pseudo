void __fastcall DeckSelectMenu___ctor(DeckSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4A56EF3 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A56EF3 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall DeckSelectMenu__Callback(
        DeckSelectMenu_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  ServantStatusBattleListViewItem_o *p_callbackFunc; // x0
  struct DeckSelectMenu_CallbackFunc_o *v5; // x21
  struct DeckSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1B88554(p_callbackFunc, 0, index, (int32_t)method);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD, _QWORD, _QWORD))v5->fields.m_target)(
      v5->fields.original_method_info,
      (unsigned int)result,
      (unsigned int)index,
      *(_QWORD *)&v5->fields.extra_arg);
  }
}


void __fastcall DeckSelectMenu__Close(DeckSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DeckSelectMenu__Close_31862280(this, 0LL, v2);
}


void __fastcall DeckSelectMenu__Close_31862280(
        DeckSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  DeckListViewManager_o *deckListViewManager; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_Action_o *v8; // x20

  if ( (byte_4A56EF0 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DeckSelectMenu_EndClose__);
    byte_4A56EF0 = 1;
  }
  deckListViewManager = this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_1B8880C(0LL, callback);
  DeckListViewManager__SetMode_31854080(deckListViewManager, 1, method);
  this->fields.closeCallbackFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v6, v7);
  this->fields.state = 4;
  v8 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_DeckSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall DeckSelectMenu__EndClose(DeckSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DeckSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1B88554(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall DeckSelectMenu__EndOpen(DeckSelectMenu_o *this, const MethodInfo *method)
{
  struct DeckListViewManager_o *deckListViewManager; // x20
  DeckListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  const MethodInfo *v10; // x2
  int32_t v11; // w2
  int32_t v12; // w3
  ServantStatusBattleListViewItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v14; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4A56EEF & 1) == 0 )
  {
    sub_1B885B0(&DeckListViewManager_CallbackFunc_TypeInfo);
    sub_1B885B0(&Method_DeckSelectMenu_OnSelectItem__);
    byte_4A56EEF = 1;
  }
  this->fields.state = 2;
  deckListViewManager = this->fields.deckListViewManager;
  v4 = (DeckListViewManager_CallbackFunc_o *)sub_1B887FC(DeckListViewManager_CallbackFunc_TypeInfo);
  DeckListViewManager_CallbackFunc___ctor(v4, (Il2CppObject *)this, (intptr_t)Method_DeckSelectMenu_OnSelectItem__, v5);
  if ( !deckListViewManager )
    sub_1B8880C(v6, v7);
  deckListViewManager->fields.callbackFunc = v4;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&deckListViewManager->fields.callbackFunc, (int32_t)v4, v8, v9);
  DeckListViewManager__SetMode_31854080(deckListViewManager, 2, v10);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc;
  v14 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_1B88554(p_openCallbackFunc, 0, v11, v12);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v14->fields.m_target)(
      v14->fields.original_method_info,
      *(_QWORD *)&v14->fields.extra_arg);
  }
}


DeckListViewItem_o *__fastcall DeckSelectMenu__GetItem(DeckSelectMenu_o *this, int32_t index, const MethodInfo *method)
{
  DeckListViewManager_o *deckListViewManager; // x0

  deckListViewManager = this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_1B8880C(0LL, index);
  return DeckListViewManager__GetItem(deckListViewManager, index, method);
}


void __fastcall DeckSelectMenu__Init(DeckSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *deckListViewManager; // x0

  deckListViewManager = (ListViewManager_o *)this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_1B8880C(0LL, method);
  ListViewManager__DestroyList(deckListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DeckSelectMenu__OnClickCancel(DeckSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4A56EF1 & 1) == 0 )
  {
    sub_1B885B0(&Method_DeckSelectMenu_OnClickCancel__);
    byte_4A56EF1 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_DeckSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_DeckSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_DeckSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    this->fields.state = 3;
    DeckSelectMenu__Callback(this, 0, -1, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckSelectMenu__OnSelectItem(DeckSelectMenu_o *this, int32_t kind, int32_t n, const MethodInfo *method)
{
  DeckListViewManager_o *deckListViewManager; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  DeckSelectMenu_o *v12; // x0
  int32_t v13; // w2

  if ( (byte_4A56EF2 & 1) == 0 )
  {
    sub_1B885B0(&Method_DeckSelectMenu_OnSelectItem__);
    byte_4A56EF2 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (n & 0x80000000) == 0 )
    {
      deckListViewManager = this->fields.deckListViewManager;
      if ( !deckListViewManager )
        sub_1B8880C(0LL, *(_QWORD *)&kind);
      DeckListViewManager__GetItem(deckListViewManager, n, *(const MethodInfo **)&n);
    }
    v8 = Method_DeckSelectMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_DeckSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1B885C8(Method_DeckSelectMenu_OnSelectItem__);
    v9 = (System_Reflection_MethodBase_o *)sub_1B88594(v8, v8[4]);
    if ( kind == 1 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0LL);
      v11 = 1;
      v12 = this;
      v13 = n;
      this->fields.state = 3;
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0LL);
      v13 = -1;
      this->fields.state = 3;
      v12 = this;
      v11 = 0;
    }
    DeckSelectMenu__Callback(v12, v11, v13, v10);
  }
}


void __fastcall DeckSelectMenu__Open(
        DeckSelectMenu_o *this,
        int32_t kind,
        PartyListViewItem_array *baseDeckItemList,
        DeckSelectMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int32_t state; // w8
  int32_t v12; // w2
  int32_t v13; // w3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v15; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *titleDetailLabel; // x21
  UILabel_o *cancelLabel; // x21
  UnityEngine_GameObject_o *v19; // x0
  const MethodInfo *v20; // x2
  const MethodInfo *v21; // x2
  System_Action_o *v22; // x20
  int32_t v23; // w2
  int32_t v24; // w3
  const MethodInfo *v25; // x1

  if ( (byte_4A56EEE & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_DeckSelectMenu_EndOpen__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&StringLiteral_10246/*"PARTY_ORGANIZATION_DECK_SELECT_CANCEL"*/);
    sub_1B885B0(&StringLiteral_10248/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_TITLE"*/);
    sub_1B885B0(&StringLiteral_10247/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_DETAIL"*/);
    byte_4A56EEE = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)baseDeckItemList,
      (int32_t)callback);
    this->fields.openCallbackFunc = openCallback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v23, v24);
    DeckSelectMenu__EndOpen(this, v25);
  }
  else if ( state == 4 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_1B88554(
      (ServantStatusBattleListViewItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)baseDeckItemList,
      (int32_t)callback);
    this->fields.openCallbackFunc = openCallback;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v12, v13);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( !kind )
    {
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10248/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_23;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      titleDetailLabel = this->fields.titleDetailLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10247/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_DETAIL"*/, 0LL);
      if ( !titleDetailLabel )
        goto LABEL_23;
      UILabel__set_text(titleDetailLabel, (System_String_o *)gameObject, 0LL);
    }
    cancelLabel = this->fields.cancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10246/*"PARTY_ORGANIZATION_DECK_SELECT_CANCEL"*/, 0LL);
    if ( cancelLabel )
    {
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelLabel;
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UIRect__get_parent((UIRect_o *)gameObject, 0LL);
        if ( gameObject )
        {
          v19 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          AndroidBackKeyManager__AddBackBtn(v19, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
          if ( gameObject )
          {
            DeckListViewManager__CreateList((DeckListViewManager_o *)gameObject, baseDeckItemList, v20);
            gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
            if ( gameObject )
            {
              DeckListViewManager__SetMode_31854080((DeckListViewManager_o *)gameObject, 1, v21);
              this->fields.state = 1;
              v22 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
              System_Action___ctor(v22, (Il2CppObject *)this, Method_DeckSelectMenu_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v22, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_23:
    sub_1B8880C(gameObject, v15);
  }
}


void __fastcall DeckSelectMenu__add_callbackFunc(
        DeckSelectMenu_o *this,
        DeckSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct DeckSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct DeckSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  DeckSelectMenu_o *v11; // x0
  DeckSelectMenu_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4A56EEC & 1) == 0 )
  {
    sub_1B885B0(&DeckSelectMenu_CallbackFunc_TypeInfo);
    byte_4A56EEC = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (DeckSelectMenu_CallbackFunc_c *)v8->klass != DeckSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckSelectMenu_o *)sub_1B88ACC(v8);
  DeckSelectMenu__remove_callbackFunc(v11, v12, v13);
}


void __fastcall DeckSelectMenu__remove_callbackFunc(
        DeckSelectMenu_o *this,
        DeckSelectMenu_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct DeckSelectMenu_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct DeckSelectMenu_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  DeckSelectMenu_o *v11; // x0
  int32_t v12; // w1
  const MethodInfo *v13; // x2

  if ( (byte_4A56EED & 1) == 0 )
  {
    sub_1B885B0(&DeckSelectMenu_CallbackFunc_TypeInfo);
    byte_4A56EED = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (DeckSelectMenu_CallbackFunc_c *)v8->klass != DeckSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1BC3AA0(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckSelectMenu_o *)sub_1B88ACC(v8);
  DeckSelectMenu__GetItem(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckSelectMenu_CallbackFunc___ctor(
        DeckSelectMenu_CallbackFunc_o *this,
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
  if ( v8 != 2 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19C8AC0;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19C8A68;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall DeckSelectMenu_CallbackFunc__BeginInvoke(
        DeckSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x4
  __int64 v13[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v14; // [xsp+28h] [xbp-38h] BYREF
  int32_t v15; // [xsp+2Ch] [xbp-34h] BYREF

  v14 = index;
  v15 = result;
  if ( (byte_4A56EF4 & 1) == 0 )
  {
    sub_1B885B0(&int_TypeInfo);
    sub_1B885B0(&DeckSelectMenu_ResultKind_TypeInfo);
    byte_4A56EF4 = 1;
  }
  v13[2] = 0LL;
  v13[0] = j_il2cpp_value_box_0(DeckSelectMenu_ResultKind_TypeInfo, &v15, *(_QWORD *)&index, callback, object);
  v13[1] = j_il2cpp_value_box_0(int_TypeInfo, &v14, v9, v10, v11);
  return (System_IAsyncResult_o *)sub_1B88564(this, v13, callback, object);
}


void __fastcall DeckSelectMenu_CallbackFunc__EndInvoke(
        DeckSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
}


void __fastcall DeckSelectMenu_CallbackFunc__Invoke(
        DeckSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, int32_t, int32_t, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    result,
    index,
    *(_QWORD *)&this->fields.extra_arg);
}