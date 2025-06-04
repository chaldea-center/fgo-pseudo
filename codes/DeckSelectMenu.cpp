void __fastcall DeckSelectMenu___ctor(DeckSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4AFD943 & 1) == 0 )
  {
    sub_1BC3008(&BaseDialog_TypeInfo, method);
    byte_4AFD943 = 1;
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
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct DeckSelectMenu_CallbackFunc_o *v5; // x21
  struct DeckSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BC2FAC(p_callbackFunc, 0, index, method);
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

  DeckSelectMenu__Close_33132572(this, 0LL, v2);
}


void __fastcall DeckSelectMenu__Close_33132572(
        DeckSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DeckListViewManager_o *deckListViewManager; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  System_Action_o *v9; // x20

  if ( (byte_4AFD940 & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, callback);
    sub_1BC3008(&Method_DeckSelectMenu_EndClose__, v5);
    byte_4AFD940 = 1;
  }
  deckListViewManager = this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_1BC3264(0LL, callback);
  DeckListViewManager__SetMode_33124356(deckListViewManager, 1, method);
  this->fields.closeCallbackFunc = callback;
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, v7, v8);
  this->fields.state = 4;
  v9 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_DeckSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall DeckSelectMenu__EndClose(DeckSelectMenu_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DeckSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_1BC2FAC(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall DeckSelectMenu__EndOpen(DeckSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct DeckListViewManager_o *deckListViewManager; // x20
  DeckListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  int32_t v9; // w2
  const MethodInfo *v10; // x3
  const MethodInfo *v11; // x2
  int32_t v12; // w2
  const MethodInfo *v13; // x3
  CGThumbnailListItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v15; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_4AFD93F & 1) == 0 )
  {
    sub_1BC3008(&DeckListViewManager_CallbackFunc_TypeInfo, method);
    sub_1BC3008(&Method_DeckSelectMenu_OnSelectItem__, v3);
    byte_4AFD93F = 1;
  }
  this->fields.state = 2;
  deckListViewManager = this->fields.deckListViewManager;
  v5 = (DeckListViewManager_CallbackFunc_o *)sub_1BC3254(DeckListViewManager_CallbackFunc_TypeInfo);
  DeckListViewManager_CallbackFunc___ctor(v5, (Il2CppObject *)this, (intptr_t)Method_DeckSelectMenu_OnSelectItem__, v6);
  if ( !deckListViewManager )
    sub_1BC3264(v7, v8);
  deckListViewManager->fields.callbackFunc = v5;
  sub_1BC2FAC((CGThumbnailListItem_o *)&deckListViewManager->fields.callbackFunc, (int32_t)v5, v9, v10);
  DeckListViewManager__SetMode_33124356(deckListViewManager, 2, v11);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (CGThumbnailListItem_o *)&this->fields.openCallbackFunc;
  v15 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0LL;
    sub_1BC2FAC(p_openCallbackFunc, 0, v12, v13);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v15->fields.m_target)(
      v15->fields.original_method_info,
      *(_QWORD *)&v15->fields.extra_arg);
  }
}


DeckListViewItem_o *__fastcall DeckSelectMenu__GetItem(DeckSelectMenu_o *this, int32_t index, const MethodInfo *method)
{
  DeckListViewManager_o *deckListViewManager; // x0

  deckListViewManager = this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_1BC3264(0LL, index);
  return DeckListViewManager__GetItem(deckListViewManager, index, method);
}


