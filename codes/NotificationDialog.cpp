void __fastcall NotificationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct NotificationDialog_StaticFields *static_fields; // x8
  NotificationDialog_c *v3; // x8
  struct NotificationDialog_StaticFields *v4; // x9
  struct NotificationDialog_StaticFields *v5; // x9
  struct NotificationDialog_StaticFields *v6; // x9
  struct NotificationDialog_StaticFields *v7; // x9
  struct NotificationDialog_StaticFields *v8; // x9
  struct NotificationDialog_StaticFields *v9; // x9

  if ( (byte_49FFEC6 & 1) == 0 )
  {
    sub_1B640C8(&NotificationDialog_TypeInfo, v1);
    byte_49FFEC6 = 1;
  }
  static_fields = NotificationDialog_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x4334000000000000LL;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  v3 = NotificationDialog_TypeInfo;
  v4 = NotificationDialog_TypeInfo->static_fields;
  *(_QWORD *)&v4->MESSAGE_BASE_POS.fields.x = 0x416B333300000000LL;
  v4->MESSAGE_BASE_POS.fields.z = 0.0;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->NO_TITLE_MESSAGE_BASE_POS.fields.x = 0x4218000000000000LL;
  v5->NO_TITLE_MESSAGE_BASE_POS.fields.z = 0.0;
  v6 = v3->static_fields;
  *(_QWORD *)&v6->MESSAGE_LINE_POS.fields.x = 0x40A0000000000000LL;
  v6->MESSAGE_LINE_POS.fields.z = 0.0;
  v7 = v3->static_fields;
  *(_OWORD *)&v7->MESSAGE_BASE_SIZE_X = xmmword_BA2B00;
  *(_QWORD *)&v7->IMAGE_BASE_POS.fields.y = 0LL;
  v7->IMAGE_BASE_POS.fields.x = 0.0;
  v8 = v3->static_fields;
  *(_QWORD *)&v8->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v8->BUTTON_BASE_POS.fields.z = 0.0;
  v9 = v3->static_fields;
  *(_QWORD *)&v9->BUTTON_TEXT_POS.fields.x = 0xBF80000000000000LL;
  v9->BUTTON_TEXT_POS.fields.z = 0.0;
  *(_QWORD *)&v3->static_fields->BUTTON_BASE_SIZE_X = 0x38000000DALL;
}


void __fastcall NotificationDialog___ctor(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FFEC5 & 1) == 0 )
  {
    sub_1B640C8(&BaseDialog_TypeInfo, method);
    byte_49FFEC5 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 30;
  this->fields.isInitPanelDepth = 1;
  this->fields.onClickOkSeKind = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog__AdjustMessageLabel(
        NotificationDialog_o *this,
        bool isNoTitle,
        System_String_o *message,
        int32_t spacingY,
        int32_t messageSizeY,
        int32_t maxLine,
        int32_t messageFontSize,
        bool adjustText,
        UnityEngine_Vector3_o messagePos,
        float buttonPosY,
        float messagePosYForcedAdd,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s11
  float x; // s9
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  UnityEngine_Object_o *noTitleMessageLabel; // x23
  UnityEngine_GameObject_o *baseWindow; // x0
  struct UILabel_o *messageLabel; // x23
  int monitor_high; // w26
  float v34; // s11
  float v35; // s0
  UnityEngine_Object_o *v36; // x27
  NotificationDialog_c *v37; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  System_String_o *Empty; // x25
  NotificationDialog_c *v40; // x0
  float v41; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v43; // [xsp+8h] [xbp-98h] BYREF
  Il2CppObject *component; // [xsp+48h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_49FFEBC & 1) == 0 )
  {
    sub_1B640C8(&Method_UnityEngine_Component_TryGetComponent_UISprite___, isNoTitle);
    sub_1B640C8(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___, v25);
    sub_1B640C8(&System_Math_TypeInfo, v26);
    sub_1B640C8(&NotificationDialog_TypeInfo, v27);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v28);
    sub_1B640C8(&string_TypeInfo, v29);
    byte_49FFEBC = 1;
  }
  component = 0LL;
  v43 = 0LL;
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      baseWindow = this->fields.baseWindow;
      if ( !baseWindow )
        goto LABEL_44;
      messageLabel = this->fields.noTitleMessageLabel;
      if ( !UnityEngine_GameObject__TryGetComponent_object_(
              baseWindow,
              &component,
              (const MethodInfo_2E89168 *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
        goto LABEL_25;
      baseWindow = (UnityEngine_GameObject_o *)this->fields.okBtnLabel;
      if ( !baseWindow )
        goto LABEL_44;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)baseWindow,
                                                 0LL);
      if ( !baseWindow )
        goto LABEL_44;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                 (UnityEngine_Transform_o *)baseWindow,
                                                 0LL);
      if ( !baseWindow )
        goto LABEL_44;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                 (UnityEngine_Component_o *)baseWindow,
                                                 &v43,
                                                 (const MethodInfo_2E30D54 *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)baseWindow & 1) != 0 )
      {
        if ( !component || !v43 )
          goto LABEL_44;
        monitor_high = HIDWORD(component[10].monitor);
        v34 = (float)((float)SHIDWORD(v43[10].monitor) * 0.5) + buttonPosY;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v35 = fabsf((float)((float)monitor_high * 0.5) + -30.0) + fabsf(v34);
        y = v34 + (float)(v35 * 0.5);
        if ( v35 == INFINITY )
          messageSizeY = 0x80000000;
        else
          messageSizeY = (int)v35;
      }
      else
      {
LABEL_25:
        v37 = NotificationDialog_TypeInfo;
        if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
          v37 = NotificationDialog_TypeInfo;
        }
        static_fields = v37->static_fields;
        y = static_fields->NO_TITLE_MESSAGE_BASE_POS.fields.y;
        messageSizeY = static_fields->NO_TITLE_MESSAGE_BASE_SIZE_Y;
      }
      baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_44;
      goto LABEL_29;
    }
  }
  messageLabel = this->fields.messageLabel;
  v36 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v36, 0LL, 0LL);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.noTitleMessageLabel;
    if ( !baseWindow )
      goto LABEL_44;
LABEL_29:
    UILabel__set_text((UILabel_o *)baseWindow, string_TypeInfo->static_fields->Empty, 0LL);
  }
  if ( message )
  {
    baseWindow = (UnityEngine_GameObject_o *)System_String__Trim_61404748(message, 0xAu, 0LL);
    Empty = (System_String_o *)baseWindow;
    if ( messageLabel )
      goto LABEL_32;
LABEL_44:
    sub_1B64324(baseWindow);
  }
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !messageLabel )
    goto LABEL_44;
LABEL_32:
  UILabel__set_spacingY(messageLabel, spacingY, 0LL);
  v40 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v40 = NotificationDialog_TypeInfo;
  }
  UIWidget__SetDimensions((UIWidget_o *)messageLabel, v40->static_fields->MESSAGE_BASE_SIZE_X, messageSizeY, 0LL);
  UILabel__set_maxLineCount(messageLabel, maxLine, 0LL);
  if ( !messageFontSize )
    messageFontSize = this->fields.MESSAGE_FONT_SIZE;
  UILabel__set_fontSize(messageLabel, messageFontSize, 0LL);
  if ( adjustText )
    WrapControlText__textAdjust(messageLabel, Empty, messageLabel->fields.mFontSize, 0, 0, 0LL);
  else
    UILabel__set_text(messageLabel, Empty, 0LL);
  if ( messagePosYForcedAdd == 0.0 )
    v41 = y;
  else
    v41 = y + messagePosYForcedAdd;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
  v45.fields.x = x;
  v45.fields.y = v41;
  v45.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v45, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog__AdjustScriptMessageLabel(
        NotificationDialog_o *this,
        bool isNoTitle,
        System_String_o *message,
        int32_t messageSizeY,
        int32_t maxLine,
        UnityEngine_Vector3_o messagePos,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s10
  float x; // s9
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  UILabel_o *messageLabel; // x0
  struct UILabel_o *v22; // x24
  struct UIWidget_OnDimensionsChanged_o *onChange; // x10
  System_String_o *Empty; // x1
  UnityEngine_Object_o *v25; // x25
  System_String_o *v26; // x23
  NotificationDialog_o *gameObject; // x20
  const MethodInfo *v28; // x3
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_49FFEBD & 1) == 0 )
  {
    sub_1B640C8(&NotificationDialog_TypeInfo, isNoTitle);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v17);
    sub_1B640C8(&string_TypeInfo, v18);
    sub_1B640C8(&StringLiteral_21324/*"messageOffset"*/, v19);
    byte_49FFEBD = 1;
  }
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
      v22 = this->fields.noTitleMessageLabel;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
      }
      if ( !this->fields.messageLabel )
