void DeckSelectMenu___ctor(DeckSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4CE9DC9 & 1) == 0 )
  {
    sub_1C7BAE8(&BaseDialog_TypeInfo);
    byte_4CE9DC9 = 1;
  }
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void DeckSelectMenu__Callback(DeckSelectMenu_o *this, int32_t result, int32_t index, const MethodInfo *method)
{
  System_String_o *v4; // x4
  int32_t v5; // w5
  int64_t v6; // x6
  System_String_o *v7; // x7
  GrandQuestFolderBoardItem_o *p_callbackFunc; // x0
  struct DeckSelectMenu_CallbackFunc_o *v9; // x21
  struct DeckSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C7BA8C(p_callbackFunc, 0, index, (int32_t)method, v4, v5, v6, v7);
    ((void (__fastcall *)(intptr_t, _QWORD, _QWORD, intptr_t))v9->fields.invoke_impl)(
      v9->fields.method_code,
      (unsigned int)result,
      (unsigned int)index,
      v9->fields.method);
  }
}


void DeckSelectMenu__Close(DeckSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DeckSelectMenu__Close_34420704(this, 0, v2);
}


void DeckSelectMenu__Close_34420704(DeckSelectMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  DeckListViewManager_o *deckListViewManager; // x0
  int32_t v6; // w2
  int32_t v7; // w3
  System_String_o *v8; // x4
  int32_t v9; // w5
  int64_t v10; // x6
  System_String_o *v11; // x7
  System_Action_o *v12; // x20

  if ( (byte_4CE9DC6 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DeckSelectMenu_EndClose__);
    byte_4CE9DC6 = 1;
  }
  deckListViewManager = this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_1C7BD40(0, callback);
  DeckListViewManager__SetMode_34412480(deckListViewManager, 1, method);
  this->fields.closeCallbackFunc = callback;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  this->fields.state = 4;
  v12 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_DeckSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v12, 0);
}


void DeckSelectMenu__EndClose(DeckSelectMenu_o *this, const MethodInfo *method)
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

  DeckSelectMenu__Init(this, method);
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


void DeckSelectMenu__EndOpen(DeckSelectMenu_o *this, const MethodInfo *method)
{
  struct DeckListViewManager_o *deckListViewManager; // x20
  DeckListViewManager_CallbackFunc_o *v4; // x21
  const MethodInfo *v5; // x3
  __int64 v6; // x0
  __int64 v7; // x1
  int32_t v8; // w2
  int32_t v9; // w3
  System_String_o *v10; // x4
  int32_t v11; // w5
  int64_t v12; // x6
  System_String_o *v13; // x7
  const MethodInfo *v14; // x2
  int32_t v15; // w2
  int32_t v16; // w3
  System_String_o *v17; // x4
  int32_t v18; // w5
  int64_t v19; // x6
  System_String_o *v20; // x7
  GrandQuestFolderBoardItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v22; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4CE9DC5 & 1) == 0 )
  {
    sub_1C7BAE8(&DeckListViewManager_CallbackFunc_TypeInfo);
    sub_1C7BAE8(&Method_DeckSelectMenu_OnSelectItem__);
    byte_4CE9DC5 = 1;
  }
  this->fields.state = 2;
  deckListViewManager = this->fields.deckListViewManager;
  v4 = (DeckListViewManager_CallbackFunc_o *)sub_1C7BD34(DeckListViewManager_CallbackFunc_TypeInfo);
  DeckListViewManager_CallbackFunc___ctor(v4, (Il2CppObject *)this, (intptr_t)Method_DeckSelectMenu_OnSelectItem__, v5);
  if ( !deckListViewManager )
    sub_1C7BD40(v6, v7);
  deckListViewManager->fields.callbackFunc = v4;
  sub_1C7BA8C(
    (GrandQuestFolderBoardItem_o *)&deckListViewManager->fields.callbackFunc,
    (int32_t)v4,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13);
  DeckListViewManager__SetMode_34412480(deckListViewManager, 2, v14);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc;
  v22 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0;
    sub_1C7BA8C(p_openCallbackFunc, 0, v15, v16, v17, v18, v19, v20);
    ((void (__fastcall *)(intptr_t, intptr_t))v22->fields.invoke_impl)(v22->fields.method_code, v22->fields.method);
  }
}


