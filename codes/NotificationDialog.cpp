void __fastcall NotificationDialog___cctor(const MethodInfo *method)
{
  struct NotificationDialog_StaticFields *static_fields; // x8
  NotificationDialog_c *v2; // x8
  struct NotificationDialog_StaticFields *v3; // x9
  struct NotificationDialog_StaticFields *v4; // x9
  struct NotificationDialog_StaticFields *v5; // x9
  struct NotificationDialog_StaticFields *v6; // x9
  struct NotificationDialog_StaticFields *v7; // x9
  struct NotificationDialog_StaticFields *v8; // x9

  if ( (byte_4A5EC02 & 1) == 0 )
  {
    sub_1B885B0(&NotificationDialog_TypeInfo);
    byte_4A5EC02 = 1;
  }
  static_fields = NotificationDialog_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x4334000000000000LL;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  v2 = NotificationDialog_TypeInfo;
  v3 = NotificationDialog_TypeInfo->static_fields;
  *(_QWORD *)&v3->MESSAGE_BASE_POS.fields.x = 0x416B333300000000LL;
  v3->MESSAGE_BASE_POS.fields.z = 0.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->NO_TITLE_MESSAGE_BASE_POS.fields.x = 0x4218000000000000LL;
  v4->NO_TITLE_MESSAGE_BASE_POS.fields.z = 0.0;
  v5 = v2->static_fields;
  *(_QWORD *)&v5->MESSAGE_LINE_POS.fields.x = 0x40A0000000000000LL;
  v5->MESSAGE_LINE_POS.fields.z = 0.0;
  v6 = v2->static_fields;
  *(_OWORD *)&v6->MESSAGE_BASE_SIZE_X = xmmword_BB4300;
  *(_QWORD *)&v6->IMAGE_BASE_POS.fields.y = 0LL;
  v6->IMAGE_BASE_POS.fields.x = 0.0;
  v7 = v2->static_fields;
  *(_QWORD *)&v7->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v7->BUTTON_BASE_POS.fields.z = 0.0;
  v8 = v2->static_fields;
  *(_QWORD *)&v8->BUTTON_TEXT_POS.fields.x = 0xBF80000000000000LL;
  v8->BUTTON_TEXT_POS.fields.z = 0.0;
  *(_QWORD *)&v2->static_fields->BUTTON_BASE_SIZE_X = 0x38000000DALL;
}


void __fastcall NotificationDialog___ctor(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4A5EC01 & 1) == 0 )
  {
    sub_1B885B0(&BaseDialog_TypeInfo);
    byte_4A5EC01 = 1;
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
        bool isAdjustTextPos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s11
  float x; // s9
  UnityEngine_Object_o *noTitleMessageLabel; // x23
  __int64 v27; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  struct UILabel_o *messageLabel; // x23
  int monitor_high; // w27
  float v31; // s12
  float v32; // s0
  UnityEngine_Object_o *v33; // x27
  NotificationDialog_c *v34; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  System_String_o *Empty; // x25
  NotificationDialog_c *v37; // x0
  float v38; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  Il2CppObject *v40; // [xsp+8h] [xbp-98h] BYREF
  Il2CppObject *component; // [xsp+48h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v42; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4A5EBF8 & 1) == 0 )
  {
    sub_1B885B0(&Method_UnityEngine_Component_TryGetComponent_UISprite___);
    sub_1B885B0(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___);
    sub_1B885B0(&System_Math_TypeInfo);
    sub_1B885B0(&NotificationDialog_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    byte_4A5EBF8 = 1;
  }
  component = 0LL;
  v40 = 0LL;
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      baseWindow = this->fields.baseWindow;
      if ( !baseWindow )
        goto LABEL_46;
      messageLabel = this->fields.noTitleMessageLabel;
      if ( !UnityEngine_GameObject__TryGetComponent_object_(
              baseWindow,
              &component,
              (const MethodInfo_2ED0148 *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
        goto LABEL_27;
      baseWindow = (UnityEngine_GameObject_o *)this->fields.okBtnLabel;
      if ( !baseWindow )
        goto LABEL_46;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)baseWindow,
                                                 0LL);
      if ( !baseWindow )
        goto LABEL_46;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                 (UnityEngine_Transform_o *)baseWindow,
                                                 0LL);
      if ( !baseWindow )
        goto LABEL_46;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                 (UnityEngine_Component_o *)baseWindow,
                                                 &v40,
                                                 (const MethodInfo_2E77270 *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)baseWindow & 1) != 0 )
      {
        if ( !component || !v40 )
          goto LABEL_46;
        monitor_high = HIDWORD(component[10].monitor);
        v31 = (float)((float)SHIDWORD(v40[10].monitor) * 0.5) + buttonPosY;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v32 = fabsf((float)((float)monitor_high * 0.5) + -30.0) + fabsf(v31);
        if ( isAdjustTextPos )
          y = v31 + (float)(v32 * 0.5);
        if ( v32 == INFINITY )
          messageSizeY = 0x80000000;
        else
          messageSizeY = (int)v32;
      }
      else
      {
LABEL_27:
        v34 = NotificationDialog_TypeInfo;
        if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
          v34 = NotificationDialog_TypeInfo;
        }
        static_fields = v34->static_fields;
        y = static_fields->NO_TITLE_MESSAGE_BASE_POS.fields.y;
        messageSizeY = static_fields->NO_TITLE_MESSAGE_BASE_SIZE_Y;
      }
      baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
      if ( !baseWindow )
        goto LABEL_46;
      goto LABEL_31;
    }
  }
  messageLabel = this->fields.messageLabel;
  v33 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v33, 0LL, 0LL);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.noTitleMessageLabel;
    if ( !baseWindow )
      goto LABEL_46;
LABEL_31:
    UILabel__set_text((UILabel_o *)baseWindow, string_TypeInfo->static_fields->Empty, 0LL);
  }
  if ( message )
  {
    baseWindow = (UnityEngine_GameObject_o *)System_String__Trim_61736392(message, 0xAu, 0LL);
    Empty = (System_String_o *)baseWindow;
    if ( messageLabel )
      goto LABEL_34;
LABEL_46:
    sub_1B8880C(baseWindow, v27);
  }
  Empty = string_TypeInfo->static_fields->Empty;
  if ( !messageLabel )
    goto LABEL_46;
