void CommonConfirmDialog___ctor(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3CD5F & 1) == 0 )
  {
    sub_1C37058(&BaseDialog_TypeInfo);
    byte_4C3CD5F = 1;
  }
  this->fields.DEFULT_TITLE_WIDGET_SIZE = (struct UnityEngine_Vector2Int_o)0x32000002BCLL;
  *(_OWORD *)&this->fields.DEFULT_MESSAGE_WIDGET_SIZE.fields.m_X = xmmword_C0ED50;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


void CommonConfirmDialog__AdjustMessageLabel(
        CommonConfirmDialog_o *this,
        bool isNoTitle,
        System_String_o *message,
        float messagePosY,
        int32_t spacingY,
        UnityEngine_Vector2Int_o messageWidgetSize,
        int32_t fontsize,
        int32_t alignment,
        bool setCondensedScale,
        int32_t minFontSize,
        float buttonPosY,
        const MethodInfo *method)
{
  UnityEngine_Object_o *noTitleMessageLabel; // x22
  UnityEngine_GameObject_o *baseWindow; // x0
  struct UILabel_o *messageLabel; // x22
  int monitor_high; // w27
  float v26; // s8
  float v27; // s0
  unsigned __int64 v28; // x27
  UnityEngine_Object_o *v29; // x28
  UnityEngine_GameObject_o *gameObject; // x0
  BalanceConfig_c *v31; // x0
  System_String_o *Empty; // x1
  int32_t mWidth; // w19
  int32_t v34; // w3
  Il2CppObject *v35; // [xsp+0h] [xbp-80h] BYREF
  Il2CppObject *component; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_4C3CD54 & 1) == 0 )
  {
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___);
    sub_1C37058(&Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
    sub_1C37058(&System_Math_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    byte_4C3CD54 = 1;
  }
  v35 = 0;
  component = 0;
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0, 0) )
    {
      baseWindow = this->fields.baseWindow;
      if ( !baseWindow )
        goto LABEL_38;
      messageLabel = this->fields.noTitleMessageLabel;
      if ( !UnityEngine_GameObject__TryGetComponent_object_(
              baseWindow,
              &component,
              (const MethodInfo_3140468 *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
        goto LABEL_23;
      baseWindow = this->fields.buttonDecide;
      if ( !baseWindow )
        goto LABEL_38;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                 baseWindow,
                                                 &v35,
                                                 (const MethodInfo_3140468 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)baseWindow & 1) == 0 )
      {
LABEL_23:
        LODWORD(v28) = this->fields.DEFAULT_NO_TITLE_MESSAGE_WIDGET_SIZE.fields.m_Y;
        messagePosY = 38.0;
        goto LABEL_24;
      }
      if ( component && v35 )
      {
        monitor_high = HIDWORD(component[10].monitor);
        v26 = (float)((float)SHIDWORD(v35[10].monitor) * 0.5) + buttonPosY;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v27 = fabsf((float)((float)monitor_high * 0.5) + -30.0) + fabsf(v26);
        messagePosY = v26 + (float)(v27 * 0.5);
        if ( v27 == INFINITY )
          LODWORD(v28) = 0x80000000;
        else
          LODWORD(v28) = (int)v27;
LABEL_24:
        baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( !baseWindow )
          goto LABEL_38;
        goto LABEL_25;
      }
LABEL_38:
      sub_1C372B4(baseWindow);
    }
  }
  messageLabel = this->fields.messageLabel;
  v29 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  v28 = HIDWORD(*(unsigned __int64 *)&messageWidgetSize);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v29, 0, 0);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.noTitleMessageLabel;
    if ( baseWindow )
    {
LABEL_25:
      UILabel__set_text((UILabel_o *)baseWindow, string_TypeInfo->static_fields->Empty, 0);
      goto LABEL_26;
    }
    goto LABEL_38;
  }
