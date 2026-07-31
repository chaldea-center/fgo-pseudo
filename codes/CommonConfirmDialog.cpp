void CommonConfirmDialog___ctor(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0

  if ( (byte_5931D4F & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5931D4F = 1;
  }
  v4 = BaseDialog_TypeInfo;
  *(_OWORD *)&this->fields.DEFULT_MESSAGE_WIDGET_SIZE.fields.m_X = xmmword_E941E0;
  this->fields.DEFULT_TITLE_WIDGET_SIZE = (struct UnityEngine_Vector2Int_o)0x32000002BCLL;
  if ( !*(&v4->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, method);
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v25; // x2
  unsigned int monitor_high; // w27
  float v27; // s8
  float v28; // s0
  unsigned __int64 v29; // x27
  UnityEngine_Object_o *v30; // x28
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v32; // x1
  __int64 v33; // x2
  BalanceConfig_c *v34; // x0
  System_String_o *v35; // x1
  int32_t mWidth; // w19
  int32_t v37; // w3
  Il2CppObject *v38; // [xsp+0h] [xbp-80h] BYREF
  Il2CppObject *component; // [xsp+8h] [xbp-78h] BYREF

  if ( (byte_5931D44 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___);
    sub_21FFC50(&Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931D44 = 1;
  }
  v38 = 0;
  component = 0;
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNoTitle, message);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0, 0) )
    {
      baseWindow = this->fields.baseWindow;
      if ( !baseWindow )
        goto LABEL_38;
      messageLabel = this->fields.noTitleMessageLabel;
      if ( !UnityEngine_GameObject__TryGetComponent_object_(
              baseWindow,
              &component,
              (const MethodInfo_3884A68 *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
        goto LABEL_23;
      baseWindow = this->fields.buttonDecide;
      if ( !baseWindow )
        goto LABEL_38;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_GameObject__TryGetComponent_object_(
                                                 baseWindow,
                                                 &v38,
                                                 (const MethodInfo_3884A68 *)Method_UnityEngine_GameObject_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)baseWindow & 1) == 0 )
      {
LABEL_23:
        LODWORD(v29) = this->fields.DEFAULT_NO_TITLE_MESSAGE_WIDGET_SIZE.fields.m_Y;
        messagePosY = 38.0;
        goto LABEL_24;
      }
      if ( component && v38 )
      {
        monitor_high = HIDWORD(component[10].monitor);
        v27 = (float)((float)SHIDWORD(v38[10].monitor) * 0.5) + buttonPosY;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, isNoTitle, v25);
        v28 = fabsf(vcvts_n_f32_s32(monitor_high, 1u) + -30.0) + fabsf(v27);
        messagePosY = v27 + (float)(v28 * 0.5);
        if ( v28 == INFINITY )
          LODWORD(v29) = 0x80000000;
        else
          LODWORD(v29) = (int)v28;
LABEL_24:
        baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( !baseWindow )
          goto LABEL_38;
        goto LABEL_25;
      }
LABEL_38:
      sub_21FFECC(baseWindow, isNoTitle);
    }
  }
  messageLabel = this->fields.messageLabel;
  v30 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  v29 = HIDWORD(*(unsigned __int64 *)&messageWidgetSize);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNoTitle, message);
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v30, 0, 0);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.noTitleMessageLabel;
    if ( baseWindow )
    {
LABEL_25:
      UILabel__set_text((UILabel_o *)baseWindow, **(System_String_o ***)(qword_594C0B8 + 184), 0);
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
  UIWidget__set_height((UIWidget_o *)messageLabel, v29, 0);
  UILabel__set_spacingY(messageLabel, spacingY, 0);
  if ( !fontsize )
  {
    v34 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v32, v33);
      v34 = BalanceConfig_TypeInfo;
    }
    fontsize = v34->static_fields->DefaultFontSize;
  }
  UILabel__set_fontSize(messageLabel, fontsize, 0);
  UILabel__set_alignment(messageLabel, alignment, 0);
  if ( message )
  {
    v35 = System_String__Trim_75499764(message, 0xAu, 0);
    if ( setCondensedScale )
    {
LABEL_33:
      mWidth = messageLabel->fields.mWidth;
      UILabel__set_text(messageLabel, v35, 0);
      ((void (__fastcall *)(struct UILabel_o *, const MethodInfo *))messageLabel->klass->vtable._33_MakePixelPerfect.methodPtr)(
        messageLabel,
        messageLabel->klass->vtable._33_MakePixelPerfect.method);
      UILabel__SetCondensedScale(messageLabel, mWidth, 0, 0);
      return;
    }
  }
  else
  {
    v35 = **(System_String_o ***)(qword_594C0B8 + 184);
    if ( setCondensedScale )
      goto LABEL_33;
  }
  v37 = minFontSize;
  if ( minFontSize < 1 )
    v37 = 0;
  WrapControlText__textAdjust(messageLabel, v35, messageLabel->fields.mFontSize, v37, 0);
}