LABEL_34:
  UILabel__set_spacingY(messageLabel, spacingY, 0LL);
  v37 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v37 = NotificationDialog_TypeInfo;
  }
  UIWidget__SetDimensions((UIWidget_o *)messageLabel, v37->static_fields->MESSAGE_BASE_SIZE_X, messageSizeY, 0LL);
  UILabel__set_maxLineCount(messageLabel, maxLine, 0LL);
  if ( !messageFontSize )
    messageFontSize = this->fields.MESSAGE_FONT_SIZE;
  UILabel__set_fontSize(messageLabel, messageFontSize, 0LL);
  if ( adjustText )
    WrapControlText__textAdjust(messageLabel, Empty, messageLabel->fields.mFontSize, 0, 0, 0LL);
  else
    UILabel__set_text(messageLabel, Empty, 0LL);
  if ( messagePosYForcedAdd == 0.0 )
    v38 = y;
  else
    v38 = y + messagePosYForcedAdd;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
  v42.fields.x = x;
  v42.fields.y = v38;
  v42.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v42, 0LL);
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
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  __int64 v18; // x1
  UILabel_o *messageLabel; // x0
  struct UILabel_o *v20; // x24
  struct UIWidget_OnDimensionsChanged_o *onChange; // x10
  System_String_o *Empty; // x1
  UnityEngine_Object_o *v23; // x25
  System_String_o *v24; // x23
  NotificationDialog_o *gameObject; // x20
  const MethodInfo *v26; // x3
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4A5EBF9 & 1) == 0 )
  {
    sub_1B885B0(&NotificationDialog_TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&string_TypeInfo);
    sub_1B885B0(&StringLiteral_21406/*"messageOffset"*/);
    byte_4A5EBF9 = 1;
  }
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
      v20 = this->fields.noTitleMessageLabel;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
      }
      if ( !this->fields.messageLabel )
LABEL_24:
        sub_1B8880C(messageLabel, v18);
      onChange = messageLabel->fields.onChange;
      messageLabel = this->fields.messageLabel;
      messageSizeY = HIDWORD(onChange->fields.method_info);
      y = *(float *)&onChange->fields.method;
      Empty = string_TypeInfo->static_fields->Empty;
      goto LABEL_16;
    }
  }
  v20 = this->fields.messageLabel;
  v23 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v23, 0LL, 0LL) )
  {
    messageLabel = this->fields.noTitleMessageLabel;
    if ( !messageLabel )
      goto LABEL_24;
    Empty = string_TypeInfo->static_fields->Empty;
LABEL_16:
    UILabel__set_text(messageLabel, Empty, 0LL);
  }
  if ( message )
    v24 = System_String__Trim_61736392(message, 0xAu, 0LL);
  else
    v24 = string_TypeInfo->static_fields->Empty;
  messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
  if ( !v20 )
    goto LABEL_24;
  UIWidget__SetDimensions(
    (UIWidget_o *)v20,
    NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
    messageSizeY,
    0LL);
  UILabel__set_maxLineCount(v20, maxLine, 0LL);
  UILabel__set_fontSize(v20, this->fields.MESSAGE_FONT_SIZE, 0LL);
  WrapControlText__textAdjust(v20, v24, v20->fields.mFontSize, 0, 0, 0LL);
  gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v20, 0LL);
  VectFromScript = NotificationDialog__getVectFromScript(
                     gameObject,
                     script,
                     (System_String_o *)StringLiteral_21406/*"messageOffset"*/,
                     v26);
  VectFromScript.fields.x = x + VectFromScript.fields.x;
  VectFromScript.fields.z = z + VectFromScript.fields.z;
  VectFromScript.fields.y = y + VectFromScript.fields.y;
  GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)gameObject, VectFromScript, 0LL);
}


void __fastcall NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_45249652(this, 0LL, v2);
}


void __fastcall NotificationDialog__Close_45249652(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_Action_o *v6; // x20

  if ( (byte_4A5EBFD & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_NotificationDialog_EndClose__);
    byte_4A5EBFD = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0LL);
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
    sub_1B88554(p_closeEndFunc, 0, v3, v4);
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
  void *titleLabel; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  int32_t v9; // w2
  int32_t v10; // w3
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v12; // x8
  UnityEngine_Object_o *v13; // x20
  struct LinkableTexture_o *v14; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  int32_t v16; // w21
  int32_t v17; // w2
  UnityEngine_Object_o *gameObject; // x22
  int v19; // w8
  System_Collections_Generic_List_object__o *v20; // x21
  int32_t v21; // w2
  int32_t v22; // w3
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  int32_t v24; // w21
  int32_t v25; // w2
  UnityEngine_Object_o *v26; // x22
  UnityEngine_Object_o *v27; // x0
  int v28; // w8
  System_Collections_Generic_List_object__o *v29; // x21
  int32_t v30; // w2
  int32_t v31; // w3

  if ( (byte_4A5EBF4 & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LinkableSprite___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LinkableTexture___ctor__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
    sub_1B885B0(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
    sub_1B885B0(&System_Collections_Generic_List_LinkableSprite__TypeInfo);
    sub_1B885B0(&System_Collections_Generic_List_LinkableTexture__TypeInfo);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EBF4 = 1;
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
    v4 = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v4, 0LL, 0LL) )
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
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mBannerWWW, 0, v9, v10);
    }
    lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    titleLabel = (void *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
    if ( ((unsigned __int8)titleLabel & 1) != 0 )
    {
      v12 = this->fields.lnkTexture;
      if ( !v12 )
        goto LABEL_65;
      titleLabel = v12->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_65;
      v13 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                      titleLabel,
                                      *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_69459380(v13, 0LL);
      v14 = this->fields.lnkTexture;
      if ( !v14 )
        goto LABEL_65;
      titleLabel = v14->fields.mUiTexture;
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
      v16 = 0;
      while ( 1 )
      {
        v17 = *((_DWORD *)titleLabel + 6);
        if ( v16 >= v17 )
          break;
        titleLabel = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)titleLabel,
                       v16,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
        if ( titleLabel )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)titleLabel,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_69459380(gameObject, 0LL);
          titleLabel = *p_additionalSprites;
          ++v16;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_65;
      }
      v19 = *((_DWORD *)titleLabel + 7) + 1;
      *((_DWORD *)titleLabel + 6) = 0;
      *((_DWORD *)titleLabel + 7) = v19;
      if ( v17 >= 1 )
        System_Array__Clear(*((System_Array_o **)titleLabel + 2), 0, v17, 0LL);
    }
    else
    {
      v20 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_LinkableSprite__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v20,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v20;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.additionalSprites, (int32_t)v20, v21, v22);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    titleLabel = this->fields.additionalTextures;
    if ( titleLabel )
    {
      v24 = 0;
      while ( 1 )
      {
        v25 = *((_DWORD *)titleLabel + 6);
        if ( v24 >= v25 )
          break;
        titleLabel = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)titleLabel,
                       v24,
                       (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
        if ( titleLabel )
        {
          titleLabel = (void *)*((_QWORD *)titleLabel + 6);
          if ( titleLabel )
          {
            v26 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                            titleLabel,
                                            *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_69459380(v26, 0LL);
            titleLabel = *p_additionalTextures;
            if ( *p_additionalTextures )
            {
              titleLabel = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)titleLabel,
                             v24,
                             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
              if ( titleLabel )
              {
                v27 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0LL);
                UnityEngine_Object__Destroy_69459380(v27, 0LL);
                titleLabel = *p_additionalTextures;
                ++v24;
                if ( *p_additionalTextures )
                  continue;
              }
            }
          }
        }
        goto LABEL_65;
      }
      v28 = *((_DWORD *)titleLabel + 7) + 1;
      *((_DWORD *)titleLabel + 6) = 0;
      *((_DWORD *)titleLabel + 7) = v28;
      if ( v25 >= 1 )
        System_Array__Clear(*((System_Array_o **)titleLabel + 2), 0, v25, 0LL);
    }
    else
    {
      v29 = (System_Collections_Generic_List_object__o *)sub_1B887FC(System_Collections_Generic_List_LinkableTexture__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v29,
        (const MethodInfo_34FD000 *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v29;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.additionalTextures, (int32_t)v29, v30, v31);
    }
    titleLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      BaseDialog__Init((BaseDialog_o *)this, 0LL);
      return;
    }