DeckListViewItem_o *DeckSelectMenu__GetItem(DeckSelectMenu_o *this, int32_t index, const MethodInfo *method)
{
  DeckListViewManager_o *deckListViewManager; // x0

  deckListViewManager = this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_1C7BD40(0, index);
  return DeckListViewManager__GetItem(deckListViewManager, index, method);
}


void DeckSelectMenu__Init(DeckSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *deckListViewManager; // x0

  deckListViewManager = (ListViewManager_o *)this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_1C7BD40(0, method);
  ListViewManager__DestroyList(deckListViewManager, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void DeckSelectMenu__OnClickCancel(DeckSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4CE9DC7 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DeckSelectMenu_OnClickCancel__);
    byte_4CE9DC7 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_DeckSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_DeckSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C7BB00(Method_DeckSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.state = 3;
    DeckSelectMenu__Callback(this, 0, -1, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void DeckSelectMenu__OnSelectItem(DeckSelectMenu_o *this, int32_t kind, int32_t n, const MethodInfo *method)
{
  DeckListViewManager_o *deckListViewManager; // x0
  _QWORD *v8; // x0
  System_Reflection_MethodBase_o *v9; // x0
  const MethodInfo *v10; // x3
  int32_t v11; // w1
  DeckSelectMenu_o *v12; // x0
  int32_t v13; // w2

  if ( (byte_4CE9DC8 & 1) == 0 )
  {
    sub_1C7BAE8(&Method_DeckSelectMenu_OnSelectItem__);
    byte_4CE9DC8 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (n & 0x80000000) == 0 )
    {
      deckListViewManager = this->fields.deckListViewManager;
      if ( !deckListViewManager )
        sub_1C7BD40(0, *(_QWORD *)&kind);
      DeckListViewManager__GetItem(deckListViewManager, n, *(const MethodInfo **)&n);
    }
    v8 = Method_DeckSelectMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_DeckSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1C7BB00(Method_DeckSelectMenu_OnSelectItem__);
    v9 = (System_Reflection_MethodBase_o *)sub_1C7BACC(v8, v8[4]);
    if ( kind == 1 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
      v11 = 1;
      v12 = this;
      v13 = n;
      this->fields.state = 3;
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0);
      v13 = -1;
      this->fields.state = 3;
      v12 = this;
      v11 = 0;
    }
    DeckSelectMenu__Callback(v12, v11, v13, v10);
  }
}


void DeckSelectMenu__Open(
        DeckSelectMenu_o *this,
        int32_t kind,
        PartyListViewItem_array *baseDeckItemList,
        DeckSelectMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  int64_t v6; // x6
  System_String_o *v7; // x7
  int32_t state; // w8
  int32_t v14; // w2
  int32_t v15; // w3
  System_String_o *v16; // x4
  int32_t v17; // w5
  int64_t v18; // x6
  System_String_o *v19; // x7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *titleDetailLabel; // x21
  UILabel_o *cancelLabel; // x21
  UnityEngine_GameObject_o *v25; // x0
  const MethodInfo *v26; // x2
  const MethodInfo *v27; // x2
  System_Action_o *v28; // x20
  int32_t v29; // w2
  int32_t v30; // w3
  System_String_o *v31; // x4
  int32_t v32; // w5
  int64_t v33; // x6
  System_String_o *v34; // x7
  const MethodInfo *v35; // x1

  if ( (byte_4CE9DC4 & 1) == 0 )
  {
    sub_1C7BAE8(&System_Action_TypeInfo);
    sub_1C7BAE8(&Method_DeckSelectMenu_EndOpen__);
    sub_1C7BAE8(&LocalizationManager_TypeInfo);
    sub_1C7BAE8(&StringLiteral_10253/*"PARTY_ORGANIZATION_DECK_SELECT_CANCEL"*/);
    sub_1C7BAE8(&StringLiteral_10255/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_TITLE"*/);
    sub_1C7BAE8(&StringLiteral_10254/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_DETAIL"*/);
    byte_4CE9DC4 = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)baseDeckItemList,
      (int32_t)callback,
      (System_String_o *)openCallback,
      (int32_t)method,
      v6,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
      (int32_t)openCallback,
      v29,
      v30,
      v31,
      v32,
      v33,
      v34);
    DeckSelectMenu__EndOpen(this, v35);
  }
  else if ( state == 4 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)baseDeckItemList,
      (int32_t)callback,
      (System_String_o *)openCallback,
      (int32_t)method,
      v6,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_1C7BA8C(
      (GrandQuestFolderBoardItem_o *)&this->fields.openCallbackFunc,
      (int32_t)openCallback,
      v14,
      v15,
      v16,
      v17,
      v18,
      v19);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    if ( !kind )
    {
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10255/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_23;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
      titleDetailLabel = this->fields.titleDetailLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10254/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_DETAIL"*/, 0);
      if ( !titleDetailLabel )
        goto LABEL_23;
      UILabel__set_text(titleDetailLabel, (System_String_o *)gameObject, 0);
    }
    cancelLabel = this->fields.cancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10253/*"PARTY_ORGANIZATION_DECK_SELECT_CANCEL"*/, 0);
    if ( cancelLabel )
    {
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelLabel;
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UIRect__get_parent((UIRect_o *)gameObject, 0);
        if ( gameObject )
        {
          v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          AndroidBackKeyManager__AddBackBtn(v25, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
          if ( gameObject )
          {
            DeckListViewManager__CreateList((DeckListViewManager_o *)gameObject, baseDeckItemList, v26);
            gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
            if ( gameObject )
            {
              DeckListViewManager__SetMode_34412480((DeckListViewManager_o *)gameObject, 1, v27);
              this->fields.state = 1;
              v28 = (System_Action_o *)sub_1C7BD34(System_Action_TypeInfo);
              System_Action___ctor(v28, (Il2CppObject *)this, Method_DeckSelectMenu_EndOpen__, 0);
              BaseDialog__Open((BaseDialog_o *)this, v28, 0, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_23:
    sub_1C7BD40(gameObject, v21);
  }
}


void DeckSelectMenu__add_callbackFunc(
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

  if ( (byte_4CE9DC2 & 1) == 0 )
  {
    sub_1C7BAE8(&DeckSelectMenu_CallbackFunc_TypeInfo);
    byte_4CE9DC2 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (DeckSelectMenu_CallbackFunc_c *)v8->klass != DeckSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckSelectMenu_o *)sub_1C7C0DC(v8);
  DeckSelectMenu__remove_callbackFunc(v11, v12, v13);
}


void DeckSelectMenu__remove_callbackFunc(
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

  if ( (byte_4CE9DC3 & 1) == 0 )
  {
    sub_1C7BAE8(&DeckSelectMenu_CallbackFunc_TypeInfo);
    byte_4CE9DC3 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (DeckSelectMenu_CallbackFunc_c *)v8->klass != DeckSelectMenu_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1CD78BC(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckSelectMenu_o *)sub_1C7C0DC(v8);
  DeckSelectMenu__GetItem(v11, v12, v13);
}


void DeckSelectMenu_CallbackFunc___ctor(
        DeckSelectMenu_CallbackFunc_o *this,
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
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1AAB3B4;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1AAB35C;
}


System_IAsyncResult_o *DeckSelectMenu_CallbackFunc__BeginInvoke(
        DeckSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v11; // [xsp+28h] [xbp-38h] BYREF
  int32_t v12; // [xsp+2Ch] [xbp-34h] BYREF

  v11 = index;
  v12 = result;
  if ( (byte_4CE9DCA & 1) == 0 )
  {
    sub_1C7BAE8(&int_TypeInfo);
    sub_1C7BAE8(&DeckSelectMenu_ResultKind_TypeInfo);
    byte_4CE9DCA = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(DeckSelectMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(int_TypeInfo, &v11);
  return (System_IAsyncResult_o *)sub_1C7BA9C(this, v10, callback, object);
}


void DeckSelectMenu_CallbackFunc__EndInvoke(
        DeckSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C7BAA0(result, 0, method);
}


void DeckSelectMenu_CallbackFunc__Invoke(
        DeckSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, int32_t, int32_t, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    index,
    this->fields.method);
}