void CommonConfirmDialog__Close(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  CommonConfirmDialog__Close_37269428(this, 0, v2);
}


void CommonConfirmDialog__Close_37269428(
        CommonConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_Action_c *v5; // x0
  System_Action_o *v6; // x20
  const MethodInfo *v7; // x2

  if ( (byte_5931D47 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_CommonConfirmDialog_EndClose__);
    byte_5931D47 = 1;
  }
  this->fields.closeCallbackFunc = callback;
  sub_21FFBF4(&this->fields.closeCallbackFunc, callback);
  v5 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_21FFEBC(v5);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_CommonConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, v7);
}


void CommonConfirmDialog__EndClose(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v4; // x1
  struct System_Action_o **p_closeCallbackFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeCallbackFunc; // t1

  CommonConfirmDialog__Init(this, method);
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !gameObject )
    sub_21FFECC(0, v4);
  UnityEngine_GameObject__SetActive(gameObject, 0, 0);
  closeCallbackFunc = this->fields.closeCallbackFunc;
  p_closeCallbackFunc = &this->fields.closeCallbackFunc;
  v6 = closeCallbackFunc;
  if ( closeCallbackFunc )
  {
    *p_closeCallbackFunc = 0;
    sub_21FFBF4(p_closeCallbackFunc, 0);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void CommonConfirmDialog__EndOpen(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void CommonConfirmDialog__Init(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  __int64 v6; // x2
  UILabel_o *gameObject; // x0
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v9; // x2
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  __int64 v11; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v13; // x2
  UnityEngine_Object_o *buttonCancelLabel; // x20
  __int64 v15; // x2
  UnityEngine_Object_o *addMsgInfo; // x20
  const MethodInfo *v17; // x1

  if ( (byte_5931D42 & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5931D42 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    gameObject = this->fields.titleLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v6);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    gameObject = this->fields.messageLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v9);
  if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0, 0) )
  {
    gameObject = this->fields.noTitleMessageLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v11);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    gameObject = this->fields.buttonDecideLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v13);
  if ( UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0) )
  {
    gameObject = this->fields.buttonCancelLabel;
    if ( !gameObject )
      goto LABEL_35;
    UILabel__set_text(gameObject, (System_String_o *)StringLiteral_1/*""*/, 0);
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5, v15);
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
    sub_21FFECC(gameObject, v5);
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)gameObject, 0, 0);
  this->fields._ForceCancelSE_k__BackingField = 0;
  BaseDialog__Init((BaseDialog_o *)this, v17);
}