LABEL_65:
    sub_1B8880C(titleLabel, method);
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.mAfterLoad, (int32_t)callback, (int32_t)method, v3);
  this->fields.mLoadingIdx = 0;
  started = NotificationDialog__StartDownloadBanner(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_1B8880C(this, method);
  if ( v3 >= (signed int)banners->max_length )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0LL);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
}


void __fastcall NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct NotificationDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4A5EBFE & 1) == 0 )
  {
    sub_1B885B0(&Method_NotificationDialog_OnClickOk__);
    byte_4A5EBFE = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NotificationDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_NotificationDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B885C8(Method_NotificationDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B88594(v3, v3[4]);
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
  System_Nullable_int__o v22; // x23
  System_Nullable_int__o v23; // x24
  bool v24; // w9
  System_Nullable_int__o v25; // x12
  int32_t v26; // w13
  System_Nullable_float__o v27; // x14
  int32_t v28; // w15
  int32_t v29; // w16
  bool v30; // w10
  int32_t v33; // w29
  NotificationDialog_ClickDelegate_o *v35; // x26
  System_String_o *v36; // x20
  System_String_o *v37; // x21
  NotificationDialog_o *v38; // x28
  int32_t v39; // w29
  float value; // s9
  NotificationDialog_c *v42; // x0
  int32_t v43; // w25
  float y; // s1
  NotificationDialog_c *v45; // x0
  int32_t v46; // w27
  System_Nullable_float__o v48; // [xsp+0h] [xbp-B0h]
  bool v49; // [xsp+Ch] [xbp-A4h]
  bool v50; // [xsp+Ch] [xbp-A4h]
  bool v52; // [xsp+10h] [xbp-A0h]
  bool v53; // [xsp+10h] [xbp-A0h]
  int32_t v55; // [xsp+18h] [xbp-98h]
  int32_t v56; // [xsp+18h] [xbp-98h]
  int32_t v58; // [xsp+20h] [xbp-90h]
  int32_t v59; // [xsp+20h] [xbp-90h]
  System_Nullable_float__o v60; // [xsp+28h] [xbp-88h]
  System_Nullable_float__o v61; // [xsp+28h] [xbp-88h]
  System_Nullable_int__o v62; // [xsp+30h] [xbp-80h]
  System_Nullable_int__o v63; // [xsp+30h] [xbp-80h]
  int32_t titleSizea; // [xsp+38h] [xbp-78h]
  int32_t titleSizeb; // [xsp+38h] [xbp-78h]

  v22 = buttonWidgetSizeY;
  v21 = buttonPosY;
  v23 = buttonWidgetSizeX;
  v24 = adjustText;
  v25 = messageWidgetSizeY;
  v26 = spacingY;
  v27 = titlePosY;
  v28 = onClickOkSeKind;
  v29 = messageFontSize;
  v30 = canMaskTouchClose;
  v33 = maxLine;
  v35 = func;
  v36 = message;
  v37 = title;
  v38 = this;
  if ( (byte_4A5EBF5 & 1) == 0 )
  {
    v39 = titleSize;
    sub_1B885B0(&NotificationDialog_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_float__get_HasValue__);
    v21 = buttonPosY;
    v30 = canMaskTouchClose;
    v24 = adjustText;
    v29 = messageFontSize;
    v28 = onClickOkSeKind;
    v27 = titlePosY;
    v25 = messageWidgetSizeY;
    v38 = this;
    titleSize = v39;
    v33 = maxLine;
    v35 = func;
    v36 = message;
    v37 = title;
    v22 = buttonWidgetSizeY;
    v23 = buttonWidgetSizeX;
    v26 = spacingY;
    byte_4A5EBF5 = 1;
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
      v60 = v27;
      v62 = v25;
      v43 = v26;
      v58 = v28;
      v55 = v29;
      v49 = v30;
      v52 = v24;
      v48 = v21;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v21 = v48;
      v30 = v49;
      v24 = v52;
      v29 = v55;
      v28 = v58;
      v27 = v60;
      v25 = v62;
      titleSize = titleSizea;
      v42 = NotificationDialog_TypeInfo;
      v26 = v43;
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
      v61 = v27;
      v63 = v25;
      v46 = v26;
      v59 = v28;
      v56 = v29;
      v50 = v30;
      v53 = v24;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v30 = v50;
      v24 = v53;
      v29 = v56;
      v28 = v59;
      v27 = v61;
      v25 = v63;
      titleSize = titleSizeb;
      v45 = NotificationDialog_TypeInfo;
      v26 = v46;
    }
    y = v45->static_fields->BUTTON_BASE_POS.fields.y;
  }
  NotificationDialog__OpenDialog(
    v38,
    v37,
    v36,
    v35,
    panelDepth,
    v33,
    titleSize,
    isLineDraw,
    v30,
    value,
    y,
    v29,
    v28,
    v27,
    v26,
    v25,
    v24,
    v23,
    v22,
    messagePosYForcedAdd,
    1,
    *(const MethodInfo **)&buttonPosY);
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
        bool isAdjustTextPos,
        const MethodInfo *method)
{
  UIPanel_o *TargetPanel; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v34; // x21
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x29
  System_String_o *v38; // x1
  NotificationDialog_c *v39; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s12
  float z; // s11
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v45; // x0
  struct NotificationDialog_StaticFields *v46; // x8
  float v47; // s11
  float v48; // s12
  unsigned __int64 v49; // x28
  UnityEngine_Object_o *lineSprite; // x29
  NotificationDialog_c *v51; // x0
  struct NotificationDialog_StaticFields *v52; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x22
  UnityEngine_Object_o *lnkTexture; // x22
  UnityEngine_Object_o *okBtnLabel; // x22
  NotificationDialog_c *v58; // x0
  struct NotificationDialog_StaticFields *v59; // x8
  UILabel_o *v60; // x22
  float v61; // s10
  float v62; // s9
  float v63; // s13
  float v64; // s11
  float y; // s12
  UnityEngine_GameObject_o *v66; // x0
  UnityEngine_GameObject_o *v67; // x0
  UnityEngine_GameObject_o *v68; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v70; // x22
  unsigned __int64 v71; // x19
  unsigned __int64 v72; // x25
  System_Action_o *v73; // x19
  const MethodInfo *v74; // [xsp+8h] [xbp-D8h]
  float v; // [xsp+4Ch] [xbp-94h]
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v80; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v81; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v82; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EBF6 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_NotificationDialog_EndOpen__);
    sub_1B885B0(&NotificationDialog_TypeInfo);
    sub_1B885B0(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1B885B0(&Method_System_Nullable_float__get_HasValue__);
    sub_1B885B0(&Method_System_Nullable_int__get_HasValue__);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EBF6 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v34 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_107;
      this->fields.keepPanelDepth = v34->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, v31, v32);
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
      v38 = title;
    else
      v38 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v38, 0LL);
    v39 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v39 = NotificationDialog_TypeInfo;
    }
    static_fields = v39->static_fields;
    x = static_fields->TITLE_BASE_POS.fields.x;
    z = static_fields->TITLE_BASE_POS.fields.z;
    if ( titlePosY.fields.hasValue )
    {
      value = titlePosY.fields.value;
    }
    else
    {
      if ( !v39->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v39);
        static_fields = NotificationDialog_TypeInfo->static_fields;
      }
      value = static_fields->TITLE_BASE_POS.fields.y;
    }
    v = value;
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_107;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v79.fields.y = v;
    v79.fields.x = x;
    v79.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v79, 0LL);
  }
  v45 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v45 = NotificationDialog_TypeInfo;
  }
  v46 = v45->static_fields;
  v47 = v46->MESSAGE_BASE_POS.fields.x;
  v48 = v46->MESSAGE_BASE_POS.fields.z;
  if ( v46->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = v46->MESSAGE_BASE_POS.fields.y;
  if ( messageWidgetSizeY.fields.hasValue )
  {
    v49 = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeY);
  }
  else
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v46 = NotificationDialog_TypeInfo->static_fields;
    }
    LODWORD(v49) = v46->MESSAGE_BASE_SIZE_Y;
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
      v51 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v51 = NotificationDialog_TypeInfo;
      }
      v52 = v51->static_fields;
      v47 = v52->MESSAGE_LINE_POS.fields.x;
      messagePosY = v52->MESSAGE_LINE_POS.fields.y;
      v48 = v52->MESSAGE_LINE_POS.fields.z;
      LODWORD(v49) = v52->MESSAGE_LINE_SIZE_Y;
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v80.fields.x = v47;
    v80.fields.y = messagePosY;
    v80.fields.z = v48;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      v49,
      maxLine,
      messageFontSize,
      adjustText,
      v80,
      buttonPosY,
      messagePosYForcedAdd,
      isAdjustTextPos,
      v74);
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
    v58 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v58 = NotificationDialog_TypeInfo;
    }
    v59 = v58->static_fields;
    v60 = this->fields.okBtnLabel;
    v61 = v59->BUTTON_BASE_POS.fields.x;
    v62 = v59->BUTTON_BASE_POS.fields.z;
    v63 = v59->BUTTON_TEXT_POS.fields.x;
    y = v59->BUTTON_TEXT_POS.fields.y;
    v64 = v59->BUTTON_TEXT_POS.fields.z;
    if ( v59->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v59->BUTTON_BASE_POS.fields.y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v60 )
      goto LABEL_107;
    UILabel__set_text(v60, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_107;
    v66 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v81.fields.x = v63;
    v81.fields.y = y;
    v81.fields.z = v64;
    GameObjectExtensions__SetLocalPosition(v66, v81, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_107;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_107;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_107;
    v67 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v82.fields.x = v61;
    v82.fields.y = buttonPosY;
    v82.fields.z = v62;
    GameObjectExtensions__SetLocalPosition(v67, v82, 0LL);
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
    v68 = (UnityEngine_GameObject_o *)transform;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v70 = UnityEngine_GameObject__GetComponent_object_(
            v68,
            (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v70, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( buttonWidgetSizeX.fields.hasValue )
        {
          v71 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeX);
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v71) = transform->fields.onChange[1].monitor;
        }
        if ( buttonWidgetSizeY.fields.hasValue )
        {
          v72 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeY);
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
          LODWORD(v72) = HIDWORD(transform->fields.onChange[1].monitor);
          if ( !Component_object )
            goto LABEL_107;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v71, 0LL);
        UIWidget__set_height((UIWidget_o *)Component_object, v72, 0LL);
        if ( !v70 )
          goto LABEL_107;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v70, 0LL);
        size.fields.x = (float)(int)v71;
        size.fields.y = (float)(int)v72;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v70, size, 0LL);
      }
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( v34 )
    {
      UIPanel__set_depth(v34, keepPanelDepth, 0LL);
      goto LABEL_106;
    }