LABEL_26:
  if ( !messageLabel )
    goto LABEL_38;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0);
  GameObjectExtensions__SetLocalPositionY(gameObject, messagePosY, 0);
  UIWidget__set_width((UIWidget_o *)messageLabel, messageWidgetSize.fields.m_X, 0);
  UIWidget__set_height((UIWidget_o *)messageLabel, v28, 0);
  UILabel__set_spacingY(messageLabel, spacingY, 0);
  if ( !fontsize )
  {
    v31 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v31 = BalanceConfig_TypeInfo;
    }
    fontsize = v31->static_fields->DefaultFontSize;
  }
  UILabel__set_fontSize(messageLabel, fontsize, 0);
  UILabel__set_alignment(messageLabel, alignment, 0);
  if ( message )
  {
    Empty = System_String__Trim_63617816(message, 0xAu, 0);
    if ( setCondensedScale )
    {
LABEL_33:
      mWidth = messageLabel->fields.mWidth;
      UILabel__set_text(messageLabel, Empty, 0);
      ((void (__fastcall *)(struct UILabel_o *, const MethodInfo *))messageLabel->klass->vtable._33_MakePixelPerfect.methodPtr)(
        messageLabel,
        messageLabel->klass->vtable._33_MakePixelPerfect.method);
      UILabel__SetCondensedScale(messageLabel, mWidth, 0, 0);
      return;
    }
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( setCondensedScale )
      goto LABEL_33;
  }
  v34 = minFontSize;
  if ( minFontSize < 1 )
    v34 = 0;
  WrapControlText__textAdjust(messageLabel, Empty, messageLabel->fields.mFontSize, v34, 0);
}


void CommonConfirmDialog__Close(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CommonConfirmDialog__Close_31184180(this, 0, v2);
}


void CommonConfirmDialog__Close_31184180(
        CommonConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_o *v5; // x20
  const MethodInfo *v6; // x2

  if ( (byte_4C3CD57 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&Method_CommonConfirmDialog_EndClose__);
    byte_4C3CD57 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_1C36FFC(&this->fields.closeCallbackFunc, callback);
  this->fields.isButtonEnable = 0;
  v5 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v5, (Il2CppObject *)this, Method_CommonConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v5, v6);
}


void CommonConfirmDialog__EndClose(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v5; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  CommonConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_1C372B4(0);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v5 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_1C36FFC(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v5->fields.invoke_impl)(v5->fields.method_code, v5->fields.method);
  }
}


void CommonConfirmDialog__EndOpen(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void CommonConfirmDialog__Init(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *titleLabel; // x20
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UnityEngine_Object_o *addMsgInfo; // x20
  const MethodInfo *v10; // x1

  if ( (byte_4C3CD52 & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_1/*""*/);
    byte_4C3CD52 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0, 0) )
  {
    gameObject = this->fields.noTitleMessageLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(addMsgInfo, 0, 0) )
  {
    gameObject = (UILabel_o *)this->fields.addMsgInfo;
    if ( !gameObject )
      goto LABEL_35;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  }
  *(_WORD *)&this->fields.isButtonEnable = 0;
  gameObject = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
LABEL_35:
    sub_1C372B4(gameObject);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  BaseDialog__Init((BaseDialog_o *)this, v10);
}


void CommonConfirmDialog__OnClickCancel(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  Il2CppObject *v3; // x24
  Il2CppObject *v4; // x23
  Il2CppObject *v5; // x22
  Il2CppObject *v6; // x21
  System_Collections_Generic_List_object__o *v7; // x20
  __int64 v8; // x0
  struct System_Object_array *items; // x8
  _QWORD *v10; // x9
  __int64 size; // x10
  Il2CppClass **v12; // x0
  struct System_Object_array *v13; // x8
  _QWORD *v14; // x9
  __int64 v15; // x10
  Il2CppClass **v16; // x0
  struct System_Object_array *v17; // x8
  _QWORD *v18; // x9
  __int64 v19; // x10
  Il2CppClass **v20; // x0
  struct System_Object_array *v21; // x8
  _QWORD *v22; // x9
  __int64 v23; // x10
  Il2CppClass **v24; // x0
  UnityEngine_Object_o *buttonDecide; // x21
  UnityEngine_Object_o *buttonDecideLabel; // x21
  System_Func_object__bool__o *v27; // x21
  int32_t v28; // w20
  _QWORD *v29; // x0
  System_Reflection_MethodBase_o *v30; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C3CD5A & 1) == 0 )
  {
    sub_1C37058(&Method_BasicHelper_Any_string___);
    sub_1C37058(&Method_CommonConfirmDialog_OnClickCancel__);
    sub_1C37058(&Method_CommonConfirmDialog__OnClickCancel_b__55_0__);
    sub_1C37058(&System_Func_string__bool__TypeInfo);
    sub_1C37058(&Method_System_Collections_Generic_List_string__Add__);
    sub_1C37058(&Method_System_Collections_Generic_List_string___ctor__);
    sub_1C37058(&System_Collections_Generic_List_string__TypeInfo);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C37058(&StringLiteral_3688/*"COMMON_CONFIRM_NO"*/);
    sub_1C37058(&StringLiteral_10391/*"PLAY_OPENING_CONFIRM_CANCEL"*/);
    byte_4C3CD5A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    v3 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
    v4 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
    v5 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10391/*"PLAY_OPENING_CONFIRM_CANCEL"*/, 0);
    v6 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_NO"*/, 0);
    v7 = (System_Collections_Generic_List_object__o *)sub_1C372A4(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v7,
      (const MethodInfo_37A27F0 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !v7 )
      goto LABEL_36;
    items = v7->fields._items;
    v10 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !items )
      goto LABEL_36;
    size = v7->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v3,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v10[4] + 192LL) + 112LL));
    }
    else
    {
      v12 = &items->obj.klass + size;
      v7->fields._size = size + 1;
      v12[4] = (Il2CppClass *)v3;
      v8 = sub_1C36FFC(v12 + 4, v3);
    }
    v13 = v7->fields._items;
    v14 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v13 )
      goto LABEL_36;
    v15 = v7->fields._size;
    if ( (unsigned int)v15 >= LODWORD(v13->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v4,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v14[4] + 192LL) + 112LL));
    }
    else
    {
      v16 = &v13->obj.klass + v15;
      v7->fields._size = v15 + 1;
      v16[4] = (Il2CppClass *)v4;
      v8 = sub_1C36FFC(v16 + 4, v4);
    }
    v17 = v7->fields._items;
    v18 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v17 )
      goto LABEL_36;
    v19 = v7->fields._size;
    if ( (unsigned int)v19 >= LODWORD(v17->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v5,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v18[4] + 192LL) + 112LL));
    }
    else
    {
      v20 = &v17->obj.klass + v19;
      v7->fields._size = v19 + 1;
      v20[4] = (Il2CppClass *)v5;
      v8 = sub_1C36FFC(v20 + 4, v5);
    }
    v21 = v7->fields._items;
    v22 = Method_System_Collections_Generic_List_string__Add__;
    ++v7->fields._version;
    if ( !v21 )
