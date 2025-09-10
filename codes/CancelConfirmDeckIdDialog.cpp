void CancelConfirmDeckIdDialog___ctor(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C2391A & 1) == 0 )
  {
    sub_1C2D490(&BaseDialog_TypeInfo);
    byte_4C2391A = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 27;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void CancelConfirmDeckIdDialog__Callback(CancelConfirmDeckIdDialog_o *this, bool result, const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x0
  struct CancelConfirmDeckIdDialog_CallbackFunc_o *v5; // x20
  struct CancelConfirmDeckIdDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v5 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_1C2D434(p_callbackFunc, 0, (int32_t)method, v3);
    ((void (__fastcall *)(intptr_t, bool, intptr_t))v5->fields.invoke_impl)(
      v5->fields.method_code,
      result,
      v5->fields.method);
  }
}


void CancelConfirmDeckIdDialog__Close(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CancelConfirmDeckIdDialog__Close_35459936(this, 0, v2);
}


void CancelConfirmDeckIdDialog__Close_35459936(
        CancelConfirmDeckIdDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C23917 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CancelConfirmDeckIdDialog_EndClose__);
    byte_4C23917 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C2D434((CGThumbnailListItem_o *)&this->fields.closeCallbackFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.state = 4;
  v6 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CancelConfirmDeckIdDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


System_String_o *CancelConfirmDeckIdDialog__CreateDeckIDString(
        CancelConfirmDeckIdDialog_o *this,
        int32_t deckNo,
        int32_t deckID,
        bool isFixed,
        bool isMainQuestSupportDeck,
        const MethodInfo *method)
{
  System_String_o **v10; // x8
  __int64 v11; // x24
  __int64 v12; // x25
  System_String_o *v13; // x22
  System_String_o *v14; // x22
  Il2CppObject *v15; // x0
  System_String_o *v16; // x0
  System_String_o *v17; // x21
  System_String_o *v18; // x0
  System_String_o *v19; // x20
  __int64 v20; // x2
  __int64 v21; // x3
  __int64 v22; // x4
  Il2CppObject *v23; // x0
  System_String_o *v24; // x0
  int32_t v26; // [xsp+Ch] [xbp-54h] BYREF

  if ( (byte_4C23916 & 1) == 0 )
  {
    sub_1C2D490(&int_TypeInfo);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&StringLiteral_12494/*"SUPPORT_EVENTQUEST"*/);
    sub_1C2D490(&StringLiteral_12492/*"SUPPORT_DECK_NOT_FIXED"*/);
    sub_1C2D490(&StringLiteral_12484/*"SUPPORT_DECKID_FREE"*/);
    sub_1C2D490(&StringLiteral_12507/*"SUPPORT_MAINQUEST"*/);
    sub_1C2D490(&StringLiteral_12490/*"SUPPORT_DECK_ID_FIXED"*/);
    byte_4C23916 = 1;
  }
  if ( isFixed )
    v10 = (System_String_o **)&StringLiteral_12490/*"SUPPORT_DECK_ID_FIXED"*/;
  else
    v10 = (System_String_o **)&StringLiteral_12484/*"SUPPORT_DECKID_FREE"*/;
  v11 = StringLiteral_12507/*"SUPPORT_MAINQUEST"*/;
  v12 = StringLiteral_12494/*"SUPPORT_EVENTQUEST"*/;
  v13 = *v10;
  if ( LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    if ( deckID )
    {
LABEL_8:
      v14 = LocalizationManager__Get(v13, 0);
      v15 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(deckID, 0);
      v16 = System_String__Format(v14, v15, 0);
      goto LABEL_11;
    }
  }
  else
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    if ( deckID )
      goto LABEL_8;
  }
  v16 = LocalizationManager__Get((System_String_o *)StringLiteral_12492/*"SUPPORT_DECK_NOT_FIXED"*/, 0);
LABEL_11:
  v17 = v16;
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  if ( isMainQuestSupportDeck )
    v18 = (System_String_o *)v11;
  else
    v18 = (System_String_o *)v12;
  v19 = LocalizationManager__Get(v18, 0);
  v26 = deckNo;
  v23 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v26, v20, v21, v22);
  v24 = System_String__Format(v19, v23, 0);
  return System_String__Concat_63457864(v24, v17, 0);
}