LABEL_107:
    sub_1B8880C(transform, keepPanelDepth);
  }
LABEL_106:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v73 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v73, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v73, 0, 0LL);
}


void __fastcall NotificationDialog__Open_45244228(
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
        bool isAdjustTextPos,
        const MethodInfo *method)
{
  const MethodInfo *v17; // [xsp+50h] [xbp-20h]

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
    isAdjustTextPos,
    v17);
}


void __fastcall NotificationDialog__Open_45245232(
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
  UIPanel_o *TargetPanel; // x0
  int32_t v20; // w2
  int32_t v21; // w3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v23; // x22
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v27; // x1
  NotificationDialog_o *gameObject; // x0
  const MethodInfo *v29; // x3
  NotificationDialog_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x26
  float *p_BANNER_RETRY_MAX; // x8
  float v33; // s8
  float v34; // s9
  float v35; // s10
  NotificationDialog_c *v36; // x0
  float *v37; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v39; // s8
  float v40; // s9
  float v41; // s10
  int32_t v42; // w26
  NotificationDialog_c *v43; // x0
  float *v44; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  const MethodInfo *v47; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 methodPtr_low; // x11
  struct System_Object_array *v50; // x0
  struct System_Object_array **p_sprites; // x23
  int32_t v52; // w2
  int32_t v53; // w3
  __int64 v54; // x8
  UnityEngine_Component_o *v55; // x25
  unsigned __int64 v56; // x21
  Il2CppObject *v57; // x25
  UnityEngine_GameObject_o *v58; // x25
  UnityEngine_Component_o *parent; // x0
  int32_t v60; // w2
  int32_t v61; // w3
  System_Collections_Generic_List_object__o *additionalSprites; // x8
  struct System_Object_array *items; // x9
  _QWORD *v64; // x10
  __int64 size; // x11
  Il2CppClass **v66; // x0
  struct System_Object_array *v67; // x8
  System_Collections_Generic_Dictionary_string__object__o *v68; // x8
  __int64 v69; // x11
  System_Collections_Generic_Dictionary_string__object__o *v70; // x26
  System_Collections_Generic_Dictionary_string__object__o *v71; // x22
  NotificationDialog_o *v72; // x0
  UISprite_o *klass; // x20
  UnityEngine_GameObject_o *v74; // x27
  const MethodInfo *v75; // x3
  System_String_o *StringFromScript; // x29
  NotificationDialog_o *v77; // x0
  const MethodInfo *v78; // x3
  NotificationDialog_c *v79; // x8
  UnityEngine_GameObject_o *v80; // x27
  float *v81; // x8
  float v82; // s8
  float v83; // s9
  float v84; // s10
  NotificationDialog_o *v85; // x0
  const MethodInfo *v86; // x3
  float x; // s9
  float y; // s8
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v91; // x0
  const MethodInfo *v92; // x3
  int32_t v93; // w1
  int32_t v94; // w2
  NotificationDialog_o *IntFromScript; // x0
  int32_t v96; // w27
  const MethodInfo *v97; // x3
  System_String_o *v98; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v100; // x11
  struct System_Object_array *v101; // x0
  int32_t v102; // w2
  int32_t v103; // w3
  struct System_Object_array *banners; // x8
  int v105; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  UILabel_o *v107; // x23
  NotificationDialog_o *v108; // x0
  const MethodInfo *v109; // x3
  NotificationDialog_c *v110; // x8
  UnityEngine_GameObject_o *v111; // x23
  float *v112; // x8
  float v113; // s8
  float v114; // s9
  float v115; // s10
  System_Action_o *v116; // x20
  System_Action_o *v117; // x20
  const MethodInfo *v118; // x2
  UIPanel_o *v120; // [xsp+8h] [xbp-88h]
  Il2CppObject *value; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EBF7 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&AtlasManager_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
    sub_1B885B0(&Method_System_Collections_Generic_List_LinkableSprite__Add__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&Method_NotificationDialog_EndOpen__);
    sub_1B885B0(&Method_NotificationDialog__Open_b__42_0__);
    sub_1B885B0(&NotificationDialog_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&StringLiteral_17067/*"banners"*/);
    sub_1B885B0(&StringLiteral_23334/*"size"*/);
    sub_1B885B0(&StringLiteral_24339/*"urlOpenType"*/);
    sub_1B885B0(&StringLiteral_22208/*"offset"*/);
    sub_1B885B0(&StringLiteral_23960/*"titleOffset"*/);
    sub_1B885B0(&StringLiteral_23445/*"spriteName"*/);
    sub_1B885B0(&StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1B885B0(&StringLiteral_24338/*"urlLink"*/);
    sub_1B885B0(&StringLiteral_17646/*"buttonOffset"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    sub_1B885B0(&StringLiteral_23446/*"sprites"*/);
    byte_4A5EBF7 = 1;
  }
  value = 0LL;
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v23 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v23 )
        goto LABEL_138;
      this->fields.keepPanelDepth = v23->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.clickFunc, (int32_t)func, v20, v21);
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
    v27 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v27, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
    v30 = NotificationDialog_TypeInfo;
    v31 = (UnityEngine_GameObject_o *)gameObject;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v30 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v30->static_fields->BANNER_RETRY_MAX;
    v33 = p_BANNER_RETRY_MAX[1];
    v34 = p_BANNER_RETRY_MAX[2];
    v35 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_23960/*"titleOffset"*/,
                       v29);
    VectFromScript.fields.x = v33 + VectFromScript.fields.x;
    VectFromScript.fields.y = v34 + VectFromScript.fields.y;
    VectFromScript.fields.z = v35 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v31, VectFromScript, 0LL);
  }
  v36 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v36 = NotificationDialog_TypeInfo;
  }
  v37 = (float *)&v36->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v39 = v37[4];
  v40 = v37[5];
  v41 = v37[6];
  v42 = *((_DWORD *)v37 + 14);
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
      v43 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v43 = NotificationDialog_TypeInfo;
      }
      v44 = (float *)&v43->static_fields->BANNER_RETRY_MAX;
      v39 = v44[10];
      v40 = v44[11];
      v41 = v44[12];
      v42 = *((_DWORD *)v44 + 16);
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v123.fields.x = v39;
    v123.fields.y = v40;
    v123.fields.z = v41;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v42, maxLine, v123, script, v47);
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
                               (Il2CppObject *)StringLiteral_23446/*"sprites"*/,
                               &value,
                               (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
    v50 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)value,
            (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v50;
    p_sprites = &this->fields.sprites;
    sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.sprites, (int32_t)v50, v52, v53);
    if ( this->fields.sprites && (v54 = *(_QWORD *)&this->fields.sprites->max_length) != 0 )
    {
      if ( (int)v54 >= 1 )
      {
        v55 = (UnityEngine_Component_o *)this->fields.lnkSprite;
        v56 = 0LL;
        v120 = v23;
        while ( 1 )
        {
          if ( v56 )
          {
            transform = (UILabel_o *)this->fields.lnkSprite;
            if ( !transform )
              break;
            v57 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UILabel_o *)UnityEngine_Object__Instantiate_object_(
                                       v57,
                                       (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v58 = (UnityEngine_GameObject_o *)transform;
            transform = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)this->fields.lnkSprite,
                                       0LL);
            if ( !transform )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)transform,
                                                  0LL);
            GameObjectExtensions__SetParent(v58, parent, 0LL);
            if ( !byte_4A55CE6 )
            {
              sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
              byte_4A55CE6 = 1;
            }
            GameObjectExtensions__SetLocalScale(v58, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            if ( !v58 )
              break;
            transform = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                       v58,
                                       (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            additionalSprites = (System_Collections_Generic_List_object__o *)this->fields.additionalSprites;
            if ( !additionalSprites )
              break;
            items = additionalSprites->fields._items;
            v64 = Method_System_Collections_Generic_List_LinkableSprite__Add__;
            ++additionalSprites->fields._version;
            if ( !items )
              break;
            size = additionalSprites->fields._size;
            v55 = (UnityEngine_Component_o *)transform;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                additionalSprites,
                (Il2CppObject *)transform,
                *(const MethodInfo_34FD834 **)(*(_QWORD *)(v64[4] + 192LL) + 112LL));
            }
            else
            {
              v66 = &items->obj.klass + size;
              additionalSprites->fields._size = size + 1;
              v66[4] = (Il2CppClass *)v55;
              sub_1B88554((ServantStatusBattleListViewItem_o *)(v66 + 4), (int32_t)v55, v60, v61);
            }
          }
          v67 = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( v56 >= v67->max_length )
            sub_1B88814(transform, keepPanelDepth);
          v68 = (System_Collections_Generic_Dictionary_string__object__o *)v67->m_Items[v56];
          if ( v68
            && (v69 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(v68->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v69) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v68->klass->_2.typeHierarchy[v69 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v70 = v68;
            else
              v70 = 0LL;
            if ( !v55 )
              break;
          }
          else
          {
            v70 = 0LL;
            if ( !v55 )
              break;
          }
          v71 = script;
          v72 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v55, 0LL);
          klass = (UISprite_o *)v55[2].klass;
          v74 = (UnityEngine_GameObject_o *)v72;
          StringFromScript = NotificationDialog__getStringFromScript(
                               v72,
                               v70,
                               (System_String_o *)StringLiteral_23445/*"spriteName"*/,
                               v75);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          transform = (UILabel_o *)AtlasManager__SetEventUI(klass, StringFromScript, 0LL);
          if ( !v74 )
            break;
          UnityEngine_GameObject__SetActive(v74, (unsigned __int8)transform & 1, 0LL);
          v77 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v55, 0LL);
          v79 = NotificationDialog_TypeInfo;
          v80 = (UnityEngine_GameObject_o *)v77;
          script = v71;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v79 = NotificationDialog_TypeInfo;
          }
          v81 = (float *)&v79->static_fields->BANNER_RETRY_MAX;
          v23 = v120;
          v82 = v81[17];
          v83 = v81[18];
          v84 = v81[19];
          v124 = NotificationDialog__getVectFromScript(v77, v70, (System_String_o *)StringLiteral_22208/*"offset"*/, v78);
          v124.fields.x = v82 + v124.fields.x;
          v124.fields.y = v83 + v124.fields.y;
          v124.fields.z = v84 + v124.fields.z;
          GameObjectExtensions__SetLocalPosition(v80, v124, 0LL);
          v125 = NotificationDialog__getVectFromScript(v85, v70, (System_String_o *)StringLiteral_23334/*"size"*/, v86);
          x = v125.fields.x;
          y = v125.fields.y;
          z = v125.fields.z;
          if ( !byte_4A55CE1 )
          {
            sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
            byte_4A55CE1 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          if ( x == static_fields->zeroVector.fields.x
            && y == static_fields->zeroVector.fields.y
            && z == static_fields->zeroVector.fields.z )
          {
            LinkableSprite__MakePixelPerfect((LinkableSprite_o *)v55, 0LL);
          }
          else
          {
            v93 = x == INFINITY ? 0x80000000 : (int)x;
            v94 = y == INFINITY ? 0x80000000 : (int)y;
            LinkableSprite__SetSize((LinkableSprite_o *)v55, v93, v94, 0LL);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v91,
                                                    v70,
                                                    (System_String_o *)StringLiteral_24339/*"urlOpenType"*/,
                                                    v92);
          v96 = (int)IntFromScript;
          v98 = NotificationDialog__getStringFromScript(IntFromScript, v70, (System_String_o *)StringLiteral_24338/*"urlLink"*/, v97);
          LinkableSprite__SetUp((LinkableSprite_o *)v55, v96, v98, 0LL);
          if ( !*p_sprites )
            break;
          if ( (__int64)++v56 >= (int)(*p_sprites)->max_length )
            goto LABEL_98;
        }