LABEL_36:
      sub_1C372B4(v8);
    v23 = v7->fields._size;
    if ( (unsigned int)v23 >= LODWORD(v21->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v7,
        v6,
        *(const MethodInfo_37A3024 **)(*(_QWORD *)(v22[4] + 192LL) + 112LL));
    }
    else
    {
      v24 = &v21->obj.klass + v23;
      v7->fields._size = v23 + 1;
      v24[4] = (Il2CppClass *)v6;
      sub_1C36FFC(v24 + 4, v6);
    }
    buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(buttonDecide, 0, 0) )
      goto LABEL_29;
    buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
    {
LABEL_29:
      v27 = (System_Func_object__bool__o *)sub_1C372A4(System_Func_string__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v27,
        (Il2CppObject *)this,
        Method_CommonConfirmDialog__OnClickCancel_b__55_0__,
        0);
      v28 = BasicHelper__Any_object_(
              (System_Collections_Generic_List_T__o *)v7,
              (System_Func_T__bool__o *)v27,
              (const MethodInfo_30D0FF8 *)Method_BasicHelper_Any_string___);
    }
    else
    {
      v28 = 0;
    }
    v29 = Method_CommonConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommonConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v29 = (_QWORD *)sub_1C37070(Method_CommonConfirmDialog_OnClickCancel__);
    v30 = (System_Reflection_MethodBase_o *)sub_1C3703C(v29, v29[4]);
    OverwriteAssetSoundName__PlaySystemSe(v30, v28, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void CommonConfirmDialog__OnClickClose(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C3CD5B & 1) == 0 )
  {
    sub_1C37058(&Method_CommonConfirmDialog_OnClickClose__);
    byte_4C3CD5B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_CommonConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CommonConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CommonConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 0, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, _QWORD, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        0,
        clickFunc->fields.method);
  }
}


