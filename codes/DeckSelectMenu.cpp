void DeckSelectMenu___ctor(DeckSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_596BE31 & 1) == 0 )
  {
    sub_2213A60(&BaseDialog_TypeInfo);
    byte_596BE31 = 1;
  }
  if ( !*(&BaseDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void DeckSelectMenu__Callback(DeckSelectMenu_o *this, int32_t result, int32_t index, const MethodInfo *method)
{
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x0
  struct DeckSelectMenu_CallbackFunc_o *v9; // x21
  struct DeckSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_2213A04(p_callbackFunc, 0, *(System_String_o **)&index, (System_String_o *)method, v4, v5, v6, v7);
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

  DeckSelectMenu__Close_40748604(this, 0, v2);
}


void DeckSelectMenu__Close_40748604(DeckSelectMenu_o *this, System_Action_o *callback, const MethodInfo *method)
{
  DeckListViewManager_o *deckListViewManager; // x0
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  System_Action_c *v12; // x0
  System_Action_o *v13; // x20

  if ( (byte_596BE2E & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DeckSelectMenu_EndClose__);
    byte_596BE2E = 1;
  }
  deckListViewManager = this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_2213CDC(0, callback);
  DeckListViewManager__SetMode_40740456(deckListViewManager, 1, method);
  this->fields.closeCallbackFunc = callback;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeCallbackFunc,
    (int32_t)callback,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11);
  v12 = System_Action_TypeInfo;
  this->fields.state = 4;
  v13 = (System_Action_o *)sub_2213CCC(v12);
  System_Action___ctor(v13, (Il2CppObject *)this, Method_DeckSelectMenu_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v13, 0);
}


void DeckSelectMenu__EndClose(DeckSelectMenu_o *this, const MethodInfo *method)
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

  DeckSelectMenu__Init(this, method);
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


void DeckSelectMenu__EndOpen(DeckSelectMenu_o *this, const MethodInfo *method)
{
  DeckListViewManager_CallbackFunc_c *v3; // x0
  struct DeckListViewManager_o *deckListViewManager; // x20
  DeckListViewManager_CallbackFunc_o *v5; // x21
  const MethodInfo *v6; // x3
  __int64 v7; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  const MethodInfo *v15; // x2
  System_String_o *v16; // x2
  System_String_o *v17; // x3
  int32_t v18; // w4
  int32_t v19; // w5
  bool v20; // w6
  bool v21; // w7
  MissionNaviTransitionBoardItem_o *p_openCallbackFunc; // x19
  struct System_Action_o *v23; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_596BE2D & 1) == 0 )
  {
    sub_2213A60(&DeckListViewManager_CallbackFunc_TypeInfo);
    sub_2213A60(&Method_DeckSelectMenu_OnSelectItem__);
    byte_596BE2D = 1;
  }
  v3 = DeckListViewManager_CallbackFunc_TypeInfo;
  deckListViewManager = this->fields.deckListViewManager;
  this->fields.state = 2;
  v5 = (DeckListViewManager_CallbackFunc_o *)sub_2213CCC(v3);
  DeckListViewManager_CallbackFunc___ctor(v5, (Il2CppObject *)this, (intptr_t)Method_DeckSelectMenu_OnSelectItem__, v6);
  if ( !deckListViewManager )
    sub_2213CDC(v7, v8);
  deckListViewManager->fields.callbackFunc = v5;
  sub_2213A04(
    (MissionNaviTransitionBoardItem_o *)&deckListViewManager->fields.callbackFunc,
    (int32_t)v5,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14);
  DeckListViewManager__SetMode_40740456(deckListViewManager, 2, v15);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc;
  v23 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    p_openCallbackFunc->klass = 0;
    sub_2213A04(p_openCallbackFunc, 0, v16, v17, v18, v19, v20, v21);
    ((void (__fastcall *)(intptr_t, intptr_t))v23->fields.invoke_impl)(v23->fields.method_code, v23->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
DeckListViewItem_o *DeckSelectMenu__GetItem(DeckSelectMenu_o *this, int32_t index, const MethodInfo *method)
{
  DeckListViewManager_o *deckListViewManager; // x0

  deckListViewManager = this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_2213CDC(0, *(_QWORD *)&index);
  return DeckListViewManager__GetItem(deckListViewManager, index, method);
}


void DeckSelectMenu__Init(DeckSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *deckListViewManager; // x0

  deckListViewManager = (ListViewManager_o *)this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_2213CDC(0, method);
  ListViewManager__DestroyList(deckListViewManager, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void DeckSelectMenu__OnClickCancel(DeckSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_596BE2F & 1) == 0 )
  {
    sub_2213A60(&Method_DeckSelectMenu_OnClickCancel__);
    byte_596BE2F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_DeckSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_DeckSelectMenu_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_2213A78(Method_DeckSelectMenu_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_2213A44(v3, v3[4]);
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
  DeckSelectMenu_o *v11; // x0
  int32_t v12; // w1
  int32_t v13; // w2
  System_Reflection_MethodBase_o *v14; // x0

  if ( (byte_596BE30 & 1) == 0 )
  {
    sub_2213A60(&Method_DeckSelectMenu_OnSelectItem__);
    byte_596BE30 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (n & 0x80000000) == 0 )
    {
      deckListViewManager = this->fields.deckListViewManager;
      if ( !deckListViewManager )
        sub_2213CDC(0, *(_QWORD *)&kind);
      DeckListViewManager__GetItem(deckListViewManager, n, *(const MethodInfo **)&n);
    }
    v8 = Method_DeckSelectMenu_OnSelectItem__;
    if ( kind == 1 )
    {
      if ( (*((_BYTE *)Method_DeckSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_2213A78(Method_DeckSelectMenu_OnSelectItem__);
      v9 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v9, 0, 0, 0);
      v11 = this;
      v12 = 1;
      v13 = n;
    }
    else
    {
      if ( (*((_BYTE *)Method_DeckSelectMenu_OnSelectItem__ + 83) & 2) != 0 )
        v8 = (_QWORD *)sub_2213A78(Method_DeckSelectMenu_OnSelectItem__);
      v14 = (System_Reflection_MethodBase_o *)sub_2213A44(v8, v8[4]);
      OverwriteAssetSoundName__PlaySystemSe(v14, 1, 0, 0);
      v11 = this;
      v12 = 0;
      v13 = -1;
    }
    this->fields.state = 3;
    DeckSelectMenu__Callback(v11, v12, v13, v10);
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
  bool v6; // w6
  bool v7; // w7
  int32_t state; // w8
  System_String_o *v14; // x2
  System_String_o *v15; // x3
  int32_t v16; // w4
  int32_t v17; // w5
  bool v18; // w6
  bool v19; // w7
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x2
  UILabel_o *titleLabel; // x21
  UILabel_o *titleDetailLabel; // x21
  UILabel_o *cancelLabel; // x21
  UnityEngine_GameObject_o *v27; // x0
  const MethodInfo *v28; // x2
  const MethodInfo *v29; // x2
  System_Action_o *v30; // x20
  System_String_o *v31; // x2
  System_String_o *v32; // x3
  int32_t v33; // w4
  int32_t v34; // w5
  bool v35; // w6
  bool v36; // w7
  const MethodInfo *v37; // x1

  if ( (byte_596BE2C & 1) == 0 )
  {
    sub_2213A60(&System_Action_TypeInfo);
    sub_2213A60(&Method_DeckSelectMenu_EndOpen__);
    sub_2213A60(&LocalizationManager_TypeInfo);
    sub_2213A60(&StringLiteral_10632/*"PARTY_ORGANIZATION_DECK_SELECT_CANCEL"*/);
    sub_2213A60(&StringLiteral_10634/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_TITLE"*/);
    sub_2213A60(&StringLiteral_10633/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_DETAIL"*/);
    byte_596BE2C = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)baseDeckItemList,
      (System_String_o *)callback,
      (int32_t)openCallback,
      (int32_t)method,
      v6,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
      (int32_t)openCallback,
      v31,
      v32,
      v33,
      v34,
      v35,
      v36);
    DeckSelectMenu__EndOpen(this, v37);
  }
  else if ( state == 4 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)baseDeckItemList,
      (System_String_o *)callback,
      (int32_t)openCallback,
      (int32_t)method,
      v6,
      v7);
    this->fields.openCallbackFunc = openCallback;
    sub_2213A04(
      (MissionNaviTransitionBoardItem_o *)&this->fields.openCallbackFunc,
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
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10634/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_TITLE"*/, 0);
      if ( !titleLabel )
        goto LABEL_23;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
      titleDetailLabel = this->fields.titleDetailLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10633/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_DETAIL"*/, 0);
      if ( !titleDetailLabel )
        goto LABEL_23;
      UILabel__set_text(titleDetailLabel, (System_String_o *)gameObject, 0);
    }
    cancelLabel = this->fields.cancelLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v22, v23);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10632/*"PARTY_ORGANIZATION_DECK_SELECT_CANCEL"*/, 0);
    if ( cancelLabel )
    {
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelLabel;
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UIRect__get_parent((UIRect_o *)gameObject, 0);
        if ( gameObject )
        {
          v27 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
          AndroidBackKeyManager__AddBackBtn(v27, 0);
          gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
          if ( gameObject )
          {
            DeckListViewManager__CreateList((DeckListViewManager_o *)gameObject, baseDeckItemList, v28);
            gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
            if ( gameObject )
            {
              DeckListViewManager__SetMode_40740456((DeckListViewManager_o *)gameObject, 1, v29);
              this->fields.state = 1;
              v30 = (System_Action_o *)sub_2213CCC(System_Action_TypeInfo);
              System_Action___ctor(v30, (Il2CppObject *)this, Method_DeckSelectMenu_EndOpen__, 0);
              BaseDialog__Open((BaseDialog_o *)this, v30, 0, 0, 0);
              return;
            }
          }
        }
      }
    }
LABEL_23:
    sub_2213CDC(gameObject, v21);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  DeckSelectMenu_o *v13; // x0
  DeckSelectMenu_CallbackFunc_o *v14; // x1
  const MethodInfo *v15; // x2

  if ( (byte_596BE2A & 1) == 0 )
  {
    sub_2213A60(&DeckSelectMenu_CallbackFunc_TypeInfo);
    byte_596BE2A = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (DeckSelectMenu_o *)sub_221405C(v8, DeckSelectMenu_CallbackFunc_TypeInfo, v9, v10);
  DeckSelectMenu__remove_callbackFunc(v13, v14, v15);
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
  __int64 v9; // x2
  __int64 v10; // x3
  __int64 v11; // x0
  bool v12; // zf
  DeckSelectMenu_o *v13; // x0
  int32_t v14; // w1
  const MethodInfo *v15; // x2

  if ( (byte_596BE2B & 1) == 0 )
  {
    sub_2213A60(&DeckSelectMenu_CallbackFunc_TypeInfo);
    byte_596BE2B = 1;
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
    v11 = sub_224B48C(p_callbackFunc, v8, v6);
    v12 = v11 == (_QWORD)v6;
    v6 = (System_Delegate_o *)v11;
    if ( v12 )
      return;
  }
  v13 = (DeckSelectMenu_o *)sub_221405C(v8, DeckSelectMenu_CallbackFunc_TypeInfo, v9, v10);
  DeckSelectMenu__GetItem(v13, v14, v15);
}


void DeckSelectMenu_CallbackFunc___ctor(
        DeckSelectMenu_CallbackFunc_o *this,
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
  if ( v12 != 2 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_2003EC8;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_2003E70;
}


System_IAsyncResult_o *DeckSelectMenu_CallbackFunc__BeginInvoke(
        DeckSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v10[3]; // [xsp+0h] [xbp-50h] BYREF
  int32_t v11; // [xsp+18h] [xbp-38h] BYREF
  int32_t v12; // [xsp+1Ch] [xbp-34h] BYREF

  v12 = result;
  v11 = index;
  if ( (byte_596BE32 & 1) == 0 )
  {
    sub_2213A60(&DeckSelectMenu_ResultKind_TypeInfo);
    byte_596BE32 = 1;
  }
  v10[2] = 0;
  v10[0] = j_il2cpp_value_box_0(DeckSelectMenu_ResultKind_TypeInfo, &v12);
  v10[1] = j_il2cpp_value_box_0(qword_5984348, &v11);
  return sub_2213A14(this, v10, callback, object);
}


void DeckSelectMenu_CallbackFunc__EndInvoke(
        DeckSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_2213A18(result, 0, method);
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