void CommonConfirmDialog__OnClickCancel(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *v4; // x24
  Il2CppObject *v5; // x23
  Il2CppObject *v6; // x22
  Il2CppObject *v7; // x21
  System_Collections_Generic_List_object__o *v8; // x20
  __int64 v9; // x0
  __int64 v10; // x1
  struct System_Object_array *items; // x8
  _QWORD *v12; // x9
  __int64 size; // x10
  Il2CppClass **v14; // x0
  struct System_Object_array *v15; // x8
  _QWORD *v16; // x9
  __int64 v17; // x10
  Il2CppClass **v18; // x0
  struct System_Object_array *v19; // x8
  _QWORD *v20; // x9
  __int64 v21; // x10
  Il2CppClass **v22; // x0
  struct System_Object_array *v23; // x8
  _QWORD *v24; // x9
  __int64 v25; // x10
  Il2CppClass **v26; // x0
  __int64 v27; // x1
  __int64 v28; // x2
  UnityEngine_Object_o *buttonDecide; // x21
  __int64 v30; // x1
  __int64 v31; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x21
  System_Func_object__bool__o *v33; // x21
  int32_t v34; // w20
  _QWORD *v35; // x0
  System_Reflection_MethodBase_o *v36; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_5931D4A & 1) == 0 )
  {
    sub_21FFC50(&Method_BasicHelper_Any_string___);
    sub_21FFC50(&Method_CommonConfirmDialog_OnClickCancel__);
    sub_21FFC50(&Method_CommonConfirmDialog__OnClickCancel_b__60_0__);
    sub_21FFC50(&System_Func_string__bool__TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_List_string__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_string___ctor__);
    sub_21FFC50(&System_Collections_Generic_List_string__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_3826/*"COMMON_CONFIRM_NO"*/);
    sub_21FFC50(&StringLiteral_10811/*"PLAY_OPENING_CONFIRM_CANCEL"*/);
    byte_5931D4A = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
    v4 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
    v5 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3822/*"COMMON_CONFIRM_CANCEL"*/, 0);
    v6 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_10811/*"PLAY_OPENING_CONFIRM_CANCEL"*/, 0);
    v7 = (Il2CppObject *)LocalizationManager__Get((System_String_o *)StringLiteral_3826/*"COMMON_CONFIRM_NO"*/, 0);
    v8 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_string__TypeInfo);
    System_Collections_Generic_List_object____ctor(
      v8,
      (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_string___ctor__);
    if ( !v8 )
      goto LABEL_38;
    items = v8->fields._items;
    v12 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !items )
      goto LABEL_38;
    size = v8->fields._size;
    if ( (unsigned int)size >= LODWORD(items->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v4,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v12[4] + 192LL) + 112LL));
    }
    else
    {
      v14 = &items->obj.klass + size;
      v8->fields._size = size + 1;
      v14[4] = (Il2CppClass *)v4;
      v9 = sub_21FFBF4(v14 + 4, v4);
    }
    v15 = v8->fields._items;
    v16 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v15 )
      goto LABEL_38;
    v17 = v8->fields._size;
    if ( (unsigned int)v17 >= LODWORD(v15->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v5,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v16[4] + 192LL) + 112LL));
    }
    else
    {
      v18 = &v15->obj.klass + v17;
      v8->fields._size = v17 + 1;
      v18[4] = (Il2CppClass *)v5;
      v9 = sub_21FFBF4(v18 + 4, v5);
    }
    v19 = v8->fields._items;
    v20 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v19 )
      goto LABEL_38;
    v21 = v8->fields._size;
    if ( (unsigned int)v21 >= LODWORD(v19->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v6,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v20[4] + 192LL) + 112LL));
    }
    else
    {
      v22 = &v19->obj.klass + v21;
      v8->fields._size = v21 + 1;
      v22[4] = (Il2CppClass *)v6;
      v9 = sub_21FFBF4(v22 + 4, v6);
    }
    v23 = v8->fields._items;
    v24 = Method_System_Collections_Generic_List_string__Add__;
    ++v8->fields._version;
    if ( !v23 )
LABEL_38:
      sub_21FFECC(v9, v10);
    v25 = v8->fields._size;
    if ( (unsigned int)v25 >= LODWORD(v23->max_length) )
    {
      System_Collections_Generic_List_object___AddWithResize(
        v8,
        v7,
        *(const MethodInfo_444FB2C **)(*(_QWORD *)(v24[4] + 192LL) + 112LL));
    }
    else
    {
      v26 = &v23->obj.klass + v25;
      v8->fields._size = v25 + 1;
      v26[4] = (Il2CppClass *)v7;
      sub_21FFBF4(v26 + 4, v7);
    }
    buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27, v28);
    if ( UnityEngine_Object__op_Inequality(buttonDecide, 0, 0) )
      goto LABEL_41;
    buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30, v31);
    if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
    {
LABEL_41:
      v33 = (System_Func_object__bool__o *)sub_21FFEBC(System_Func_string__bool__TypeInfo);
      System_Func_object__bool____ctor(
        v33,
        (Il2CppObject *)this,
        Method_CommonConfirmDialog__OnClickCancel_b__60_0__,
        0);
      if ( BasicHelper__Any_object_(
             (System_Collections_Generic_List_T__o *)v8,
             (System_Func_T__bool__o *)v33,
             (const MethodInfo_37DCA30 *)Method_BasicHelper_Any_string___) )
      {
        goto LABEL_31;
      }
    }
    if ( this->fields._ForceCancelSE_k__BackingField )