void CommonConfirmDialog__OnClickDecide(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  _BOOL4 isDecideBtnSe; // w20
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C3CD58 & 1) == 0 )
  {
    sub_1C37058(&Method_CommonConfirmDialog_OnClickDecide__);
    byte_4C3CD58 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    isDecideBtnSe = this->fields.isDecideBtnSe;
    v4 = Method_CommonConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_CommonConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1C37070(Method_CommonConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1C3703C(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, 8 * isDecideBtnSe, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void CommonConfirmDialog__OnClickDecide2(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4C3CD59 & 1) == 0 )
  {
    sub_1C37058(&Method_CommonConfirmDialog_OnClickDecide2__);
    byte_4C3CD59 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_CommonConfirmDialog_OnClickDecide2__;
    if ( (*((_BYTE *)Method_CommonConfirmDialog_OnClickDecide2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C37070(Method_CommonConfirmDialog_OnClickDecide2__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C3703C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, 8, 0, 0);
    clickFunc = this->fields.clickFunc;
    this->fields.isButtonEnable = 0;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


void CommonConfirmDialog__OnEnable(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *v2; // x19
  void *monitor; // x8
  System_String_o *v4; // x20
  System_String_o *v5; // x0
  void *v6; // x8
  System_String_o *v7; // x20
  System_String_o *v8; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v10; // x0

  v2 = (UnityEngine_Component_o *)this;
  if ( (byte_4C3CD5E & 1) == 0 )
  {
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&StringLiteral_2682/*"BATTLERESUME_CONFIRM_CANCEL"*/);
    sub_1C37058(&StringLiteral_2683/*"BATTLERESUME_CONFIRM_DECIDE"*/);
    sub_1C37058(&StringLiteral_4648/*"ConfirmWindow/CancelButton"*/);
    this = (CommonConfirmDialog_o *)sub_1C37058(&StringLiteral_15641/*"Window/CancelButton"*/);
    byte_4C3CD5E = 1;
  }
  monitor = v2[5].monitor;
  if ( !monitor )
    goto LABEL_13;
  v4 = (System_String_o *)*((_QWORD *)monitor + 52);
  if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
  v5 = LocalizationManager__Get((System_String_o *)StringLiteral_2683/*"BATTLERESUME_CONFIRM_DECIDE"*/, 0);
  this = (CommonConfirmDialog_o *)System_String__op_Equality(v4, v5, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v6 = v2[5].monitor;
    if ( v6 )
    {
      v7 = (System_String_o *)*((_QWORD *)v6 + 52);
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      v8 = LocalizationManager__Get((System_String_o *)StringLiteral_2682/*"BATTLERESUME_CONFIRM_CANCEL"*/, 0);
      if ( !System_String__op_Equality(v7, v8, 0) )
      {
        transform = UnityEngine_Component__get_transform(v2, 0);
        AndroidBackKeyManager__AddBackBtn_44960000(transform, (System_String_o *)StringLiteral_15641/*"Window/CancelButton"*/, 0);
        v10 = UnityEngine_Component__get_transform(v2, 0);
        AndroidBackKeyManager__AddBackBtn_44960000(v10, (System_String_o *)StringLiteral_4648/*"ConfirmWindow/CancelButton"*/, 0);
      }
      return;
    }
LABEL_13:
    sub_1C372B4(this);
  }
}


void CommonConfirmDialog__Open(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  const MethodInfo *v8; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    0,
    0,
    0,
    func,
    fontsize,
    0.0,
    15.0,
    0,
    this->fields.DEFULT_MESSAGE_WIDGET_SIZE,
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v8);
}


void CommonConfirmDialog__OpenDecideDlg(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float windowPosY,
        float messagePosY,
        int32_t spacingY,
        bool canMaskTouchClose,
        int32_t maskType,
        int32_t messageLabelHeight,
        const MethodInfo *method)
{
  const MethodInfo *v14; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    1,
    func,
    fontsize,
    windowPosY,
    messagePosY,
    spacingY,
    (UnityEngine_Vector2Int_o)((unsigned int)this->fields.DEFULT_MESSAGE_WIDGET_SIZE.fields.m_X
                             | ((unsigned __int64)(unsigned int)messageLabelHeight << 32)),
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v14);
}


void CommonConfirmDialog__OpenDecideDlgAddMsgFrame(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *addMsg,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float windowPosY,
        float messagePosY,
        int32_t spacingY,
        bool canMaskTouchClose,
        int32_t maskType,
        int32_t messageLabelHeight,
        int32_t alignment,
        const MethodInfo *method)
{
  const MethodInfo *v16; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    1,
    func,
    fontsize,
    windowPosY,
    messagePosY,
    spacingY,
    (UnityEngine_Vector2Int_o)((unsigned int)this->fields.DEFULT_MESSAGE_WIDGET_SIZE.fields.m_X
                             | ((unsigned __int64)(unsigned int)messageLabelHeight << 32)),
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    0,
    alignment,
    480,
    -162.5,
    0,
    0,
    addMsg,
    0,
    v16);
}


void CommonConfirmDialog__OpenDecideDlg_31183124(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float messagePosY,
        int32_t spacingY,
        UnityEngine_Vector2Int_o messageWidgetSize,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  const MethodInfo *v13; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    1,
    func,
    fontsize,
    0.0,
    messagePosY,
    spacingY,
    messageWidgetSize,
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v13);
}


void CommonConfirmDialog__OpenDecideDlg_31183256(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float windowPosY,
        float messagePosY,
        int32_t spacingY,
        bool canMaskTouchClose,
        int32_t maskType,
        int32_t messageLabelHeight,
        int32_t alignment,
        bool isDecideSe,
        bool isCancelTxtTwoLine,
        int32_t titleFontSize,
        const MethodInfo *method)
{
  const MethodInfo *v18; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    isDecideSe,
    func,
    fontsize,
    windowPosY,
    messagePosY,
    spacingY,
    (UnityEngine_Vector2Int_o)((unsigned int)this->fields.DEFULT_MESSAGE_WIDGET_SIZE.fields.m_X
                             | ((unsigned __int64)(unsigned int)messageLabelHeight << 32)),
    canMaskTouchClose,
    maskType,
    0,
    titleFontSize,
    0,
    0,
    alignment,
    480,
    -162.5,
    0,
    0,
    0,
    isCancelTxtTwoLine,
    v18);
}


