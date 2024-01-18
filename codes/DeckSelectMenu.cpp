void __fastcall DeckSelectMenu___ctor(DeckSelectMenu_o *this, const MethodInfo *method)
{
  if ( (byte_4183681 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_4183681 = 1;
  }
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall DeckSelectMenu__Callback(
        DeckSelectMenu_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  struct DeckSelectMenu_CallbackFunc_o **p_callbackFunc; // x0
  DeckSelectMenu_CallbackFunc_o *v5; // x21
  struct DeckSelectMenu_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    *p_callbackFunc = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL);
    DeckSelectMenu_CallbackFunc__Invoke(v5, result, index, 0LL);
  }
}


void __fastcall DeckSelectMenu__Close(DeckSelectMenu_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  DeckSelectMenu__Close_16761608(this, 0LL, v2);
}


void __fastcall DeckSelectMenu__Close_16761608(
        DeckSelectMenu_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v5; // x1
  DeckListViewManager_o *deckListViewManager; // x0
  System_Action_o *v7; // x20

  if ( (byte_418367E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_DeckSelectMenu_EndClose__, v5);
    byte_418367E = 1;
  }
  deckListViewManager = this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_B2C434(0LL, callback);
  DeckListViewManager__SetMode_16753888(deckListViewManager, 1, method);
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(&this->fields.closeCallbackFunc, callback);
  this->fields.state = 4;
  v7 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_DeckSelectMenu_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall DeckSelectMenu__EndClose(DeckSelectMenu_o *this, const MethodInfo *method)
{
  struct System_Action_o **p_closeCallbackFunc; // x19
  System_Action_o *v4; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  DeckSelectMenu__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v4 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL);
    System_Action__Invoke(v4, 0LL);
  }
}


void __fastcall DeckSelectMenu__EndOpen(DeckSelectMenu_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  struct DeckListViewManager_o *deckListViewManager; // x20
  DeckListViewManager_CallbackFunc_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x2
  struct System_Action_o **p_openCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *openCallbackFunc; // t1

  if ( (byte_418367D & 1) == 0 )
  {
    sub_B2C35C(&DeckListViewManager_CallbackFunc_TypeInfo, method);
    sub_B2C35C(&Method_DeckSelectMenu_OnSelectItem__, v3);
    byte_418367D = 1;
  }
  this->fields.state = 2;
  deckListViewManager = this->fields.deckListViewManager;
  v5 = (DeckListViewManager_CallbackFunc_o *)sub_B2C42C(DeckListViewManager_CallbackFunc_TypeInfo);
  DeckListViewManager_CallbackFunc___ctor(v5, (Il2CppObject *)this, Method_DeckSelectMenu_OnSelectItem__, 0LL);
  if ( !deckListViewManager )
    sub_B2C434(v6, v7);
  deckListViewManager->fields.callbackFunc = v5;
  sub_B2C2F8(&deckListViewManager->fields.callbackFunc, v5);
  DeckListViewManager__SetMode_16753888(deckListViewManager, 2, v8);
  openCallbackFunc = this->fields.openCallbackFunc;
  p_openCallbackFunc = &this->fields.openCallbackFunc;
  v10 = openCallbackFunc;
  if ( openCallbackFunc )
  {
    *p_openCallbackFunc = 0LL;
    sub_B2C2F8(p_openCallbackFunc, 0LL);
    System_Action__Invoke(v10, 0LL);
  }
}


DeckListViewItem_o *__fastcall DeckSelectMenu__GetItem(DeckSelectMenu_o *this, int32_t index, const MethodInfo *method)
{
  DeckListViewManager_o *deckListViewManager; // x0

  deckListViewManager = this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_B2C434(0LL, index);
  return DeckListViewManager__GetItem(deckListViewManager, index, method);
}