LABEL_31:
      v34 = 1;
    else
      v34 = 0;
    v35 = Method_CommonConfirmDialog_OnClickCancel__;
    if ( (*((_BYTE *)Method_CommonConfirmDialog_OnClickCancel__ + 83) & 2) != 0 )
      v35 = (_QWORD *)sub_21FFC68(Method_CommonConfirmDialog_OnClickCancel__);
    v36 = (System_Reflection_MethodBase_o *)sub_21FFC34(v35, v35[4]);
    OverwriteAssetSoundName__PlaySystemSe(v36, v34, 0, 0);
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

  if ( (byte_5931D4B & 1) == 0 )
  {
    sub_21FFC50(&Method_CommonConfirmDialog_OnClickClose__);
    byte_5931D4B = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_CommonConfirmDialog_OnClickClose__;
    if ( (*((_BYTE *)Method_CommonConfirmDialog_OnClickClose__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CommonConfirmDialog_OnClickClose__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  _QWORD *v3; // x0
  int32_t v4; // w20
  System_Reflection_MethodBase_o *v5; // x0
  struct CommonConfirmDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_5931D48 & 1) == 0 )
  {
    sub_21FFC50(&Method_CommonConfirmDialog_OnClickDecide__);
    byte_5931D48 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_CommonConfirmDialog_OnClickDecide__;
    v4 = 8 * this->fields.isDecideBtnSe;
    if ( (*((_BYTE *)Method_CommonConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CommonConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, v4, 0, 0);
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

  if ( (byte_5931D49 & 1) == 0 )
  {
    sub_21FFC50(&Method_CommonConfirmDialog_OnClickDecide2__);
    byte_5931D49 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_CommonConfirmDialog_OnClickDecide2__;
    if ( (*((_BYTE *)Method_CommonConfirmDialog_OnClickDecide2__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_CommonConfirmDialog_OnClickDecide2__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
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
  __int64 v2; // x2
  UnityEngine_Component_o *v3; // x19
  void *monitor; // x8
  System_String_o *v5; // x20
  System_String_o *v6; // x0
  __int64 v7; // x2
  void *v8; // x8
  System_String_o *v9; // x20
  System_String_o *v10; // x0
  UnityEngine_Transform_o *transform; // x0
  UnityEngine_Transform_o *v12; // x0

  v3 = (UnityEngine_Component_o *)this;
  if ( (byte_5931D4E & 1) == 0 )
  {
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&StringLiteral_2794/*"BATTLERESUME_CONFIRM_CANCEL"*/);
    sub_21FFC50(&StringLiteral_2795/*"BATTLERESUME_CONFIRM_DECIDE"*/);
    sub_21FFC50(&StringLiteral_4818/*"ConfirmWindow/CancelButton"*/);
    this = (CommonConfirmDialog_o *)sub_21FFC50(&StringLiteral_16227/*"Window/CancelButton"*/);
    byte_5931D4E = 1;
  }
  monitor = v3[5].monitor;
  if ( !monitor )
    goto LABEL_13;
  v5 = (System_String_o *)*((_QWORD *)monitor + 52);
  if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v2);
  v6 = LocalizationManager__Get((System_String_o *)StringLiteral_2795/*"BATTLERESUME_CONFIRM_DECIDE"*/, 0);
  this = (CommonConfirmDialog_o *)System_String__op_Equality(v5, v6, 0);
  if ( ((unsigned __int8)this & 1) == 0 )
  {
    v8 = v3[5].monitor;
    if ( v8 )
    {
      v9 = (System_String_o *)*((_QWORD *)v8 + 52);
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, method, v7);
      v10 = LocalizationManager__Get((System_String_o *)StringLiteral_2794/*"BATTLERESUME_CONFIRM_CANCEL"*/, 0);
      if ( !System_String__op_Equality(v9, v10, 0) )
      {
        transform = UnityEngine_Component__get_transform(v3, 0);
        AndroidBackKeyManager__AddBackBtn_51910300(transform, (System_String_o *)StringLiteral_16227/*"Window/CancelButton"*/, 0);
        v12 = UnityEngine_Component__get_transform(v3, 0);
        AndroidBackKeyManager__AddBackBtn_51910300(v12, (System_String_o *)StringLiteral_4818/*"ConfirmWindow/CancelButton"*/, 0);
      }
      return;
    }
LABEL_13:
    sub_21FFECC(this, method);
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


void CommonConfirmDialog__OpenDecideDlg_37268292(
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


void CommonConfirmDialog__OpenDecideDlg_37268420(
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
  struct UnityEngine_Vector2Int_o messageWidgetSize; // x20
  System_Nullable_float__o v23; // x0
  __int64 v24; // x1
  UILabel_o *titleLabel; // x0
  int32_t mWidth; // w20
  const MethodInfo *v27; // [xsp+70h] [xbp-A0h]
  System_Nullable_float__o v30; // [xsp+98h] [xbp-78h] BYREF

  if ( (byte_5931D46 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_float___ctor__);
    byte_5931D46 = 1;
  }
  messageWidgetSize = this->fields.DEFULT_MESSAGE_WIDGET_SIZE;
  v23 = (System_Nullable_float__o)&v30;
  v30 = 0;
  System_Nullable_float____ctor(v23, titlePosY, (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
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
    v30,
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
    v27);
  titleLabel = this->fields.titleLabel;
  if ( !titleLabel
    || (mWidth = titleLabel->fields.mWidth,
        ((void (__fastcall *)(UILabel_o *, const MethodInfo *))titleLabel->klass->vtable._33_MakePixelPerfect.methodPtr)(
          titleLabel,
          titleLabel->klass->vtable._33_MakePixelPerfect.method),
        (titleLabel = this->fields.titleLabel) == 0) )
  {
    sub_21FFECC(titleLabel, v24);
  }
  UILabel__SetCondensedScale(titleLabel, mWidth, 0, 0);
}


void CommonConfirmDialog__Open_37267360(
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


void CommonConfirmDialog__Open_37267496(
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


void CommonConfirmDialog__Open_37267608(
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


void CommonConfirmDialog__Open_37267732(
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
  struct UnityEngine_Vector2Int_o messageWidgetSize; // x19
  System_Nullable_float__o v23; // x0
  const MethodInfo *v24; // [xsp+70h] [xbp-A0h]
  System_Nullable_float__o v27; // [xsp+98h] [xbp-78h] BYREF

  if ( (byte_5931D45 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_float___ctor__);
    byte_5931D45 = 1;
  }
  messageWidgetSize = this->fields.DEFULT_MESSAGE_WIDGET_SIZE;
  v23 = (System_Nullable_float__o)&v27;
  v27 = 0;
  System_Nullable_float____ctor(v23, titlePosY, (const MethodInfo_45B27E0 *)Method_System_Nullable_float___ctor__);
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


void CommonConfirmDialog__Open_37268028(
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


void CommonConfirmDialog__Open_37268692(
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


// local variable allocation has failed, the output may be wrong!
void CommonConfirmDialog__Open_37268808(
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
                             | (*(_QWORD *)&messageLabelHeight << 32)),
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


void CommonConfirmDialog__Open_37268940(
        CommonConfirmDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        System_String_o *decideTxt,
        System_String_o *cancelTxt,
        bool isDecideSe,
        CommonConfirmDialog_ClickDelegate_o *func,
        int32_t fontSize,
        float messagePosY,
        bool canMaskTouchClose,
        int32_t decideTxtSize,
        int32_t cancelTxtSize,
        const MethodInfo *method)
{
  const MethodInfo *v13; // [xsp+70h] [xbp-20h]

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
    messagePosY,
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
    v13);
}


void CommonConfirmDialog__ResetDecideButtonLabelMaxLineCount(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x20
  __int64 v5; // x1
  UILabel_o *v6; // x0

  if ( (byte_5931D4D & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931D4D = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v6 = this->fields.buttonDecideLabel;
    if ( !v6 )
      sub_21FFECC(0, v5);
    UILabel__set_maxLineCount(v6, 1, 0);
  }
}


// local variable allocation has failed, the output may be wrong!
void CommonConfirmDialog__SetDecideButtonLabelMaxLineCount(
        CommonConfirmDialog_o *this,
        int32_t maxLine,
        const MethodInfo *method)
{
  UnityEngine_Object_o *buttonDecideLabel; // x21
  __int64 v6; // x1
  UILabel_o *v7; // x0

  if ( (byte_5931D4C & 1) == 0 )
  {
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931D4C = 1;
  }
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, *(_QWORD *)&maxLine, method);
  if ( UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0) )
  {
    v7 = this->fields.buttonDecideLabel;
    if ( !v7 )
      sub_21FFECC(0, v6);
    UILabel__set_maxLineCount(v7, maxLine, 0);
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
  int32_t v31; // w24
  System_String_o *v32; // x26
  int32_t v34; // w27
  UnityEngine_Object_o *addMsgInfo; // x19
  bool v36; // w0
  unsigned __int64 v37; // x1
  __int64 addMsgLabel; // x0
  __int64 v39; // x1
  __int64 v40; // x2
  UnityEngine_Object_o *v41; // x19
  bool activeSelf; // w28
  __int64 v43; // x1
  __int64 v44; // x2
  bool IsNullOrEmpty; // w29
  UnityEngine_Object_o *titleLabel; // x19
  bool v47; // w28
  bool v48; // w29
  UnityEngine_GameObject_o *gameObject; // x0
  float value; // s0
  __int64 v51; // x2
  UILabel_o *v52; // x28
  UnityEngine_Transform_o *v53; // x26
  __int64 v54; // x1
  __int64 v55; // x2
  Il2CppObject *Component_object; // x26
  __int64 v57; // x2
  UnityEngine_Object_o *messageLabel; // x19
  __int64 v59; // x1
  __int64 v60; // x2
  UnityEngine_Object_o *buttonDecideLabel; // x19
  __int64 v63; // x2
  UILabel_o *v64; // x19
  __int64 v65; // x2
  UILabel_o *v66; // x19
  UnityEngine_Object_o *buttonCancelLabel; // x19
  __int64 v68; // x2
  UILabel_o *v69; // x19
  __int64 v70; // x2
  UILabel_o *v71; // x19
  UnityEngine_Object_o *buttonDecide; // x19
  __int64 v73; // x1
  __int64 v74; // x2
  UnityEngine_Object_o *buttonCancel; // x19
  const MethodInfo *v76; // x2
  System_Action_c *v77; // x0
  System_Action_o *v78; // x19
  const MethodInfo *v79; // x4
  const MethodInfo *v80; // [xsp+8h] [xbp-D8h]

  v31 = decideTxtSize;
  v32 = title;
  v34 = titleFontSize;
  if ( (byte_5931D43 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_CommonConfirmDialog_EndOpen__);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_float__get_HasValue__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3826/*"COMMON_CONFIRM_NO"*/);
    sub_21FFC50(&StringLiteral_3831/*"COMMON_CONFIRM_YES"*/);
    byte_5931D43 = 1;
  }
  addMsgInfo = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, title, message);
  v36 = UnityEngine_Object__op_Inequality(addMsgInfo, 0, 0);
  if ( addMsg && v36 )
  {
    addMsgLabel = (__int64)this->fields.addMsgInfo;
    if ( !addMsgLabel )
      goto LABEL_87;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)addMsgLabel, 1, 0);
    addMsgLabel = (__int64)this->fields.addMsgLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)addMsgLabel, addMsg, 0);
  }
  this->fields.clickFunc = func;
  sub_21FFBF4(&this->fields.clickFunc, func);
  v41 = (UnityEngine_Object_o *)this->fields.addMsgInfo;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v39, v40);
  if ( UnityEngine_Object__op_Inequality(v41, 0, 0) )
  {
    addMsgLabel = (__int64)this->fields.addMsgInfo;
    if ( !addMsgLabel )
      goto LABEL_87;
    activeSelf = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)addMsgLabel, 0);
  }
  else
  {
    activeSelf = 0;
  }
  IsNullOrEmpty = System_String__IsNullOrEmpty(v32, 0);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  v47 = !activeSelf;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43, v44);
  v48 = IsNullOrEmpty && v47;
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    addMsgLabel = (__int64)this->fields.titleLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)addMsgLabel, 0);
    value = titlePosY.fields.value;
    if ( !titlePosY.fields.hasValue )
      value = 180.0;
    GameObjectExtensions__SetLocalPositionY(gameObject, value, 0);
    v52 = this->fields.titleLabel;
    if ( !titleFontSize )
    {
      addMsgLabel = (__int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v37, v51);
        addMsgLabel = (__int64)BalanceConfig_TypeInfo;
      }
      v34 = *(_DWORD *)(*(_QWORD *)(addMsgLabel + 184) + 508LL);
    }
    if ( !v52 )
      goto LABEL_87;
    UILabel__set_fontSize(v52, v34, 0);
    addMsgLabel = (__int64)this->fields.titleLabel;
    if ( v48 )
      v32 = **(System_String_o ***)(qword_594C0B8 + 184);
    if ( !addMsgLabel )
      goto LABEL_87;
    UILabel__set_text((UILabel_o *)addMsgLabel, v32, 0);
    addMsgLabel = (__int64)this->fields.titleLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    UIWidget__set_width((UIWidget_o *)addMsgLabel, this->fields.DEFULT_TITLE_WIDGET_SIZE.fields.m_X, 0);
    addMsgLabel = (__int64)this->fields.titleLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    UIWidget__set_height((UIWidget_o *)addMsgLabel, this->fields.DEFULT_TITLE_WIDGET_SIZE.fields.m_Y, 0);
    addMsgLabel = (__int64)this->fields.titleLabel;
    if ( !addMsgLabel )
      goto LABEL_87;
    addMsgLabel = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)addMsgLabel, 0);
    v53 = (UnityEngine_Transform_o *)addMsgLabel;
    if ( !byte_5931945 )
    {
      addMsgLabel = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931945 = 1;
    }
    if ( !v53 )
      goto LABEL_87;
    UnityEngine_Transform__set_localScale(v53, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
  }
  addMsgLabel = (__int64)this->fields.baseWindow;
  if ( !addMsgLabel )
    goto LABEL_87;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)addMsgLabel,
                       (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISkinSprite___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v54, v55);
  addMsgLabel = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( (addMsgLabel & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_87;
    UIWidget__set_height((UIWidget_o *)Component_object, windowHeight, 0);
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v57);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    CommonConfirmDialog__AdjustMessageLabel(
      this,
      v48,
      message,
      messagePosY,
      spacingY,
      messageWidgetSize,
      fontsize,
      alignment,
      setCondensedScale,
      minFontSize,
      buttonPosY,
      v80);
  buttonDecideLabel = (UnityEngine_Object_o *)this->fields.buttonDecideLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59, v60);
  addMsgLabel = UnityEngine_Object__op_Inequality(buttonDecideLabel, 0, 0);
  if ( (addMsgLabel & 1) != 0 )
  {
    v64 = this->fields.buttonDecideLabel;
    if ( !decideTxt )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v37, v63);
      addMsgLabel = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3831/*"COMMON_CONFIRM_YES"*/, 0);
      decideTxt = (System_String_o *)addMsgLabel;
    }
    if ( !v64 )
      goto LABEL_87;
    UILabel__set_text(v64, decideTxt, 0);
    v66 = this->fields.buttonDecideLabel;
    if ( !decideTxtSize )
    {
      addMsgLabel = (__int64)BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v37, v65);
        addMsgLabel = (__int64)BalanceConfig_TypeInfo;
      }
      v31 = *(_DWORD *)(*(_QWORD *)(addMsgLabel + 184) + 508LL);
    }
    if ( !v66 )
      goto LABEL_87;
    UILabel__set_fontSize(v66, v31, 0);
  }
  buttonCancelLabel = (UnityEngine_Object_o *)this->fields.buttonCancelLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v63);
  addMsgLabel = UnityEngine_Object__op_Inequality(buttonCancelLabel, 0, 0);
  if ( (addMsgLabel & 1) != 0 )
  {
    v69 = this->fields.buttonCancelLabel;
    v37 = (unsigned __int64)cancelTxt;
    if ( !cancelTxt )
    {
      if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, 0, v68);
      addMsgLabel = (__int64)LocalizationManager__Get((System_String_o *)StringLiteral_3826/*"COMMON_CONFIRM_NO"*/, 0);
      v37 = addMsgLabel;
    }
    if ( v69 )
    {
      UILabel__set_text(v69, (System_String_o *)v37, 0);
      v71 = this->fields.buttonCancelLabel;
      v37 = (unsigned int)cancelTxtSize;
      if ( !cancelTxtSize )
      {
        addMsgLabel = (__int64)BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, (unsigned int)cancelTxtSize, v70);
          addMsgLabel = (__int64)BalanceConfig_TypeInfo;
        }
        v37 = *(unsigned int *)(*(_QWORD *)(addMsgLabel + 184) + 508LL);
      }
      if ( v71 )
      {
        UILabel__set_fontSize(v71, v37, 0);
        if ( !isCancelTxtTwoLine )
          goto LABEL_78;
        addMsgLabel = (__int64)this->fields.buttonCancelLabel;
        if ( addMsgLabel )
        {
          UILabel__set_maxLineCount((UILabel_o *)addMsgLabel, 2, 0);
          addMsgLabel = (__int64)this->fields.buttonCancelLabel;
          if ( addMsgLabel )
          {
            UILabel__set_fontSize((UILabel_o *)addMsgLabel, 22, 0);
            goto LABEL_78;
          }
        }
      }
    }