void CommonConfirmDialog__OpenSetTitleCondensedScale(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t titleFontSize,
        int32_t messageFontSize,
        float titlePosY,
        float messagePosY,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  struct UnityEngine_Vector2Int_o messageWidgetSize; // x21
  System_Nullable_float__o v23; // x0
  UILabel_o *titleLabel; // x0
  int32_t mWidth; // w20
  const MethodInfo *v26; // [xsp+70h] [xbp-A0h]
  System_Nullable_float__o v29; // [xsp+98h] [xbp-78h] BYREF

  if ( (byte_4C3CD56 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    byte_4C3CD56 = 1;
  }
  messageWidgetSize = this->fields.DEFULT_MESSAGE_WIDGET_SIZE;
  v23 = (System_Nullable_float__o)&v29;
  v29 = 0;
  System_Nullable_float____ctor(v23, titlePosY, (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    isDecideSe,
    func,
    messageFontSize,
    0.0,
    messagePosY,
    0,
    messageWidgetSize,
    canMaskTouchClose,
    maskType,
    v29,
    titleFontSize,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v26);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (mWidth = titleLabel->fields.mWidth,
        ((void (__fastcall *)(UILabel_o *, const MethodInfo *))titleLabel->klass->vtable._33_MakePixelPerfect.methodPtr)(
          titleLabel,
          titleLabel->klass->vtable._33_MakePixelPerfect.method),
        (titleLabel = this->fields.titleLabel) == 0) )
  {
    sub_1C372B4(titleLabel);
  }
  UILabel__SetCondensedScale(titleLabel, mWidth, 0, 0);
}


void CommonConfirmDialog__Open_31182160(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        bool canMaskTouchClose,
        int32_t maskType,
        bool setCondensedScale,
        const MethodInfo *method)
{
  const MethodInfo *v10; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    0,
    0,
    isDecideSe,
    func,
    fontsize,
    0.0,
    15.0,
    0,
    this->fields.DEFULT_MESSAGE_WIDGET_SIZE,
    canMaskTouchClose,
    maskType,
    0,
    0,
    setCondensedScale,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v10);
}


void CommonConfirmDialog__Open_31182304(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  const MethodInfo *v11; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    isDecideSe,
    func,
    fontsize,
    0.0,
    15.0,
    0,
    this->fields.DEFULT_MESSAGE_WIDGET_SIZE,
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v11);
}


void CommonConfirmDialog__Open_31182424(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  const MethodInfo *v10; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    0,
    func,
    fontsize,
    0.0,
    15.0,
    0,
    this->fields.DEFULT_MESSAGE_WIDGET_SIZE,
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v10);
}


void CommonConfirmDialog__Open_31182552(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t titleFontSize,
        int32_t messageFontSize,
        float titlePosY,
        float messagePosY,
        bool canMaskTouchClose,
        int32_t maskType,
        const MethodInfo *method)
{
  struct UnityEngine_Vector2Int_o messageWidgetSize; // x20
  System_Nullable_float__o v23; // x0
  const MethodInfo *v24; // [xsp+70h] [xbp-A0h]
  System_Nullable_float__o v27; // [xsp+98h] [xbp-78h] BYREF

  if ( (byte_4C3CD55 & 1) == 0 )
  {
    sub_1C37058(&Method_System_Nullable_float___ctor__);
    byte_4C3CD55 = 1;
  }
  messageWidgetSize = this->fields.DEFULT_MESSAGE_WIDGET_SIZE;
  v23 = (System_Nullable_float__o)&v27;
  v27 = 0;
  System_Nullable_float____ctor(v23, titlePosY, (const MethodInfo_38CAEA4 *)Method_System_Nullable_float___ctor__);
  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    isDecideSe,
    func,
    messageFontSize,
    0.0,
    messagePosY,
    0,
    messageWidgetSize,
    canMaskTouchClose,
    maskType,
    v27,
    titleFontSize,
    0,
    0,
    0,
    480,
    -162.5,
    0,
    0,
    0,
    0,
    v24);
}