LABEL_24:
        sub_1B64324(messageLabel);
      onChange = messageLabel->fields.onChange;
      messageLabel = this->fields.messageLabel;
      messageSizeY = HIDWORD(onChange->fields.method_info);
      y = *(float *)&onChange->fields.method;
      Empty = string_TypeInfo->static_fields->Empty;
      goto LABEL_16;
    }
  }
  v22 = this->fields.messageLabel;
  v25 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
  {
    messageLabel = this->fields.noTitleMessageLabel;
    if ( !messageLabel )
      goto LABEL_24;
    Empty = string_TypeInfo->static_fields->Empty;
LABEL_16:
    UILabel__set_text(messageLabel, Empty, 0LL);
  }
  if ( message )
    v26 = System_String__Trim_61404748(message, 0xAu, 0LL);
  else
    v26 = string_TypeInfo->static_fields->Empty;
  messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
  if ( !v22 )
    goto LABEL_24;
  UIWidget__SetDimensions(
    (UIWidget_o *)v22,
    NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
    messageSizeY,
    0LL);
  UILabel__set_maxLineCount(v22, maxLine, 0LL);
  UILabel__set_fontSize(v22, this->fields.MESSAGE_FONT_SIZE, 0LL);
  WrapControlText__textAdjust(v22, v26, v22->fields.mFontSize, 0, 0, 0LL);
  gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v22, 0LL);
  VectFromScript = NotificationDialog__getVectFromScript(
                     gameObject,
                     script,
                     (System_String_o *)StringLiteral_21324/*"messageOffset"*/,
                     v28);
  VectFromScript.fields.x = x + VectFromScript.fields.x;
  VectFromScript.fields.z = z + VectFromScript.fields.z;
  VectFromScript.fields.y = y + VectFromScript.fields.y;
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)gameObject, VectFromScript, 0LL);
}


void __fastcall NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_44966400(this, 0LL, v2);
}


void __fastcall NotificationDialog__Close_44966400(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x2
  System_Action_o *v9; // x20

  if ( (byte_49FFEC1 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, callback);
    sub_1B640C8(&Method_NotificationDialog_EndClose__, v6);
    byte_49FFEC1 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v9 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v7, v8);
  System_Action___ctor(v9, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v9, 0LL);
}


void __fastcall NotificationDialog__EndClose(NotificationDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  int32_t v4; // w3
  ServantStatusBattleListViewItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  NotificationDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1B6406C(p_closeEndFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall NotificationDialog__EndOpen(NotificationDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall NotificationDialog__Init(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *titleLabel; // x0
  UnityEngine_Object_o *v15; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  UnityEngine_Object_o *lnkTexture; // x20
  __int64 v23; // x1
  __int64 v24; // x2
  struct LinkableTexture_o *v25; // x8
  UnityEngine_Object_o *v26; // x20
  struct LinkableTexture_o *v27; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  int32_t v29; // w21
  __int64 v30; // x2
  UnityEngine_Object_o *gameObject; // x22
  int v32; // w8
  System_Collections_Generic_List_object__o *v33; // x21
  int32_t v34; // w2
  int32_t v35; // w3
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  int32_t v37; // w21
  int32_t v38; // w2
  UnityEngine_Object_o *v39; // x22
  UnityEngine_Object_o *v40; // x0
  int v41; // w8
  System_Collections_Generic_List_object__o *v42; // x21
  int32_t v43; // w2
  int32_t v44; // w3

  if ( (byte_49FFEB8 & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, method);
    sub_1B640C8(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, v3);
    sub_1B640C8(&Method_System_Collections_Generic_List_LinkableSprite___ctor__, v4);
    sub_1B640C8(&Method_System_Collections_Generic_List_LinkableTexture___ctor__, v5);
    sub_1B640C8(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v8);
    sub_1B640C8(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v9);
    sub_1B640C8(&System_Collections_Generic_List_LinkableSprite__TypeInfo, v10);
    sub_1B640C8(&System_Collections_Generic_List_LinkableTexture__TypeInfo, v11);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v12);
    sub_1B640C8(&StringLiteral_1/*""*/, v13);
    byte_49FFEB8 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    titleLabel = this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_65;
    UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    titleLabel = this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_65;
    UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v15 = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v15, 0LL, 0LL) )
    {
      titleLabel = this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_65;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    {
      titleLabel = this->fields.messageLabel;
      if ( !titleLabel )
        goto LABEL_65;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      titleLabel = this->fields.noTitleMessageLabel;
      if ( !titleLabel )
        goto LABEL_65;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
    {
      titleLabel = this->fields.okBtnLabel;
      if ( !titleLabel )
        goto LABEL_65;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    mBannerWWW = this->fields.mBannerWWW;
    if ( mBannerWWW )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0LL);
      this->fields.mBannerWWW = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mBannerWWW, 0, v20, v21);
    }
    lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    titleLabel = (void *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
    if ( ((unsigned __int8)titleLabel & 1) != 0 )
    {
      v25 = this->fields.lnkTexture;
      if ( !v25 )
        goto LABEL_65;
      titleLabel = v25->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_65;
      v26 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                      titleLabel,
                                      *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69127736(v26, 0LL);
      v27 = this->fields.lnkTexture;
      if ( !v27 )
        goto LABEL_65;
      titleLabel = v27->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_65;
      (*(void (__fastcall **)(void *, _QWORD, _QWORD))(*(_QWORD *)titleLabel + 744LL))(
        titleLabel,
        0LL,
        *(_QWORD *)(*(_QWORD *)titleLabel + 752LL));
    }
    p_additionalSprites = &this->fields.additionalSprites;
    titleLabel = this->fields.additionalSprites;
    if ( titleLabel )
    {
      v29 = 0;
      while ( 1 )
      {
        v30 = *((unsigned int *)titleLabel + 6);
        if ( v29 >= (int)v30 )
          break;
        titleLabel = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)titleLabel,
                       v29,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
        if ( titleLabel )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)titleLabel,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69127736(gameObject, 0LL);
          titleLabel = *p_additionalSprites;
          ++v29;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_65;
      }
      v32 = *((_DWORD *)titleLabel + 7) + 1;
      *((_DWORD *)titleLabel + 6) = 0;
      *((_DWORD *)titleLabel + 7) = v32;
      if ( (int)v30 >= 1 )
        System_Array__Clear(*((System_Array_o **)titleLabel + 2), 0, v30, 0LL);
    }
    else
    {
      v33 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_LinkableSprite__TypeInfo,
                                                           v23,
                                                           v24);
      System_Collections_Generic_List_object____ctor(
        v33,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v33;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.additionalSprites, (int32_t)v33, v34, v35);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    titleLabel = this->fields.additionalTextures;
    if ( titleLabel )
    {
      v37 = 0;
      while ( 1 )
      {
        v38 = *((_DWORD *)titleLabel + 6);
        if ( v37 >= v38 )
          break;
        titleLabel = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)titleLabel,
                       v37,
                       (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
        if ( titleLabel )
        {
          titleLabel = (void *)*((_QWORD *)titleLabel + 6);
          if ( titleLabel )
          {
            v39 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                            titleLabel,
                                            *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_69127736(v39, 0LL);
            titleLabel = *p_additionalTextures;
            if ( *p_additionalTextures )
            {
              titleLabel = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)titleLabel,
                             v37,
                             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
              if ( titleLabel )
              {
                v40 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0LL);
                UnityEngine_Object__Destroy_69127736(v40, 0LL);
                titleLabel = *p_additionalTextures;
                ++v37;
                if ( *p_additionalTextures )
                  continue;
              }
            }
          }
        }
        goto LABEL_65;
      }
      v41 = *((_DWORD *)titleLabel + 7) + 1;
      *((_DWORD *)titleLabel + 6) = 0;
      *((_DWORD *)titleLabel + 7) = v41;
      if ( v38 >= 1 )
        System_Array__Clear(*((System_Array_o **)titleLabel + 2), 0, v38, 0LL);
    }
    else
    {
      v42 = (System_Collections_Generic_List_object__o *)sub_1B64314(
                                                           System_Collections_Generic_List_LinkableTexture__TypeInfo,
                                                           v23,
                                                           v30);
      System_Collections_Generic_List_object____ctor(
        v42,
        (const MethodInfo_34ACEA0 *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v42;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.additionalTextures, (int32_t)v42, v43, v44);
    }
    titleLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      BaseDialog__Init((BaseDialog_o *)this, 0LL);
      return;
    }
LABEL_65:
    sub_1B64324(titleLabel);
  }
}


void __fastcall NotificationDialog__LoadBanners(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *started; // x1

  this->fields.mAfterLoad = callback;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.mAfterLoad, (int32_t)callback, (int32_t)method, v3);
  this->fields.mLoadingIdx = 0;
  started = NotificationDialog__StartDownloadBanner(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
}