LABEL_87:
    sub_21FFECC(addMsgLabel, v37);
  }
LABEL_78:
  buttonDecide = (UnityEngine_Object_o *)this->fields.buttonDecide;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v37, v68);
  if ( UnityEngine_Object__op_Inequality(buttonDecide, 0, 0) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonDecide, buttonPosY, 0);
  buttonCancel = (UnityEngine_Object_o *)this->fields.buttonCancel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v73, v74);
  if ( UnityEngine_Object__op_Inequality(buttonCancel, 0, 0) )
    GameObjectExtensions__SetLocalPositionY(this->fields.buttonCancel, buttonPosY, 0);
  this->fields.isButtonEnable = 0;
  this->fields.isDecideBtnSe = isDecideSe;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, v76);
  GameObjectExtensions__SetLocalPositionY(this->fields.baseWindow, windowPosY, 0);
  v77 = System_Action_TypeInfo;
  this->fields._ForceCancelSE_k__BackingField = 0;
  v78 = (System_Action_o *)sub_21FFEBC(v77);
  System_Action___ctor(v78, (Il2CppObject *)this, Method_CommonConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v78, maskType, 0, v79);
}


bool CommonConfirmDialog___OnClickCancel_b__60_0(
        CommonConfirmDialog_o *this,
        System_String_o *x,
        const MethodInfo *method)
{
  struct UILabel_o *buttonCancelLabel; // x8

  buttonCancelLabel = this->fields.buttonCancelLabel;
  if ( !buttonCancelLabel || !x )
    sub_21FFECC(this, x);
  return System_String__Equals_75473208(x, buttonCancelLabel->fields.mText, 0);
}