LABEL_138:
        sub_1B8880C(transform, keepPanelDepth);
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
                               (Il2CppObject *)StringLiteral_17067/*"banners"*/,
                               &value,
                               (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !value )
        goto LABEL_138;
      v100 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)v100
        || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v100 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_138;
      }
      v101 = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)value,
               (const MethodInfo_34FF38C *)Method_System_Collections_Generic_List_object__ToArray__);
      this->fields.banners = v101;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.banners, (int32_t)v101, v102, v103);
      banners = this->fields.banners;
      if ( banners )
      {
        if ( *(_QWORD *)&banners->max_length )
        {
          v105 = 0;
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
  v105 = 1;
LABEL_113:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v107 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3756/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v107 )
      goto LABEL_138;
    UILabel__set_text(v107, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    v108 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v110 = NotificationDialog_TypeInfo;
    v111 = (UnityEngine_GameObject_o *)v108;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v110 = NotificationDialog_TypeInfo;
    }
    v112 = (float *)&v110->static_fields->BANNER_RETRY_MAX;
    v113 = v112[20];
    v114 = v112[21];
    v115 = v112[22];
    v126 = NotificationDialog__getVectFromScript(v108, script, (System_String_o *)StringLiteral_17646/*"buttonOffset"*/, v109);
    v126.fields.x = v113 + v126.fields.x;
    v126.fields.y = v114 + v126.fields.y;
    v126.fields.z = v115 + v126.fields.z;
    GameObjectExtensions__SetLocalPosition(v111, v126, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v23, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !v23 )
      goto LABEL_138;
    UIPanel__set_depth(v23, keepPanelDepth, 0LL);
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  if ( v105 )
  {
    v116 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v116, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v116, 0, 0LL);
  }
  else
  {
    transform = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v117 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
    System_Action___ctor(v117, (Il2CppObject *)this, Method_NotificationDialog__Open_b__42_0__, 0LL);
    NotificationDialog__LoadBanners(this, v117, v118);
  }
}