void CommonConfirmDialog__Open_31182848(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        int32_t minFontSize,
        float messagePosY,
        int32_t messageLabelWidth,
        int32_t alignment,
        int32_t windowHeight,
        float buttonPosY,
        bool canMaskTouchClose,
        int32_t maskType,
        int32_t messageLabelHeight,
        bool isDecideSe,
        const MethodInfo *method)
{
  const MethodInfo *v18; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    isDecideSe,
    func,
    fontsize,
    0.0,
    messagePosY,
    0,
    (UnityEngine_Vector2Int_o)((unsigned int)messageLabelWidth
                             | ((unsigned __int64)(unsigned int)messageLabelHeight << 32)),
    canMaskTouchClose,
    maskType,
    0,
    0,
    0,
    minFontSize,
    alignment,
    windowHeight,
    buttonPosY,
    0,
    0,
    0,
    0,
    v18);
}


void CommonConfirmDialog__Open_31183548(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontSize,
        bool canMaskTouchClose,
        int32_t decideTxtSize,
        int32_t cancelTxtSize,
        const MethodInfo *method)
{
  const MethodInfo *v12; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    isDecideSe,
    func,
    fontSize,
    0.0,
    15.0,
    0,
    this->fields.DEFULT_MESSAGE_WIDGET_SIZE,
    canMaskTouchClose,
    0,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    decideTxtSize,
    cancelTxtSize,
    0,
    0,
    v12);
}


void CommonConfirmDialog__Open_31183672(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t messageFontSize,
        int32_t messageLabelHeight,
        float messagePosY,
        int32_t decideTxtSize,
        bool canMaskTouchClose,
        const MethodInfo *method)
{
  const MethodInfo *v12; // [xsp+70h] [xbp-20h]

  CommonConfirmDialog__Setup(
    this,
    title,
    message,
    decideTxt,
    cancelTxt,
    1,
    func,
    messageFontSize,
    0.0,
    messagePosY,
    0,
    (UnityEngine_Vector2Int_o)((unsigned int)this->fields.DEFULT_MESSAGE_WIDGET_SIZE.fields.m_X
                             | ((unsigned __int64)(unsigned int)messageLabelHeight << 32)),
    canMaskTouchClose,
    0,
    0,
    0,
    0,
    0,
    0,
    480,
    -162.5,
    decideTxtSize,
    0,
    0,
    0,
    v12);
}


