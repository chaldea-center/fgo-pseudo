void __fastcall SupportSelectCopyDeckSelectMenu___ctor(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB39E & 1) == 0 )
  {
    sub_B5D5C4(&BaseDialog_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB39E = 1;
  }
  this->fields.currentState = 2;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall SupportSelectCopyDeckSelectMenu__Close(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  System_Action_o *v8; // x20

  if ( (byte_42EB39A & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SupportSelectCopyDeckSelectMenu_OnFinishedClose__, v5, v6, v7);
    byte_42EB39A = 1;
  }
  this->fields.currentState = 2;
  v8 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_SupportSelectCopyDeckSelectMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v8, 0LL);
}


void __fastcall SupportSelectCopyDeckSelectMenu__OnClickCancel(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // x0

  if ( (byte_42EB39C & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, (_DWORD)method, v2, v3);
    byte_42EB39C = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(1, 0LL);
    onSelected = this->fields.onSelected;
    if ( onSelected )
      SupportSelectCopyDeckSelectMenu_OnSelectEvent__Invoke(onSelected, -1, 0LL);
  }
}


void __fastcall SupportSelectCopyDeckSelectMenu__OnFinishedClose(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  System_String_array **v2; // x2
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o **p_onSelected; // x19
  __int64 v9; // x1
  ListViewManager_o *v10; // x0

  this->fields.onSelected = 0LL;
  p_onSelected = &this->fields.onSelected;
  sub_B5D560((BattleServantConfConponent_o *)&this->fields.onSelected, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = (ListViewManager_o *)*(p_onSelected - 2);
  if ( !v10 )
    sub_B5D69C(0LL, v9);
  ListViewManager__DestroyList(v10, 0LL);
}


void __fastcall SupportSelectCopyDeckSelectMenu__OnFinishedOpen(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3
  int v5; // w1
  int v6; // w2
  __int64 v7; // x3
  SupportSelectDeckListViewManager_o *deckListViewManager; // x20
  SupportSelectDeckListViewObject_OnSelectEvent_o *v9; // x21
  __int64 v10; // x0
  __int64 v11; // x1
  const MethodInfo *v12; // x3

  if ( (byte_42EB399 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo, (_DWORD)method, v2, v3);
    sub_B5D5C4(&Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__, v5, v6, v7);
    byte_42EB399 = 1;
  }
  this->fields.currentState = 1;
  deckListViewManager = this->fields.deckListViewManager;
  v9 = (SupportSelectDeckListViewObject_OnSelectEvent_o *)sub_B5D694(SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo);
  SupportSelectDeckListViewObject_OnSelectEvent___ctor(
    v9,
    (Il2CppObject *)this,
    Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__,
    0LL);
  if ( !deckListViewManager )
    sub_B5D69C(v10, v11);
  SupportSelectDeckListViewManager__SetMode_30179336(deckListViewManager, 2, v9, v12);
}


void __fastcall SupportSelectCopyDeckSelectMenu__OnSelectedDeck(
        SupportSelectCopyDeckSelectMenu_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // x0

  if ( (byte_42EB39B & 1) == 0 )
  {
    sub_B5D5C4(&SoundManager_TypeInfo, deckId, (_DWORD)method, v3);
    byte_42EB39B = 1;
  }
  if ( this->fields.currentState == 1 )
  {
    if ( (BYTE3(SoundManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !SoundManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(SoundManager_TypeInfo);
    }
    SoundManager__playSystemSe(0, 0LL);
    onSelected = this->fields.onSelected;
    if ( onSelected )
      SupportSelectCopyDeckSelectMenu_OnSelectEvent__Invoke(onSelected, deckId, 0LL);
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
  int v11; // w1
  int v12; // w2
  __int64 v13; // x3
  int v14; // w1
  int v15; // w2
  __int64 v16; // x3
  int v17; // w1
  int v18; // w2
  __int64 v19; // x3
  int v20; // w1
  int v21; // w2
  __int64 v22; // x3
  int v23; // w1
  int v24; // w2
  __int64 v25; // x3
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v27; // x1
  const MethodInfo *v28; // x4
  const MethodInfo *v29; // x3
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  System_String_array **v33; // x2
  System_String_array **v34; // x3
  System_Boolean_array **v35; // x4
  System_Int32_array **v36; // x5
  System_Int32_array *v37; // x6
  System_Int32_array *v38; // x7
  System_Action_o *v39; // x20

  if ( (byte_42EB398 & 1) == 0 )
  {
    sub_B5D5C4(&System_Action_TypeInfo, (_DWORD)targetDeckList, (_DWORD)sameKindIdxList, notCopyIdxList);
    sub_B5D5C4(&LocalizationManager_TypeInfo, v11, v12, v13);
    sub_B5D5C4(&Method_SupportSelectCopyDeckSelectMenu_OnFinishedOpen__, v14, v15, v16);
    sub_B5D5C4(&StringLiteral_12665/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/, v17, v18, v19);
    sub_B5D5C4(&StringLiteral_12664/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/, v20, v21, v22);
    sub_B5D5C4(&StringLiteral_12666/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_TITLE"*/, v23, v24, v25);
    byte_42EB398 = 1;
  }
  if ( this->fields.currentState == 2 )
  {
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_15;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
    if ( !gameObject )
      goto LABEL_15;
    SupportSelectDeckListViewManager__CreateList(
      (SupportSelectDeckListViewManager_o *)gameObject,
      targetDeckList,
      sameKindIdxList,
      notCopyIdxList,
      v28);
    gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
    if ( !gameObject )
      goto LABEL_15;
    SupportSelectDeckListViewManager__SetMode_30179336((SupportSelectDeckListViewManager_o *)gameObject, 1, 0LL, v29);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12666/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_TITLE"*/, 0LL);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
          messageLabel = this->fields.messageLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12665/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/, 0LL),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12664/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/, 0LL),
          !cancelButtonLabel) )
    {
LABEL_15:
      sub_B5D69C(gameObject, v27);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
    this->fields.onSelected = onSelected;
    sub_B5D560(
      (BattleServantConfConponent_o *)&this->fields.onSelected,
      (System_Int32_array **)onSelected,
      v33,
      v34,
      v35,
      v36,
      v37,
      v38);
    v39 = (System_Action_o *)sub_B5D694(System_Action_TypeInfo);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_SupportSelectCopyDeckSelectMenu_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0LL);
  }
}


void __fastcall SupportSelectCopyDeckSelectMenu__add_onSelected(
        SupportSelectCopyDeckSelectMenu_o *this,
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o **p_onSelected; // x20
  System_Delegate_o *v7; // x21
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SupportSelectCopyDeckSelectMenu_o *v12; // x0
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v13; // x1
  const MethodInfo *v14; // x2

  if ( (byte_42EB396 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB396 = 1;
  }
  onSelected = this->fields.onSelected;
  p_onSelected = &this->fields.onSelected;
  v7 = (System_Delegate_o *)onSelected;
  while ( 1 )
  {
    v9 = System_Delegate__Combine(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SupportSelectCopyDeckSelectMenu_OnSelectEvent_c *)v9->klass != SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onSelected, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SupportSelectCopyDeckSelectMenu__remove_onSelected(v12, v13, v14);
}


System_String_o *__fastcall SupportSelectCopyDeckSelectMenu__get_closeBtnPath(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  int v2; // w2
  __int64 v3; // x3

  if ( (byte_42EB39D & 1) == 0 )
  {
    sub_B5D5C4(&StringLiteral_2794/*"BaseWindow/CacnelButton"*/, (_DWORD)method, v2, v3);
    byte_42EB39D = 1;
  }
  return (System_String_o *)StringLiteral_2794/*"BaseWindow/CacnelButton"*/;
}


void __fastcall SupportSelectCopyDeckSelectMenu__remove_onSelected(
        SupportSelectCopyDeckSelectMenu_o *this,
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *value,
        const MethodInfo *method)
{
  __int64 v3; // x3
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o **p_onSelected; // x20
  System_Delegate_o *v7; // x21
  struct SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // t1
  System_Delegate_o *v9; // x0
  __int64 v10; // x0
  bool v11; // zf
  SupportSelectCopyDeckSelectMenu_o *v12; // x0
  SupportServantData_array *v13; // x1
  System_Int32_array *v14; // x2
  System_Int32_array *v15; // x3
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v16; // x4
  const MethodInfo *v17; // x5

  if ( (byte_42EB397 & 1) == 0 )
  {
    sub_B5D5C4(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, (_DWORD)value, (_DWORD)method, v3);
    byte_42EB397 = 1;
  }
  onSelected = this->fields.onSelected;
  p_onSelected = &this->fields.onSelected;
  v7 = (System_Delegate_o *)onSelected;
  while ( 1 )
  {
    v9 = System_Delegate__Remove(v7, (System_Delegate_o *)value, 0LL);
    if ( v9 )
    {
      if ( (SupportSelectCopyDeckSelectMenu_OnSelectEvent_c *)v9->klass != SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo )
        break;
    }
    v10 = sub_B51FDC(p_onSelected, v9, v7);
    v11 = v7 == (System_Delegate_o *)v10;
    v7 = (System_Delegate_o *)v10;
    if ( v11 )
      return;
  }
  sub_B5D990(v9);
  SupportSelectCopyDeckSelectMenu__Open(v12, v13, v14, v15, v16, v17);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectCopyDeckSelectMenu_OnSelectEvent___ctor(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  __int64 v4; // x8
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B5D560(p_method);
}


System_IAsyncResult_o *__fastcall SupportSelectCopyDeckSelectMenu_OnSelectEvent__BeginInvoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        int32_t selectDeckId,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  int32_t v10; // [xsp+1Ch] [xbp-24h] BYREF

  v10 = selectDeckId;
  if ( (byte_42E6483 & 1) == 0 )
  {
    sub_B5D5C4(&int_TypeInfo, selectDeckId, (_DWORD)callback, object);
    byte_42E6483 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B5D568(this, v9, callback, object);
}


void __fastcall SupportSelectCopyDeckSelectMenu_OnSelectEvent__EndInvoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B5D56C(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectCopyDeckSelectMenu_OnSelectEvent__Invoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        int32_t selectDeckId,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x3
  __int64 v12; // x8
  unsigned __int64 v13; // x10
  _DWORD *v14; // x11
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall **v18)(__int64 *, _QWORD, _QWORD); // x0
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v19; // x8
  __int64 *v20; // x21
  __int64 v21; // x22
  void (__fastcall *v22)(_QWORD, __int64); // x23
  char v23; // w23
  char v24; // w0
  __int64 v25; // x3
  __int64 v26; // x8
  __int64 v27; // x1
  __int64 v28; // x2
  unsigned __int64 v29; // x10
  _DWORD *v30; // x11
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v31; // [xsp+8h] [xbp-48h] BYREF

  v31 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v31;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v19 = v7[v8];
      v20 = *(__int64 **)&v19->fields.method;
      v21 = *(_QWORD *)&v19->fields.extra_arg;
      v22 = *(void (__fastcall **)(_QWORD, __int64))&v19->fields.method_ptr;
      if ( *(__int16 *)(v21 + 72) == -1 )
        sub_B5D680(*(_QWORD *)&v19->fields.extra_arg, *(_QWORD *)&selectDeckId, method);
      if ( (sub_B5D5F4(v21) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v21 + 74) != 1 )
        goto LABEL_36;
      v22((unsigned int)selectDeckId, v21);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v20 && *(__int16 *)(v21 + 72) != -1 && (*(_BYTE *)(*v20 + 277) & 1) == 0 && this->fields.m_target )
    {
      v23 = sub_B5D5EC(v21);
      v24 = sub_B5D9F0(v21);
      if ( (v23 & 1) != 0 )
      {
        if ( (v24 & 1) != 0 )
        {
          v26 = *v20;
          v27 = *(_QWORD *)(v21 + 24);
          v28 = *(unsigned __int16 *)(v21 + 72);
          if ( *(_WORD *)(*v20 + 298) )
          {
            v29 = 0LL;
            v30 = (_DWORD *)(*(_QWORD *)(v26 + 176) + 8LL);
            while ( *((_QWORD *)v30 - 1) != v27 )
            {
              ++v29;
              v30 += 4;
              if ( v29 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_35;
            }
            v17 = v26 + 16LL * (*v30 + (int)v28) + 312;
          }
          else
          {
LABEL_35:
            v17 = sub_AF54C0(v20, v27, v28, v25);
          }
          v16 = *(_QWORD *)(v17 + 8);
        }
        else
        {
          v16 = *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320);
        }
        v18 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B5D674(v16, v21);
        (*v18)(v20, (unsigned int)selectDeckId, v18);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v21 + 72);
        if ( (v24 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v21);
          v12 = *v20;
          if ( *(_WORD *)(*v20 + 298) )
          {
            v13 = 0LL;
            v14 = (_DWORD *)(*(_QWORD *)(v12 + 176) + 8LL);
            while ( *((_QWORD *)v14 - 1) != class_0 )
            {
              ++v13;
              v14 += 4;
              if ( v13 >= *(unsigned __int16 *)(*v20 + 298) )
                goto LABEL_11;
            }
            v15 = v12 + 16LL * (int)(*v14 + v9) + 312;
          }
          else
          {
LABEL_11:
            v15 = sub_AF54C0(v20, class_0, v9, v11);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v15)(v20, (unsigned int)selectDeckId, *(_QWORD *)(v15 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 312))(
            v20,
            (unsigned int)selectDeckId,
            *(_QWORD *)(*v20 + 16LL * *(unsigned __int16 *)(v21 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v22)(v20, (unsigned int)selectDeckId, v21);
    goto LABEL_37;
  }
}