UILabel_o *CommonConfirmDialog__get_ButtonCancelLabel(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonCancelLabel;
}


UILabel_o *CommonConfirmDialog__get_ButtonDecideLabel(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields.buttonDecideLabel;
}


bool CommonConfirmDialog__get_ForceCancelSE(CommonConfirmDialog_o *this, const MethodInfo *method)
{
  return this->fields._ForceCancelSE_k__BackingField;
}


void CommonConfirmDialog__set_ForceCancelSE(CommonConfirmDialog_o *this, bool value, const MethodInfo *method)
{
  this->fields._ForceCancelSE_k__BackingField = value;
}


void CommonConfirmDialog_ClickDelegate___ctor(
        CommonConfirmDialog_ClickDelegate_o *this,
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
  sub_21FFBF4(
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
  if ( (sub_21FFD28(method) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_21FFEE8(0, "Delegate to an instance method cannot have null 'this'.");
      sub_21FFD90(v14, 0);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    m_target = this->fields.m_target;
    this->fields.invoke_impl = this->fields.method_ptr;
    this->fields.method_code = (intptr_t)m_target;
    goto LABEL_6;
  }
  this->fields.invoke_impl = (intptr_t)sub_1FF8818;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FF87D0;
}


System_IAsyncResult_o *CommonConfirmDialog_ClickDelegate__BeginInvoke(
        CommonConfirmDialog_ClickDelegate_o *this,
        bool isDecide,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isDecide;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void CommonConfirmDialog_ClickDelegate__EndInvoke(
        CommonConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
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