void CancelConfirmDeckIdDialog__EndClose(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  CancelConfirmDeckIdDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (CGThumbnailListItem_o *)&this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0;
    sub_1C2D434(p_closeCallbackFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void CancelConfirmDeckIdDialog__EndOpen(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void CancelConfirmDeckIdDialog__Init(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_4C23913 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_1/*""*/);
    byte_4C23913 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  titleLabel = this->fields.fixMessageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.messageLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.decideLabel) == 0)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
        (titleLabel = this->fields.cancelLabel) == 0) )
  {
LABEL_9:
    sub_1C2D6EC(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0);
}


void CancelConfirmDeckIdDialog__OnClickCancel(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_4C23918 & 1) == 0 )
  {
    sub_1C2D490(&Method_CancelConfirmDeckIdDialog_OnClickCancel__);
    byte_4C23918 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CancelConfirmDeckIdDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CancelConfirmDeckIdDialog_OnClickCancel__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C2D4A8(Method_CancelConfirmDeckIdDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C2D474(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0, 0);
    this->fields.state = 3;
    CancelConfirmDeckIdDialog__Callback(this, 0, v5);
  }
}


void CancelConfirmDeckIdDialog__OnClickDecide(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CancelConfirmDeckIdDialog__Callback(this, 1, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void CancelConfirmDeckIdDialog__Open(
        CancelConfirmDeckIdDialog_o *this,
        int32_t nowSupportDeckId,
        int32_t orgSupportDeckId,
        System_Int32_array *nowFixMainSupportDeckIds,
        System_Int32_array *nowFixEventSupportDeckIds,
        System_Int32_array *orgFixMainSupportDeckIds,
        System_Int32_array *orgFixEventSupportDeckIds,
        CancelConfirmDeckIdDialog_CallbackFunc_o *callback,
        const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v18; // x1
  UILabel_o *titleLabel; // x26
  UILabel_o *fixMessageLabel; // x26
  System_Text_StringBuilder_o *v21; // x26
  const MethodInfo *v22; // x5
  const MethodInfo *v23; // x5
  System_String_o *v24; // x0
  const MethodInfo *v25; // x5
  const MethodInfo *v26; // x5
  UILabel_o *messageLabel; // x20
  System_String_o *v28; // x0
  UnityEngine_BoxCollider_o *messageCollider; // x20
  float v30; // s1
  UnityEngine_BoxCollider_o *v31; // x20
  int v32; // s0
  int v33; // s8
  int v34; // s1 OVERLAPPED
  float v35; // s2
  int v36; // s0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v39; // x20
  UnityEngine_Vector3_o v40; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C23914 & 1) == 0 )
  {
    sub_1C2D490(&System_Action_TypeInfo);
    sub_1C2D490(&Method_CancelConfirmDeckIdDialog_EndOpen__);
    sub_1C2D490(&LocalizationManager_TypeInfo);
    sub_1C2D490(&System_Text_StringBuilder_TypeInfo);
    sub_1C2D490(&StringLiteral_12506/*"SUPPORT_LAST_DECKID"*/);
    sub_1C2D490(&StringLiteral_12485/*"SUPPORT_DECKID_QUESTION"*/);
    sub_1C2D490(&StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/);
    sub_1C2D490(&StringLiteral_12483/*"SUPPORT_CURRENT_DECKID"*/);
    sub_1C2D490(&StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C2D490(&StringLiteral_44/*"\n\n"*/);
    sub_1C2D490(&StringLiteral_12512/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/);
    byte_4C23914 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_1C2D434(
      (CGThumbnailListItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      orgSupportDeckId,
      (const MethodInfo *)nowFixMainSupportDeckIds);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
    if ( !gameObject )
      goto LABEL_28;
    UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0);
    titleLabel = this->fields.titleLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12512/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, 0);
    if ( !titleLabel )
      goto LABEL_28;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0);
    fixMessageLabel = this->fields.fixMessageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12485/*"SUPPORT_DECKID_QUESTION"*/, 0);
    if ( !fixMessageLabel )
      goto LABEL_28;
    UILabel__set_text(fixMessageLabel, (System_String_o *)gameObject, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    v21 = (System_Text_StringBuilder_o *)sub_1C2D6DC(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v21, 0);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12483/*"SUPPORT_CURRENT_DECKID"*/, 0);
    if ( !v21 )
      goto LABEL_28;
    System_Text_StringBuilder__Append_63542928(v21, (System_String_o *)gameObject, 0);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v21, nowSupportDeckId, nowFixMainSupportDeckIds, 1, v22);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v21, nowSupportDeckId, nowFixEventSupportDeckIds, 0, v23);
    System_Text_StringBuilder__Append_63542928(v21, (System_String_o *)StringLiteral_44/*"\n\n"*/, 0);
    v24 = LocalizationManager__Get((System_String_o *)StringLiteral_12506/*"SUPPORT_LAST_DECKID"*/, 0);
    System_Text_StringBuilder__Append_63542928(v21, v24, 0);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v21, orgSupportDeckId, orgFixMainSupportDeckIds, 1, v25);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v21, orgSupportDeckId, orgFixEventSupportDeckIds, 0, v26);
    messageLabel = this->fields.messageLabel;
    v28 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, const MethodInfo *))v21->klass->vtable._3_ToString.methodPtr)(
                               v21,
                               v21->klass->vtable._3_ToString.method);
    WrapControlText__textBBCodeAdjust(
      messageLabel,
      v28,
      this->fields.MESSAGE_FONT_SIZE,
      this->fields.MESSAGE_FONT_SIZE,
      0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_28;
    messageCollider = this->fields.messageCollider;
    gameObject = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))&gameObject->klass[1]._2.field_count)(
                                               gameObject,
                                               *(_QWORD *)&gameObject->klass[1]._2.interfaces_count);
    if ( !messageCollider )
      goto LABEL_28;
    v40.fields.y = v30 * -0.5;
    v40.fields.x = 0.0;
    v40.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(messageCollider, v40, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_28;
    v31 = this->fields.messageCollider;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))&gameObject->klass[1]._2.field_count)(
      gameObject,
      *(_QWORD *)&gameObject->klass[1]._2.interfaces_count);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_28;
    v33 = v32;
    gameObject = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, _QWORD))&gameObject->klass[1]._2.field_count)(
                                               gameObject,
                                               *(_QWORD *)&gameObject->klass[1]._2.interfaces_count);
    if ( !v31 )
      goto LABEL_28;
    v35 = 1.0;
    v36 = v33;
    UnityEngine_BoxCollider__set_size(v31, *(UnityEngine_Vector3_o *)(&v34 - 1), 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_28;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0);
    if ( !gameObject )
      goto LABEL_28;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_28;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
      gameObject,
      0,
      1,
      gameObject->klass[1]._1.implementedInterfaces);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject
      || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppClass **))gameObject->klass[1]._1.nestedTypes)(
            gameObject,
            0,
            1,
            gameObject->klass[1]._1.implementedInterfaces),
          decideLabel = this->fields.decideLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3679/*"COMMON_CONFIRM_DECIDE"*/, 0),
          !decideLabel)
      || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0),
          cancelLabel = this->fields.cancelLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3677/*"COMMON_CONFIRM_CANCEL"*/, 0),
          !cancelLabel) )
    {
LABEL_28:
      sub_1C2D6EC(gameObject, v18);
    }
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0);
    this->fields.state = 1;
    v39 = (System_Action_o *)sub_1C2D6DC(System_Action_TypeInfo);
    System_Action___ctor(v39, (Il2CppObject *)this, Method_CancelConfirmDeckIdDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v39, 0, 0);
  }
}