void __fastcall NotificationDialog__LoadNext(NotificationDialog_o *this, const MethodInfo *method)
{
  struct System_Object_array *banners; // x9
  int32_t v3; // w8
  System_Collections_IEnumerator_o *started; // x1

  banners = this->fields.banners;
  v3 = this->fields.mLoadingIdx + 1;
  this->fields.mLoadingIdx = v3;
  if ( !banners )
    sub_1B64324(this);
  if ( v3 >= (signed int)banners->max_length )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0LL);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
}


void __fastcall NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct NotificationDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_49FFEC2 & 1) == 0 )
  {
    sub_1B640C8(&Method_NotificationDialog_OnClickOk__, method);
    byte_49FFEC2 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NotificationDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_NotificationDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B640E0(Method_NotificationDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B640AC(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


void __fastcall NotificationDialog__Open(
        NotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        NotificationDialog_ClickDelegate_o *func,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t titleSize,
        bool isLineDraw,
        bool canMaskTouchClose,
        int32_t messageFontSize,
        int32_t onClickOkSeKind,
        System_Nullable_float__o titlePosY,
        System_Nullable_float__o messagePosY,
        int32_t spacingY,
        System_Nullable_int__o messageWidgetSizeY,
        bool adjustText,
        System_Nullable_int__o buttonWidgetSizeX,
        System_Nullable_int__o buttonWidgetSizeY,
        System_Nullable_float__o buttonPosY,
        float messagePosYForcedAdd,
        const MethodInfo *method)
{
  System_Nullable_float__o v21; // x17
  System_Nullable_int__o v22; // x27
  System_Nullable_int__o v23; // x10
  System_Nullable_int__o v24; // x11
  int32_t v25; // w12
  System_Nullable_float__o v26; // x13
  int32_t v27; // w14
  int32_t v28; // w15
  bool v29; // w16
  bool v31; // w22
  int32_t v32; // w28
  NotificationDialog_ClickDelegate_o *v34; // x19
  System_String_o *v35; // x20
  System_String_o *v36; // x21
  int32_t v38; // w28
  __int64 v39; // x1
  __int64 v40; // x1
  float value; // s9
  NotificationDialog_c *v42; // x0
  System_Nullable_int__o v43; // x25
  float y; // s1
  NotificationDialog_c *v45; // x0
  System_Nullable_int__o v46; // x26
  System_Nullable_float__o v48; // [xsp+0h] [xbp-B0h]
  bool v49; // [xsp+Ch] [xbp-A4h]
  bool v50; // [xsp+Ch] [xbp-A4h]
  int32_t v52; // [xsp+10h] [xbp-A0h]
  int32_t v53; // [xsp+10h] [xbp-A0h]
  int32_t v55; // [xsp+18h] [xbp-98h]
  int32_t v56; // [xsp+18h] [xbp-98h]
  System_Nullable_float__o v58; // [xsp+20h] [xbp-90h]
  System_Nullable_float__o v59; // [xsp+20h] [xbp-90h]
  int32_t v61; // [xsp+2Ch] [xbp-84h]
  int32_t v62; // [xsp+2Ch] [xbp-84h]
  System_Nullable_int__o v63; // [xsp+30h] [xbp-80h]
  System_Nullable_int__o v64; // [xsp+30h] [xbp-80h]
  int32_t titleSizea; // [xsp+3Ch] [xbp-74h]
  int32_t titleSizeb; // [xsp+3Ch] [xbp-74h]

  v22 = buttonWidgetSizeY;
  v21 = buttonPosY;
  v23 = buttonWidgetSizeX;
  v24 = messageWidgetSizeY;
  v25 = spacingY;
  v26 = titlePosY;
  v27 = onClickOkSeKind;
  v28 = messageFontSize;
  v29 = canMaskTouchClose;
  v31 = isLineDraw;
  v32 = maxLine;
  v34 = func;
  v35 = message;
  v36 = title;
  if ( (byte_49FFEB9 & 1) == 0 )
  {
    v38 = titleSize;
    sub_1B640C8(&NotificationDialog_TypeInfo, title);
    sub_1B640C8(&Method_System_Nullable_float__GetValueOrDefault__, v39);
    sub_1B640C8(&Method_System_Nullable_float__get_HasValue__, v40);
    v21 = buttonPosY;
    v29 = canMaskTouchClose;
    v28 = messageFontSize;
    v27 = onClickOkSeKind;
    v26 = titlePosY;
    v25 = spacingY;
    v23 = buttonWidgetSizeX;
    v22 = buttonWidgetSizeY;
    titleSize = v38;
    v32 = maxLine;
    v34 = func;
    v35 = message;
    v36 = title;
    v31 = isLineDraw;
    v24 = messageWidgetSizeY;
    byte_49FFEB9 = 1;
  }
  if ( messagePosY.fields.hasValue )
  {
    value = messagePosY.fields.value;
  }
  else
  {
    v42 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      titleSizea = titleSize;
      v63 = v23;
      v43 = v24;
      v61 = v25;
      v58 = v26;
      v55 = v27;
      v49 = v29;
      v52 = v28;
      v48 = v21;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v21 = v48;
      v29 = v49;
      v28 = v52;
      v27 = v55;
      v26 = v58;
      v25 = v61;
      v23 = v63;
      titleSize = titleSizea;
      v42 = NotificationDialog_TypeInfo;
      v24 = v43;
    }
    value = v42->static_fields->MESSAGE_BASE_POS.fields.y;
  }
  if ( v21.fields.hasValue )
  {
    y = v21.fields.value;
  }
  else
  {
    v45 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      titleSizeb = titleSize;
      v64 = v23;
      v46 = v24;
      v62 = v25;
      v59 = v26;
      v56 = v27;
      v50 = v29;
      v53 = v28;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v29 = v50;
      v28 = v53;
      v27 = v56;
      v26 = v59;
      v25 = v62;
      v23 = v64;
      titleSize = titleSizeb;
      v45 = NotificationDialog_TypeInfo;
      v24 = v46;
    }
    y = v45->static_fields->BUTTON_BASE_POS.fields.y;
  }
  NotificationDialog__OpenDialog(
    this,
    v36,
    v35,
    v34,
    panelDepth,
    v32,
    titleSize,
    v31,
    v29,
    value,
    y,
    v28,
    v27,
    v26,
    v25,
    v24,
    adjustText,
    v23,
    v22,
    messagePosYForcedAdd,
    *(const MethodInfo **)&buttonWidgetSizeY);
}


void __fastcall NotificationDialog__OpenDialog(
        NotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        NotificationDialog_ClickDelegate_o *func,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t titleSize,
        bool isLineDraw,
        bool canMaskTouchClose,
        float messagePosY,
        float buttonPosY,
        int32_t messageFontSize,
        int32_t onClickOkSeKind,
        System_Nullable_float__o titlePosY,
        int32_t spacingY,
        System_Nullable_int__o messageWidgetSizeY,
        bool adjustText,
        System_Nullable_int__o buttonWidgetSizeX,
        System_Nullable_int__o buttonWidgetSizeY,
        float messagePosYForcedAdd,
        const MethodInfo *method)
{
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  UIPanel_o *TargetPanel; // x0
  int32_t v42; // w2
  int32_t v43; // w3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v45; // x21
  UILabel_o *transform; // x0
  UnityEngine_Object_o *titleLabel; // x29
  System_String_o *v48; // x1
  NotificationDialog_c *v49; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s12
  float z; // s11
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v55; // x0
  struct NotificationDialog_StaticFields *v56; // x8
  float v57; // s11
  float v58; // s12
  unsigned __int64 v59; // x28
  UnityEngine_Object_o *lineSprite; // x29
  NotificationDialog_c *v61; // x0
  struct NotificationDialog_StaticFields *v62; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x22
  UnityEngine_Object_o *lnkTexture; // x22
  UnityEngine_Object_o *okBtnLabel; // x22
  NotificationDialog_c *v68; // x0
  struct NotificationDialog_StaticFields *v69; // x8
  UILabel_o *v70; // x22
  float v71; // s10
  float v72; // s9
  float v73; // s13
  float v74; // s11
  float y; // s12
  UnityEngine_GameObject_o *v76; // x0
  UnityEngine_GameObject_o *v77; // x0
  UnityEngine_GameObject_o *v78; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v80; // x22
  unsigned __int64 v81; // x19
  unsigned __int64 v82; // x25
  int32_t keepPanelDepth; // w1
  __int64 v84; // x1
  __int64 v85; // x2
  System_Action_o *v86; // x19
  const MethodInfo *v87; // [xsp+0h] [xbp-D0h]
  float v; // [xsp+3Ch] [xbp-94h]
  UnityEngine_Vector3_o v92; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v93; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFEBA & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, title);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v29);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v30);
    sub_1B640C8(&LocalizationManager_TypeInfo, v31);
    sub_1B640C8(&Method_NotificationDialog_EndOpen__, v32);
    sub_1B640C8(&NotificationDialog_TypeInfo, v33);
    sub_1B640C8(&Method_System_Nullable_float__GetValueOrDefault__, v34);
    sub_1B640C8(&Method_System_Nullable_int__GetValueOrDefault__, v35);
    sub_1B640C8(&Method_System_Nullable_float__get_HasValue__, v36);
    sub_1B640C8(&Method_System_Nullable_int__get_HasValue__, v37);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v38);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v39);
    sub_1B640C8(&StringLiteral_1/*""*/, v40);
    byte_49FFEBA = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v45 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v45 )
        goto LABEL_107;
      this->fields.keepPanelDepth = v45->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, v42, v43);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_107;
    UILabel__set_fontSize(transform, titleSize, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_107;
    if ( title )
      v48 = title;
    else
      v48 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v48, 0LL);
    v49 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v49 = NotificationDialog_TypeInfo;
    }
    static_fields = v49->static_fields;
    x = static_fields->TITLE_BASE_POS.fields.x;
    z = static_fields->TITLE_BASE_POS.fields.z;
    if ( titlePosY.fields.hasValue )
    {
      value = titlePosY.fields.value;
    }
    else
    {
      if ( !v49->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v49);
        static_fields = NotificationDialog_TypeInfo->static_fields;
      }
      value = static_fields->TITLE_BASE_POS.fields.y;
    }
    v = value;
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_107;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v92.fields.y = v;
    v92.fields.x = x;
    v92.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v92, 0LL);
  }
  v55 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v55 = NotificationDialog_TypeInfo;
  }
  v56 = v55->static_fields;
  v57 = v56->MESSAGE_BASE_POS.fields.x;
  v58 = v56->MESSAGE_BASE_POS.fields.z;
  if ( v56->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = v56->MESSAGE_BASE_POS.fields.y;
  if ( messageWidgetSizeY.fields.hasValue )
  {
    v59 = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeY);
  }
  else
  {
    if ( !v55->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v55);
      v56 = NotificationDialog_TypeInfo->static_fields;
    }
    LODWORD(v59) = v56->MESSAGE_BASE_SIZE_Y;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lineSprite;
    if ( !transform )
      goto LABEL_107;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isLineDraw, 0LL);
    if ( isLineDraw )
    {
      v61 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v61 = NotificationDialog_TypeInfo;
      }
      v62 = v61->static_fields;
      v57 = v62->MESSAGE_LINE_POS.fields.x;
      messagePosY = v62->MESSAGE_LINE_POS.fields.y;
      v58 = v62->MESSAGE_LINE_POS.fields.z;
      LODWORD(v59) = v62->MESSAGE_LINE_SIZE_Y;
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v93.fields.x = v57;
    v93.fields.y = messagePosY;
    v93.fields.z = v58;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      v59,
      maxLine,
      messageFontSize,
      adjustText,
      v93,
      buttonPosY,
      messagePosYForcedAdd,
      v87);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lnkSprite, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lnkSprite;
    if ( !transform )
      goto LABEL_107;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lnkTexture;
    if ( !transform )
      goto LABEL_107;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_107;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v68 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v68 = NotificationDialog_TypeInfo;
    }
    v69 = v68->static_fields;
    v70 = this->fields.okBtnLabel;
    v71 = v69->BUTTON_BASE_POS.fields.x;
    v72 = v69->BUTTON_BASE_POS.fields.z;
    v73 = v69->BUTTON_TEXT_POS.fields.x;
    y = v69->BUTTON_TEXT_POS.fields.y;
    v74 = v69->BUTTON_TEXT_POS.fields.z;
    if ( v69->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v69->BUTTON_BASE_POS.fields.y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v70 )
      goto LABEL_107;
    UILabel__set_text(v70, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_107;
    v76 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v94.fields.x = v73;
    v94.fields.y = y;
    v94.fields.z = v74;
    GameObjectExtensions__SetLocalPosition(v76, v94, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_107;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_107;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_107;
    v77 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v95.fields.x = v71;
    v95.fields.y = buttonPosY;
    v95.fields.z = v72;
    GameObjectExtensions__SetLocalPosition(v77, v95, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_107;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_107;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_107;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_107;
    v78 = (UnityEngine_GameObject_o *)transform;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v80 = UnityEngine_GameObject__GetComponent_object_(
            v78,
            (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v80, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( buttonWidgetSizeX.fields.hasValue )
        {
          v81 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeX);
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v81) = transform->fields.onChange[1].monitor;
        }
        if ( buttonWidgetSizeY.fields.hasValue )
        {
          v82 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeY);
          if ( !Component_object )
            goto LABEL_107;
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v82) = HIDWORD(transform->fields.onChange[1].monitor);
          if ( !Component_object )
            goto LABEL_107;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v81, 0LL);
        UIWidget__set_height((UIWidget_o *)Component_object, v82, 0LL);
        if ( !v80 )
          goto LABEL_107;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v80, 0LL);
        size.fields.x = (float)(int)v81;
        size.fields.y = (float)(int)v82;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v80, size, 0LL);
      }
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = this->fields.keepPanelDepth;
    if ( v45 )
    {
      UIPanel__set_depth(v45, keepPanelDepth, 0LL);
      goto LABEL_106;
    }