void CommonConfirmDialog__ResetDecideButtonLabelMaxLineCount(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v4; // x0

  if ( (byte_4C3CD5D & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CD5D = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v4 = this->fields.buttonDecideLabel;
    if ( !v4 )
      sub_1C372B4(0);
    UILabel__set_maxLineCount(v4, 1, 0);
  }
}


void CommonConfirmDialog__SetDecideButtonLabelMaxLineCount(
        CommonConfirmDialog_o *this,
        int32_t maxLine,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x21
  UILabel_o *v6; // x0

  if ( (byte_4C3CD5C & 1) == 0 )
  {
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    byte_4C3CD5C = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v6 = this->fields.buttonDecideLabel;
    if ( !v6 )
      sub_1C372B4(0);
    UILabel__set_maxLineCount(v6, maxLine, 0);
  }
}


void CommonConfirmDialog__Setup(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontsize,
        float windowPosY,
        float messagePosY,
        int32_t spacingY,
        UnityEngine_Vector2Int_o messageWidgetSize,
        bool canMaskTouchClose,
        int32_t maskType,
        System_Nullable_float__o titlePosY,
        int32_t titleFontSize,
        bool setCondensedScale,
        int32_t minFontSize,
        int32_t alignment,
        int32_t windowHeight,
        float buttonPosY,
        int32_t decideTxtSize,
        int32_t cancelTxtSize,
        System_String_o *addMsg,
        bool isCancelTxtTwoLine,
        const MethodInfo *method)
{
  int32_t v26; // w24
  int32_t v27; // w28
  UnityEngine_Object_o *addMsgInfo; // x20
  bool v37; // w0
  UnityEngine_GameObject_o *addMsgLabel; // x0
  UnityEngine_Object_o *v39; // x20
  _BOOL4 activeSelf; // w20
  _BOOL4 IsNullOrEmpty; // w27
  UnityEngine_Object_o *titleLabel; // x29
  _BOOL4 v43; // w20
  int v44; // w27
  UnityEngine_GameObject_o *gameObject; // x0
  float value; // s0
  UILabel_o *v47; // x29
  UnityEngine_Transform_o *v48; // x26
  Il2CppObject *Component_object; // x26
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *buttonDecideLabel; // x20
  UILabel_o *v53; // x20
  UILabel_o *v54; // x20
  UnityEngine_Object_o *buttonCancelLabel; // x20
  UILabel_o *v56; // x20
  UILabel_o *v57; // x20
  int32_t v58; // w1
  UnityEngine_Object_o *buttonDecide; // x20
  UnityEngine_Object_o *buttonCancel; // x20
  const MethodInfo *v61; // x2
  System_Action_o *v62; // x20
  const MethodInfo *v63; // x4
  const MethodInfo *v64; // [xsp+8h] [xbp-C8h]

  v26 = decideTxtSize;
  v27 = titleFontSize;
  if ( (byte_4C3CD53 & 1) == 0 )
  {
    sub_1C37058(&System_Action_TypeInfo);
    sub_1C37058(&BalanceConfig_TypeInfo);
    sub_1C37058(&Method_CommonConfirmDialog_EndOpen__);
    sub_1C37058(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
    sub_1C37058(&LocalizationManager_TypeInfo);
    sub_1C37058(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C37058(&Method_System_Nullable_float__get_HasValue__);
    sub_1C37058(&UnityEngine_Object_TypeInfo);
    sub_1C37058(&string_TypeInfo);
    sub_1C37058(&StringLiteral_3688/*"COMMON_CONFIRM_NO"*/);
    sub_1C37058(&StringLiteral_3693/*"COMMON_CONFIRM_YES"*/);
    byte_4C3CD53 = 1;
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v37 = UnityEngine_Object__op_Inequality(addMsgInfo, 0, 0);
  if ( addMsg && v37 )
  {
    addMsgLabel = this->fields.addMsgInfo;
    if ( !addMsgLabel )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive(addMsgLabel, 1, 0);
    addMsgLabel = (UnityEngine_GameObject_o *)this->fields.addMsgLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)addMsgLabel, addMsg, 0);
  }
  this->fields.clickFunc = func;
  sub_1C36FFC(&this->fields.clickFunc, func);
  v39 = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v39, 0, 0) )
  {
    addMsgLabel = this->fields.addMsgInfo;
    if ( !addMsgLabel )
      goto LABEL_87;
    activeSelf = UnityEngine_GameObject__get_activeSelf(addMsgLabel, 0);
  }
  else
  {
    activeSelf = 0;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  v43 = !activeSelf;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v44 = IsNullOrEmpty && v43;
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    addMsgLabel = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)addMsgLabel, 0);
    value = titlePosY.fields.value;
    if ( !titlePosY.fields.hasValue )
      value = 180.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, value, 0);
    v47 = this->fields.titleLabel;
    if ( !titleFontSize )
    {
      addMsgLabel = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        addMsgLabel = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      }
      v27 = *(_DWORD *)(addMsgLabel[7].fields.m_CachedPtr + 512);
    }
    if ( !v47 )
      goto LABEL_87;
    UILabel__set_fontSize(v47, v27, 0);
    addMsgLabel = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( v44 )
      title = string_TypeInfo->static_fields->Empty;
    if ( !addMsgLabel )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)addMsgLabel, title, 0);
    addMsgLabel = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    UIWidget__set_width((UIWidget_o *)addMsgLabel, this->fields.DEFULT_TITLE_WIDGET_SIZE.fields.m_X, 0);
    addMsgLabel = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    UIWidget__set_height((UIWidget_o *)addMsgLabel, this->fields.DEFULT_TITLE_WIDGET_SIZE.fields.m_Y, 0);
    addMsgLabel = (UnityEngine_GameObject_o *)this->fields.titleLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    addMsgLabel = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                (UnityEngine_Component_o *)addMsgLabel,
                                                0);
    v48 = (UnityEngine_Transform_o *)addMsgLabel;
    if ( !byte_4C3C926 )
    {
      addMsgLabel = (UnityEngine_GameObject_o *)sub_1C37058(&UnityEngine_Vector3_TypeInfo);
      byte_4C3C926 = 1;
    }
    if ( !v48 )
      goto LABEL_87;
    UnityEngine_Transform__set_localScale(v48, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  addMsgLabel = this->fields.baseWindow;
  if ( !addMsgLabel )
    goto LABEL_87;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       addMsgLabel,
                       (const MethodInfo_313F1D8 *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  addMsgLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0,
                                              0);
  if ( ((unsigned __int8)addMsgLabel & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_87;
    UIWidget__set_height((UIWidget_o *)Component_object, windowHeight, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    CommonConfirmDialog__AdjustMessageLabel(
      this,
      v44,
      message,
      messagePosY,
      spacingY,
      messageWidgetSize,
      fontsize,
      alignment,
      setCondensedScale,
      minFontSize,
      buttonPosY,
      v64);
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  addMsgLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0);
  if ( ((unsigned __int8)addMsgLabel & 1) != 0 )
  {
    v53 = this->fields.buttonDecideLabel;
    if ( !decideTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      addMsgLabel = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3693/*"COMMON_CONFIRM_YES"*/, 0);
      decideTxt = (System_String_o *)addMsgLabel;
    }
    if ( !v53 )
      goto LABEL_87;
    UILabel__set_text(v53, decideTxt, 0);
    v54 = this->fields.buttonDecideLabel;
    if ( !decideTxtSize )
    {
      addMsgLabel = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
        addMsgLabel = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
      }
      v26 = *(_DWORD *)(addMsgLabel[7].fields.m_CachedPtr + 512);
    }
    if ( !v54 )
      goto LABEL_87;
    UILabel__set_fontSize(v54, v26, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  addMsgLabel = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0);
  if ( ((unsigned __int8)addMsgLabel & 1) != 0 )
  {
    v56 = this->fields.buttonCancelLabel;
    if ( !cancelTxt )
    {
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
      addMsgLabel = (UnityEngine_GameObject_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3688/*"COMMON_CONFIRM_NO"*/, 0);
      cancelTxt = (System_String_o *)addMsgLabel;
    }
    if ( v56 )
    {
      UILabel__set_text(v56, cancelTxt, 0);
      v57 = this->fields.buttonCancelLabel;
      v58 = cancelTxtSize;
      if ( !cancelTxtSize )
      {
        addMsgLabel = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          addMsgLabel = (UnityEngine_GameObject_o *)BalanceConfig_TypeInfo;
        }
        v58 = *(_DWORD *)(addMsgLabel[7].fields.m_CachedPtr + 512);
      }
      if ( v57 )
      {
        UILabel__set_fontSize(v57, v58, 0);
        if ( !isCancelTxtTwoLine )
          goto LABEL_78;
        addMsgLabel = (UnityEngine_GameObject_o *)this->fields.buttonCancelLabel;
        if ( addMsgLabel )
        {
          UILabel__set_maxLineCount((UILabel_o *)addMsgLabel, 2, 0);
          addMsgLabel = (UnityEngine_GameObject_o *)this->fields.buttonCancelLabel;
          if ( addMsgLabel )
          {
            UILabel__set_fontSize((UILabel_o *)addMsgLabel, 22, 0);
            goto LABEL_78;
          }
        }
      }
    }
LABEL_87:
    sub_1C372B4(addMsgLabel);
  }
LABEL_78:
  buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonDecide, 0, 0) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonDecide, buttonPosY, 0);
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(buttonCancel, 0, 0) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonCancel, buttonPosY, 0);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, v61);
  GameObjectExtensions__SetLocalPositionY(this->fields.baseWindow, windowPosY, 0);
  v62 = (System_Action_o *)sub_1C372A4(System_Action_TypeInfo);
  System_Action___ctor(v62, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v62, maskType, 0, v63);
}


