void __fastcall CancelConfirmDeckIdDialog___ctor(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  if ( (byte_40FCF0C & 1) == 0 )
  {
    sub_B16FFC(&BaseDialog_TypeInfo, method);
    byte_40FCF0C = 1;
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
    sub_B16F98(p_callbackFunc, 0LL, (System_String_array **)method, v3, v4, v5, v6, v7);
    CancelConfirmDeckIdDialog_CallbackFunc__Invoke(v9, result, 0LL);
  }
}


void __fastcall CancelConfirmDeckIdDialog__Close(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CancelConfirmDeckIdDialog__Close_30541600(this, 0LL, v2);
}


void __fastcall CancelConfirmDeckIdDialog__Close_30541600(
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
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x3
  __int64 v14; // x4
  System_Action_o *v15; // x20

  if ( (byte_40FCF09 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, callback);
    sub_B16FFC(&Method_CancelConfirmDeckIdDialog_EndClose__, v10);
    byte_40FCF09 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_B16F98(
    (BattleServantConfConponent_o *)&this->fields.closeCallbackFunc,
    (System_Int32_array **)callback,
    (System_String_array **)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.state = 4;
  v15 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v11, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_CancelConfirmDeckIdDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
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

  if ( (byte_40FCF08 & 1) == 0 )
  {
    sub_B16FFC(&int_TypeInfo, *(_QWORD *)&deckNo);
    sub_B16FFC(&LocalizationManager_TypeInfo, v10);
    sub_B16FFC(&StringLiteral_12432, v11);
    sub_B16FFC(&StringLiteral_12430, v12);
    sub_B16FFC(&StringLiteral_12422, v13);
    sub_B16FFC(&StringLiteral_12445, v14);
    sub_B16FFC(&StringLiteral_12428, v15);
    byte_40FCF08 = 1;
  }
  v16 = (System_String_o **)&StringLiteral_12445;
  if ( !isMainQuestSupportDeck )
    v16 = (System_String_o **)&StringLiteral_12432;
  v17 = *v16;
  v18 = (System_String_o **)&StringLiteral_12428;
  if ( !isFixed )
    v18 = (System_String_o **)&StringLiteral_12422;
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
    v22 = LocalizationManager__Get((System_String_o *)StringLiteral_12430, 0LL);
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
  return System_String__Concat_43743732(v26, v23, 0LL);
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
    sub_B16F98(p_closeCallbackFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  UILabel_o *fixMessageLabel; // x0
  UILabel_o *messageLabel; // x0
  UILabel_o *decideLabel; // x0
  UILabel_o *cancelLabel; // x0

  if ( (byte_40FCF05 & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_1, method);
    byte_40FCF05 = 1;
  }
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel )
    goto LABEL_9;
  UILabel__set_text(titleLabel, (System_String_o *)StringLiteral_1, 0LL);
  fixMessageLabel = this->fields.fixMessageLabel;
  if ( !fixMessageLabel
    || (UILabel__set_text(fixMessageLabel, (System_String_o *)StringLiteral_1, 0LL),
        (messageLabel = this->fields.messageLabel) == 0LL)
    || (UILabel__set_text(messageLabel, (System_String_o *)StringLiteral_1, 0LL),
        (decideLabel = this->fields.decideLabel) == 0LL)
    || (UILabel__set_text(decideLabel, (System_String_o *)StringLiteral_1, 0LL),
        (cancelLabel = this->fields.cancelLabel) == 0LL) )
  {
LABEL_9:
    sub_B170D4();
  }
  UILabel__set_text(cancelLabel, (System_String_o *)StringLiteral_1, 0LL);
  this->fields.state = 0;
  BaseDialog__Init((BaseDialog_o *)this, 0LL);
}


void __fastcall CancelConfirmDeckIdDialog__OnClickCancel(CancelConfirmDeckIdDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  const MethodInfo *v5; // x2

  if ( (byte_40FCF0A & 1) == 0 )
  {
    sub_B16FFC(&Method_CancelConfirmDeckIdDialog_OnClickCancel__, method);
    byte_40FCF0A = 1;
  }
  if ( this->fields.state == 2 )
  {
    v3 = Method_CancelConfirmDeckIdDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CancelConfirmDeckIdDialog_OnClickCancel__ + 75) & 2) != 0 )
      v3 = (_QWORD *)sub_B17004(Method_CancelConfirmDeckIdDialog_OnClickCancel__);
    v4 = (System_Reflection_MethodBase_o *)sub_B16FE0(v3, v3[3]);
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
  UIScrollView_o *scrollView; // x0
  UILabel_o *titleLabel; // x26
  System_String_o *v30; // x0
  UILabel_o *fixMessageLabel; // x26
  System_String_o *v32; // x0
  UnityEngine_Component_o *messageLabel; // x0
  UnityEngine_GameObject_o *v34; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x3
  __int64 v38; // x4
  System_Text_StringBuilder_o *v39; // x26
  System_String_o *v40; // x0
  const MethodInfo *v41; // x5
  const MethodInfo *v42; // x5
  System_String_o *v43; // x0
  const MethodInfo *v44; // x5
  const MethodInfo *v45; // x5
  UILabel_o *v46; // x20
  System_String_o *v47; // x0
  struct UILabel_o *v48; // x0
  UnityEngine_BoxCollider_o *messageCollider; // x20
  float v50; // s1
  struct UILabel_o *v51; // x0
  UnityEngine_BoxCollider_o *v52; // x20
  int v53; // s0
  struct UILabel_o *v54; // x0
  int v55; // s8
  int v56; // s1
  float v57; // s2
  int v58; // s0
  UnityEngine_Component_o *decideButton; // x0
  UnityEngine_GameObject_o *v60; // x0
  UnityEngine_Component_o *cancelButton; // x0
  UnityEngine_GameObject_o *v62; // x0
  struct UICommonButton_o *v63; // x0
  struct UICommonButton_o *v64; // x0
  UILabel_o *decideLabel; // x20
  System_String_o *v66; // x0
  UILabel_o *cancelLabel; // x20
  System_String_o *v68; // x0
  __int64 v69; // x1
  __int64 v70; // x2
  __int64 v71; // x3
  __int64 v72; // x4
  System_Action_o *v73; // x20
  UnityEngine_Vector3_o v74; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_40FCF06 & 1) == 0 )
  {
    sub_B16FFC(&System_Action_TypeInfo, *(_QWORD *)&nowSupportDeckId);
    sub_B16FFC(&Method_CancelConfirmDeckIdDialog_EndOpen__, v17);
    sub_B16FFC(&LocalizationManager_TypeInfo, v18);
    sub_B16FFC(&System_Text_StringBuilder_TypeInfo, v19);
    sub_B16FFC(&StringLiteral_12444, v20);
    sub_B16FFC(&StringLiteral_12423, v21);
    sub_B16FFC(&StringLiteral_3253, v22);
    sub_B16FFC(&StringLiteral_12421, v23);
    sub_B16FFC(&StringLiteral_3251, v24);
    sub_B16FFC(&StringLiteral_27, v25);
    sub_B16FFC(&StringLiteral_12450, v26);
    byte_40FCF06 = 1;
  }
  if ( (this->fields.state | 4) == 4 )
  {
    this->fields.callbackFunc = callback;
    sub_B16F98(
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
    scrollView = this->fields.scrollView;
    if ( !scrollView )
      goto LABEL_29;
    UIScrollView__ResetPosition(scrollView, 0LL);
    titleLabel = this->fields.titleLabel;
    if ( (BYTE3(LocalizationManager_TypeInfo->vtable._0_Equals.methodPtr) & 4) != 0
      && !LocalizationManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    }
    v30 = LocalizationManager__Get((System_String_o *)StringLiteral_12450, 0LL);
    if ( !titleLabel )
      goto LABEL_29;
    UILabel__set_text(titleLabel, v30, 0LL);
    fixMessageLabel = this->fields.fixMessageLabel;
    v32 = LocalizationManager__Get((System_String_o *)StringLiteral_12423, 0LL);
    if ( !fixMessageLabel )
      goto LABEL_29;
    UILabel__set_text(fixMessageLabel, v32, 0LL);
    messageLabel = (UnityEngine_Component_o *)this->fields.messageLabel;
    if ( !messageLabel )
      goto LABEL_29;
    v34 = UnityEngine_Component__get_gameObject(messageLabel, 0LL);
    if ( !v34 )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(v34, 1, 0LL);
    v39 = (System_Text_StringBuilder_o *)sub_B170CC(System_Text_StringBuilder_TypeInfo, v35, v36, v37, v38);
    System_Text_StringBuilder___ctor(v39, 0LL);
    v40 = LocalizationManager__Get((System_String_o *)StringLiteral_12421, 0LL);
    if ( !v39 )
      goto LABEL_29;
    System_Text_StringBuilder__Append_41914240(v39, v40, 0LL);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v39, nowSupportDeckId, nowFixMainSupportDeckIds, 1, v41);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v39, nowSupportDeckId, nowFixEventSupportDeckIds, 0, v42);
    System_Text_StringBuilder__Append_41914240(v39, (System_String_o *)StringLiteral_27, 0LL);
    v43 = LocalizationManager__Get((System_String_o *)StringLiteral_12444, 0LL);
    System_Text_StringBuilder__Append_41914240(v39, v43, 0LL);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v39, orgSupportDeckId, orgFixMainSupportDeckIds, 1, v44);
    CancelConfirmDeckIdDialog__SetDeckInfo(this, v39, orgSupportDeckId, orgFixEventSupportDeckIds, 0, v45);
    v46 = this->fields.messageLabel;
    v47 = (System_String_o *)((__int64 (__fastcall *)(System_Text_StringBuilder_o *, Il2CppMethodPointer))v39->klass->vtable._3_ToString.method)(
                               v39,
                               v39->klass->vtable._4_System_Runtime_Serialization_ISerializable_GetObjectData.methodPtr);
    WrapControlText__textBBCodeAdjust(
      v46,
      v47,
      this->fields.MESSAGE_FONT_SIZE,
      this->fields.MESSAGE_FONT_SIZE,
      1000,
      0LL);
    v48 = this->fields.messageLabel;
    if ( !v48 )
      goto LABEL_29;
    messageCollider = this->fields.messageCollider;
    ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v48->klass->vtable._22_get_localSize.method)(
      v48,
      v48->klass->vtable._23_get_drawingDimensions.methodPtr);
    if ( !messageCollider )
      goto LABEL_29;
    v74.fields.y = v50 * -0.5;
    v74.fields.x = 0.0;
    v74.fields.z = 0.0;
    UnityEngine_BoxCollider__set_center(messageCollider, v74, 0LL);
    v51 = this->fields.messageLabel;
    if ( !v51 )
      goto LABEL_29;
    v52 = this->fields.messageCollider;
    ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v51->klass->vtable._22_get_localSize.method)(
      v51,
      v51->klass->vtable._23_get_drawingDimensions.methodPtr);
    v54 = this->fields.messageLabel;
    if ( !v54 )
      goto LABEL_29;
    v55 = v53;
    ((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))v54->klass->vtable._22_get_localSize.method)(
      v54,
      v54->klass->vtable._23_get_drawingDimensions.methodPtr);
    if ( !v52 )
      goto LABEL_29;
    v57 = 1.0;
    v58 = v55;
    UnityEngine_BoxCollider__set_size(v52, *(UnityEngine_Vector3_o *)(&v56 - 1), 0LL);
    decideButton = (UnityEngine_Component_o *)this->fields.decideButton;
    if ( !decideButton )
      goto LABEL_29;
    v60 = UnityEngine_Component__get_gameObject(decideButton, 0LL);
    if ( !v60 )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(v60, 1, 0LL);
    cancelButton = (UnityEngine_Component_o *)this->fields.cancelButton;
    if ( !cancelButton )
      goto LABEL_29;
    v62 = UnityEngine_Component__get_gameObject(cancelButton, 0LL);
    if ( !v62 )
      goto LABEL_29;
    UnityEngine_GameObject__SetActive(v62, 1, 0LL);
    v63 = this->fields.decideButton;
    if ( !v63 )
      goto LABEL_29;
    ((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v63->klass->vtable._14_SetState.method)(
      v63,
      0LL,
      1LL,
      v63->klass->vtable._15_OnPress.methodPtr);
    v64 = this->fields.cancelButton;
    if ( !v64
      || (((void (__fastcall *)(struct UICommonButton_o *, _QWORD, __int64, Il2CppMethodPointer))v64->klass->vtable._14_SetState.method)(
            v64,
            0LL,
            1LL,
            v64->klass->vtable._15_OnPress.methodPtr),
          decideLabel = this->fields.decideLabel,
          v66 = LocalizationManager__Get((System_String_o *)StringLiteral_3253, 0LL),
          !decideLabel)
      || (UILabel__set_text(decideLabel, v66, 0LL),
          cancelLabel = this->fields.cancelLabel,
          v68 = LocalizationManager__Get((System_String_o *)StringLiteral_3251, 0LL),
          !cancelLabel) )
    {
LABEL_29:
      sub_B170D4();
    }
    UILabel__set_text(cancelLabel, v68, 0LL);
    this->fields.state = 1;
    v73 = (System_Action_o *)sub_B170CC(System_Action_TypeInfo, v69, v70, v71, v72);
    System_Action___ctor(v73, (Il2CppObject *)this, Method_CancelConfirmDeckIdDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v73, 0, 0LL);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  int32_t v29; // w23
  BalanceConfig_c *v30; // x8
  int32_t *p_FixMainSupportDeckNum; // x8
  signed __int64 v32; // x25
  unsigned __int64 v33; // x24
  System_Text_StringBuilder_o *appended; // x0
  __int64 v35; // x1
  __int64 v36; // x2
  const MethodInfo *v37; // x5
  System_String_o *DeckIDString; // x0
  int32_t v39; // w2
  System_String_o *v40; // x0

  if ( (byte_40FCF07 & 1) == 0 )
  {
    sub_B16FFC(&BalanceConfig_TypeInfo, sb);
    sub_B16FFC(&Method_System_Linq_Enumerable_Count_int___, v10);
    sub_B16FFC(&Method_System_Linq_Enumerable_Where_int___, v11);
    sub_B16FFC(&Method_System_Func_int__bool___ctor__, v12);
    sub_B16FFC(&System_Func_int__bool__TypeInfo, v13);
    sub_B16FFC(&Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__, v14);
    sub_B16FFC(&CancelConfirmDeckIdDialog___c_TypeInfo, v15);
    sub_B16FFC(&StringLiteral_26, v16);
    byte_40FCF07 = 1;
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
    _9__19_0 = (System_Func_int__bool__o *)sub_B170CC(
                                             System_Func_int__bool__TypeInfo,
                                             sb,
                                             *(_QWORD *)&currentDeckId,
                                             fixDeckIds,
                                             isMain);
    System_Func_int__bool____ctor(
      _9__19_0,
      v20,
      Method_CancelConfirmDeckIdDialog___c__SetDeckInfo_b__19_0__,
      (const MethodInfo_2B6586C *)Method_System_Func_int__bool___ctor__);
    v21 = CancelConfirmDeckIdDialog___c_TypeInfo->static_fields;
    v21->__9__19_0 = _9__19_0;
    sub_B16F98(
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
          (const MethodInfo_19C8D54 *)Method_System_Linq_Enumerable_Where_int___);
  v29 = System_Linq_Enumerable__Count_int_(v28, (const MethodInfo_18D3910 *)Method_System_Linq_Enumerable_Count_int___);
  v30 = BalanceConfig_TypeInfo;
  if ( isMain )
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v30->static_fields->FixMainSupportDeckNum;
  }
  else
  {
    if ( (WORD1(BalanceConfig_TypeInfo->vtable._0_Equals.methodPtr) & 0x400) != 0
      && !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v30 = BalanceConfig_TypeInfo;
    }
    p_FixMainSupportDeckNum = &v30->static_fields->FixEventSupportDeckNum;
  }
  v32 = *p_FixMainSupportDeckNum;
  if ( (int)v32 >= 1 )
  {
    if ( !sb )
LABEL_30:
      sub_B170D4();
    v33 = 0LL;
    do
    {
      appended = System_Text_StringBuilder__Append_41914240(sb, (System_String_o *)StringLiteral_26, 0LL);
      if ( v33 == 0 && v29 < 1 )
      {
        DeckIDString = CancelConfirmDeckIdDialog__CreateDeckIDString(
                         (CancelConfirmDeckIdDialog_o *)appended,
                         1,
                         currentDeckId,
                         v29 > 0,
                         isMain,
                         v37);
        System_Text_StringBuilder__Append_41914240(sb, DeckIDString, 0LL);
        v33 = 1LL;
      }
      else
      {
        if ( !fixDeckIds )
          goto LABEL_30;
        if ( v33 >= fixDeckIds->max_length )
        {
          sub_B17100(appended, v35, v36);
          sub_B170A0();
        }
        v39 = fixDeckIds->m_Items[++v33];
        v40 = CancelConfirmDeckIdDialog__CreateDeckIDString(
                (CancelConfirmDeckIdDialog_o *)appended,
                v33,
                v39,
                v39 != 0,
                isMain,
                v37);
        System_Text_StringBuilder__Append_41914240(sb, v40, 0LL);
      }
    }
    while ( (__int64)v33 < v32 );
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

  if ( (byte_40FCF03 & 1) == 0 )
  {
    sub_B16FFC(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, value);
    byte_40FCF03 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  CancelConfirmDeckIdDialog__remove_callbackFunc(v11, v12, v13);
}


System_String_o *__fastcall CancelConfirmDeckIdDialog__get_closeBtnPath(
        CancelConfirmDeckIdDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_40FCF0B & 1) == 0 )
  {
    sub_B16FFC(&StringLiteral_4202, method);
    byte_40FCF0B = 1;
  }
  return (System_String_o *)StringLiteral_4202;
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

  if ( (byte_40FCF04 & 1) == 0 )
  {
    sub_B16FFC(&CancelConfirmDeckIdDialog_CallbackFunc_TypeInfo, value);
    byte_40FCF04 = 1;
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
    v9 = sub_B0BA14(p_callbackFunc, v8, v6);
    v10 = v6 == (System_Delegate_o *)v9;
    v6 = (System_Delegate_o *)v9;
    if ( v10 )
      return;
  }
  sub_B173C8(v8);
  CancelConfirmDeckIdDialog__Init(v11, v12);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmDeckIdDialog_CallbackFunc___ctor(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
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
  sub_B16F98(
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
  if ( (byte_40F70B0 & 1) == 0 )
  {
    sub_B16FFC(&bool_TypeInfo, result);
    byte_40F70B0 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_B16FA0(this, v9, callback, object);
}


void __fastcall CancelConfirmDeckIdDialog_CallbackFunc__EndInvoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_B16FA4(result, 0LL, method);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall CancelConfirmDeckIdDialog_CallbackFunc__Invoke(
        CancelConfirmDeckIdDialog_CallbackFunc_o *this,
        bool result,
        const MethodInfo *method)
{
  __int64 v3; // x8
  __int64 v6; // x24
  CancelConfirmDeckIdDialog_CallbackFunc_o **v7; // x25
  __int64 v8; // x26
  unsigned int v9; // w23
  __int64 class_0; // x0
  __int64 v11; // x8
  unsigned __int64 v12; // x10
  _DWORD *v13; // x11
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  void (__fastcall **v17)(__int64 *, bool, _QWORD); // x0
  CancelConfirmDeckIdDialog_CallbackFunc_o *v18; // x8
  __int64 *v19; // x21
  __int64 v20; // x22
  void (__fastcall *v21)(bool, __int64); // x23
  char v22; // w23
  char v23; // w0
  __int64 v24; // x8
  __int64 v25; // x1
  __int64 v26; // x2
  unsigned __int64 v27; // x10
  _DWORD *v28; // x11
  CancelConfirmDeckIdDialog_CallbackFunc_o *v29; // [xsp+8h] [xbp-48h] BYREF

  v29 = this;
  v3 = *(_QWORD *)&this[1].fields.method_ptr;
  if ( !v3 )
  {
    v7 = &v29;
    v6 = 1LL;
    goto LABEL_5;
  }
  v6 = *(_QWORD *)(v3 + 24);
  if ( v6 )
  {
    v7 = (CancelConfirmDeckIdDialog_CallbackFunc_o **)(v3 + 32);
LABEL_5:
    v8 = 0LL;
    while ( 1 )
    {
      v18 = v7[v8];
      v19 = *(__int64 **)&v18->fields.method;
      v20 = *(_QWORD *)&v18->fields.extra_arg;
      v21 = *(void (__fastcall **)(bool, __int64))&v18->fields.method_ptr;
      if ( *(__int16 *)(v20 + 72) == -1 )
        sub_B170B8(*(_QWORD *)&v18->fields.extra_arg, result, method);
      if ( (sub_B1702C(v20) & 1) == 0 )
        break;
      if ( *(_BYTE *)(v20 + 74) != 1 )
        goto LABEL_36;
      v21(result, v20);
LABEL_37:
      if ( ++v8 == v6 )
        return;
    }
    if ( v19 && *(__int16 *)(v20 + 72) != -1 && (*(_BYTE *)(*v19 + 277) & 1) == 0 && this->fields.m_target )
    {
      v22 = sub_B17024(v20);
      v23 = sub_B17428(v20);
      if ( (v22 & 1) != 0 )
      {
        if ( (v23 & 1) != 0 )
        {
          v24 = *v19;
          v25 = *(_QWORD *)(v20 + 24);
          v26 = *(unsigned __int16 *)(v20 + 72);
          if ( *(_WORD *)(*v19 + 298) )
          {
            v27 = 0LL;
            v28 = (_DWORD *)(*(_QWORD *)(v24 + 176) + 8LL);
            while ( *((_QWORD *)v28 - 1) != v25 )
            {
              ++v27;
              v28 += 4;
              if ( v27 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_35;
            }
            v16 = v24 + 16LL * (*v28 + (int)v26) + 312;
          }
          else
          {
LABEL_35:
            v16 = sub_AAFEF8(v19, v25, v26);
          }
          v15 = *(_QWORD *)(v16 + 8);
        }
        else
        {
          v15 = *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320);
        }
        v17 = (void (__fastcall **)(__int64 *, bool, _QWORD))sub_B170AC(v15, v20);
        (*v17)(v19, result, v17);
      }
      else
      {
        v9 = *(unsigned __int16 *)(v20 + 72);
        if ( (v23 & 1) != 0 )
        {
          class_0 = j_il2cpp_method_get_class_0(v20);
          v11 = *v19;
          if ( *(_WORD *)(*v19 + 298) )
          {
            v12 = 0LL;
            v13 = (_DWORD *)(*(_QWORD *)(v11 + 176) + 8LL);
            while ( *((_QWORD *)v13 - 1) != class_0 )
            {
              ++v12;
              v13 += 4;
              if ( v12 >= *(unsigned __int16 *)(*v19 + 298) )
                goto LABEL_11;
            }
            v14 = v11 + 16LL * (int)(*v13 + v9) + 312;
          }
          else
          {
LABEL_11:
            v14 = sub_AAFEF8(v19, class_0, v9);
          }
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))v14)(v19, result, *(_QWORD *)(v14 + 8));
        }
        else
        {
          (*(void (__fastcall **)(__int64 *, bool, _QWORD))(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 312))(
            v19,
            result,
            *(_QWORD *)(*v19 + 16LL * *(unsigned __int16 *)(v20 + 72) + 320));
        }
      }
      goto LABEL_37;
    }
LABEL_36:
    ((void (__fastcall *)(__int64 *, bool, __int64))v21)(v19, result, v20);
    goto LABEL_37;
  }
}


void __fastcall CancelConfirmDeckIdDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v4; // x4
  Il2CppObject *v5; // x19
  BattleServantConfConponent_o *static_fields; // x0
  System_String_array **v7; // x2
  System_String_array **v8; // x3
  System_Boolean_array **v9; // x4
  System_Int32_array **v10; // x5
  System_Int32_array *v11; // x6
  System_Int32_array *v12; // x7

  if ( (byte_40F70AF & 1) == 0 )
  {
    sub_B16FFC(&CancelConfirmDeckIdDialog___c_TypeInfo, v1);
    byte_40F70AF = 1;
  }
  v5 = (Il2CppObject *)sub_B170CC(CancelConfirmDeckIdDialog___c_TypeInfo, v1, v2, v3, v4);
  System_Object___ctor(v5, 0LL);
  static_fields = (BattleServantConfConponent_o *)CancelConfirmDeckIdDialog___c_TypeInfo->static_fields;
  static_fields->klass = (BattleServantConfConponent_c *)v5;
  sub_B16F98(static_fields, (System_Int32_array **)v5, v7, v8, v9, v10, v11, v12);
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