LABEL_107:
    sub_1B64324(transform);
  }
LABEL_106:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v86 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v84, v85);
  System_Action___ctor(v86, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v86, 0, 0LL);
}


void __fastcall NotificationDialog__Open_44961000(
        NotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        NotificationDialog_ClickDelegate_o *func,
        float messagePosY,
        float buttonPosY,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t titleSize,
        bool isLineDraw,
        bool canMaskTouchClose,
        int32_t messageFontSize,
        int32_t onClickOkSeKind,
        System_Nullable_float__o titlePosY,
        int32_t spacingY,
        const MethodInfo *method)
{
  const MethodInfo *v16; // [xsp+48h] [xbp-18h]

  NotificationDialog__OpenDialog(
    this,
    title,
    message,
    func,
    panelDepth,
    maxLine,
    titleSize,
    isLineDraw,
    canMaskTouchClose,
    messagePosY,
    buttonPosY,
    messageFontSize,
    onClickOkSeKind,
    titlePosY,
    spacingY,
    0LL,
    1,
    0LL,
    0LL,
    0.0,
    v16);
}


void __fastcall NotificationDialog__Open_44961980(
        NotificationDialog_o *this,
        System_String_o *title,
        System_String_o *message,
        NotificationDialog_ClickDelegate_o *func,
        System_Collections_Generic_Dictionary_string__object__o *script,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t titleSize,
        bool isLineDraw,
        bool canMaskTouchClose,
        int32_t onClickOkSe,
        const MethodInfo *method)
{
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  __int64 v25; // x1
  __int64 v26; // x1
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  __int64 v33; // x1
  __int64 v34; // x1
  __int64 v35; // x1
  __int64 v36; // x1
  __int64 v37; // x1
  __int64 v38; // x1
  __int64 v39; // x1
  __int64 v40; // x1
  __int64 v41; // x1
  __int64 v42; // x1
  __int64 v43; // x1
  UIPanel_o *TargetPanel; // x0
  int32_t v45; // w2
  int32_t v46; // w3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v48; // x22
  UILabel_o *transform; // x0
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v51; // x1
  NotificationDialog_o *gameObject; // x0
  const MethodInfo *v53; // x3
  NotificationDialog_c *v54; // x8
  UnityEngine_GameObject_o *v55; // x26
  float *p_BANNER_RETRY_MAX; // x8
  float v57; // s8
  float v58; // s9
  float v59; // s10
  NotificationDialog_c *v60; // x0
  float *v61; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v63; // s8
  float v64; // s9
  float v65; // s10
  int32_t v66; // w26
  NotificationDialog_c *v67; // x0
  float *v68; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  const MethodInfo *v71; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 methodPtr_low; // x11
  struct System_Object_array *v74; // x0
  struct System_Object_array **p_sprites; // x23
  int32_t v76; // w2
  int32_t v77; // w3
  __int64 v78; // x1
  __int64 v79; // x8
  UnityEngine_Component_o *v80; // x25
  unsigned __int64 v81; // x21
  Il2CppObject *v82; // x25
  UnityEngine_GameObject_o *v83; // x25
  UnityEngine_Component_o *parent; // x0
  __int64 v85; // x1
  int32_t v86; // w2
  int32_t v87; // w3
  System_Collections_Generic_List_object__o *additionalSprites; // x8
  struct System_Object_array *items; // x9
  _QWORD *v90; // x10
  __int64 size; // x11
  Il2CppClass **v92; // x0
  struct System_Object_array *v93; // x8
  System_Collections_Generic_Dictionary_string__object__o *v94; // x8
  __int64 v95; // x11
  System_Collections_Generic_Dictionary_string__object__o *v96; // x26
  System_Collections_Generic_Dictionary_string__object__o *v97; // x22
  NotificationDialog_o *v98; // x0
  UISprite_o *klass; // x20
  UnityEngine_GameObject_o *v100; // x27
  const MethodInfo *v101; // x3
  System_String_o *StringFromScript; // x29
  NotificationDialog_o *v103; // x0
  const MethodInfo *v104; // x3
  NotificationDialog_c *v105; // x8
  UnityEngine_GameObject_o *v106; // x27
  float *v107; // x8
  float v108; // s8
  float v109; // s9
  float v110; // s10
  NotificationDialog_o *v111; // x0
  const MethodInfo *v112; // x3
  __int64 v113; // x1
  float x; // s9
  float y; // s8
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v118; // x0
  const MethodInfo *v119; // x3
  int32_t v120; // w1
  int32_t v121; // w2
  NotificationDialog_o *IntFromScript; // x0
  int32_t v123; // w27
  const MethodInfo *v124; // x3
  System_String_o *v125; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v127; // x11
  struct System_Object_array *v128; // x0
  int32_t v129; // w2
  int32_t v130; // w3
  struct System_Object_array *banners; // x8
  int v132; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  UILabel_o *v134; // x23
  NotificationDialog_o *v135; // x0
  const MethodInfo *v136; // x3
  NotificationDialog_c *v137; // x8
  UnityEngine_GameObject_o *v138; // x23
  float *v139; // x8
  float v140; // s8
  float v141; // s9
  float v142; // s10
  int32_t keepPanelDepth; // w1
  __int64 v144; // x1
  __int64 v145; // x2
  System_Action_o *v146; // x20
  __int64 v147; // x1
  __int64 v148; // x2
  System_Action_o *v149; // x20
  const MethodInfo *v150; // x2
  UIPanel_o *v152; // [xsp+8h] [xbp-88h]
  Il2CppObject *value; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v155; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v156; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v157; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v158; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFEBB & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, title);
    sub_1B640C8(&AtlasManager_TypeInfo, v19);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v20);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v21);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___, v22);
    sub_1B640C8(&Method_System_Collections_Generic_List_LinkableSprite__Add__, v23);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__ToArray__, v24);
    sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v25);
    sub_1B640C8(&LocalizationManager_TypeInfo, v26);
    sub_1B640C8(&Method_NotificationDialog_EndOpen__, v27);
    sub_1B640C8(&Method_NotificationDialog__Open_b__42_0__, v28);
    sub_1B640C8(&NotificationDialog_TypeInfo, v29);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v30);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v31);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32);
    sub_1B640C8(&StringLiteral_16999/*"banners"*/, v33);
    sub_1B640C8(&StringLiteral_23236/*"size"*/, v34);
    sub_1B640C8(&StringLiteral_24240/*"urlOpenType"*/, v35);
    sub_1B640C8(&StringLiteral_22120/*"offset"*/, v36);
    sub_1B640C8(&StringLiteral_23861/*"titleOffset"*/, v37);
    sub_1B640C8(&StringLiteral_23347/*"spriteName"*/, v38);
    sub_1B640C8(&StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, v39);
    sub_1B640C8(&StringLiteral_24239/*"urlLink"*/, v40);
    sub_1B640C8(&StringLiteral_17576/*"buttonOffset"*/, v41);
    sub_1B640C8(&StringLiteral_1/*""*/, v42);
    sub_1B640C8(&StringLiteral_23348/*"sprites"*/, v43);
    byte_49FFEBB = 1;
  }
  value = 0LL;
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v48 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v48 )
        goto LABEL_138;
      this->fields.keepPanelDepth = v48->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, v45, v46);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_138;
    UILabel__set_fontSize(transform, titleSize, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    v51 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v51, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
    v54 = NotificationDialog_TypeInfo;
    v55 = (UnityEngine_GameObject_o *)gameObject;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v54 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v54->static_fields->BANNER_RETRY_MAX;
    v57 = p_BANNER_RETRY_MAX[1];
    v58 = p_BANNER_RETRY_MAX[2];
    v59 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_23861/*"titleOffset"*/,
                       v53);
    VectFromScript.fields.x = v57 + VectFromScript.fields.x;
    VectFromScript.fields.y = v58 + VectFromScript.fields.y;
    VectFromScript.fields.z = v59 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v55, VectFromScript, 0LL);
  }
  v60 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v60 = NotificationDialog_TypeInfo;
  }
  v61 = (float *)&v60->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v63 = v61[4];
  v64 = v61[5];
  v65 = v61[6];
  v66 = *((_DWORD *)v61 + 14);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lineSprite;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isLineDraw, 0LL);
    if ( isLineDraw )
    {
      v67 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v67 = NotificationDialog_TypeInfo;
      }
      v68 = (float *)&v67->static_fields->BANNER_RETRY_MAX;
      v63 = v68[10];
      v64 = v68[11];
      v65 = v68[12];
      v66 = *((_DWORD *)v68 + 16);
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v155.fields.x = v63;
    v155.fields.y = v64;
    v155.fields.z = v65;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v66, maxLine, v155, script, v71);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !script )
      goto LABEL_138;
    transform = (UILabel_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                               (System_Collections_Generic_Dictionary_object__object__o *)script,
                               (Il2CppObject *)StringLiteral_23348/*"sprites"*/,
                               &value,
                               (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)transform & 1) == 0 )
      goto LABEL_95;
    if ( !value )
      goto LABEL_138;
    methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
    if ( LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)methodPtr_low
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_138;
    }
    v74 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)value,
            (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v74;
    p_sprites = &this->fields.sprites;
    sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.sprites, (int32_t)v74, v76, v77);
    if ( this->fields.sprites && (v79 = *(_QWORD *)&this->fields.sprites->max_length) != 0 )
    {
      if ( (int)v79 >= 1 )
      {
        v80 = (UnityEngine_Component_o *)this->fields.lnkSprite;
        v81 = 0LL;
        v152 = v48;
        while ( 1 )
        {
          if ( v81 )
          {
            transform = (UILabel_o *)this->fields.lnkSprite;
            if ( !transform )
              break;
            v82 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UILabel_o *)UnityEngine_Object__Instantiate_object_(
                                       v82,
                                       (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v83 = (UnityEngine_GameObject_o *)transform;
            transform = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)this->fields.lnkSprite,
                                       0LL);
            if ( !transform )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)transform,
                                                  0LL);
            GameObjectExtensions__SetParent(v83, parent, 0LL);
            if ( !byte_49F7116 )
            {
              sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v85);
              byte_49F7116 = 1;
            }
            GameObjectExtensions__SetLocalScale(v83, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            if ( !v83 )
              break;
            transform = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                       v83,
                                       (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            additionalSprites = (System_Collections_Generic_List_object__o *)this->fields.additionalSprites;
            if ( !additionalSprites )
              break;
            items = additionalSprites->fields._items;
            v90 = Method_System_Collections_Generic_List_LinkableSprite__Add__;
            ++additionalSprites->fields._version;
            if ( !items )
              break;
            size = additionalSprites->fields._size;
            v80 = (UnityEngine_Component_o *)transform;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                additionalSprites,
                (Il2CppObject *)transform,
                *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v90[4] + 192LL) + 112LL));
            }
            else
            {
              v92 = &items->obj.klass + size;
              additionalSprites->fields._size = size + 1;
              v92[4] = (Il2CppClass *)v80;
              sub_1B6406C((ServantStatusBattleListViewItem_o *)(v92 + 4), (int32_t)v80, v86, v87);
            }
          }
          v93 = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( v81 >= v93->max_length )
            sub_1B6432C(transform, v78);
          v94 = (System_Collections_Generic_Dictionary_string__object__o *)v93->m_Items[v81];
          if ( v94
            && (v95 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(v94->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v95) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v94->klass->_2.typeHierarchy[v95 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v96 = v94;
            else
              v96 = 0LL;
            if ( !v80 )
              break;
          }
          else
          {
            v96 = 0LL;
            if ( !v80 )
              break;
          }
          v97 = script;
          v98 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v80, 0LL);
          klass = (UISprite_o *)v80[2].klass;
          v100 = (UnityEngine_GameObject_o *)v98;
          StringFromScript = NotificationDialog__getStringFromScript(
                               v98,
                               v96,
                               (System_String_o *)StringLiteral_23347/*"spriteName"*/,
                               v101);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          transform = (UILabel_o *)AtlasManager__SetEventUI(klass, StringFromScript, 0LL);
          if ( !v100 )
            break;
          UnityEngine_GameObject__SetActive(v100, (unsigned __int8)transform & 1, 0LL);
          v103 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v80, 0LL);
          v105 = NotificationDialog_TypeInfo;
          v106 = (UnityEngine_GameObject_o *)v103;
          script = v97;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v105 = NotificationDialog_TypeInfo;
          }
          v107 = (float *)&v105->static_fields->BANNER_RETRY_MAX;
          v48 = v152;
          v108 = v107[17];
          v109 = v107[18];
          v110 = v107[19];
          v156 = NotificationDialog__getVectFromScript(v103, v96, (System_String_o *)StringLiteral_22120/*"offset"*/, v104);
          v156.fields.x = v108 + v156.fields.x;
          v156.fields.y = v109 + v156.fields.y;
          v156.fields.z = v110 + v156.fields.z;
          GameObjectExtensions__SetLocalPosition(v106, v156, 0LL);
          v157 = NotificationDialog__getVectFromScript(v111, v96, (System_String_o *)StringLiteral_23236/*"size"*/, v112);
          x = v157.fields.x;
          y = v157.fields.y;
          z = v157.fields.z;
          if ( !byte_49F7111 )
          {
            sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v113);
            byte_49F7111 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          if ( x == static_fields->zeroVector.fields.x
            && y == static_fields->zeroVector.fields.y
            && z == static_fields->zeroVector.fields.z )
          {
            LinkableSprite__MakePixelPerfect((LinkableSprite_o *)v80, 0LL);
          }
          else
          {
            v120 = x == INFINITY ? 0x80000000 : (int)x;
            v121 = y == INFINITY ? 0x80000000 : (int)y;
            LinkableSprite__SetSize((LinkableSprite_o *)v80, v120, v121, 0LL);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v118,
                                                    v96,
                                                    (System_String_o *)StringLiteral_24240/*"urlOpenType"*/,
                                                    v119);
          v123 = (int)IntFromScript;
          v125 = NotificationDialog__getStringFromScript(
                   IntFromScript,
                   v96,
                   (System_String_o *)StringLiteral_24239/*"urlLink"*/,
                   v124);
          LinkableSprite__SetUp((LinkableSprite_o *)v80, v123, v125, 0LL);
          if ( !*p_sprites )
            break;
          if ( (__int64)++v81 >= (int)(*p_sprites)->max_length )
            goto LABEL_98;
        }