bool CommonConfirmDialog___OnClickCancel_b__55_0(
        CommonConfirmDialog_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  struct UILabel_o *buttonCancelLabel; // x8

  buttonCancelLabel = this->fields.buttonCancelLabel;
  if ( !buttonCancelLabel || !x )
    sub_1C372B4(this);
  return System_String__Equals_63596960(x, buttonCancelLabel->fields.mText, 0);
}


UILabel_o *CommonConfirmDialog__get_ButtonCancelLabel(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonCancelLabel;
}


UILabel_o *CommonConfirmDialog__get_ButtonDecideLabel(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonDecideLabel;
}


void CommonConfirmDialog_ClickDelegate___ctor(
        CommonConfirmDialog_ClickDelegate_o *this,
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
  sub_1C36FFC((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C37118(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C372D0(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C37180(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7A908;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7A8C0;
}


System_IAsyncResult_o *CommonConfirmDialog_ClickDelegate__BeginInvoke(
        CommonConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isDecide;
  if ( (byte_4C41A3D & 1) == 0 )
  {
    sub_1C37058(&bool_TypeInfo);
    byte_4C41A3D = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C3700C(this, v12, callback, object);
}


void CommonConfirmDialog_ClickDelegate__EndInvoke(
        CommonConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C37010(result, 0, method);
}


void CommonConfirmDialog_ClickDelegate__Invoke(
        CommonConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isDecide,
    this->fields.method);
}