System_Collections_IEnumerator_o *__fastcall NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  int32_t v5; // w3

  if ( (byte_4A5EBFF & 1) == 0 )
  {
    sub_1B885B0(&NotificationDialog__StartDownloadBanner_d__54_TypeInfo);
    byte_4A5EBFF = 1;
  }
  v3 = sub_1B887FC(NotificationDialog__StartDownloadBanner_d__54_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1B88554((ServantStatusBattleListViewItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall NotificationDialog___Open_b__42_0(NotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  System_Action_o *v4; // x20

  if ( (byte_4A5EC03 & 1) == 0 )
  {
    sub_1B885B0(&System_Action_TypeInfo);
    sub_1B885B0(&Method_NotificationDialog_EndOpen__);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4A5EC03 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1B8880C(baseWindow, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v4 = (System_Action_o *)sub_1B887FC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog___StartDownloadBanner_b__54_0(
        NotificationDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4A5EC04 & 1) == 0 )
  {
    sub_1B885B0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4A5EC04 = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1B8880C(0LL, v7);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0LL);
  }
}


int32_t __fastcall NotificationDialog__getIntFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5EBFC & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    this = (NotificationDialog_o *)sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4A5EBFC = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1B8880C(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v6 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v6, 0LL);
}


System_String_o *__fastcall NotificationDialog__getStringFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4A5EBFB & 1) == 0 )
  {
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&string_TypeInfo);
    this = (NotificationDialog_o *)sub_1B885B0(&StringLiteral_1/*""*/);
    byte_4A5EBFB = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1B8880C(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  Il2CppObject *v6; // x19
  __int64 methodPtr_low; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  Il2CppObject *Item; // x20
  double v13; // d8
  Il2CppObject *v14; // x0
  double v15; // d1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4A5EBFA & 1) == 0 )
  {
    sub_1B885B0(&System_Convert_TypeInfo);
    sub_1B885B0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1B885B0(&Method_System_Collections_Generic_List_object__get_Item__);
    this = (NotificationDialog_o *)sub_1B885B0(&System_Collections_Generic_List_object__TypeInfo);
    byte_4A5EBFA = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1B8880C(this, script);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_31C89D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v6 = value) != 0LL
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v13 = System_Convert__ToDouble(Item, 0LL);
    v14 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v6,
            1,
            (const MethodInfo_34FD564 *)Method_System_Collections_Generic_List_object__get_Item__);
    v15 = System_Convert__ToDouble(v14, 0LL);
    x = v13;
    y = v15;
    z = 0.0;
  }
  else
  {
    if ( !byte_4A55CE1 )
    {
      sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
      byte_4A55CE1 = 1;
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
  if ( (byte_4A5EC00 & 1) == 0 )
  {
    sub_1B885B0(&StringLiteral_15652/*"Window/OkBtn"*/);
    byte_4A5EC00 = 1;
  }
  return (System_String_o *)StringLiteral_15652/*"Window/OkBtn"*/;
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
  sub_1B88554((ServantStatusBattleListViewItem_o *)&this->fields.method, (int32_t)object, method, (int32_t)a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B88670(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B88828(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B886D8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_19D2F80;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_19D2F38;
}


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
  if ( (byte_4A5EC05 & 1) == 0 )
  {
    sub_1B885B0(&bool_TypeInfo);
    byte_4A5EC05 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B88564(this, v9, callback, object);
}


void __fastcall NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B88568(result, 0LL, method);
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
  int32_t _1__state; // w8
  struct NotificationDialog_o *_4__this; // x19
  struct System_Object_array *banners; // x8
  __int64 mLoadingIdx; // x9
  Il2CppObject *v9; // x8
  System_Collections_Generic_Dictionary_string__object__c *v10; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__object__o *v12; // x11
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  NotificationDialog__StartDownloadBanner_d__54_o **p_mBannerWWW; // x21
  System_String_o *error; // x0
  NotificationDialog__StartDownloadBanner_d__54_o *v16; // x23
  int32_t v17; // w24
  int32_t v18; // w25
  int32_t format; // w26
  UnityEngine_Texture2D_o *v20; // x22
  System_Byte_array *data; // x0
  System_String_o *v22; // x0
  bool IsNullOrEmpty; // w0
  int v24; // w20
  NotificationDialog_c *v25; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v27; // x22
  ErrorDialog_ClickDelegate_o *v28; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v30; // x0
  int32_t v31; // w2
  int32_t v32; // w3
  bool v33; // w21
  int32_t v34; // w1
  ServantStatusBattleListViewItem_o *p_banner_5__2; // x21
  NotificationDialog_o *v36; // x0
  const MethodInfo *v37; // x3
  System_String_o *v38; // x21
  System_String_o *WebViewFullAddress; // x21
  UnityEngine_Networking_UnityWebRequest_o *v40; // x22
  int32_t v41; // w2
  int32_t v42; // w3
  UnityEngine_Networking_DownloadHandlerTexture_o *v43; // x22
  int32_t v44; // w2
  int32_t v45; // w3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v46; // x0
  ServantStatusBattleListViewItem_o *p__2__current; // x20
  int32_t v48; // w2
  int32_t v49; // w3
  NotificationDialog__StartDownloadBanner_d__54_o *lnkTexture; // x23
  Il2CppObject *gameObject; // x23
  NotificationDialog__StartDownloadBanner_d__54_o *v53; // x23
  UnityEngine_Component_o *parent; // x0
  int32_t v55; // w2
  int32_t v56; // w3
  System_Collections_Generic_List_object__o *additionalTextures; // x8
  struct System_Object_array *items; // x9
  _QWORD *v59; // x10
  __int64 size; // x11
  Il2CppClass **v61; // x0
  NotificationDialog_o *v62; // x0
  const MethodInfo *v63; // x3
  UnityEngine_GameObject_o *v64; // x22
  NotificationDialog_c *v65; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v67; // s8
  float v68; // s9
  float v69; // s10
  NotificationDialog_o *v70; // x0
  const MethodInfo *v71; // x3
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v76; // x0
  const MethodInfo *v77; // x3
  int32_t v78; // w1
  int32_t v79; // w2
  NotificationDialog_o *IntFromScript; // x0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v82; // w20
  const MethodInfo *v83; // x3
  System_String_o *StringFromScript; // x0
  const MethodInfo *v85; // x1
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4A5EC06 & 1) == 0 )
  {
    sub_1B885B0(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1B885B0(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1B885B0(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
    sub_1B885B0(&Method_System_Collections_Generic_List_LinkableTexture__Add__);
    sub_1B885B0(&LocalizationManager_TypeInfo);
    sub_1B885B0(&NetworkManager_TypeInfo);
    sub_1B885B0(&Method_NotificationDialog__StartDownloadBanner_b__54_0__);
    sub_1B885B0(&NotificationDialog_TypeInfo);
    sub_1B885B0(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1B885B0(&UnityEngine_Object_TypeInfo);
    sub_1B885B0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1B885B0(&UnityEngine_Texture2D_TypeInfo);
    sub_1B885B0(&UnityEngine_Networking_UnityWebRequest_TypeInfo);
    sub_1B885B0(&StringLiteral_17060/*"bannerUrl"*/);
    sub_1B885B0(&StringLiteral_23334/*"size"*/);
    sub_1B885B0(&StringLiteral_24339/*"urlOpenType"*/);
    sub_1B885B0(&StringLiteral_22208/*"offset"*/);
    sub_1B885B0(&StringLiteral_24338/*"urlLink"*/);
    sub_1B885B0(&StringLiteral_1/*""*/);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)sub_1B885B0(&StringLiteral_9235/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_4A5EC06 = 1;
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
      v16 = this;
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
      v17 = (int)this;
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
      v18 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v4->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0LL);
      v20 = (UnityEngine_Texture2D_o *)sub_1B887FC(UnityEngine_Texture2D_TypeInfo);
      UnityEngine_Texture2D___ctor_69347644(v20, v17, v18, format, 0, 0LL);
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)v4->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      UnityEngine_ImageConversion__LoadImage_69564428(v20, data, 0LL);
    }
    else
    {
LABEL_25:
      v20 = 0LL;
      v16 = 0LL;
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
    v22 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v22, 0LL);
    if ( !v16 || !IsNullOrEmpty || !v16->fields.__2__current )
      goto LABEL_35;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)v20,
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
                                                                    (const MethodInfo_2F0385C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_94;
        v53 = this;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                    0LL);
        if ( !this )
          goto LABEL_94;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
        GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v53, parent, 0LL);
        if ( !byte_4A55CE6 )
        {
          sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
          byte_4A55CE6 = 1;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v53,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        if ( !v53 )
          goto LABEL_94;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v53,
                                                                    (const MethodInfo_2ECEEB8 *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        additionalTextures = (System_Collections_Generic_List_object__o *)_4__this->fields.additionalTextures;
        if ( !additionalTextures )
          goto LABEL_94;
        items = additionalTextures->fields._items;
        v59 = Method_System_Collections_Generic_List_LinkableTexture__Add__;
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
            *(const MethodInfo_34FD834 **)(*(_QWORD *)(v59[4] + 192LL) + 112LL));
        }
        else
        {
          v61 = &items->obj.klass + size;
          additionalTextures->fields._size = size + 1;
          v61[4] = (Il2CppClass *)lnkTexture;
          sub_1B88554((ServantStatusBattleListViewItem_o *)(v61 + 4), (int32_t)lnkTexture, v55, v56);
        }
      }
      if ( !lnkTexture )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)lnkTexture->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      (*(void (__fastcall **)(NotificationDialog__StartDownloadBanner_d__54_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
        this,
        v20,
        this->klass[1].vtable._0_Equals.methodPtr);
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)lnkTexture,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v62 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
      v64 = (UnityEngine_GameObject_o *)v62;
      v65 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v65 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v65->static_fields->BANNER_RETRY_MAX;
      v67 = p_BANNER_RETRY_MAX[17];
      v68 = p_BANNER_RETRY_MAX[18];
      v69 = p_BANNER_RETRY_MAX[19];
      VectFromScript = NotificationDialog__getVectFromScript(
                         v62,
                         v4->fields._banner_5__2,
                         (System_String_o *)StringLiteral_22208/*"offset"*/,
                         v63);
      VectFromScript.fields.x = v67 + VectFromScript.fields.x;
      VectFromScript.fields.y = v68 + VectFromScript.fields.y;
      VectFromScript.fields.z = v69 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v64, VectFromScript, 0LL);
      v87 = NotificationDialog__getVectFromScript(
              v70,
              v4->fields._banner_5__2,
              (System_String_o *)StringLiteral_23334/*"size"*/,
              v71);
      x = v87.fields.x;
      y = v87.fields.y;
      z = v87.fields.z;
      if ( !byte_4A55CE1 )
      {
        sub_1B885B0(&UnityEngine_Vector3_TypeInfo);
        byte_4A55CE1 = 1;
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
          v78 = 0x80000000;
        else
          v78 = (int)x;
        if ( y == INFINITY )
          v79 = 0x80000000;
        else
          v79 = (int)y;
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, v78, v79, 0LL);
      }
      IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                v76,
                                                v4->fields._banner_5__2,
                                                (System_String_o *)StringLiteral_24339/*"urlOpenType"*/,
                                                v77);
      banner_5__2 = v4->fields._banner_5__2;
      v82 = (int)IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           IntFromScript,
                           banner_5__2,
                           (System_String_o *)StringLiteral_24338/*"urlLink"*/,
                           v83);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v82, StringFromScript, 0LL);
      NotificationDialog__LoadNext(_4__this, v85);
    }
    else
    {
LABEL_35:
      v24 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v24;
      v25 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v25 = NotificationDialog_TypeInfo;
      }
      if ( v24 <= v25->static_fields->BANNER_RETRY_MAX )
      {
        started = NotificationDialog__StartDownloadBanner(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_69444652((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3739718 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v27 = LocalizationManager__Get((System_String_o *)StringLiteral_9235/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v28 = (ErrorDialog_ClickDelegate_o *)sub_1B887FC(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v28,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__54_0__,
          0LL);
        if ( !Instance )
          goto LABEL_94;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v27, v28, 0, 0LL);
      }
    }
    v30 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v30 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v30, 0LL);
      *p_mBannerWWW = 0LL;
      sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.mBannerWWW, 0, v31, v32);
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
          sub_1B88814(this, method);
        v9 = banners->m_Items[mLoadingIdx];
        if ( v9 )
        {
          v10 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v9->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
            v12 = (System_Collections_Generic_Dictionary_string__object__c *)v9->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
                ? (struct System_Collections_Generic_Dictionary_string__object__o *)v9
                : 0LL;
          else
            v12 = 0LL;
          v4->fields._banner_5__2 = v12;
          p_banner_5__2 = (ServantStatusBattleListViewItem_o *)&v4->fields._banner_5__2;
          if ( LOBYTE(v9->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
            v34 = (System_Collections_Generic_Dictionary_string__object__c *)v9->klass->_2.typeHierarchy[methodPtr_low - 1] == v10
                ? (int)v9
                : 0;
          else
            v34 = 0;
        }
        else
        {
          v34 = 0;
          v4->fields._banner_5__2 = 0LL;
          p_banner_5__2 = (ServantStatusBattleListViewItem_o *)&v4->fields._banner_5__2;
        }
        sub_1B88554(p_banner_5__2, v34, v2, v3);
        v38 = NotificationDialog__getStringFromScript(
                v36,
                (System_Collections_Generic_Dictionary_string__object__o *)p_banner_5__2->klass,
                (System_String_o *)StringLiteral_17060/*"bannerUrl"*/,
                v37);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        WebViewFullAddress = NetworkManager__getWebViewFullAddress(v38, 0LL);
        v40 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1B887FC(UnityEngine_Networking_UnityWebRequest_TypeInfo);
        UnityEngine_Networking_UnityWebRequest___ctor(v40, WebViewFullAddress, 0LL);
        _4__this->fields.mBannerWWW = v40;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&_4__this->fields.mBannerWWW, (int32_t)v40, v41, v42);
        v43 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1B887FC(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
        UnityEngine_Networking_DownloadHandlerTexture___ctor(v43, 0, 0LL);
        v4->fields._texDl_5__3 = v43;
        sub_1B88554((ServantStatusBattleListViewItem_o *)&v4->fields._texDl_5__3, (int32_t)v43, v44, v45);
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
        if ( this )
        {
          UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
            (UnityEngine_Networking_UnityWebRequest_o *)this,
            (UnityEngine_Networking_DownloadHandler_o *)v4->fields._texDl_5__3,
            0LL);
          this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
          v33 = 1;
          _4__this->fields.refuseInit = 1;
          if ( this )
          {
            v46 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0LL);
            v4->fields.__2__current = (Il2CppObject *)v46;
            p__2__current = (ServantStatusBattleListViewItem_o *)&v4->fields.__2__current;
            sub_1B88554(p__2__current, (int32_t)v46, v48, v49);
            *(_DWORD *)&p__2__current[-1].fields.isMine = 1;
            return v33;
          }
        }
      }
    }
LABEL_94:
    sub_1B8880C(this, method);
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
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1B885C4(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1B887FC(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1B885C4(&Method_NotificationDialog__StartDownloadBanner_d__54_System_Collections_IEnumerator_Reset__);
  sub_1B886D8(v3, v4);
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