LABEL_138:
        sub_1B64324(transform);
      }
    }
    else
    {
LABEL_95:
      transform = (UILabel_o *)this->fields.lnkSprite;
      if ( !transform )
        goto LABEL_138;
      transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
      if ( !transform )
        goto LABEL_138;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
    }
  }
LABEL_98:
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !script )
      goto LABEL_138;
    transform = (UILabel_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                               (System_Collections_Generic_Dictionary_object__object__o *)script,
                               (Il2CppObject *)StringLiteral_16999/*"banners"*/,
                               &value,
                               (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !value )
        goto LABEL_138;
      v127 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)v127
        || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v127 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_138;
      }
      v128 = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)value,
               (const MethodInfo_34AF2CC *)Method_System_Collections_Generic_List_object__ToArray__);
      this->fields.banners = v128;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.banners, (int32_t)v128, v129, v130);
      banners = this->fields.banners;
      if ( banners )
      {
        if ( *(_QWORD *)&banners->max_length )
        {
          v132 = 0;
          goto LABEL_113;
        }
      }
    }
    transform = (UILabel_o *)this->fields.lnkTexture;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  v132 = 1;
LABEL_113:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v134 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3734/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v134 )
      goto LABEL_138;
    UILabel__set_text(v134, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    v135 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v137 = NotificationDialog_TypeInfo;
    v138 = (UnityEngine_GameObject_o *)v135;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v137 = NotificationDialog_TypeInfo;
    }
    v139 = (float *)&v137->static_fields->BANNER_RETRY_MAX;
    v140 = v139[20];
    v141 = v139[21];
    v142 = v139[22];
    v158 = NotificationDialog__getVectFromScript(v135, script, (System_String_o *)StringLiteral_17576/*"buttonOffset"*/, v136);
    v158.fields.x = v140 + v158.fields.x;
    v158.fields.y = v141 + v158.fields.y;
    v158.fields.z = v142 + v158.fields.z;
    GameObjectExtensions__SetLocalPosition(v138, v158, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = this->fields.keepPanelDepth;
    if ( !v48 )
      goto LABEL_138;
    UIPanel__set_depth(v48, keepPanelDepth, 0LL);
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  if ( v132 )
  {
    v146 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v144, v145);
    System_Action___ctor(v146, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v146, 0, 0LL);
  }
  else
  {
    transform = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !transform )
      goto LABEL_138;
    CommonUI__SetLoadMode((CommonUI_o *)transform, 1, 0LL);
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0LL);
    transform = (UILabel_o *)this->fields.baseWindow;
    if ( !transform )
      goto LABEL_138;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
    v149 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v147, v148);
    System_Action___ctor(v149, (Il2CppObject *)this, Method_NotificationDialog__Open_b__42_0__, 0LL);
    NotificationDialog__LoadBanners(this, v149, v150);
  }
}