void __fastcall DeckSelectMenu__Init(DeckSelectMenu_o *this, const MethodInfo *method)
{
  ListViewManager_o *deckListViewManager; // x0

  deckListViewManager = (ListViewManager_o *)this->fields.deckListViewManager;
  if ( !deckListViewManager )
    sub_B2C434(0LL, method);
  ListViewManager__DestroyList(deckListViewManager, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall DeckSelectMenu__OnClickCancel(DeckSelectMenu_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x3

  if ( (byte_418367F & 1) == 0 )
  {
    sub_B2C35C(&Method_DeckSelectMenu_OnClickCancel__, method);
    byte_418367F = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_DeckSelectMenu_OnClickCancel__;
    if ( (*((_BYTE *)Method_DeckSelectMenu_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364();
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    this->fields.state = 3;
    DeckSelectMenu__Callback(this, 0, -1, v5);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckSelectMenu__OnSelectItem(DeckSelectMenu_o *this, int32_t kind, int32_t n, const MethodInfo *method)
{
  DeckListViewManager_o *deckListViewManager; // x0
  const MethodInfo *v8; // x3
  int32_t v9; // w1
  DeckSelectMenu_o *v10; // x0
  int32_t v11; // w2

  if ( (byte_4183680 & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&kind);
    byte_4183680 = 1;
  }
  if ( this->fields.state == 2 )
  {
    if ( (n & 0x80000000) == 0 )
    {
      deckListViewManager = this->fields.deckListViewManager;
      if ( !deckListViewManager )
        sub_B2C434(0LL, *(_QWORD *)&kind);
      DeckListViewManager__GetItem(deckListViewManager, n, *(const MethodInfo **)&n);
    }
    if ( kind == 1 )
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(0, 0LL);
      v9 = 1;
      v10 = this;
      v11 = n;
      this->fields.state = 3;
    }
    else
    {
      if ( (WORD1(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
        && !SoundManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
      }
      SoundManager__playSystemSe(1, 0LL);
      v11 = -1;
      this->fields.state = 3;
      v10 = this;
      v9 = 0;
    }
    DeckSelectMenu__Callback(v10, v9, v11, v8);
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
  __int64 v16; // x1
  int32_t state; // w8
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v19; // x1
  UILabel_o *titleLabel; // x21
  UILabel_o *titleDetailLabel; // x21
  UILabel_o *cancelLabel; // x21
  UnityEngine_GameObject_o *v23; // x21
  const MethodInfo *v24; // x2
  const MethodInfo *v25; // x2
  System_Action_o *v26; // x20
  const MethodInfo *v27; // x1

  if ( (byte_418367C & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&kind);
    sub_B2C35C(&AndroidBackKeyManager_TypeInfo, v11);
    sub_B2C35C(&Method_DeckSelectMenu_EndOpen__, v12);
    sub_B2C35C(&LocalizationManager_TypeInfo, v13);
    sub_B2C35C(&StringLiteral_10329/*"PARTY_ORGANIZATION_DECK_SELECT_CANCEL"*/, v14);
    sub_B2C35C(&StringLiteral_10331/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_TITLE"*/, v15);
    sub_B2C35C(&StringLiteral_10330/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_DETAIL"*/, v16);
    byte_418367C = 1;
  }
  state = this->fields.state;
  if ( (unsigned int)(state - 2) < 2 )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(&this->fields.callbackFunc, callback);
    this->fields.openCallbackFunc = openCallback;
    sub_B2C2F8(&this->fields.openCallbackFunc, openCallback);
    DeckSelectMenu__EndOpen(this, v27);
  }
  else if ( state == 4 || !state )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(&this->fields.callbackFunc, callback);
    this->fields.openCallbackFunc = openCallback;
    sub_B2C2F8(&this->fields.openCallbackFunc, openCallback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    if ( !kind )
    {
      titleLabel = this->fields.titleLabel;
      if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
        && !LocalizationManager_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      }
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10331/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_TITLE"*/, 0LL);
      if ( !titleLabel )
        goto LABEL_28;
      UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
      titleDetailLabel = this->fields.titleDetailLabel;
      gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10330/*"PARTY_ORGANIZATION_DECK_SELECT_COPY_DETAIL"*/, 0LL);
      if ( !titleDetailLabel )
        goto LABEL_28;
      UILabel__set_text(titleDetailLabel, (System_String_o *)gameObject, 0LL);
    }
    cancelLabel = this->fields.cancelLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_10329/*"PARTY_ORGANIZATION_DECK_SELECT_CANCEL"*/, 0LL);
    if ( cancelLabel )
    {
      UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
      gameObject = (UnityEngine_GameObject_o *)this->fields.cancelLabel;
      if ( gameObject )
      {
        gameObject = (UnityEngine_GameObject_o *)UIRect__get_parent((UIRect_o *)gameObject, 0LL);
        if ( gameObject )
        {
          v23 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
          if ( (BYTE3(AndroidBackKeyManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
            && !AndroidBackKeyManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(AndroidBackKeyManager_TypeInfo);
          }
          AndroidBackKeyManager__AddBackBtn(v23, 0LL);
          gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
          if ( gameObject )
          {
            DeckListViewManager__CreateList((DeckListViewManager_o *)gameObject, baseDeckItemList, v24);
            gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
            if ( gameObject )
            {
              DeckListViewManager__SetMode_16753888((DeckListViewManager_o *)gameObject, 1, v25);
              this->fields.state = 1;
              v26 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
              System_Action___ctor(v26, (Il2CppObject *)this, Method_DeckSelectMenu_EndOpen__, 0LL);
              BaseDialog__Open((BaseDialog_o *)this, v26, 0, 0LL);
              return;
            }
          }
        }
      }
    }
LABEL_28:
    sub_B2C434(gameObject, v19);
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

  if ( (byte_418367A & 1) == 0 )
  {
    sub_B2C35C(&DeckSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418367A = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckSelectMenu_o *)sub_B2C728(v8);
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

  if ( (byte_418367B & 1) == 0 )
  {
    sub_B2C35C(&DeckSelectMenu_CallbackFunc_TypeInfo, value);
    byte_418367B = 1;
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
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  v11 = (DeckSelectMenu_o *)sub_B2C728(v8);
  DeckSelectMenu__GetItem(v11, v12, v13);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckSelectMenu_CallbackFunc___ctor(
        DeckSelectMenu_CallbackFunc_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct BattleServantClassBoardSkillEffectListComponent_o *v8; // x8
  BattleServantConfConponent_o *p_method; // x0

  v8 = **(struct BattleServantClassBoardSkillEffectListComponent_o ***)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = (BattleServantConfConponent_o *)&this->fields.method;
  p_method->monitor = *(void **)&method;
  p_method[-1].fields.classBoardSkillObj = v8;
  sub_B2C2F8(
    p_method,
    (System_Int32_array **)object,
    *(System_String_array ***)&method,
    (System_String_array **)a4,
    v4,
    v5,
    v6,
    v7);
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
  __int64 v11[3]; // [xsp+0h] [xbp-40h] BYREF
  int32_t v12; // [xsp+18h] [xbp-28h] BYREF
  int32_t v13; // [xsp+1Ch] [xbp-24h] BYREF

  v12 = index;
  v13 = result;
  if ( (byte_41864DD & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&result);
    sub_B2C35C(&DeckSelectMenu_ResultKind_TypeInfo, v9);
    byte_41864DD = 1;
  }
  v11[2] = 0LL;
  v11[0] = j_il2cpp_value_box_0(DeckSelectMenu_ResultKind_TypeInfo, &v13);
  v11[1] = j_il2cpp_value_box_0(int_TypeInfo, &v12);
  return (System_IAsyncResult_o *)sub_B2C300(this, v11, callback, object);
}


void __fastcall DeckSelectMenu_CallbackFunc__EndInvoke(
        DeckSelectMenu_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall DeckSelectMenu_CallbackFunc__Invoke(
        DeckSelectMenu_CallbackFunc_o *this,
        int32_t result,
        int32_t index,
        const MethodInfo *method)
{
  __int64 v4; // x8
  __int64 v7; // x25
  DeckSelectMenu_CallbackFunc_o **v8; // x26
  __int64 v9; // x27
  unsigned int v10; // w24
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned int v14; // w23
  unsigned __int64 v15; // x10
  _DWORD *v16; // x11
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall **v20)(__int64 *, _QWORD, _QWORD, _QWORD); // x0
  DeckSelectMenu_CallbackFunc_o *v21; // x8
  __int64 *v22; // x22
  __int64 v23; // x23
  void (__fastcall *v24)(unsigned int *, _QWORD, __int64); // x24
  char v25; // w24
  char v26; // w0
  __int64 v27; // x3
  unsigned int v28; // w24
  __int64 v29; // x8
  __int64 v30; // x1
  __int64 v31; // x2
  unsigned __int64 v32; // x10
  _DWORD *v33; // x11
  unsigned int v34; // [xsp+Ch] [xbp-54h] BYREF
  DeckSelectMenu_CallbackFunc_o *v35; // [xsp+18h] [xbp-48h] BYREF

  v35 = this;
  v34 = result;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v35;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (DeckSelectMenu_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v21 = v8[v9];
      v22 = *(__int64 **)&v21->fields.method;
      v23 = *(_QWORD *)&v21->fields.extra_arg;
      v24 = *(void (__fastcall **)(unsigned int *, _QWORD, __int64))&v21->fields.method_ptr;
      if ( *(__int16 *)(v23 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v21->fields.extra_arg, *(_QWORD *)&result, *(_QWORD *)&index, method);
      if ( (sub_B2C38C(v23) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v23 + 74) != 2 )
        goto LABEL_36;
      v24((unsigned int *)v34, (unsigned int)index, v23);
LABEL_38:
      if ( ++v9 == v7 )
        return;
    }
    if ( !v22 )
    {
      v24(&v34 - 4, (unsigned int)index, v23);
      goto LABEL_38;
    }
    if ( *(__int16 *)(v23 + 72) != -1 && (*(_BYTE *)(*v22 + 277) & 1) == 0 && this->fields.m_target )
    {
      v25 = sub_B2C384(v23);
      v26 = sub_B2C788(v23);
      if ( (v25 & 1) != 0 )
      {
        v28 = v34;
        if ( (v26 & 1) != 0 )
        {
          v29 = *v22;
          v30 = *(_QWORD *)(v23 + 24);
          v31 = *(unsigned __int16 *)(v23 + 72);
          if ( *(_WORD *)(*v22 + 298) )
          {
            v32 = 0LL;
            v33 = (_DWORD *)(*(_QWORD *)(v29 + 176) + 8LL);
            while ( *((_QWORD *)v33 - 1) != v30 )
            {
              ++v32;
              v33 += 4;
              if ( v32 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_35;
            }
            v19 = v29 + 16LL * (*v33 + (int)v31) + 312;
          }
          else
          {
LABEL_35:
            v19 = sub_AC5258(v22, v30, v31, v27);
          }
          v18 = *(_QWORD *)(v19 + 8);
        }
        else
        {
          v18 = *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320);
        }
        v20 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))sub_B2C40C(v18, v23);
        (*v20)(v22, v28, (unsigned int)index, v20);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v23 + 72);
        if ( (v26 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v23);
          v13 = *v22;
          v14 = v34;
          if ( *(_WORD *)(*v22 + 298) )
          {
            v15 = 0LL;
            v16 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v16 - 1) != class_0 )
            {
              ++v15;
              v16 += 4;
              if ( v15 >= *(unsigned __int16 *)(*v22 + 298) )
                goto LABEL_11;
            }
            v17 = v13 + 16LL * (int)(*v16 + v10) + 312;
          }
          else
          {
LABEL_11:
            v17 = sub_AC5258(v22, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))v17)(
            v22,
            v14,
            (unsigned int)index,
            *(_QWORD *)(v17 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 312))(
            v22,
            v34,
            (unsigned int)index,
            *(_QWORD *)(*v22 + 16LL * *(unsigned __int16 *)(v23 + 72) + 320));
        }
      }
      goto LABEL_38;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v24)(v22, v34, (unsigned int)index, v23);
    goto LABEL_38;
  }
}