void CancelConfirmDeckIdDialog__SetDeckInfo(
        CancelConfirmDeckIdDialog_o *this,
        System_Text_StringBuilder_o *sb,
        int32_t currentDeckId,
        System_Int32_array *fixDeckIds,
        bool isMain,
        const MethodInfo *method)
{
  CancelConfirmDeckIdDialog___c_c *v10; // x0
  System_Func_int__bool__o *_9__19_0; // x23
  Il2CppObject *v12; // x24
  struct CancelConfirmDeckIdDialog___c_StaticFields *static_fields; // x0
  int32_t v14; // w2
  const MethodInfo *v15; // x3
  System_Collections_Generic_IEnumerable_TSource__o *v16; // x0
  System_Text_StringBuilder_o *appended; // x0
  __int64 v18; // x1
  BalanceConfig_c *v19; // x8
  int v20; // w23
  struct BalanceConfig_StaticFields *v21; // x8
  __int64 v22; // x9
  __int64 v23; // x25
  unsigned __int64 v24; // x24
  __int64 v25; // x2
  const MethodInfo *v26; // x5
  System_String_o *DeckIDString; // x1
  int32_t v28; // w2

  if ( (byte_4C23915 & 1) == 0 )
  {
    sub_1C2D490(&BalanceConfig_TypeInfo);
    sub_1C2D490(&Method_System_Linq_Enumerable_Count_int___);
    sub_1C2D490(&Method_System_Linq_Enumerable_Where_int___);
    sub_1C2D490(&System_Func_int__bool__TypeInfo);
    sub_1C2D490(&Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__);
    sub_1C2D490(&CancelConfirmDeckIdDialog___c_TypeInfo);
    sub_1C2D490(&StringLiteral_43/*"\n"*/);
    byte_4C23915 = 1;
  }
  v10 = CancelConfirmDeckIdDialog___c_TypeInfo;
  if ( !CancelConfirmDeckIdDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CancelConfirmDeckIdDialog___c_TypeInfo);
    v10 = CancelConfirmDeckIdDialog___c_TypeInfo;
  }
  _9__19_0 = v10->static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( !v10->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v10);
      v10 = CancelConfirmDeckIdDialog___c_TypeInfo;
    }
    v12 = (Il2CppObject *)v10->static_fields->__9;
    _9__19_0 = (System_Func_int__bool__o *)sub_1C2D6DC(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(_9__19_0, v12, Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__, 0);
    static_fields = CancelConfirmDeckIdDialog___c_TypeInfo->static_fields;
    static_fields->__9__19_0 = _9__19_0;
    sub_1C2D434((CGThumbnailListItem_o *)&static_fields->__9__19_0, (int32_t)_9__19_0, v14, v15);
  }
  v16 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixDeckIds,
          (System_Func_TSource__bool__o *)_9__19_0,
          (const MethodInfo_3114B60 *)Method_System_Linq_Enumerable_Where_int___);
  appended = (System_Text_StringBuilder_o *)System_Linq_Enumerable__Count_int_(
                                              v16,
                                              (const MethodInfo_30EE540 *)Method_System_Linq_Enumerable_Count_int___);
  v19 = BalanceConfig_TypeInfo;
  v20 = (int)appended;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v19 = BalanceConfig_TypeInfo;
  }
  v21 = v19->static_fields;
  v22 = 200;
  if ( isMain )
    v22 = 196;
  v23 = *(unsigned int *)((char *)&v21->CriticalRateToAddByQuickFirstBonus + v22);
  if ( (int)v23 >= 1 )
  {
    if ( !sb )
LABEL_23:
      sub_1C2D6EC(appended, v18);
    v24 = 0;
    do
    {
      appended = System_Text_StringBuilder__Append_63542928(sb, (System_String_o *)StringLiteral_43/*"\n"*/, 0);
      if ( v24 == 0 && v20 < 1 )
      {
        DeckIDString = CancelConfirmDeckIdDialog__CreateDeckIDString(
                         (CancelConfirmDeckIdDialog_o *)appended,
                         1,
                         currentDeckId,
                         v20 > 0,
                         isMain,
                         v26);
        v24 = 1;
      }
      else
      {
        if ( !fixDeckIds )
          goto LABEL_23;
        if ( v24 >= LODWORD(fixDeckIds->max_length) )
          sub_1C2D6F4(appended, v18, v25);
        v28 = fixDeckIds->m_Items[v24++];
        DeckIDString = CancelConfirmDeckIdDialog__CreateDeckIDString(
                         (CancelConfirmDeckIdDialog_o *)appended,
                         v24,
                         v28,
                         v28 != 0,
                         isMain,
                         v26);
      }
      System_Text_StringBuilder__Append_63542928(sb, DeckIDString, 0);
    }
    while ( v24 != v23 );
  }
}