System_Collections_IEnumerator_o *__fastcall NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x20
  int32_t v5; // w2
  int32_t v6; // w3

  if ( (byte_49FFEC3 & 1) == 0 )
  {
    sub_1B640C8(&NotificationDialog__StartDownloadBanner_d__54_TypeInfo, method);
    byte_49FFEC3 = 1;
  }
  v4 = sub_1B64314(NotificationDialog__StartDownloadBanner_d__54_TypeInfo, method, v2);
  System_Object___ctor((Il2CppObject *)v4, 0LL);
  *(_DWORD *)(v4 + 16) = 0;
  *(_QWORD *)(v4 + 32) = this;
  sub_1B6406C((ServantStatusBattleListViewItem_o *)(v4 + 32), (int32_t)this, v5, v6);
  return (System_Collections_IEnumerator_o *)v4;
}


void __fastcall NotificationDialog___Open_b__42_0(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  __int64 v6; // x1
  __int64 v7; // x2
  System_Action_o *v8; // x20

  if ( (byte_49FFEC7 & 1) == 0 )
  {
    sub_1B640C8(&System_Action_TypeInfo, method);
    sub_1B640C8(&Method_NotificationDialog_EndOpen__, v3);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_49FFEC7 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B64324(baseWindow);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v8 = (System_Action_o *)sub_1B64314(System_Action_TypeInfo, v6, v7);
  System_Action___ctor(v8, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v8, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog___StartDownloadBanner_b__54_0(
        NotificationDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1
  Il2CppObject *Instance; // x0

  if ( (byte_49FFEC8 & 1) == 0 )
  {
    sub_1B640C8(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_49FFEC8 = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B64324(0LL);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
  }
}


int32_t __fastcall NotificationDialog__getIntFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FFEC0 & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, script);
    this = (NotificationDialog_o *)sub_1B640C8(
                                     &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                     v6);
    byte_49FFEC0 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1B64324(this);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v7, 0LL);
}


System_String_o *__fastcall NotificationDialog__getStringFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49FFEBF & 1) == 0 )
  {
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, script);
    sub_1B640C8(&string_TypeInfo, v6);
    this = (NotificationDialog_o *)sub_1B640C8(&StringLiteral_1/*""*/, v7);
    byte_49FFEBF = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1B64324(this);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !value )
    return 0LL;
  if ( (System_String_c *)value->klass == string_TypeInfo )
    return (System_String_o *)value;
  return 0LL;
}


UnityEngine_Vector3_o __fastcall NotificationDialog__getVectFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  Il2CppObject *v11; // x19
  __int64 methodPtr_low; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  Il2CppObject *Item; // x20
  double v18; // d8
  Il2CppObject *v19; // x0
  double v20; // d1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49FFEBE & 1) == 0 )
  {
    sub_1B640C8(&System_Convert_TypeInfo, script);
    sub_1B640C8(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    this = (NotificationDialog_o *)sub_1B640C8(&System_Collections_Generic_List_object__TypeInfo, v9);
    byte_49FFEBE = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1B64324(this);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_317AC04 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v11 = value) != 0LL
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v18 = System_Convert__ToDouble(Item, 0LL);
    v19 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v11,
            1,
            (const MethodInfo_34AD404 *)Method_System_Collections_Generic_List_object__get_Item__);
    v20 = System_Convert__ToDouble(v19, 0LL);
    x = v18;
    y = v20;
    z = 0.0;
  }
  else
  {
    if ( !byte_49F7111 )
    {
      sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v10);
      byte_49F7111 = 1;
    }
    static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
    x = static_fields->zeroVector.fields.x;
    y = static_fields->zeroVector.fields.y;
    z = static_fields->zeroVector.fields.z;
  }
  result.fields.z = z;
  result.fields.y = y;
  result.fields.x = x;
  return result;
}


