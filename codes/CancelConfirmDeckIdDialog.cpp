void __fastcall CancelConfirmDeckIdDialog___ctor(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  if ( (byte_418A094 & 1) == 0 )
  {
    sub_B2C35C(&BaseDialog_TypeInfo, method);
    byte_418A094 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 27;
  if ( (BYTE3(BaseDialog_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0 && !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall CancelConfirmDeckIdDialog__Callback(
        CancelConfirmDeckIdDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  BattleServantConfConponent_o *p_callbackFunc; // x0
  CancelConfirmDeckIdDialog_CallbackFunc_o *v9; // x19
  struct CancelConfirmDeckIdDialog_CallbackFunc_o *callbackFunc; // t1

  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (BattleServantConfConponent_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_B2C2F8(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CancelConfirmDeckIdDialog_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall CancelConfirmDeckIdDialog__Close(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CancelConfirmDeckIdDialog__Close_29413824(this, 0LL, v2);
}


void __fastcall CancelConfirmDeckIdDialog__Close_29413824(
        CancelConfirmDeckIdDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_array **v3; // x3
  System_Boolean_array **v4; // x4
  System_Int32_array **v5; // x5
  System_Int32_array *v6; // x6
  System_Int32_array *v7; // x7
  __int64 v10; // x1
  System_Action_o *v11; // x20

  if ( (byte_418A091 & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, callback);
    sub_B2C35C(&Method_CancelConfirmDeckIdDialog_EndClose__, v10);
    byte_418A091 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B2C2F8(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v11 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_CancelConfirmDeckIdDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0LL);
}


// local variable allocation has failed, the output may be wrong!
System_String_o *__fastcall CancelConfirmDeckIdDialog__CreateDeckIDString(
        CancelConfirmDeckIdDialog_o *this,
        int32_t deckNo,
        int32_t deckID,
        bool isFixed,
        bool isMainQuestSupportDeck,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  System_String_o **v16; // x8
  System_String_o *v17; // x20
  System_String_o **v18; // x9
  System_String_o *v19; // x22
  System_String_o *v20; // x22
  Il2CppObject *v21; // x0
  System_String_o *v22; // x0
  System_String_o *v23; // x21
  System_String_o *v24; // x20
  Il2CppObject *v25; // x0
  System_String_o *v26; // x0
  int32_t v28; // [xsp+Ch] [xbp-24h] BYREF

  if ( (byte_418A090 & 1) == 0 )
  {
    sub_B2C35C(&int_TypeInfo, *(_QWORD *)&deckNo);
    sub_B2C35C(&LocalizationManager_TypeInfo, v10);
    sub_B2C35C(&StringLiteral_12488/*"SUPPORT_EVENTQUEST"*/, v11);
    sub_B2C35C(&StringLiteral_12486/*"SUPPORT_DECK_NOT_FIXED"*/, v12);
    sub_B2C35C(&StringLiteral_12478/*"SUPPORT_DECKID_FREE"*/, v13);
    sub_B2C35C(&StringLiteral_12501/*"SUPPORT_MAINQUEST"*/, v14);
    sub_B2C35C(&StringLiteral_12484/*"SUPPORT_DECK_ID_FIXED"*/, v15);
    byte_418A090 = 1;
  }
  v16 = (System_String_o **)&StringLiteral_12501/*"SUPPORT_MAINQUEST"*/;
  if ( !isMainQuestSupportDeck )
    v16 = (System_String_o **)&StringLiteral_12488/*"SUPPORT_EVENTQUEST"*/;
  v17 = *v16;
  v18 = (System_String_o **)&StringLiteral_12484/*"SUPPORT_DECK_ID_FIXED"*/;
  if ( !isFixed )
    v18 = (System_String_o **)&StringLiteral_12478/*"SUPPORT_DECKID_FREE"*/;
  if ( deckID )
  {
    v19 = *v18;
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v20 = LocalizationManager__Get(v19, 0LL);
    v21 = (Il2CppObject *)LocalizationManager__ConvertNumberToRomaNumber(deckID, 0LL);
    v22 = System_String__Format(v20, v21, 0LL);
  }
  else
  {
    if ( (WORD1(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12486/*"SUPPORT_DECK_NOT_FIXED"*/, 0LL);
  }
  v23 = v22;
  if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !LocalizationManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  }
  v24 = LocalizationManager__Get(v17, 0LL);
  v28 = deckNo;
  v25 = (Il2CppObject *)j_il2cpp_value_box_0(int_TypeInfo, &v28);
  v26 = System_String__Format(v24, v25, 0LL);
  return System_String__Concat_44305532(v26, v23, 0LL);
}


void __fastcall CancelConfirmDeckIdDialog__EndClose(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  System_String_array **v3; // x2
  System_String_array **v4; // x3
  System_Boolean_array **v5; // x4
  System_Int32_array **v6; // x5
  System_Int32_array *v7; // x6
  System_Int32_array *v8; // x7
  BattleServantConfConponent_o *p_closeCallbackFunc; // x19
  System_Action_o *v10; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  CancelConfirmDeckIdDialog__Init(this, method);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc;
  v10 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    p_closeCallbackFunc->klass = 0LL;
    sub_B2C2F8(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
    System_Action__Invoke(v10, 0LL);
  }
}


void __fastcall CancelConfirmDeckIdDialog__EndOpen(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  this->fields.state = 2;
}


void __fastcall CancelConfirmDeckIdDialog__Init(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  UILabel_o *titleLabel; // x0

  if ( (byte_418A08D & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_1/*""*/, method);
    byte_418A08D = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  titleLabel = this->fields.fixMessageLabel;
  if ( !titleLabel
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
        (titleLabel = this->fields.cancelLabel) == 0LL) )
  {
LABEL_9:
    sub_B2C434(titleLabel, method);
  }
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CancelConfirmDeckIdDialog__OnClickCancel(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_418A092 & 1) == 0 )
  {
    sub_B2C35C(&Method_CancelConfirmDeckIdDialog_OnClickCancel__, method);
    byte_418A092 = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CancelConfirmDeckIdDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CancelConfirmDeckIdDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B2C364(Method_CancelConfirmDeckIdDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B2C340(v3, v3[3]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 1, 0LL);
    this->fields.state = 3;
    CancelConfirmDeckIdDialog__Callback(this, 0, v5);
  }
}


void __fastcall CancelConfirmDeckIdDialog__OnClickDecide(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( this->fields.state == 2 )
  {
    this->fields.state = 3;
    CancelConfirmDeckIdDialog__Callback(this, 1, v2);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmDeckIdDialog__Open(
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
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v28; // x1
  UILabel_o *titleLabel; // x26
  UILabel_o *fixMessageLabel; // x26
  System_Text_StringBuilder_o *v31; // x26
  const MethodInfo *v32; // x5
  const MethodInfo *v33; // x5
  System_String_o *v34; // x0
  const MethodInfo *v35; // x5
  const MethodInfo *v36; // x5
  UILabel_o *messageLabel; // x20
  System_String_o *v38; // x0
  UnityEngine_BoxCollider_o *messageCollider; // x20
  float v40; // s1
  UnityEngine_BoxCollider_o *v41; // x20
  int v42; // s0
  int v43; // s8
  int v44; // s1
  float v45; // s2
  int v46; // s0
  UILabel_o *decideLabel; // x20
  UILabel_o *cancelLabel; // x20
  System_Action_o *v49; // x20
  UnityEngine_Vector3_o v50; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_418A08E & 1) == 0 )
  {
    sub_B2C35C(&System_Action_TypeInfo, *(_QWORD *)&nowSupportDeckId);
    sub_B2C35C(&Method_CancelConfirmDeckIdDialog_EndOpen__, v17);
    sub_B2C35C(&LocalizationManager_TypeInfo, v18);
    sub_B2C35C(&System_Text_StringBuilder_TypeInfo, v19);
    sub_B2C35C(&StringLiteral_12500/*"SUPPORT_LAST_DECKID"*/, v20);
    sub_B2C35C(&StringLiteral_12479/*"SUPPORT_DECKID_QUESTION"*/, v21);
    sub_B2C35C(&StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, v22);
    sub_B2C35C(&StringLiteral_12477/*"SUPPORT_CURRENT_DECKID"*/, v23);
    sub_B2C35C(&StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, v24);
    sub_B2C35C(&StringLiteral_27/*"\n\n"*/, v25);
    sub_B2C35C(&StringLiteral_12506/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, v26);
    byte_418A08E = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&this->fields.callbackFunc,
      (System_Int32_array **)callback,
      *(System_String_array ***)&orgSupportDeckId,
      (System_String_array **)nowFixMainSupportDeckIds,
      (System_Boolean_array **)nowFixEventSupportDeckIds,
      (System_Int32_array **)orgFixMainSupportDeckIds,
      orgFixEventSupportDeckIds,
      (System_Int32_array *)callback);
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.scrollView;
    if ( !gameObject )
      goto LABEL_29;
    UIScrollView__ResetPosition((UIScrollView_o *)gameObject, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12506/*"SUPPORT_SELECT_CANCEL_DIALOG_TITLE"*/, 0LL);
    if ( !titleLabel )
      goto LABEL_29;
    UILabel__set_text(titleLabel, (System_String_o *)gameObject, 0LL);
    fixMessageLabel = this->fields.fixMessageLabel;
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12479/*"SUPPORT_DECKID_QUESTION"*/, 0LL);
    if ( !fixMessageLabel )
      goto LABEL_29;
    UILabel__set_text(fixMessageLabel, (System_String_o *)gameObject, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_29;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    v31 = (System_Text_StringBuilder_o *)sub_B2C42C(System_Text_StringBuilder_TypeInfo);
    System_Text_StringBuilder___ctor(v31, 0LL);
    gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_12477/*"SUPPORT_CURRENT_DECKID"*/, 0LL);
    if ( !v31 )
      goto LABEL_29;
    System_Text_StringBuilder__Append_42408700(v31, (System_String_o *)gameObject, 0LL);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v31, nowSupportDeckId, nowFixMainSupportDeckIds, 1, v32);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v31, nowSupportDeckId, nowFixEventSupportDeckIds, 0, v33);
    System_Text_StringBuilder__Append_42408700(v31, (System_String_o *)StringLiteral_27/*"\n\n"*/, 0LL);
    v34 = LocalizationManager__Get((System_String_o *)StringLiteral_12500/*"SUPPORT_LAST_DECKID"*/, 0LL);
    System_Text_StringBuilder__Append_42408700(v31, v34, 0LL);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v31, orgSupportDeckId, orgFixMainSupportDeckIds, 1, v35);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v31, orgSupportDeckId, orgFixEventSupportDeckIds, 0, v36);
    messageLabel = this->fields.messageLabel;
    v38 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v31->klass->vtable._3_ToString.method)(
                               v31,
                               v31->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    WrapControlText__textBBCodeAdjust(
      messageLabel,
      v38,
      this->fields.MESSAGE_FONT_SIZE,
      this->fields.MESSAGE_FONT_SIZE,
      1000,
      0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_29;
    messageCollider = this->fields.messageCollider;
    gameObject = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&gameObject->klass[1]._2.naturalAligment)(
                                               gameObject,
                                               gameObject->klass[1].vtable._0_Equals.methodPtr);
    if ( !messageCollider )
      goto LABEL_29;
    v50.fields.y = v40 * -0.5;
    v50.fields.x = 0.0;
    v50.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(messageCollider, v50, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_29;
    v41 = this->fields.messageCollider;
    (*(void (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&gameObject->klass[1]._2.naturalAligment)(
      gameObject,
      gameObject->klass[1].vtable._0_Equals.methodPtr);
    gameObject = (UnityEngine_GameObject_o *)this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_29;
    v43 = v42;
    gameObject = (UnityEngine_GameObject_o *)(*(__int64 (__fastcall **)(UnityEngine_GameObject_o *, Il2CppMethodPointer))&gameObject->klass[1]._2.naturalAligment)(
                                               gameObject,
                                               gameObject->klass[1].vtable._0_Equals.methodPtr);
    if ( !v41 )
      goto LABEL_29;
    v45 = 1.0;
    v46 = v43;
    UnityEngine_BoxCollider__set_size(v41, *(UnityEngine_Vector3_o *)(&v44 - 1), 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_29;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject )
      goto LABEL_29;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)gameObject, 0LL);
    if ( !gameObject )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(gameObject, 1, 0LL);
    gameObject = (UnityEngine_GameObject_o *)this->fields.decideButton;
    if ( !gameObject )
      goto LABEL_29;
    ((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
      gameObject,
      0LL,
      1LL,
      gameObject->klass[1]._1.interfaceOffsets);
    gameObject = (UnityEngine_GameObject_o *)this->fields.cancelButton;
    if ( !gameObject
      || (((void (__fastcall *)(UnityEngine_GameObject_o *, _QWORD, __int64, Il2CppRuntimeInterfaceOffsetPair *))gameObject->klass[1]._1.implementedInterfaces)(
            gameObject,
            0LL,
            1LL,
            gameObject->klass[1]._1.interfaceOffsets),
          decideLabel = this->fields.decideLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3262/*"COMMON_CONFIRM_DECIDE"*/, 0LL),
          !decideLabel)
      || (UILabel__set_text(decideLabel, (System_String_o *)gameObject, 0LL),
          cancelLabel = this->fields.cancelLabel,
          gameObject = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3260/*"COMMON_CONFIRM_CANCEL"*/, 0LL),
          !cancelLabel) )
    {
LABEL_29:
      sub_B2C434(gameObject, v28);
    }
    UILabel__set_text(cancelLabel, (System_String_o *)gameObject, 0LL);
    this->fields.state = 1;
    v49 = (System_Action_o *)sub_B2C42C(System_Action_TypeInfo);
    System_Action___ctor(v49, (Il2CppObject *)this, Method_CancelConfirmDeckIdDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v49, 0, 0LL);
  }
}


void __fastcall CancelConfirmDeckIdDialog__SetDeckInfo(
        CancelConfirmDeckIdDialog_o *this,
        System_Text_StringBuilder_o *sb,
        int32_t currentDeckId,
        System_Int32_array *fixDeckIds,
        bool isMain,
        const MethodInfo *method)
{
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  CancelConfirmDeckIdDialog___c_c *v17; // x0
  struct CancelConfirmDeckIdDialog___c_StaticFields *static_fields; // x8
  System_Func_int__bool__o *_9__19_0; // x23
  Il2CppObject *v20; // x24
  struct CancelConfirmDeckIdDialog___c_StaticFields *v21; // x0
  System_String_array **v22; // x2
  System_String_array **v23; // x3
  System_Boolean_array **v24; // x4
  System_Int32_array **v25; // x5
  System_Int32_array *v26; // x6
  System_Int32_array *v27; // x7
  System_Collections_Generic_IEnumerable_TSource__o *v28; // x0
  System_Text_StringBuilder_o *appended; // x0
  __int64 v30; // x1
  int v31; // w23
  BalanceConfig_c *v32; // x8
  int32_t *p_FixMainSupportDeckNum; // x8
  signed __int64 v34; // x25
  unsigned __int64 v35; // x24
  const MethodInfo *v36; // x5
  System_String_o *DeckIDString; // x0
  int32_t v38; // w2
  System_String_o *v39; // x0
  __int64 v40; // x0

  if ( (byte_418A08F & 1) == 0 )
  {
    sub_B2C35C(&BalanceConfig_TypeInfo, sb);
    sub_B2C35C(&Method_System_Linq_Enumerable_Count_int___, v10);
    sub_B2C35C(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_B2C35C(&Method_System_Func_int__bool___ctor__, v12);
    sub_B2C35C(&System_Func_int__bool__TypeInfo, v13);
    sub_B2C35C(&Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__, v14);
    sub_B2C35C(&CancelConfirmDeckIdDialog___c_TypeInfo, v15);
    sub_B2C35C(&StringLiteral_26/*"\n"*/, v16);
    byte_418A08F = 1;
  }
  v17 = CancelConfirmDeckIdDialog___c_TypeInfo;
  if ( (BYTE3(CancelConfirmDeckIdDialog___c_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
    && !CancelConfirmDeckIdDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(CancelConfirmDeckIdDialog___c_TypeInfo);
    v17 = CancelConfirmDeckIdDialog___c_TypeInfo;
  }
  static_fields = v17->static_fields;
  _9__19_0 = static_fields->__9__19_0;
  if ( !_9__19_0 )
  {
    if ( (BYTE3(v17->vtable._0_Equals.methodPtr) & 4) != 0 && !v17->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v17);
      static_fields = CancelConfirmDeckIdDialog___c_TypeInfo->static_fields;
    }
    v20 = (Il2CppObject *)static_fields->__9;
    _9__19_0 = (System_Func_int__bool__o *)sub_B2C42C(System_Func_int__bool__TypeInfo);
    System_Func_int__bool____ctor(
      _9__19_0,
      v20,
      Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__,
      (const MethodInfo_270C930 *)Method_System_Func_int__bool___ctor__);
    v21 = CancelConfirmDeckIdDialog___c_TypeInfo->static_fields;
    v21->__9__19_0 = _9__19_0;
    sub_B2C2F8(
      (BattleServantConfConponent_o *)&v21->__9__19_0,
      (System_Int32_array **)_9__19_0,
      v22,
      v23,
      v24,
      v25,
      v26,
      v27);
  }
  v28 = System_Linq_Enumerable__Where_int_(
          (System_Collections_Generic_IEnumerable_TSource__o *)fixDeckIds,
          (System_Func_TSource__bool__o *)_9__19_0,
          (const MethodInfo_1A9F150 *)Method_System_Linq_Enumerable_Where_int___);
  appended = (System_Text_StringBuilder_o *)System_Linq_Enumerable__Count_int_(
                                              v28,
                                              (const MethodInfo_1A8C1C8 *)Method_System_Linq_Enumerable_Count_int___);
  v31 = (int)appended;
  v32 = BalanceConfig_TypeInfo;
  if ( isMain )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v32->static_fields->FixMainSupportDeckNum;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v32 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v32->static_fields->FixEventSupportDeckNum;
  }
  v34 = *p_FixMainSupportDeckNum;
  if ( (int)v34 >= 1 )
  {
    if ( !sb )
LABEL_30:
      sub_B2C434(appended, v30);
    v35 = 0LL;
    do
    {
      appended = System_Text_StringBuilder__Append_42408700(sb, (System_String_o *)StringLiteral_26/*"\n"*/, 0LL);
      if ( v35 == 0 && v31 < 1 )
      {
        DeckIDString = CancelConfirmDeckIdDialog__CreateDeckIDString(
                         (CancelConfirmDeckIdDialog_o *)appended,
                         1,
                         currentDeckId,
                         v31 > 0,
                         isMain,
                         v36);
        System_Text_StringBuilder__Append_42408700(sb, DeckIDString, 0LL);
        v35 = 1LL;
      }
      else
      {
        if ( !fixDeckIds )
          goto LABEL_30;
        if ( v35 >= fixDeckIds->max_length )
        {
          v40 = sub_B2C460(appended);
          sub_B2C400(v40, 0LL);
        }
        v38 = fixDeckIds->m_Items[++v35];
        v39 = CancelConfirmDeckIdDialog__CreateDeckIDString(
                (CancelConfirmDeckIdDialog_o *)appended,
                v35,
                v38,
                v38 != 0,
                isMain,
                v36);
        System_Text_StringBuilder__Append_42408700(sb, v39, 0LL);
      }
    }
    while ( (__int64)v35 < v34 );
  }
}


void __fastcall CancelConfirmDeckIdDialog__add_callbackFunc(
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

  if ( (byte_418A08B & 1) == 0 )
  {
    sub_B2C35C(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, value);
    byte_418A08B = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Combine(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CancelConfirmDeckIdDialog_CallbackFunc_c *)v8->klass != CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  CancelConfirmDeckIdDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall CancelConfirmDeckIdDialog__get_closeBtnPath(
        CancelConfirmDeckIdDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_418A093 & 1) == 0 )
  {
    sub_B2C35C(&StringLiteral_4220/*"ConfirmWindow/CancelButton"*/, method);
    byte_418A093 = 1;
  }
  return (System_String_o *)StringLiteral_4220/*"ConfirmWindow/CancelButton"*/;
}


void __fastcall CancelConfirmDeckIdDialog__remove_callbackFunc(
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

  if ( (byte_418A08C & 1) == 0 )
  {
    sub_B2C35C(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, value);
    byte_418A08C = 1;
  }
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = &this->fields.callbackFunc;
  v6 = (System_Delegate_o *)callbackFunc;
  while ( 1 )
  {
    v8 = System_Delegate__Remove(v6, (System_Delegate_o *)value, 0LL);
    if ( v8 )
    {
      if ( (CancelConfirmDeckIdDialog_CallbackFunc_c *)v8->klass != CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo )
        break;
    }
    v9 = sub_B20D74(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B2C728(v8);
  CancelConfirmDeckIdDialog__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmDeckIdDialog_CallbackFunc___ctor(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
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
System_IAsyncResult_o *__fastcall CancelConfirmDeckIdDialog_CallbackFunc__BeginInvoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        bool result,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-38h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = result;
  if ( (byte_4184EB8 & 1) == 0 )
  {
    sub_B2C35C(&bool_TypeInfo, result);
    byte_4184EB8 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B2C300(this, v9, callback, object);
}


void __fastcall CancelConfirmDeckIdDialog_CallbackFunc__EndInvoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B2C304(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmDeckIdDialog_CallbackFunc__Invoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x3
  __int64 v4; // x8
  __int64 v7; // x24
  CancelConfirmDeckIdDialog_CallbackFunc_o **v8; // x25
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
  void (__fastcall **v19)(__int64 *, bool, _QWORD); // x0
  CancelConfirmDeckIdDialog_CallbackFunc_o *v20; // x8
  __int64 *v21; // x21
  __int64 v22; // x22
  void (__fastcall *v23)(bool, __int64); // x23
  char v24; // w23
  char v25; // w0
  __int64 v26; // x3
  __int64 v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  unsigned __int64 v30; // x10
  _DWORD *v31; // x11
  CancelConfirmDeckIdDialog_CallbackFunc_o *v32; // [xsp+8h] [xbp-48h] BYREF

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
    v8 = (CancelConfirmDeckIdDialog_CallbackFunc_o **)(v4 + 32);
LABEL_5:
    v9 = 0LL;
    while ( 1 )
    {
      v20 = v8[v9];
      v21 = *(__int64 **)&v20->fields.method;
      v22 = *(_QWORD *)&v20->fields.extra_arg;
      v23 = *(void (__fastcall **)(bool, __int64))&v20->fields.method_ptr;
      if ( *(__int16 *)(v22 + 72) == -1 )
        sub_B2C418(*(_QWORD *)&v20->fields.extra_arg, result, method, v3);
      if ( (sub_B2C38C(v22) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v22 + 74) != 1 )
        goto LABEL_36;
      v23(result, v22);
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
        v19 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B2C40C(v17, v22);
        (*v19)(v21, result, v19);
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
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v16)(v21, result, *(_QWORD *)(v16 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 312))(
            v21,
            result,
            *(_QWORD *)(*v21 + 16LL * *(unsigned __int16 *)(v22 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v23)(v21, result, v22);
    goto LABEL_37;
  }
}


void __fastcall CancelConfirmDeckIdDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  struct CancelConfirmDeckIdDialog___c_StaticFields *static_fields; // x0

  if ( (byte_4184EB7 & 1) == 0 )
  {
    sub_B2C35C(&CancelConfirmDeckIdDialog___c_TypeInfo, v1);
    byte_4184EB7 = 1;
  }
  v2 = (Il2CppObject *)sub_B2C42C(CancelConfirmDeckIdDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  static_fields = CancelConfirmDeckIdDialog___c_TypeInfo->static_fields;
  static_fields->__9 = (struct CancelConfirmDeckIdDialog___c_o *)v2;
  sub_B2C2F8(static_fields, v2);
}


void __fastcall CancelConfirmDeckIdDialog___c___ctor(CancelConfirmDeckIdDialog___c_o *this, const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall CancelConfirmDeckIdDialog___c___SetDeckInfo_b__19_0(
        CancelConfirmDeckIdDialog___c_o *this,
        int32_t x,
        const MethodInfo *method)
{
  return x != 0;
}