void CancelConfirmDeckIdDialog__add_callbackFunc(
        CancelConfirmDeckIdDialog_o *this,
        CancelConfirmDeckIdDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CancelConfirmDeckIdDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct CancelConfirmDeckIdDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CancelConfirmDeckIdDialog_o *v11; // x0
  CancelConfirmDeckIdDialog_CallbackFunc_o *v12; // x1
  const MethodInfo *v13; // x2

  if ( (byte_4C23911 & 1) == 0 )
  {
    sub_1C2D490(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    byte_4C23911 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (CancelConfirmDeckIdDialog_CallbackFunc_c *)v8->klass != CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  CancelConfirmDeckIdDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *CancelConfirmDeckIdDialog__get_closeBtnPath(
        CancelConfirmDeckIdDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_4C23919 & 1) == 0 )
  {
    sub_1C2D490(&StringLiteral_4640/*"ConfirmWindow/CancelButton"*/);
    byte_4C23919 = 1;
  }
  return (System_String_o *)StringLiteral_4640/*"ConfirmWindow/CancelButton"*/;
}


void CancelConfirmDeckIdDialog__remove_callbackFunc(
        CancelConfirmDeckIdDialog_o *this,
        CancelConfirmDeckIdDialog_CallbackFunc_o *value,
        const MethodInfo *method)
{
  struct CancelConfirmDeckIdDialog_CallbackFunc_o **p_callbackFunc; // x20
  System_Delegate_o *v6; // x21
  struct CancelConfirmDeckIdDialog_CallbackFunc_o *callbackFunc; // t1
  System_Delegate_o *v8; // x0
  __int64 v9; // x0
  bool v10; // zf
  CancelConfirmDeckIdDialog_o *v11; // x0
  const MethodInfo *v12; // x1

  if ( (byte_4C23912 & 1) == 0 )
  {
    sub_1C2D490(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo);
    byte_4C23912 = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0);
    if ( v8 )
    {
      if ( (CancelConfirmDeckIdDialog_CallbackFunc_c *)v8->klass != CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_1C676E8(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_1C2D9AC(v8);
  CancelConfirmDeckIdDialog__Init(v11, v12);
}


void CancelConfirmDeckIdDialog_CallbackFunc___ctor(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1A6E424;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A6E3DC;
}


System_IAsyncResult_o *CancelConfirmDeckIdDialog_CallbackFunc__BeginInvoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = result;
  if ( (byte_4C2391B & 1) == 0 )
  {
    sub_1C2D490(&bool_TypeInfo);
    byte_4C2391B = 1;
  }
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C2D444(this, v9, callback, object);
}


void CancelConfirmDeckIdDialog_CallbackFunc__EndInvoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C2D448(result, 0, method);
}


void CancelConfirmDeckIdDialog_CallbackFunc__Invoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    result,
    this->fields.method);
}


void CancelConfirmDeckIdDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C2391C & 1) == 0 )
  {
    sub_1C2D490(&CancelConfirmDeckIdDialog___c_TypeInfo);
    byte_4C2391C = 1;
  }
  v1 = (Il2CppObject *)sub_1C2D6DC(CancelConfirmDeckIdDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  CancelConfirmDeckIdDialog___c_TypeInfo->static_fields->__9 = (struct CancelConfirmDeckIdDialog___c_o *)v1;
  sub_1C2D434((CGThumbnailListItem_o *)CancelConfirmDeckIdDialog___c_TypeInfo->static_fields, (int32_t)v1, v2, v3);
}


void CancelConfirmDeckIdDialog___c___ctor(CancelConfirmDeckIdDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool CancelConfirmDeckIdDialog___c___SetDeckInfo_b__19_0(
        CancelConfirmDeckIdDialog___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}