System_String_o *__fastcall NotificationDialog__get_closeBtnPath(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_49FFEC4 & 1) == 0 )
  {
    sub_1B640C8(&StringLiteral_15584/*"Window/OkBtn"*/, method);
    byte_49FFEC4 = 1;
  }
  return (System_String_o *)StringLiteral_15584/*"Window/OkBtn"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog_ClickDelegate___ctor(
        NotificationDialog_ClickDelegate_o *this,
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
  sub_1B6406C((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B64188(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B64340(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B641F0(v10, 0LL);
    }
    goto LABEL_5;
  }
  if ( v8 != 1 )
  {
LABEL_5:
    v9 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v9;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_19B0A30;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19B09E8;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall NotificationDialog_ClickDelegate__BeginInvoke(
        NotificationDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_49FFEC9 & 1) == 0 )
  {
    sub_1B640C8(&bool_TypeInfo, isOk);
    byte_49FFEC9 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1B6407C(this, v9, callback, object);
}


void __fastcall NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B64080(result, 0LL, method);
}


void __fastcall NotificationDialog_ClickDelegate__Invoke(
        NotificationDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isOk,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall NotificationDialog__StartDownloadBanner_d__54___ctor(
        NotificationDialog__StartDownloadBanner_d__54_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NotificationDialog__StartDownloadBanner_d__54__MoveNext(
        NotificationDialog__StartDownloadBanner_d__54_o *this,
        const MethodInfo *method)
{
  int32_t v2; // w2
  int32_t v3; // w3
  NotificationDialog__StartDownloadBanner_d__54_o *v4; // x20
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 v16; // x1
  __int64 v17; // x1
  __int64 v18; // x1
  __int64 v19; // x1
  __int64 v20; // x1
  __int64 v21; // x1
  __int64 v22; // x1
  __int64 v23; // x1
  __int64 v24; // x1
  int32_t _1__state; // w8
  struct NotificationDialog_o *_4__this; // x19
  struct System_Object_array *banners; // x8
  __int64 mLoadingIdx; // x9
  Il2CppObject *v29; // x8
  System_Collections_Generic_Dictionary_string__object__c *v30; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__object__o *v32; // x11
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  NotificationDialog__StartDownloadBanner_d__54_o **p_mBannerWWW; // x21
  System_String_o *error; // x0
  NotificationDialog__StartDownloadBanner_d__54_o *v36; // x23
  int32_t v37; // w24
  int32_t v38; // w25
  int32_t format; // w26
  __int64 v40; // x1
  __int64 v41; // x2
  UnityEngine_Texture2D_o *v42; // x22
  System_Byte_array *data; // x0
  System_String_o *v44; // x0
  bool IsNullOrEmpty; // w0
  int v46; // w20
  NotificationDialog_c *v47; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v49; // x22
  __int64 v50; // x1
  __int64 v51; // x2
  ErrorDialog_ClickDelegate_o *v52; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v54; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  bool v57; // w21
  int32_t v58; // w1
  ServantStatusBattleListViewItem_o *p_banner_5__2; // x21
  NotificationDialog_o *v60; // x0
  const MethodInfo *v61; // x3
  System_String_o *v62; // x21
  System_String_o *WebViewFullAddress; // x21
  __int64 v64; // x1
  __int64 v65; // x2
  UnityEngine_Networking_UnityWebRequest_o *v66; // x22
  int32_t v67; // w2
  int32_t v68; // w3
  __int64 v69; // x1
  __int64 v70; // x2
  UnityEngine_Networking_DownloadHandlerTexture_o *v71; // x22
  int32_t v72; // w2
  int32_t v73; // w3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v74; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  int32_t v76; // w2
  int32_t v77; // w3
  NotificationDialog__StartDownloadBanner_d__54_o *lnkTexture; // x23
  Il2CppObject *gameObject; // x23
  NotificationDialog__StartDownloadBanner_d__54_o *v81; // x23
  UnityEngine_Component_o *parent; // x0
  __int64 v83; // x1
  int32_t v84; // w2
  int32_t v85; // w3
  System_Collections_Generic_List_object__o *additionalTextures; // x8
  struct System_Object_array *items; // x9
  _QWORD *v88; // x10
  __int64 size; // x11
  Il2CppClass **v90; // x0
  NotificationDialog_o *v91; // x0
  const MethodInfo *v92; // x3
  UnityEngine_GameObject_o *v93; // x22
  NotificationDialog_c *v94; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v96; // s8
  float v97; // s9
  float v98; // s10
  NotificationDialog_o *v99; // x0
  const MethodInfo *v100; // x3
  __int64 v101; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v106; // x0
  const MethodInfo *v107; // x3
  int32_t v108; // w1
  int32_t v109; // w2
  NotificationDialog_o *IntFromScript; // x0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v112; // w20
  const MethodInfo *v113; // x3
  System_String_o *StringFromScript; // x0
  const MethodInfo *v115; // x1
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_49FFECA & 1) == 0 )
  {
    sub_1B640C8(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_1B640C8(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1B640C8(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v6);
    sub_1B640C8(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___, v7);
    sub_1B640C8(&Method_System_Collections_Generic_List_LinkableTexture__Add__, v8);
    sub_1B640C8(&LocalizationManager_TypeInfo, v9);
    sub_1B640C8(&NetworkManager_TypeInfo, v10);
    sub_1B640C8(&Method_NotificationDialog__StartDownloadBanner_b__54_0__, v11);
    sub_1B640C8(&NotificationDialog_TypeInfo, v12);
    sub_1B640C8(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1B640C8(&UnityEngine_Object_TypeInfo, v14);
    sub_1B640C8(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1B640C8(&UnityEngine_Texture2D_TypeInfo, v16);
    sub_1B640C8(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v17);
    sub_1B640C8(&StringLiteral_16992/*"bannerUrl"*/, v18);
    sub_1B640C8(&StringLiteral_23236/*"size"*/, v19);
    sub_1B640C8(&StringLiteral_24240/*"urlOpenType"*/, v20);
    sub_1B640C8(&StringLiteral_22120/*"offset"*/, v21);
    sub_1B640C8(&StringLiteral_24239/*"urlLink"*/, v22);
    sub_1B640C8(&StringLiteral_1/*""*/, v23);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)sub_1B640C8(&StringLiteral_9193/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v24);
    byte_49FFECA = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_94;
    p_mBannerWWW = (NotificationDialog__StartDownloadBanner_d__54_o **)&_4__this->fields.mBannerWWW;
    mBannerWWW = _4__this->fields.mBannerWWW;
    if ( !mBannerWWW )
      goto LABEL_35;
    if ( !UnityEngine_Networking_UnityWebRequest__get_isDone(mBannerWWW, 0LL) )
      goto LABEL_25;
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_94;
    error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    if ( System_String__IsNullOrEmpty(error, 0LL) )
    {
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)v4->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                  (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                  0LL);
      if ( !v4->fields._texDl_5__3 )
        goto LABEL_94;
      v36 = this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v4->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__54_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                                  this,
                                                                  this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
      if ( !v4->fields._texDl_5__3 )
        goto LABEL_94;
      v37 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v4->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__54_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                  this,
                                                                  this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
      if ( !v4->fields._texDl_5__3 )
        goto LABEL_94;
      v38 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v4->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0LL);
      v42 = (UnityEngine_Texture2D_o *)sub_1B64314(UnityEngine_Texture2D_TypeInfo, v40, v41);
      UnityEngine_Texture2D___ctor_69016000(v42, v37, v38, format, 0, 0LL);
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)v4->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      UnityEngine_ImageConversion__LoadImage_69232784(v42, data, 0LL);
    }
    else
    {
LABEL_25:
      v42 = 0LL;
      v36 = 0LL;
    }
    if ( !*p_mBannerWWW
      || !UnityEngine_Networking_UnityWebRequest__get_isDone(
            (UnityEngine_Networking_UnityWebRequest_o *)*p_mBannerWWW,
            0LL) )
    {
      goto LABEL_35;
    }
    this = *p_mBannerWWW;
    if ( !*p_mBannerWWW )
      goto LABEL_94;
    v44 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v44, 0LL);
    if ( !v36 || !IsNullOrEmpty || !v36->fields.__2__current )
      goto LABEL_35;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)v42,
                                                                0LL,
                                                                0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      lnkTexture = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.lnkTexture;
      if ( _4__this->fields.mLoadingIdx >= 1 )
      {
        if ( !lnkTexture )
          goto LABEL_94;
        gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)_4__this->fields.lnkTexture,
                                       0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Object__Instantiate_object_(
                                                                    gameObject,
                                                                    (const MethodInfo_2EBBCA0 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_94;
        v81 = this;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                    0LL);
        if ( !this )
          goto LABEL_94;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
        GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v81, parent, 0LL);
        if ( !byte_49F7116 )
        {
          sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v83);
          byte_49F7116 = 1;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v81,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        if ( !v81 )
          goto LABEL_94;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v81,
                                                                    (const MethodInfo_2E87ED8 *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        additionalTextures = (System_Collections_Generic_List_object__o *)_4__this->fields.additionalTextures;
        if ( !additionalTextures )
          goto LABEL_94;
        items = additionalTextures->fields._items;
        v88 = Method_System_Collections_Generic_List_LinkableTexture__Add__;
        ++additionalTextures->fields._version;
        if ( !items )
          goto LABEL_94;
        size = additionalTextures->fields._size;
        lnkTexture = this;
        if ( (unsigned int)size >= items->max_length )
        {
          System_Collections_Generic_List_object___AddWithResize(
            additionalTextures,
            (Il2CppObject *)this,
            *(const MethodInfo_34AD6D4 **)(*(_QWORD *)(v88[4] + 192LL) + 112LL));
        }
        else
        {
          v90 = &items->obj.klass + size;
          additionalTextures->fields._size = size + 1;
          v90[4] = (Il2CppClass *)lnkTexture;
          sub_1B6406C((ServantStatusBattleListViewItem_o *)(v90 + 4), (int32_t)lnkTexture, v84, v85);
        }
      }
      if ( !lnkTexture )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)lnkTexture->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      (*(void (__fastcall **)(NotificationDialog__StartDownloadBanner_d__54_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
        this,
        v42,
        this->klass[1].vtable._0_Equals.methodPtr);
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)lnkTexture,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v91 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
      v93 = (UnityEngine_GameObject_o *)v91;
      v94 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v94 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v94->static_fields->BANNER_RETRY_MAX;
      v96 = p_BANNER_RETRY_MAX[17];
      v97 = p_BANNER_RETRY_MAX[18];
      v98 = p_BANNER_RETRY_MAX[19];
      VectFromScript = NotificationDialog__getVectFromScript(
                         v91,
                         v4->fields._banner_5__2,
                         (System_String_o *)StringLiteral_22120/*"offset"*/,
                         v92);
      VectFromScript.fields.x = v96 + VectFromScript.fields.x;
      VectFromScript.fields.y = v97 + VectFromScript.fields.y;
      VectFromScript.fields.z = v98 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v93, VectFromScript, 0LL);
      v117 = NotificationDialog__getVectFromScript(
               v99,
               v4->fields._banner_5__2,
               (System_String_o *)StringLiteral_23236/*"size"*/,
               v100);
      x = v117.fields.x;
      y = v117.fields.y;
      z = v117.fields.z;
      if ( !byte_49F7111 )
      {
        sub_1B640C8(&UnityEngine_Vector3_TypeInfo, v101);
        byte_49F7111 = 1;
      }
      static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
      if ( x == static_fields->zeroVector.fields.x
        && y == static_fields->zeroVector.fields.y
        && z == static_fields->zeroVector.fields.z )
      {
        LinkableTexture__MakePixelPerfect((LinkableTexture_o *)lnkTexture, 0LL);
      }
      else
      {
        if ( x == INFINITY )
          v108 = 0x80000000;
        else
          v108 = (int)x;
        if ( y == INFINITY )
          v109 = 0x80000000;
        else
          v109 = (int)y;
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, v108, v109, 0LL);
      }
      IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                v106,
                                                v4->fields._banner_5__2,
                                                (System_String_o *)StringLiteral_24240/*"urlOpenType"*/,
                                                v107);
      banner_5__2 = v4->fields._banner_5__2;
      v112 = (int)IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           IntFromScript,
                           banner_5__2,
                           (System_String_o *)StringLiteral_24239/*"urlLink"*/,
                           v113);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v112, StringFromScript, 0LL);
      NotificationDialog__LoadNext(_4__this, v115);
    }
    else
    {
LABEL_35:
      v46 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v46;
      v47 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v47 = NotificationDialog_TypeInfo;
      }
      if ( v46 <= v47->static_fields->BANNER_RETRY_MAX )
      {
        started = NotificationDialog__StartDownloadBanner(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_69113008((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_36EC03C *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v49 = LocalizationManager__Get((System_String_o *)StringLiteral_9193/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v52 = (ErrorDialog_ClickDelegate_o *)sub_1B64314(ErrorDialog_ClickDelegate_TypeInfo, v50, v51);
        ErrorDialog_ClickDelegate___ctor(
          v52,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__54_0__,
          0LL);
        if ( !Instance )
          goto LABEL_94;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v49, v52, 0, 0LL);
      }
    }
    v54 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v54 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v54, 0LL);
      *p_mBannerWWW = 0LL;
      sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.mBannerWWW, 0, v55, v56);
    }
  }
  else if ( !_1__state )
  {
    v4->fields.__1__state = -1;
    if ( _4__this )
    {
      banners = _4__this->fields.banners;
      if ( banners )
      {
        mLoadingIdx = _4__this->fields.mLoadingIdx;
        if ( (unsigned int)mLoadingIdx >= banners->max_length )
          sub_1B6432C(this, method);
        v29 = banners->m_Items[mLoadingIdx];
        if ( v29 )
        {
          v30 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v29->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
            v32 = (System_Collections_Generic_Dictionary_string__object__c *)v29->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
                ? (struct System_Collections_Generic_Dictionary_string__object__o *)v29
                : 0LL;
          else
            v32 = 0LL;
          v4->fields._banner_5__2 = v32;
          p_banner_5__2 = (ServantStatusBattleListViewItem_o *)&v4->fields._banner_5__2;
          if ( LOBYTE(v29->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
            v58 = (System_Collections_Generic_Dictionary_string__object__c *)v29->klass->_2.typeHierarchy[methodPtr_low - 1] == v30
                ? (int)v29
                : 0;
          else
            v58 = 0;
        }
        else
        {
          v58 = 0;
          v4->fields._banner_5__2 = 0LL;
          p_banner_5__2 = (ServantStatusBattleListViewItem_o *)&v4->fields._banner_5__2;
        }
        sub_1B6406C(p_banner_5__2, v58, v2, v3);
        v62 = NotificationDialog__getStringFromScript(
                v60,
                (System_Collections_Generic_Dictionary_string__object__o *)p_banner_5__2->klass,
                (System_String_o *)StringLiteral_16992/*"bannerUrl"*/,
                v61);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        WebViewFullAddress = NetworkManager__getWebViewFullAddress(v62, 0LL);
        v66 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1B64314(
                                                            UnityEngine_Networking_UnityWebRequest_TypeInfo,
                                                            v64,
                                                            v65);
        UnityEngine_Networking_UnityWebRequest___ctor(v66, WebViewFullAddress, 0LL);
        _4__this->fields.mBannerWWW = v66;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&_4__this->fields.mBannerWWW, (int32_t)v66, v67, v68);
        v71 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1B64314(
                                                                   UnityEngine_Networking_DownloadHandlerTexture_TypeInfo,
                                                                   v69,
                                                                   v70);
        UnityEngine_Networking_DownloadHandlerTexture___ctor(v71, 0, 0LL);
        v4->fields._texDl_5__3 = v71;
        sub_1B6406C((ServantStatusBattleListViewItem_o *)&v4->fields._texDl_5__3, (int32_t)v71, v72, v73);
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
        if ( this )
        {
          UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
            (UnityEngine_Networking_UnityWebRequest_o *)this,
            (UnityEngine_Networking_DownloadHandler_o *)v4->fields._texDl_5__3,
            0LL);
          this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
          v57 = 1;
          _4__this->fields.refuseInit = 1;
          if ( this )
          {
            v74 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0LL);
            v4->fields.__2__current = (Il2CppObject *)v74;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B6406C(p__2__current, (int32_t)v74, v76, v77);
            *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
            return v57;
          }
        }
      }
    }
