void __fastcall SupportSelectCopyDeckSelectMenu___ctor(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_418AE91 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418AE91 = 1;
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
  __int64 v3; // x1
  System_Action_o *v4; // x20

  if ( (byte_418AE8D & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, method);
    sub_B2C35C(&Method_SupportSelectCopyDeckSelectMenu_OnFinishedClose__, v3);
    byte_418AE8D = 1;
  }
  this->fields.currentState = 2;
  v4 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_SupportSelectCopyDeckSelectMenu_OnFinishedClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v4, 0LL);
}


void __fastcall SupportSelectCopyDeckSelectMenu__OnClickCancel(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // x0

  if ( (byte_418AE8F & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, method);
    byte_418AE8F = 1;
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
  sub_B2C2F8((BattleServantConfConponent_o *)&this->fields.onSelected, 0LL, v2, v3, v4, v5, v6, v7);
  v10 = (ListViewManager_o *)*(p_onSelected - 2);
  if ( !v10 )
    sub_B2C434(0LL, v9);
  ListViewManager__DestroyList(v10, 0LL);
}


void __fastcall SupportSelectCopyDeckSelectMenu__OnFinishedOpen(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x1
  SupportSelectDeckListViewManager_o *deckListViewManager; // x20
  SupportSelectDeckListViewObject_OnSelectEvent_o *v5; // x21
  __int64 v6; // x0
  __int64 v7; // x1
  const MethodInfo *v8; // x3

  if ( (byte_418AE8C & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo, method);
    sub_B2C35C(&Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__, v3);
    byte_418AE8C = 1;
  }
  this->fields.currentState = 1;
  deckListViewManager = this->fields.deckListViewManager;
  v5 = (SupportSelectDeckListViewObject_OnSelectEvent_o *)sub_B2C42C(SupportSelectDeckListViewObject_OnSelectEvent_TypeInfo);
  SupportSelectDeckListViewObject_OnSelectEvent___ctor(
    v5,
    (Il2CppObject *)this,
    Method_SupportSelectCopyDeckSelectMenu_OnSelectedDeck__,
    0LL);
  if ( !deckListViewManager )
    sub_B2C434(v6, v7);
  SupportSelectDeckListViewManager__SetMode_31154820(deckListViewManager, 2, v5, v8);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectCopyDeckSelectMenu__OnSelectedDeck(
        SupportSelectCopyDeckSelectMenu_o *this,
        int32_t deckId,
        const MethodInfo *method)
{
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *onSelected; // x0

  if ( (byte_418AE8E & 1) == 0 )
  {
    sub_B2C35C(&SoundManager_TypeInfo, *(_QWORD *)&deckId);
    byte_418AE8E = 1;
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
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v17; // x1
  const MethodInfo *v18; // x4
  const MethodInfo *v19; // x3
  UILabel_o *titleLabel; // x21
  UILabel_o *messageLabel; // x21
  UILabel_o *cancelButtonLabel; // x21
  System_String_array **v23; // x2
  System_String_array **v24; // x3
  System_Boolean_array **v25; // x4
  System_Int32_array **v26; // x5
  System_Int32_array *v27; // x6
  System_Int32_array *v28; // x7
  System_Action_o *v29; // x20

  if ( (byte_418AE8B & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, targetDeckList);
    sub_B2C35C(&LocalizationManager_TypeInfo, v11);
    sub_B2C35C(&Method_SupportSelectCopyDeckSelectMenu_OnFinishedOpen__, v12);
    sub_B2C35C(&StringLiteral_12517/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/, v13);
    sub_B2C35C(&StringLiteral_12516/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/, v14);
    sub_B2C35C(&StringLiteral_12518/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_TITLE"*/, v15);
    byte_418AE8B = 1;
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
      v18);
    gameObject = (UnityEngine_GameObject_o *)this->fields.deckListViewManager;
    if ( !gameObject )
      goto LABEL_15;
    SupportSelectDeckListViewManager__SetMode_31154820((SupportSelectDeckListViewManager_o *)gameObject, 1, 0LL, v19);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12518/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_TITLE"*/, 0LL);
    if ( !titleLabel
      || (UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL),
          messageLabel = this->fields.messageLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12517/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_MESSAGE"*/, 0LL),
          !messageLabel)
      || (UILabel__set_text(messageLabel, (System_String_o *)gameObject, 0LL),
          cancelButtonLabel = this->fields.cancelButtonLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12516/*"SUPPORT_SELECT_CONFIRM_DECK_MENU_COPY_SELECT_CANCEL"*/, 0LL),
          !cancelButtonLabel) )
    {
LABEL_15:
      sub_B2C434(gameObject, v17);
    }
    UILabel__set_text(cancelButtonLabel, (System_String_o *)gameObject, 0LL);
    this->fields.onSelected = onSelected;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.onSelected,
      (System_Int32_array **)onSelected,
      v23,
      v24,
      v25,
      v26,
      v27,
      v28);
    v29 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v29, (Il2CppObject *)this, Method_SupportSelectCopyDeckSelectMenu_OnFinishedOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v29, 0, 0LL);
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

  if ( (byte_418AE89 & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, value);
    byte_418AE89 = 1;
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
    v9 = sub_B20D74(p_onSelected, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  SupportSelectCopyDeckSelectMenu__remove_onSelected(v11, v12, v13);
}


System_String_o *__fastcall SupportSelectCopyDeckSelectMenu__get_closeBtnPath(
        SupportSelectCopyDeckSelectMenu_o *this,
        const MethodInfo *method)
{
  if ( (byte_418AE90 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_2740/*"BaseWindow/CacnelButton"*/, method);
    byte_418AE90 = 1;
  }
  return (System_String_o *)StringLiteral_2740/*"BaseWindow/CacnelButton"*/;
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

  if ( (byte_418AE8A & 1) == 0 )
  {
    sub_B2C35C(&SupportSelectCopyDeckSelectMenu_OnSelectEvent_TypeInfo, value);
    byte_418AE8A = 1;
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
    v9 = sub_B20D74(p_onSelected, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
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
  intptr_t *p_method; // x0

  v4 = **(_QWORD **)&method;
  *(_QWORD *)&this->fields.method = object;
  p_method = &this->fields.method;
  *((_QWORD *)p_method + 1) = *(_QWORD *)&method;
  *((_QWORD *)p_method - 2) = v4;
  sub_B2C2F8(p_method, object);
}


// local variable allocation has failed, the output may be wrong!
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
  if ( (byte_41847CD & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&selectDeckId);
    byte_41847CD = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(int_TypeInfo, &v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall SupportSelectCopyDeckSelectMenu_OnSelectEvent__EndInvoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall SupportSelectCopyDeckSelectMenu_OnSelectEvent__Invoke(
        SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *this,
        int32_t selectDeckId,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o **v8; // x25
  __int64 v9; // x26
  unsigned int v10; // w23
  __int64 class_0; // x0
  __int64 v12; // x3
  __int64 v13; // x8
  unsigned __int64 v14; // x10
  _DWORD *v15; // x11
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  void (__fastcall **v19)(__int64 *, _QWORD, _QWORD); // x0
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(_QWORD, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  SupportSelectCopyDeckSelectMenu_OnSelectEvent_o *v32; // [xsp+8h] [xbp-48h] BYREF

  v32 = this;
  v4 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v4 )
  {
    v8 = &v32;
    v7 = 1LL;
    goto LABEL_5;
  }
  v7 = *(_QWORD *)(v4 + 24);
  if ( v7 )
  {
    v8 = (SupportSelectCopyDeckSelectMenu_OnSelectEvent_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(_QWORD, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, *(_QWORD *)&selectDeckId, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23((unsigned int)selectDeckId, v22);
LABEL_37:
      if ( ++v9 == v7 )
        return;
    }
    if ( v21 && *(__int16 *)(v22 + 72) != -1 && (*(_BYTE *)(*v21 + 277) & 1) == 0 && this->fields.m_target )
    {
      v24 = sub_B2C384(v22);
      v25 = sub_B2C788(v22);
      if ( (v24 & 1) != 0 )
      {
        if ( (v25 & 1) != 0 )
        {
          v27 = *v21;
          v28 = *(_QWORD *)(v22 + 24);
          v29 = *(unsigned __int16 *)(v22 + 72);
          if ( *(_WORD *)(*v21 + 298) )
          {
            v30 = 0LL;
            v31 = (_DWORD *)(*(_QWORD *)(v27 + 176) + 8LL);
            while ( *((_QWORD *)v31 - 1) != v28 )
            {
              ++v30;
              v31 += 4;
              if ( v30 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_35;
            }
            v18 = v27 + 16LL * (*v31 + (int)v29) + 312;
          }
          else
          {
LABEL_35:
            v18 = sub_AC5258(v21, v28, v29, v26);
          }
          v17 = *(_QWORD *)(v18 + 8);
        }
        else
        {
          v17 = *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320);
        }
        v19 = (void (__fastcall **)(__int64 *, _QWORD, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, (unsigned int)selectDeckId, v19);
      }
      else
      {
        v10 = *(unsigned __int16 *)(v22 + 72);
        if ( (v25 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v22);
          v13 = *v21;
          if ( *(_WORD *)(*v21 + 298) )
          {
            v14 = 0LL;
            v15 = (_DWORD *)(*(_QWORD *)(v13 + 176) + 8LL);
            while ( *((_QWORD *)v15 - 1) != class_0 )
            {
              ++v14;
              v15 += 4;
              if ( v14 >= *(unsigned __int16 *)(*v21 + 298) )
                goto LABEL_11;
            }
            v16 = v13 + 16LL * (int)(*v15 + v10) + 312;
          }
          else
          {
LABEL_11:
            v16 = sub_AC5258(v21, class_0, v10, v12);
          }
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))v16)(v21, (unsigned int)selectDeckId, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            (unsigned int)selectDeckId,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, _QWORD, __int64))v23)(v21, (unsigned int)selectDeckId, v22);
    goto LABEL_37;
  }
}