void __fastcall DeckSelectMenu__Init(DeckSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *deckListViewManager; // x0

  deckListViewManager = (ListViewManager_o *)this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_1BC3264(0LL, method);
  ListViewManager__DestroyList(deckListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DeckSelectMenu__OnClickCancel(DeckSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_4AFD941 & 1) == 0 )
  {
    sub_1BC3008(&Method_DeckSelectMenu_OnClickCancel__, method);
    byte_4AFD941 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_DeckSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_DeckSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BC3020(Method_DeckSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0LL);
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

  if ( (byte_4AFD942 & 1) == 0 )
  {
    sub_1BC3008(&Method_DeckSelectMenu_OnSelectItem__, *(_QWORD *)&kind);
    byte_4AFD942 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (n & 0x80000000) == 0 )
    {
      deckListViewManager = this->fields.deckListViewManager;
      if ( !deckListViewManager )
        sub_1BC3264(0LL, *(_QWORD *)&kind);
      DeckListViewManager__GetItem(deckListViewManager, n, *(const MethodInfo **)&n);
    }
    v8 = Method_DeckSelectMenu_OnSelectItem__;
    if ( (*((_BYTE *)Method_DeckSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
      v8 = (_QWORD *)sub_1BC3020(Method_DeckSelectMenu_OnSelectItem__);
    v9 = (System_Reflection_MethodBase_o *)sub_1BC2FEC(v8, v8[4]);
    if ( kind == 1 )
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0LL);
      v11 = 1;
      v12 = this;
      v13 = n;
      this->fields.state = 3;
    }
    else
    {
      OverwriteAssetSoundName__PlaySystemSe(v9, 1, 0, 0LL);
      v13 = -1;
      this->fields.state = 3;
      v12 = this;
      v11 = 0;
    }
    DeckSelectMenu__Callback(v12, v11, v13, v10);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckSelectMenu__Open(
        DeckSelectMenu_o *this,
        int32_t kind,
        PartyListViewItem_array *baseDeckItemList,
        DeckSelectMenu_CallbackFunc_o *callback,
        System_Action_o *openCallback,
        const MethodInfo *method)
{
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  int32_t state; // w8
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v20; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *titleDetailLabel; // x21
  UILabel_o *cancelLabel; // x21
  UnityEngine_GameObject_o *v24; // x0
  const MethodInfo *v25; // x2
  const MethodInfo *v26; // x2
  System_Action_o *v27; // x20
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  const MethodInfo *v30; // x1

  if ( (byte_4AFD93E & 1) == 0 )
  {
    sub_1BC3008(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&Method_DeckSelectMenu_EndOpen__, v11);
    sub_1BC3008(&LocalizationManager_TypeInfo, v12);
    sub_1BC3008(&StringLiteral_10134/*"PARTY_ORGANIZATION_DECK_SELECT_CANCEL"*/, v13);
    sub_1BC3008(&StringLiteral_10136/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_TITLE"*/, v14);
    sub_1BC3008(&StringLiteral_10135/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_DETAIL"*/, v15);
    byte_4AFD93E = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)baseDeckItemList,
      (const MethodInfo *)callback);
    this->fields.openCallbackFunc = openCallback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v28, v29);
    DeckSelectMenu__EndOpen(this, v30);
  }
  else if ( state == 4 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_1BC2FAC(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (int32_t)baseDeckItemList,
      (const MethodInfo *)callback);
    this->fields.openCallbackFunc = openCallback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.openCallbackFunc, (int32_t)openCallback, v17, v18);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_23;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( !kind )
    {
      titleLabel = this->fields.titleLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10136/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_23;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      titleDetailLabel = this->fields.titleDetailLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10135/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_DETAIL"*/, 0LL);
      if ( !titleDetailLabel )
        goto LABEL_23;
      UILabel__set_text(titleDetailLabel, (System_String_o *)gameObject, 0LL);
    }
    cancelLabel = this->fields.cancelLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10134/*"PARTY_ORGANIZATION_DECK_SELECT_CANCEL"*/, 0LL);
    if ( cancelLabel )
    {
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelLabel;
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UIRect__get_parent((UIRect_o *)gameObject, 0LL);
        if ( gameObject )
        {
          v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          AndroidBackKeyManager__AddBackBtn(v24, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
          if ( gameObject )
          {
            DeckListViewManager__CreateList((DeckListViewManager_o *)gameObject, baseDeckItemList, v25);
            gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
            if ( gameObject )
            {
              DeckListViewManager__SetMode_33124356((DeckListViewManager_o *)gameObject, 1, v26);
              this->fields.state = 1;
              v27 = (System_Action_o *)sub_1BC3254(System_Action_TypeInfo);
              System_Action___ctor(v27, (Il2CppObject *)this, Method_DeckSelectMenu_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v27, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_23:
    sub_1BC3264(gameObject, v20);
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

  if ( (byte_4AFD93C & 1) == 0 )
  {
    sub_1BC3008(&DeckSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4AFD93C = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckSelectMenu_o *)sub_1BC3524(v8);
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

  if ( (byte_4AFD93D & 1) == 0 )
  {
    sub_1BC3008(&DeckSelectMenu_CallbackFunc_TypeInfo, value);
    byte_4AFD93D = 1;
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
    v9 = sub_1BFD098(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckSelectMenu_o *)sub_1BC3524(v8);
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
  sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BC30C8(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BC3280(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BC3130(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A07590;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A07538;
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
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  __int64 v12; // x4
  __int64 v14[3]; // [xsp+8h] [xbp-58h] BYREF
  int32_t v15; // [xsp+28h] [xbp-38h] BYREF
  int32_t v16; // [xsp+2Ch] [xbp-34h] BYREF

  v15 = index;
  v16 = result;
  if ( (byte_4AFD944 & 1) == 0 )
  {
    sub_1BC3008(&int_TypeInfo, *(_QWORD *)&result);
    sub_1BC3008(&DeckSelectMenu_ResultKind_TypeInfo, v9);
    byte_4AFD944 = 1;
  }
  v14[2] = 0LL;
  v14[0] = j_il2cpp_value_box_0(DeckSelectMenu_ResultKind_TypeInfo, &v16, *(_QWORD *)&index, callback, object);
  v14[1] = j_il2cpp_value_box_0(int_TypeInfo, &v15, v10, v11, v12);
  return (System_IAsyncResult_o *)sub_1BC2FBC(this, v14, callback, object);
}


void __fastcall DeckSelectMenu_CallbackFunc__EndInvoke(
        DeckSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BC2FC0(result, 0LL, method);
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