LABEL_94:
    sub_1B64324(this);
  }
  return 0;
}


Il2CppObject *__fastcall NotificationDialog__StartDownloadBanner_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NotificationDialog__StartDownloadBanner_d__54_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NotificationDialog__StartDownloadBanner_d__54__System_Collections_IEnumerator_Reset(
        NotificationDialog__StartDownloadBanner_d__54_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x2
  System_NotSupportedException_o *v5; // x19
  __int64 v6; // x0

  v2 = sub_1B640DC(&System_NotSupportedException_TypeInfo);
  v5 = (System_NotSupportedException_o *)sub_1B64314(v2, v3, v4);
  System_NotSupportedException___ctor(v5, 0LL);
  v6 = sub_1B640DC(&Method_NotificationDialog__StartDownloadBanner_d__54_System_Collections_IEnumerator_Reset__);
  sub_1B641F0(v5, v6);
}


Il2CppObject *__fastcall NotificationDialog__StartDownloadBanner_d__54__System_Collections_IEnumerator_get_Current(
        NotificationDialog__StartDownloadBanner_d__54_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NotificationDialog__StartDownloadBanner_d__54__System_IDisposable_Dispose(
        NotificationDialog__StartDownloadBanner_d__54_o *this,
        const MethodInfo *method)
{
  ;
}