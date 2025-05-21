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

  if ( (byte_4B48748 & 1) == 0 )
  {
    sub_1BDB878(&NotificationDialog_TypeInfo, v1);
    byte_4B48748 = 1;
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
  *(_OWORD *)&v7->MESSAGE_BASE_SIZE_X = xmmword_BEA880;
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
  if ( (byte_4B48747 & 1) == 0 )
  {
    sub_1BDB878(&BaseDialog_TypeInfo, method);
    byte_4B48747 = 1;
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
        int32_t messageSizeX,
        float messagePosYForcedAdd,
        bool isAdjustTextPos,
        const MethodInfo *method)
{
  float z; // s8
  float y; // s11
  float x; // s9
  __int64 v27; // x1
  __int64 v28; // x1
  __int64 v29; // x1
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  __int64 v34; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  struct UILabel_o *messageLabel; // x24
  int monitor_high; // w27
  float v38; // s12
  float v39; // s0
  UnityEngine_Object_o *v40; // x27
  NotificationDialog_c *v41; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  System_String_o *Empty; // x25
  float v44; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v46; // [xsp+0h] [xbp-B0h] BYREF
  Il2CppObject *v47; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v48; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-98h] BYREF
  Il2CppObject *v50; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v51; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4B4873D & 1) == 0 )
  {
    sub_1BDB878(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___, isNoTitle);
    sub_1BDB878(&Method_UnityEngine_Component_TryGetComponent_UISprite___, v27);
    sub_1BDB878(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___, v28);
    sub_1BDB878(&System_Math_TypeInfo, v29);
    sub_1BDB878(&NotificationDialog_TypeInfo, v30);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v31);
    sub_1BDB878(&string_TypeInfo, v32);
    byte_4B4873D = 1;
  }
  v50 = 0LL;
  v48 = 0LL;
  component = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      baseWindow = this->fields.baseWindow;
      if ( !baseWindow )
        goto LABEL_54;
      messageLabel = this->fields.noTitleMessageLabel;
      if ( !UnityEngine_GameObject__TryGetComponent_object_(
              baseWindow,
              &component,
              (const MethodInfo_30897B0 *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
        goto LABEL_30;
      baseWindow = (UnityEngine_GameObject_o *)this->fields.okBtnLabel;
      if ( !baseWindow )
        goto LABEL_54;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)baseWindow,
                                                 0LL);
      if ( !baseWindow )
        goto LABEL_54;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                 (UnityEngine_Transform_o *)baseWindow,
                                                 0LL);
      if ( !baseWindow )
        goto LABEL_54;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                 (UnityEngine_Component_o *)baseWindow,
                                                 &v48,
                                                 (const MethodInfo_302B228 *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)baseWindow & 1) != 0 )
      {
        if ( !component || !v48 )
          goto LABEL_54;
        monitor_high = HIDWORD(component[10].monitor);
        v38 = (float)((float)SHIDWORD(v48[10].monitor) * 0.5) + buttonPosY;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v39 = fabsf((float)((float)monitor_high * 0.5) + -30.0) + fabsf(v38);
        if ( isAdjustTextPos )
          y = v38 + (float)(v39 * 0.5);
        if ( v39 == INFINITY )
          messageSizeY = 0x80000000;
        else
          messageSizeY = (int)v39;
      }
      else
      {
LABEL_30:
        v41 = NotificationDialog_TypeInfo;
        if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
          v41 = NotificationDialog_TypeInfo;
        }
        static_fields = v41->static_fields;
        y = static_fields->NO_TITLE_MESSAGE_BASE_POS.fields.y;
        messageSizeY = static_fields->NO_TITLE_MESSAGE_BASE_SIZE_Y;
      }
      baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
      if ( baseWindow )
      {
        UILabel__set_text((UILabel_o *)baseWindow, string_TypeInfo->static_fields->Empty, 0LL);
        baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( baseWindow )
        {
          baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                     (UnityEngine_Component_o *)baseWindow,
                                                     &v47,
                                                     (const MethodInfo_302B228 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
          if ( ((unsigned __int8)baseWindow & 1) == 0 )
            goto LABEL_38;
          baseWindow = (UnityEngine_GameObject_o *)v47;
          if ( !v47 )
            goto LABEL_54;
          goto LABEL_37;
        }
      }
LABEL_54:
      sub_1BDBAD4(baseWindow, v34);
    }
  }
  messageLabel = this->fields.messageLabel;
  v40 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v40, 0LL, 0LL);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.noTitleMessageLabel;
    if ( baseWindow )
    {
      UILabel__set_text((UILabel_o *)baseWindow, string_TypeInfo->static_fields->Empty, 0LL);
      baseWindow = (UnityEngine_GameObject_o *)this->fields.noTitleMessageLabel;
      if ( baseWindow )
      {
        baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                   (UnityEngine_Component_o *)baseWindow,
                                                   (Il2CppObject **)&v46,
                                                   (const MethodInfo_302B228 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
        if ( ((unsigned __int8)baseWindow & 1) == 0 )
          goto LABEL_38;
        baseWindow = v46;
        if ( !v46 )
          goto LABEL_54;
LABEL_37:
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseWindow, 0, 0LL);
        goto LABEL_38;
      }
    }
    goto LABEL_54;
  }
LABEL_38:
  if ( message )
  {
    baseWindow = (UnityEngine_GameObject_o *)System_String__Trim_62628540(message, 0xAu, 0LL);
    Empty = (System_String_o *)baseWindow;
    if ( !messageLabel )
      goto LABEL_54;
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( !messageLabel )
      goto LABEL_54;
  }
  UILabel__set_spacingY(messageLabel, spacingY, 0LL);
  UIWidget__SetDimensions((UIWidget_o *)messageLabel, messageSizeX, messageSizeY, 0LL);
  UILabel__set_maxLineCount(messageLabel, maxLine, 0LL);
  if ( !messageFontSize )
    messageFontSize = this->fields.MESSAGE_FONT_SIZE;
  UILabel__set_fontSize(messageLabel, messageFontSize, 0LL);
  if ( UnityEngine_Component__TryGetComponent_object_(
         (UnityEngine_Component_o *)messageLabel,
         &v50,
         (const MethodInfo_302B228 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___) )
  {
    baseWindow = (UnityEngine_GameObject_o *)v50;
    if ( !v50 )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v50, 1, 0LL);
  }
  if ( adjustText )
    WrapControlText__textAdjust(messageLabel, Empty, messageLabel->fields.mFontSize, 0, 0LL);
  else
    UILabel__set_text(messageLabel, Empty, 0LL);
  if ( messagePosYForcedAdd == 0.0 )
    v44 = y;
  else
    v44 = y + messagePosYForcedAdd;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
  v51.fields.x = x;
  v51.fields.y = v44;
  v51.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v51, 0LL);
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
  __int64 v21; // x1
  UILabel_o *messageLabel; // x0
  struct UILabel_o *v23; // x24
  struct UIWidget_OnDimensionsChanged_o *onChange; // x10
  System_String_o *Empty; // x1
  UnityEngine_Object_o *v26; // x25
  System_String_o *v27; // x23
  UnityEngine_Object_o *v28; // x21
  NotificationDialog_o *gameObject; // x21
  const MethodInfo *v30; // x3
  UnityEngine_Object_o *v31; // x21
  NotificationDialog_o *v32; // x20
  const MethodInfo *v33; // x3
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v35; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4B4873E & 1) == 0 )
  {
    sub_1BDB878(&NotificationDialog_TypeInfo, isNoTitle);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v17);
    sub_1BDB878(&string_TypeInfo, v18);
    sub_1BDB878(&StringLiteral_21568/*"messageOffset"*/, v19);
    byte_4B4873E = 1;
  }
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
      v23 = this->fields.noTitleMessageLabel;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
      }
      if ( !this->fields.messageLabel )
        goto LABEL_34;
      onChange = messageLabel->fields.onChange;
      messageLabel = this->fields.messageLabel;
      messageSizeY = HIDWORD(onChange->fields.method_info);
      y = *(float *)&onChange->fields.method;
      Empty = string_TypeInfo->static_fields->Empty;
      goto LABEL_16;
    }
  }
  v23 = this->fields.messageLabel;
  v26 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v26, 0LL, 0LL) )
  {
    messageLabel = this->fields.noTitleMessageLabel;
    if ( !messageLabel )
      goto LABEL_34;
    Empty = string_TypeInfo->static_fields->Empty;
LABEL_16:
    UILabel__set_text(messageLabel, Empty, 0LL);
  }
  if ( message )
    v27 = System_String__Trim_62628540(message, 0xAu, 0LL);
  else
    v27 = string_TypeInfo->static_fields->Empty;
  messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
  if ( !v23 )
    goto LABEL_34;
  UIWidget__SetDimensions(
    (UIWidget_o *)v23,
    NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
    messageSizeY,
    0LL);
  UILabel__set_maxLineCount(v23, maxLine, 0LL);
  UILabel__set_fontSize(v23, this->fields.MESSAGE_FONT_SIZE, 0LL);
  WrapControlText__textAdjust(v23, v27, v23->fields.mFontSize, 0, 0LL);
  v28 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    messageLabel = this->fields.noTitleMessageLabel;
    if ( !messageLabel )
      goto LABEL_34;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)messageLabel,
                                           0LL);
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_21568/*"messageOffset"*/,
                       v30);
    VectFromScript.fields.x = x + VectFromScript.fields.x;
    VectFromScript.fields.y = y + VectFromScript.fields.y;
    VectFromScript.fields.z = z + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)gameObject, VectFromScript, 0LL);
  }
  v31 = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
  {
    messageLabel = this->fields.messageLabel;
    if ( messageLabel )
    {
      v32 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
      v35 = NotificationDialog__getVectFromScript(v32, script, (System_String_o *)StringLiteral_21568/*"messageOffset"*/, v33);
      v35.fields.x = x + v35.fields.x;
      v35.fields.z = z + v35.fields.z;
      v35.fields.y = y + v35.fields.y;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v32, v35, 0LL);
      return;
    }
LABEL_34:
    sub_1BDBAD4(messageLabel, v21);
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog__CachedTitleLabel(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo_37F9B50 *v2; // x3
  NotificationDialog_o *v3; // x19
  __int64 v4; // x1
  struct UILabel_o *titleLabel; // x8
  __int64 v6; // x1 OVERLAPPED
  __int64 *v7; // x0
  __int64 v8; // x9
  __int64 v9; // [xsp+0h] [xbp-30h] BYREF
  int32_t v10; // [xsp+8h] [xbp-28h]
  UnityEngine_Vector2Int_o v11; // 0:x2.8

  v3 = this;
  if ( (byte_4B48739 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Nullable_Vector2Int___ctor__, method);
    this = (NotificationDialog_o *)sub_1BDB878(&Method_System_Nullable_Vector2Int__get_HasValue__, v4);
    byte_4B48739 = 1;
  }
  if ( !v3->fields.titleLabelDefaultSize.fields.hasValue )
  {
    titleLabel = v3->fields.titleLabel;
    if ( !titleLabel )
      sub_1BDBAD4(this, method);
    v6 = *(_QWORD *)&titleLabel->fields.mWidth;
    v7 = &v9;
    v10 = 0;
    v9 = 0LL;
    v11 = (UnityEngine_Vector2Int_o)Method_System_Nullable_Vector2Int___ctor__;
    System_Nullable_Vector2Int____ctor(*(System_Nullable_Vector2Int__o *)(&v6 - 1), v11, v2);
    v8 = v9;
    v3->fields.titleLabelDefaultSize.fields.value.fields.m_Y = v10;
    *(_QWORD *)&v3->fields.titleLabelDefaultSize.fields.hasValue = v8;
  }
}


void __fastcall NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_47172892(this, 0LL, v2);
}


void __fastcall NotificationDialog__Close_47172892(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_4B48743 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, callback);
    sub_1BDB878(&Method_NotificationDialog_EndClose__, v6);
    byte_4B48743 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall NotificationDialog__EndClose(NotificationDialog_o *this, const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  NotificationDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (CGThumbnailListItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1BDB81C(p_closeEndFunc, 0, v3, v4);
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
  __int64 v14; // x1
  __int64 v15; // x1
  __int64 titleLabel; // x0
  UnityEngine_Object_o *v17; // x20
  const MethodInfo_37F9B68 *v18; // x2
  UIWidget_o *v19; // x21
  UIWidget_o *v20; // x21
  const MethodInfo_37F9B68 *v21; // x2
  UnityEngine_Transform_o *v22; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v30; // x8
  UnityEngine_Object_o *v31; // x20
  struct LinkableTexture_o *v32; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  int32_t v34; // w21
  int32_t v35; // w2
  UnityEngine_Object_o *gameObject; // x22
  int v37; // w8
  System_Collections_Generic_List_object__o *v38; // x21
  int32_t v39; // w2
  const MethodInfo *v40; // x3
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  int32_t v42; // w21
  int32_t v43; // w2
  UnityEngine_Object_o *v44; // x22
  UnityEngine_Object_o *v45; // x0
  int v46; // w8
  System_Collections_Generic_List_object__o *v47; // x21
  int32_t v48; // w2
  const MethodInfo *v49; // x3
  System_Nullable_Vector2Int__o v50; // 0:x0.12
  System_Nullable_Vector2Int__o v51; // 0:x0.12

  if ( (byte_4B48738 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, method);
    sub_1BDB878(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, v3);
    sub_1BDB878(&Method_System_Collections_Generic_List_LinkableSprite___ctor__, v4);
    sub_1BDB878(&Method_System_Collections_Generic_List_LinkableTexture___ctor__, v5);
    sub_1BDB878(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v8);
    sub_1BDB878(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v9);
    sub_1BDB878(&System_Collections_Generic_List_LinkableSprite__TypeInfo, v10);
    sub_1BDB878(&System_Collections_Generic_List_LinkableTexture__TypeInfo, v11);
    sub_1BDB878(&Method_System_Nullable_Vector2Int__get_HasValue__, v12);
    sub_1BDB878(&Method_System_Nullable_Vector2Int__get_Value__, v13);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v14);
    sub_1BDB878(&StringLiteral_1/*""*/, v15);
    byte_4B48738 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    titleLabel = (__int64)this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_73;
    UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    titleLabel = (__int64)this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_73;
    UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    v17 = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v17, 0LL, 0LL) )
    {
      titleLabel = (__int64)this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_73;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( this->fields.titleLabelDefaultSize.fields.hasValue )
      {
        v19 = (UIWidget_o *)this->fields.titleLabel;
        *(_QWORD *)&v50.fields.hasValue = &this->fields.titleLabelDefaultSize;
        v50.fields.value.fields.m_Y = Method_System_Nullable_Vector2Int__get_Value__;
        titleLabel = (__int64)System_Nullable_Vector2Int___get_Value(v50, v18);
        if ( !v19 )
          goto LABEL_73;
        UIWidget__set_width(v19, titleLabel, 0LL);
        v51.fields.value.fields.m_Y = Method_System_Nullable_Vector2Int__get_Value__;
        v20 = (UIWidget_o *)this->fields.titleLabel;
        *(_QWORD *)&v51.fields.hasValue = &this->fields.titleLabelDefaultSize;
        titleLabel = (__int64)System_Nullable_Vector2Int___get_Value(v51, v21);
        if ( !v20 )
          goto LABEL_73;
        UIWidget__set_height(v20, SHIDWORD(titleLabel), 0LL);
      }
      titleLabel = (__int64)this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_73;
      titleLabel = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0LL);
      v22 = (UnityEngine_Transform_o *)titleLabel;
      if ( !byte_4B3E916 )
      {
        titleLabel = sub_1BDB878(&UnityEngine_Vector3_TypeInfo, method);
        byte_4B3E916 = 1;
      }
      if ( !v22 )
        goto LABEL_73;
      UnityEngine_Transform__set_localScale(v22, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
    }
    messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    {
      titleLabel = (__int64)this->fields.messageLabel;
      if ( !titleLabel )
        goto LABEL_73;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      titleLabel = (__int64)this->fields.noTitleMessageLabel;
      if ( !titleLabel )
        goto LABEL_73;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
    {
      titleLabel = (__int64)this->fields.okBtnLabel;
      if ( !titleLabel )
        goto LABEL_73;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    mBannerWWW = this->fields.mBannerWWW;
    if ( mBannerWWW )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0LL);
      this->fields.mBannerWWW = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mBannerWWW, 0, v27, v28);
    }
    lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    titleLabel = UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
    if ( (titleLabel & 1) != 0 )
    {
      v30 = this->fields.lnkTexture;
      if ( !v30 )
        goto LABEL_73;
      titleLabel = (__int64)v30->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_73;
      v31 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                      titleLabel,
                                      *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70284200(v31, 0LL);
      v32 = this->fields.lnkTexture;
      if ( !v32 )
        goto LABEL_73;
      titleLabel = (__int64)v32->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_73;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)titleLabel + 744LL))(
        titleLabel,
        0LL,
        *(_QWORD *)(*(_QWORD *)titleLabel + 752LL));
    }
    p_additionalSprites = &this->fields.additionalSprites;
    titleLabel = (__int64)this->fields.additionalSprites;
    if ( titleLabel )
    {
      v34 = 0;
      while ( 1 )
      {
        v35 = *(_DWORD *)(titleLabel + 24);
        if ( v34 >= v35 )
          break;
        titleLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)titleLabel,
                                v34,
                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
        if ( titleLabel )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)titleLabel,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70284200(gameObject, 0LL);
          titleLabel = (__int64)*p_additionalSprites;
          ++v34;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_73;
      }
      v37 = *(_DWORD *)(titleLabel + 28) + 1;
      *(_DWORD *)(titleLabel + 24) = 0;
      *(_DWORD *)(titleLabel + 28) = v37;
      if ( v35 >= 1 )
        System_Array__Clear(*(System_Array_o **)(titleLabel + 16), 0, v35, 0LL);
    }
    else
    {
      v38 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_LinkableSprite__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v38,
        (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v38;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.additionalSprites, (int32_t)v38, v39, v40);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    titleLabel = (__int64)this->fields.additionalTextures;
    if ( titleLabel )
    {
      v42 = 0;
      while ( 1 )
      {
        v43 = *(_DWORD *)(titleLabel + 24);
        if ( v42 >= v43 )
          break;
        titleLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)titleLabel,
                                v42,
                                (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
        if ( titleLabel )
        {
          titleLabel = *(_QWORD *)(titleLabel + 48);
          if ( titleLabel )
          {
            v44 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                            titleLabel,
                                            *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_70284200(v44, 0LL);
            titleLabel = (__int64)*p_additionalTextures;
            if ( *p_additionalTextures )
            {
              titleLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)titleLabel,
                                      v42,
                                      (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
              if ( titleLabel )
              {
                v45 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0LL);
                UnityEngine_Object__Destroy_70284200(v45, 0LL);
                titleLabel = (__int64)*p_additionalTextures;
                ++v42;
                if ( *p_additionalTextures )
                  continue;
              }
            }
          }
        }
        goto LABEL_73;
      }
      v46 = *(_DWORD *)(titleLabel + 28) + 1;
      *(_DWORD *)(titleLabel + 24) = 0;
      *(_DWORD *)(titleLabel + 28) = v46;
      if ( v43 >= 1 )
        System_Array__Clear(*(System_Array_o **)(titleLabel + 16), 0, v43, 0LL);
    }
    else
    {
      v47 = (System_Collections_Generic_List_object__o *)sub_1BDBAC4(System_Collections_Generic_List_LinkableTexture__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v47,
        (const MethodInfo_36D5590 *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v47;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.additionalTextures, (int32_t)v47, v48, v49);
    }
    titleLabel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      BaseDialog__Init((BaseDialog_o *)this, 0LL);
      return;
    }
LABEL_73:
    sub_1BDBAD4(titleLabel, method);
  }
}


void __fastcall NotificationDialog__LoadBanners(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  const MethodInfo *v5; // x1
  System_Collections_IEnumerator_o *started; // x1

  this->fields.mAfterLoad = callback;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.mAfterLoad, (int32_t)callback, (int32_t)method, v3);
  this->fields.mLoadingIdx = 0;
  started = NotificationDialog__StartDownloadBanner(this, v5);
  UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_1BDBAD4(this, method);
  if ( v3 >= (signed int)banners->max_length )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0LL);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
}


void __fastcall NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct NotificationDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B48744 & 1) == 0 )
  {
    sub_1BDB878(&Method_NotificationDialog_OnClickOk__, method);
    byte_4B48744 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NotificationDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_NotificationDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1BDB890(Method_NotificationDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1BDB85C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0, 0LL);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickFunc->fields.m_target)(
        clickFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
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
        bool useTitleCondensedScale,
        bool isAdjustTextPos,
        const MethodInfo *method)
{
  bool v23; // w10
  System_Nullable_int__o v24; // x14
  System_Nullable_float__o v25; // x21
  System_Nullable_int__o v26; // x15
  System_Nullable_int__o v27; // x16
  int32_t v28; // w17
  System_Nullable_float__o v29; // x6
  int32_t v30; // w19
  int32_t v31; // w20
  bool v32; // w13
  __int64 v35; // x1
  __int64 v36; // x1
  float value; // s9
  NotificationDialog_c *v38; // x0
  int32_t v39; // w20
  System_String_o *v40; // x22
  System_String_o *v41; // x23
  bool v42; // w24
  bool v43; // w27
  System_Nullable_int__o v44; // x19
  int32_t v45; // w21
  float y; // s1
  NotificationDialog_c *v47; // x0
  int32_t v48; // w20
  System_String_o *v49; // x22
  System_String_o *v50; // x23
  bool v51; // w24
  bool v52; // w28
  System_Nullable_int__o v53; // x19
  int32_t v54; // w21
  bool v55; // [xsp+0h] [xbp-B0h]
  System_Nullable_float__o v56; // [xsp+0h] [xbp-B0h]
  System_String_o *v57; // [xsp+8h] [xbp-A8h]
  System_Nullable_float__o v58; // [xsp+8h] [xbp-A8h]
  System_Nullable_float__o v59; // [xsp+8h] [xbp-A8h]
  System_String_o *v60; // [xsp+10h] [xbp-A0h]
  System_Nullable_int__o v61; // [xsp+10h] [xbp-A0h]
  System_Nullable_int__o v62; // [xsp+10h] [xbp-A0h]
  int32_t v63; // [xsp+18h] [xbp-98h]
  System_Nullable_int__o v64; // [xsp+18h] [xbp-98h]
  System_Nullable_int__o v65; // [xsp+18h] [xbp-98h]
  int32_t v66; // [xsp+20h] [xbp-90h]
  int32_t v67; // [xsp+24h] [xbp-8Ch]
  NotificationDialog_ClickDelegate_o *funca; // [xsp+28h] [xbp-88h]
  NotificationDialog_ClickDelegate_o *funcb; // [xsp+28h] [xbp-88h]
  NotificationDialog_ClickDelegate_o *funcc; // [xsp+28h] [xbp-88h]
  int32_t v71; // [xsp+34h] [xbp-7Ch]
  int32_t v72; // [xsp+34h] [xbp-7Ch]
  int32_t v73; // [xsp+34h] [xbp-7Ch]
  bool v74; // [xsp+38h] [xbp-78h]
  bool v75; // [xsp+38h] [xbp-78h]

  v23 = useTitleCondensedScale;
  v24 = buttonWidgetSizeY;
  v25 = buttonPosY;
  v26 = buttonWidgetSizeX;
  v27 = messageWidgetSizeY;
  v28 = spacingY;
  v29 = titlePosY;
  v30 = onClickOkSeKind;
  v31 = messageFontSize;
  v32 = canMaskTouchClose;
  if ( (byte_4B4873A & 1) == 0 )
  {
    v71 = maxLine;
    v63 = panelDepth;
    funca = func;
    v57 = title;
    v60 = message;
    v55 = isLineDraw;
    sub_1BDB878(&NotificationDialog_TypeInfo, title);
    sub_1BDB878(&Method_System_Nullable_float__GetValueOrDefault__, v35);
    sub_1BDB878(&Method_System_Nullable_float__get_HasValue__, v36);
    v26 = buttonWidgetSizeX;
    v24 = buttonWidgetSizeY;
    isLineDraw = v55;
    title = v57;
    message = v60;
    func = funca;
    panelDepth = v63;
    maxLine = v71;
    v32 = canMaskTouchClose;
    v29 = titlePosY;
    v28 = spacingY;
    v27 = messageWidgetSizeY;
    v25 = buttonPosY;
    v23 = useTitleCondensedScale;
    byte_4B4873A = 1;
  }
  if ( messagePosY.fields.hasValue )
  {
    value = messagePosY.fields.value;
  }
  else
  {
    v38 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      v72 = maxLine;
      v74 = v32;
      v39 = panelDepth;
      funcb = func;
      v40 = message;
      v41 = title;
      v42 = isLineDraw;
      v43 = v23;
      v61 = v27;
      v64 = v24;
      v44 = v26;
      v56 = v25;
      v58 = v29;
      v45 = v28;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v28 = v45;
      v25 = v56;
      v29 = v58;
      v27 = v61;
      v24 = v64;
      v26 = v44;
      func = funcb;
      panelDepth = v39;
      v31 = messageFontSize;
      v30 = onClickOkSeKind;
      maxLine = v72;
      v32 = v74;
      v38 = NotificationDialog_TypeInfo;
      v23 = v43;
      isLineDraw = v42;
      title = v41;
      message = v40;
    }
    value = v38->static_fields->MESSAGE_BASE_POS.fields.y;
  }
  if ( v25.fields.hasValue )
  {
    y = v25.fields.value;
  }
  else
  {
    v47 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      v73 = maxLine;
      v75 = v32;
      v66 = v31;
      v67 = v30;
      v48 = panelDepth;
      funcc = func;
      v49 = message;
      v50 = title;
      v51 = isLineDraw;
      v52 = v23;
      v62 = v27;
      v65 = v24;
      v53 = v26;
      v54 = v28;
      v59 = v29;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v29 = v59;
      v27 = v62;
      v26 = v53;
      v24 = v65;
      func = funcc;
      panelDepth = v48;
      v31 = v66;
      v30 = v67;
      maxLine = v73;
      v32 = v75;
      v47 = NotificationDialog_TypeInfo;
      v28 = v54;
      v23 = v52;
      isLineDraw = v51;
      title = v50;
      message = v49;
    }
    y = v47->static_fields->BUTTON_BASE_POS.fields.y;
  }
  NotificationDialog__OpenDialog(
    this,
    title,
    message,
    func,
    panelDepth,
    maxLine,
    titleSize,
    isLineDraw,
    v32,
    value,
    y,
    v31,
    v30,
    v29,
    v28,
    v27,
    adjustText,
    v26,
    v24,
    messagePosYForcedAdd,
    isAdjustTextPos,
    0LL,
    v23,
    (const MethodInfo *)isAdjustTextPos);
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
        System_Nullable_int__o messageWidgetSizeX,
        bool useTitleCondensedScale,
        const MethodInfo *method)
{
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
  UIPanel_o *TargetPanel; // x0
  int32_t v44; // w2
  const MethodInfo *v45; // x3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v47; // x21
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x29
  const MethodInfo *v51; // x1
  System_String_o *v52; // x1
  NotificationDialog_c *v53; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s12
  float z; // s11
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v59; // x0
  struct NotificationDialog_StaticFields *v60; // x8
  float v61; // s11
  float v62; // s12
  unsigned __int64 v63; // x28
  unsigned __int64 messageSizeX; // x19
  UnityEngine_Object_o *lineSprite; // x29
  NotificationDialog_c *v66; // x0
  struct NotificationDialog_StaticFields *v67; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x22
  UnityEngine_Object_o *lnkTexture; // x22
  UnityEngine_Object_o *okBtnLabel; // x22
  NotificationDialog_c *v73; // x0
  struct NotificationDialog_StaticFields *v74; // x8
  UILabel_o *v75; // x22
  float v76; // s10
  float v77; // s9
  float v78; // s13
  float v79; // s11
  float y; // s12
  UnityEngine_GameObject_o *v81; // x0
  UnityEngine_GameObject_o *v82; // x0
  UnityEngine_GameObject_o *v83; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v85; // x22
  unsigned __int64 v86; // x19
  unsigned __int64 v87; // x25
  System_Action_o *v88; // x19
  const MethodInfo *v89; // [xsp+10h] [xbp-E0h]
  float v; // [xsp+5Ch] [xbp-94h]
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B4873B & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, title);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v31);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v32);
    sub_1BDB878(&LocalizationManager_TypeInfo, v33);
    sub_1BDB878(&Method_NotificationDialog_EndOpen__, v34);
    sub_1BDB878(&NotificationDialog_TypeInfo, v35);
    sub_1BDB878(&Method_System_Nullable_float__GetValueOrDefault__, v36);
    sub_1BDB878(&Method_System_Nullable_int__GetValueOrDefault__, v37);
    sub_1BDB878(&Method_System_Nullable_float__get_HasValue__, v38);
    sub_1BDB878(&Method_System_Nullable_int__get_HasValue__, v39);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v40);
    sub_1BDB878(&StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, v41);
    sub_1BDB878(&StringLiteral_1/*""*/, v42);
    byte_4B4873B = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v47 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v47, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v47 )
        goto LABEL_114;
      this->fields.keepPanelDepth = v47->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, v44, v45);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    NotificationDialog__CachedTitleLabel(this, v51);
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_114;
    UILabel__set_fontSize(transform, titleSize, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_114;
    if ( title )
      v52 = title;
    else
      v52 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v52, 0LL);
    v53 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v53 = NotificationDialog_TypeInfo;
    }
    static_fields = v53->static_fields;
    x = static_fields->TITLE_BASE_POS.fields.x;
    z = static_fields->TITLE_BASE_POS.fields.z;
    if ( titlePosY.fields.hasValue )
    {
      value = titlePosY.fields.value;
    }
    else
    {
      if ( !v53->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v53);
        static_fields = NotificationDialog_TypeInfo->static_fields;
      }
      value = static_fields->TITLE_BASE_POS.fields.y;
    }
    v = value;
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_114;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v95.fields.y = v;
    v95.fields.x = x;
    v95.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v95, 0LL);
  }
  if ( useTitleCondensedScale )
    NotificationDialog__SetCondensedScaleTitle(this, v51);
  v59 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v59 = NotificationDialog_TypeInfo;
  }
  v60 = v59->static_fields;
  v61 = v60->MESSAGE_BASE_POS.fields.x;
  v62 = v60->MESSAGE_BASE_POS.fields.z;
  if ( v60->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = v60->MESSAGE_BASE_POS.fields.y;
  if ( messageWidgetSizeY.fields.hasValue )
  {
    v63 = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeY);
  }
  else
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = NotificationDialog_TypeInfo;
      v60 = NotificationDialog_TypeInfo->static_fields;
    }
    LODWORD(v63) = v60->MESSAGE_BASE_SIZE_Y;
  }
  if ( messageWidgetSizeX.fields.hasValue )
  {
    messageSizeX = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeX);
  }
  else
  {
    if ( !v59->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v59);
      v59 = NotificationDialog_TypeInfo;
    }
    LODWORD(messageSizeX) = v59->static_fields->MESSAGE_BASE_SIZE_X;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lineSprite;
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_114;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isLineDraw, 0LL);
    if ( isLineDraw )
    {
      v66 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v66 = NotificationDialog_TypeInfo;
      }
      v67 = v66->static_fields;
      v61 = v67->MESSAGE_LINE_POS.fields.x;
      messagePosY = v67->MESSAGE_LINE_POS.fields.y;
      v62 = v67->MESSAGE_LINE_POS.fields.z;
      LODWORD(v63) = v67->MESSAGE_LINE_SIZE_Y;
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v96.fields.x = v61;
    v96.fields.y = messagePosY;
    v96.fields.z = v62;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      v63,
      maxLine,
      messageFontSize,
      adjustText,
      v96,
      buttonPosY,
      messageSizeX,
      messagePosYForcedAdd,
      isAdjustTextPos,
      v89);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lnkSprite, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lnkSprite;
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_114;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lnkTexture;
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_114;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v73 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v73 = NotificationDialog_TypeInfo;
    }
    v74 = v73->static_fields;
    v75 = this->fields.okBtnLabel;
    v76 = v74->BUTTON_BASE_POS.fields.x;
    v77 = v74->BUTTON_BASE_POS.fields.z;
    v78 = v74->BUTTON_TEXT_POS.fields.x;
    y = v74->BUTTON_TEXT_POS.fields.y;
    v79 = v74->BUTTON_TEXT_POS.fields.z;
    if ( v74->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v74->BUTTON_BASE_POS.fields.y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v75 )
      goto LABEL_114;
    UILabel__set_text(v75, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_114;
    v81 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v97.fields.x = v78;
    v97.fields.y = y;
    v97.fields.z = v79;
    GameObjectExtensions__SetLocalPosition(v81, v97, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_114;
    v82 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v98.fields.x = v76;
    v98.fields.y = buttonPosY;
    v98.fields.z = v77;
    GameObjectExtensions__SetLocalPosition(v82, v98, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_114;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_114;
    v83 = (UnityEngine_GameObject_o *)transform;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v85 = UnityEngine_GameObject__GetComponent_object_(
            v83,
            (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v85, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( buttonWidgetSizeX.fields.hasValue )
        {
          v86 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeX);
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v86) = transform->fields.onChange[1].monitor;
        }
        if ( buttonWidgetSizeY.fields.hasValue )
        {
          v87 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeY);
          if ( !Component_object )
            goto LABEL_114;
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v87) = HIDWORD(transform->fields.onChange[1].monitor);
          if ( !Component_object )
            goto LABEL_114;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v86, 0LL);
        UIWidget__set_height((UIWidget_o *)Component_object, v87, 0LL);
        if ( !v85 )
          goto LABEL_114;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v85, 0LL);
        size.fields.x = (float)(int)v86;
        size.fields.y = (float)(int)v87;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v85, size, 0LL);
      }
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v47, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( v47 )
    {
      UIPanel__set_depth(v47, keepPanelDepth, 0LL);
      goto LABEL_113;
    }
LABEL_114:
    sub_1BDBAD4(transform, keepPanelDepth);
  }
LABEL_113:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v88 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v88, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v88, 0, 0LL);
}


void __fastcall NotificationDialog__Open_47166924(
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
        System_Nullable_int__o messageWidgetSizeX,
        const MethodInfo *method)
{
  const MethodInfo *v18; // [xsp+60h] [xbp-20h]

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
    messageWidgetSizeX,
    0,
    v18);
}


void __fastcall NotificationDialog__Open_47168288(
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
  const MethodInfo *v46; // x3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v48; // x22
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x27
  const MethodInfo *v52; // x1
  System_String_o *v53; // x1
  NotificationDialog_o *gameObject; // x0
  const MethodInfo *v55; // x3
  NotificationDialog_c *v56; // x8
  UnityEngine_GameObject_o *v57; // x26
  float *p_BANNER_RETRY_MAX; // x8
  float v59; // s8
  float v60; // s9
  float v61; // s10
  NotificationDialog_c *v62; // x0
  float *v63; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v65; // s8
  float v66; // s9
  float v67; // s10
  int32_t v68; // w26
  NotificationDialog_c *v69; // x0
  float *v70; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  const MethodInfo *v73; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 methodPtr_low; // x11
  struct System_Object_array *v76; // x0
  struct System_Object_array **p_sprites; // x23
  int32_t v78; // w2
  const MethodInfo *v79; // x3
  __int64 v80; // x2
  __int64 v81; // x8
  UnityEngine_Component_o *v82; // x25
  unsigned __int64 v83; // x21
  Il2CppObject *v84; // x25
  UnityEngine_GameObject_o *v85; // x25
  UnityEngine_Component_o *parent; // x0
  __int64 v87; // x1
  int32_t v88; // w2
  const MethodInfo *v89; // x3
  System_Collections_Generic_List_object__o *additionalSprites; // x8
  struct System_Object_array *items; // x9
  _QWORD *v92; // x10
  __int64 size; // x11
  Il2CppClass **v94; // x0
  struct System_Object_array *v95; // x8
  System_Collections_Generic_Dictionary_string__object__o *v96; // x8
  __int64 v97; // x11
  System_Collections_Generic_Dictionary_string__object__o *v98; // x26
  System_Collections_Generic_Dictionary_string__object__o *v99; // x22
  NotificationDialog_o *v100; // x0
  UISprite_o *klass; // x20
  UnityEngine_GameObject_o *v102; // x27
  const MethodInfo *v103; // x3
  System_String_o *StringFromScript; // x29
  NotificationDialog_o *v105; // x0
  const MethodInfo *v106; // x3
  NotificationDialog_c *v107; // x8
  UnityEngine_GameObject_o *v108; // x27
  float *v109; // x8
  float v110; // s8
  float v111; // s9
  float v112; // s10
  NotificationDialog_o *v113; // x0
  const MethodInfo *v114; // x3
  __int64 v115; // x1
  float x; // s9
  float y; // s8
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v120; // x0
  const MethodInfo *v121; // x3
  int32_t v122; // w1
  int32_t v123; // w2
  NotificationDialog_o *IntFromScript; // x0
  int32_t v125; // w27
  const MethodInfo *v126; // x3
  System_String_o *v127; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v129; // x11
  struct System_Object_array *v130; // x0
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  struct System_Object_array *banners; // x8
  int v134; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  UILabel_o *v136; // x23
  NotificationDialog_o *v137; // x0
  const MethodInfo *v138; // x3
  NotificationDialog_c *v139; // x8
  UnityEngine_GameObject_o *v140; // x23
  float *v141; // x8
  float v142; // s8
  float v143; // s9
  float v144; // s10
  System_Action_o *v145; // x20
  System_Action_o *v146; // x20
  const MethodInfo *v147; // x2
  UIPanel_o *v149; // [xsp+8h] [xbp-88h]
  Il2CppObject *value; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v152; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v153; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v154; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v155; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B4873C & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, title);
    sub_1BDB878(&AtlasManager_TypeInfo, v19);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v20);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v21);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___, v22);
    sub_1BDB878(&Method_System_Collections_Generic_List_LinkableSprite__Add__, v23);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__ToArray__, v24);
    sub_1BDB878(&System_Collections_Generic_List_object__TypeInfo, v25);
    sub_1BDB878(&LocalizationManager_TypeInfo, v26);
    sub_1BDB878(&Method_NotificationDialog_EndOpen__, v27);
    sub_1BDB878(&Method_NotificationDialog__Open_b__44_0__, v28);
    sub_1BDB878(&NotificationDialog_TypeInfo, v29);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v30);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v31);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32);
    sub_1BDB878(&StringLiteral_17045/*"banners"*/, v33);
    sub_1BDB878(&StringLiteral_23538/*"size"*/, v34);
    sub_1BDB878(&StringLiteral_24523/*"urlOpenType"*/, v35);
    sub_1BDB878(&StringLiteral_22387/*"offset"*/, v36);
    sub_1BDB878(&StringLiteral_24151/*"titleOffset"*/, v37);
    sub_1BDB878(&StringLiteral_23647/*"spriteName"*/, v38);
    sub_1BDB878(&StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, v39);
    sub_1BDB878(&StringLiteral_24522/*"urlLink"*/, v40);
    sub_1BDB878(&StringLiteral_17649/*"buttonOffset"*/, v41);
    sub_1BDB878(&StringLiteral_1/*""*/, v42);
    sub_1BDB878(&StringLiteral_23648/*"sprites"*/, v43);
    byte_4B4873C = 1;
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.clickFunc, (int32_t)func, v45, v46);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    NotificationDialog__CachedTitleLabel(this, v52);
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_138;
    UILabel__set_fontSize(transform, titleSize, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    v53 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v53, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
    v56 = NotificationDialog_TypeInfo;
    v57 = (UnityEngine_GameObject_o *)gameObject;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v56 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v56->static_fields->BANNER_RETRY_MAX;
    v59 = p_BANNER_RETRY_MAX[1];
    v60 = p_BANNER_RETRY_MAX[2];
    v61 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_24151/*"titleOffset"*/,
                       v55);
    VectFromScript.fields.x = v59 + VectFromScript.fields.x;
    VectFromScript.fields.y = v60 + VectFromScript.fields.y;
    VectFromScript.fields.z = v61 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v57, VectFromScript, 0LL);
  }
  v62 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v62 = NotificationDialog_TypeInfo;
  }
  v63 = (float *)&v62->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v65 = v63[4];
  v66 = v63[5];
  v67 = v63[6];
  v68 = *((_DWORD *)v63 + 14);
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
      v69 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v69 = NotificationDialog_TypeInfo;
      }
      v70 = (float *)&v69->static_fields->BANNER_RETRY_MAX;
      v65 = v70[10];
      v66 = v70[11];
      v67 = v70[12];
      v68 = *((_DWORD *)v70 + 16);
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v152.fields.x = v65;
    v152.fields.y = v66;
    v152.fields.z = v67;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v68, maxLine, v152, script, v73);
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
                               (Il2CppObject *)StringLiteral_23648/*"sprites"*/,
                               &value,
                               (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
    v76 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)value,
            (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v76;
    p_sprites = &this->fields.sprites;
    sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.sprites, (int32_t)v76, v78, v79);
    if ( this->fields.sprites && (v81 = *(_QWORD *)&this->fields.sprites->max_length) != 0 )
    {
      if ( (int)v81 >= 1 )
      {
        v82 = (UnityEngine_Component_o *)this->fields.lnkSprite;
        v83 = 0LL;
        v149 = v48;
        while ( 1 )
        {
          if ( v83 )
          {
            transform = (UILabel_o *)this->fields.lnkSprite;
            if ( !transform )
              break;
            v84 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UILabel_o *)UnityEngine_Object__Instantiate_object_(
                                       v84,
                                       (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v85 = (UnityEngine_GameObject_o *)transform;
            transform = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)this->fields.lnkSprite,
                                       0LL);
            if ( !transform )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)transform,
                                                  0LL);
            GameObjectExtensions__SetParent(v85, parent, 0LL);
            if ( !byte_4B3E916 )
            {
              sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v87);
              byte_4B3E916 = 1;
            }
            GameObjectExtensions__SetLocalScale(v85, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            if ( !v85 )
              break;
            transform = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                       v85,
                                       (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            additionalSprites = (System_Collections_Generic_List_object__o *)this->fields.additionalSprites;
            if ( !additionalSprites )
              break;
            items = additionalSprites->fields._items;
            v92 = Method_System_Collections_Generic_List_LinkableSprite__Add__;
            ++additionalSprites->fields._version;
            if ( !items )
              break;
            size = additionalSprites->fields._size;
            v82 = (UnityEngine_Component_o *)transform;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                additionalSprites,
                (Il2CppObject *)transform,
                *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v92[4] + 192LL) + 112LL));
            }
            else
            {
              v94 = &items->obj.klass + size;
              additionalSprites->fields._size = size + 1;
              v94[4] = (Il2CppClass *)v82;
              sub_1BDB81C((CGThumbnailListItem_o *)(v94 + 4), (int32_t)v82, v88, v89);
            }
          }
          v95 = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( v83 >= v95->max_length )
            sub_1BDBADC(transform, keepPanelDepth, v80);
          v96 = (System_Collections_Generic_Dictionary_string__object__o *)v95->m_Items[v83];
          if ( v96
            && (v97 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(v96->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v97) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v96->klass->_2.typeHierarchy[v97 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v98 = v96;
            else
              v98 = 0LL;
            if ( !v82 )
              break;
          }
          else
          {
            v98 = 0LL;
            if ( !v82 )
              break;
          }
          v99 = script;
          v100 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v82, 0LL);
          klass = (UISprite_o *)v82[2].klass;
          v102 = (UnityEngine_GameObject_o *)v100;
          StringFromScript = NotificationDialog__getStringFromScript(
                               v100,
                               v98,
                               (System_String_o *)StringLiteral_23647/*"spriteName"*/,
                               v103);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          transform = (UILabel_o *)AtlasManager__SetEventUI(klass, StringFromScript, 0LL);
          if ( !v102 )
            break;
          UnityEngine_GameObject__SetActive(v102, (unsigned __int8)transform & 1, 0LL);
          v105 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v82, 0LL);
          v107 = NotificationDialog_TypeInfo;
          v108 = (UnityEngine_GameObject_o *)v105;
          script = v99;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v107 = NotificationDialog_TypeInfo;
          }
          v109 = (float *)&v107->static_fields->BANNER_RETRY_MAX;
          v48 = v149;
          v110 = v109[17];
          v111 = v109[18];
          v112 = v109[19];
          v153 = NotificationDialog__getVectFromScript(v105, v98, (System_String_o *)StringLiteral_22387/*"offset"*/, v106);
          v153.fields.x = v110 + v153.fields.x;
          v153.fields.y = v111 + v153.fields.y;
          v153.fields.z = v112 + v153.fields.z;
          GameObjectExtensions__SetLocalPosition(v108, v153, 0LL);
          v154 = NotificationDialog__getVectFromScript(v113, v98, (System_String_o *)StringLiteral_23538/*"size"*/, v114);
          x = v154.fields.x;
          y = v154.fields.y;
          z = v154.fields.z;
          if ( !byte_4B3E911 )
          {
            sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v115);
            byte_4B3E911 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          if ( x == static_fields->zeroVector.fields.x
            && y == static_fields->zeroVector.fields.y
            && z == static_fields->zeroVector.fields.z )
          {
            LinkableSprite__MakePixelPerfect((LinkableSprite_o *)v82, 0LL);
          }
          else
          {
            v122 = x == INFINITY ? 0x80000000 : (int)x;
            v123 = y == INFINITY ? 0x80000000 : (int)y;
            LinkableSprite__SetSize((LinkableSprite_o *)v82, v122, v123, 0LL);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v120,
                                                    v98,
                                                    (System_String_o *)StringLiteral_24523/*"urlOpenType"*/,
                                                    v121);
          v125 = (int)IntFromScript;
          v127 = NotificationDialog__getStringFromScript(
                   IntFromScript,
                   v98,
                   (System_String_o *)StringLiteral_24522/*"urlLink"*/,
                   v126);
          LinkableSprite__SetUp((LinkableSprite_o *)v82, v125, v127, 0LL);
          if ( !*p_sprites )
            break;
          if ( (__int64)++v83 >= (int)(*p_sprites)->max_length )
            goto LABEL_98;
        }
LABEL_138:
        sub_1BDBAD4(transform, keepPanelDepth);
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
                               (Il2CppObject *)StringLiteral_17045/*"banners"*/,
                               &value,
                               (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !value )
        goto LABEL_138;
      v129 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)v129
        || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v129 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_138;
      }
      v130 = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)value,
               (const MethodInfo_36D791C *)Method_System_Collections_Generic_List_object__ToArray__);
      this->fields.banners = v130;
      sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.banners, (int32_t)v130, v131, v132);
      banners = this->fields.banners;
      if ( banners )
      {
        if ( *(_QWORD *)&banners->max_length )
        {
          v134 = 0;
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
  v134 = 1;
LABEL_113:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v136 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3717/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v136 )
      goto LABEL_138;
    UILabel__set_text(v136, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    v137 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v139 = NotificationDialog_TypeInfo;
    v140 = (UnityEngine_GameObject_o *)v137;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v139 = NotificationDialog_TypeInfo;
    }
    v141 = (float *)&v139->static_fields->BANNER_RETRY_MAX;
    v142 = v141[20];
    v143 = v141[21];
    v144 = v141[22];
    v155 = NotificationDialog__getVectFromScript(v137, script, (System_String_o *)StringLiteral_17649/*"buttonOffset"*/, v138);
    v155.fields.x = v142 + v155.fields.x;
    v155.fields.y = v143 + v155.fields.y;
    v155.fields.z = v144 + v155.fields.z;
    GameObjectExtensions__SetLocalPosition(v140, v155, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v48, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !v48 )
      goto LABEL_138;
    UIPanel__set_depth(v48, keepPanelDepth, 0LL);
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  if ( v134 )
  {
    v145 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v145, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v145, 0, 0LL);
  }
  else
  {
    transform = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v146 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
    System_Action___ctor(v146, (Il2CppObject *)this, Method_NotificationDialog__Open_b__44_0__, 0LL);
    NotificationDialog__LoadBanners(this, v146, v147);
  }
}


void __fastcall NotificationDialog__SetCondensedScaleTitle(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  struct UILabel_o *Value; // x0
  UILabel_o *v7; // x20
  const MethodInfo_37F9B68 *v8; // x2
  System_Nullable_Vector2Int__o v9; // 0:x0.12

  if ( (byte_4B48742 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Nullable_Vector2Int__get_Value__, method);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v3);
    byte_4B48742 = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( !UnityEngine_Object__op_Equality(titleLabel, 0LL, 0LL) )
  {
    Value = this->fields.titleLabel;
    if ( !Value
      || (((void (__fastcall *)(struct UILabel_o *, Il2CppMethodPointer))Value->klass->vtable._33_MakePixelPerfect.method)(
            Value,
            Value->klass->vtable._34_get_minWidth.methodPtr),
          v7 = this->fields.titleLabel,
          *(_QWORD *)&v9.fields.hasValue = &this->fields.titleLabelDefaultSize,
          v9.fields.value.fields.m_Y = Method_System_Nullable_Vector2Int__get_Value__,
          Value = (struct UILabel_o *)System_Nullable_Vector2Int___get_Value(v9, v8),
          !v7) )
    {
      sub_1BDBAD4(Value, v5);
    }
    UILabel__SetCondensedScale(v7, (int32_t)Value, 0, 0LL);
  }
}


System_Collections_IEnumerator_o *__fastcall NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int32_t v4; // w2
  const MethodInfo *v5; // x3

  if ( (byte_4B48745 & 1) == 0 )
  {
    sub_1BDB878(&NotificationDialog__StartDownloadBanner_d__57_TypeInfo, method);
    byte_4B48745 = 1;
  }
  v3 = sub_1BDBAC4(NotificationDialog__StartDownloadBanner_d__57_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1BDB81C((CGThumbnailListItem_o *)(v3 + 32), (int32_t)this, v4, v5);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall NotificationDialog___Open_b__44_0(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  System_Action_o *v6; // x20

  if ( (byte_4B48749 & 1) == 0 )
  {
    sub_1BDB878(&System_Action_TypeInfo, method);
    sub_1BDB878(&Method_NotificationDialog_EndOpen__, v3);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v4);
    byte_4B48749 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BDBAD4(baseWindow, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v6 = (System_Action_o *)sub_1BDBAC4(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v6, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog___StartDownloadBanner_b__57_0(
        NotificationDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_4B4874A & 1) == 0 )
  {
    sub_1BDB878(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide);
    byte_4B4874A = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1BDBAD4(0LL, v7);
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

  if ( (byte_4B48741 & 1) == 0 )
  {
    sub_1BDB878(&System_Convert_TypeInfo, script);
    this = (NotificationDialog_o *)sub_1BDB878(
                                     &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                     v6);
    byte_4B48741 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1BDBAD4(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4B48740 & 1) == 0 )
  {
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, script);
    sub_1BDB878(&string_TypeInfo, v6);
    this = (NotificationDialog_o *)sub_1BDB878(&StringLiteral_1/*""*/, v7);
    byte_4B48740 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1BDBAD4(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4B4873F & 1) == 0 )
  {
    sub_1BDB878(&System_Convert_TypeInfo, script);
    sub_1BDB878(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    this = (NotificationDialog_o *)sub_1BDB878(&System_Collections_Generic_List_object__TypeInfo, v9);
    byte_4B4873F = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1BDBAD4(this, script);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_33A1A3C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v11 = value) != 0LL
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v18 = System_Convert__ToDouble(Item, 0LL);
    v19 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v11,
            1,
            (const MethodInfo_36D5AF4 *)Method_System_Collections_Generic_List_object__get_Item__);
    v20 = System_Convert__ToDouble(v19, 0LL);
    x = v18;
    y = v20;
    z = 0.0;
  }
  else
  {
    if ( !byte_4B3E911 )
    {
      sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v10);
      byte_4B3E911 = 1;
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
  if ( (byte_4B48746 & 1) == 0 )
  {
    sub_1BDB878(&StringLiteral_15627/*"Window/OkBtn"*/, method);
    byte_4B48746 = 1;
  }
  return (System_String_o *)StringLiteral_15627/*"Window/OkBtn"*/;
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
  sub_1BDB81C((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BDB938(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1BDBAF0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BDB9A0(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A29728;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A296E0;
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
  if ( (byte_4B4874B & 1) == 0 )
  {
    sub_1BDB878(&bool_TypeInfo, isOk);
    byte_4B4874B = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1BDB82C(this, v9, callback, object);
}


void __fastcall NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BDB830(result, 0LL, method);
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


void __fastcall NotificationDialog__StartDownloadBanner_d__57___ctor(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
  this->fields.__1__state = 1__state;
}


bool __fastcall NotificationDialog__StartDownloadBanner_d__57__MoveNext(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  const MethodInfo *v3; // x3
  NotificationDialog__StartDownloadBanner_d__57_o *v4; // x20
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
  NotificationDialog__StartDownloadBanner_d__57_o **p_mBannerWWW; // x21
  System_String_o *error; // x0
  NotificationDialog__StartDownloadBanner_d__57_o *v36; // x23
  int32_t v37; // w24
  int32_t v38; // w25
  int32_t format; // w26
  UnityEngine_Texture2D_o *v40; // x22
  System_Byte_array *data; // x0
  System_String_o *v42; // x0
  bool IsNullOrEmpty; // w0
  int v44; // w20
  NotificationDialog_c *v45; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v47; // x22
  ErrorDialog_ClickDelegate_o *v48; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v50; // x0
  int32_t v51; // w2
  const MethodInfo *v52; // x3
  bool v53; // w21
  int32_t v54; // w1
  CGThumbnailListItem_o *p_banner_5__2; // x21
  NotificationDialog_o *v56; // x0
  const MethodInfo *v57; // x3
  System_String_o *v58; // x21
  System_String_o *WebViewFullAddress; // x21
  UnityEngine_Networking_UnityWebRequest_o *v60; // x22
  int32_t v61; // w2
  const MethodInfo *v62; // x3
  UnityEngine_Networking_DownloadHandlerTexture_o *v63; // x22
  int32_t v64; // w2
  const MethodInfo *v65; // x3
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v66; // x0
  CGThumbnailListItem_o *p__2__current; // x20
  int32_t v68; // w2
  const MethodInfo *v69; // x3
  NotificationDialog__StartDownloadBanner_d__57_o *lnkTexture; // x23
  Il2CppObject *gameObject; // x23
  NotificationDialog__StartDownloadBanner_d__57_o *v73; // x23
  UnityEngine_Component_o *parent; // x0
  __int64 v75; // x1
  int32_t v76; // w2
  const MethodInfo *v77; // x3
  System_Collections_Generic_List_object__o *additionalTextures; // x8
  struct System_Object_array *items; // x9
  _QWORD *v80; // x10
  __int64 size; // x11
  Il2CppClass **v82; // x0
  NotificationDialog_o *v83; // x0
  const MethodInfo *v84; // x3
  UnityEngine_GameObject_o *v85; // x22
  NotificationDialog_c *v86; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v88; // s8
  float v89; // s9
  float v90; // s10
  NotificationDialog_o *v91; // x0
  const MethodInfo *v92; // x3
  __int64 v93; // x1
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v98; // x0
  const MethodInfo *v99; // x3
  int32_t v100; // w1
  int32_t v101; // w2
  NotificationDialog_o *IntFromScript; // x0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v104; // w20
  const MethodInfo *v105; // x3
  System_String_o *StringFromScript; // x0
  const MethodInfo *v107; // x1
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4

  v4 = this;
  if ( (byte_4B4874C & 1) == 0 )
  {
    sub_1BDB878(&ErrorDialog_ClickDelegate_TypeInfo, method);
    sub_1BDB878(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v5);
    sub_1BDB878(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v6);
    sub_1BDB878(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___, v7);
    sub_1BDB878(&Method_System_Collections_Generic_List_LinkableTexture__Add__, v8);
    sub_1BDB878(&LocalizationManager_TypeInfo, v9);
    sub_1BDB878(&NetworkManager_TypeInfo, v10);
    sub_1BDB878(&Method_NotificationDialog__StartDownloadBanner_b__57_0__, v11);
    sub_1BDB878(&NotificationDialog_TypeInfo, v12);
    sub_1BDB878(&Method_UnityEngine_Object_Instantiate_GameObject___, v13);
    sub_1BDB878(&UnityEngine_Object_TypeInfo, v14);
    sub_1BDB878(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v15);
    sub_1BDB878(&UnityEngine_Texture2D_TypeInfo, v16);
    sub_1BDB878(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v17);
    sub_1BDB878(&StringLiteral_17038/*"bannerUrl"*/, v18);
    sub_1BDB878(&StringLiteral_23538/*"size"*/, v19);
    sub_1BDB878(&StringLiteral_24523/*"urlOpenType"*/, v20);
    sub_1BDB878(&StringLiteral_22387/*"offset"*/, v21);
    sub_1BDB878(&StringLiteral_24522/*"urlLink"*/, v22);
    sub_1BDB878(&StringLiteral_1/*""*/, v23);
    this = (NotificationDialog__StartDownloadBanner_d__57_o *)sub_1BDB878(&StringLiteral_9257/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v24);
    byte_4B4874C = 1;
  }
  _1__state = v4->fields.__1__state;
  _4__this = v4->fields.__4__this;
  if ( _1__state == 1 )
  {
    v4->fields.__1__state = -1;
    if ( !_4__this )
      goto LABEL_94;
    p_mBannerWWW = (NotificationDialog__StartDownloadBanner_d__57_o **)&_4__this->fields.mBannerWWW;
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
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)v4->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                  (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                  0LL);
      if ( !v4->fields._texDl_5__3 )
        goto LABEL_94;
      v36 = this;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v4->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__57_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                                  this,
                                                                  this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
      if ( !v4->fields._texDl_5__3 )
        goto LABEL_94;
      v37 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v4->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__57_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                  this,
                                                                  this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
      if ( !v4->fields._texDl_5__3 )
        goto LABEL_94;
      v38 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v4->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0LL);
      v40 = (UnityEngine_Texture2D_o *)sub_1BDBAC4(UnityEngine_Texture2D_TypeInfo);
      UnityEngine_Texture2D___ctor_70172232(v40, v37, v38, format, 0, 0LL);
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)v4->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      UnityEngine_ImageConversion__LoadImage_70393224(v40, data, 0LL);
    }
    else
    {
LABEL_25:
      v40 = 0LL;
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
    v42 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v42, 0LL);
    if ( !v36 || !IsNullOrEmpty || !v36->fields.__2__current )
      goto LABEL_35;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)v40,
                                                                0LL,
                                                                0LL);
    if ( ((unsigned __int8)this & 1) == 0 )
    {
      lnkTexture = (NotificationDialog__StartDownloadBanner_d__57_o *)_4__this->fields.lnkTexture;
      if ( _4__this->fields.mLoadingIdx >= 1 )
      {
        if ( !lnkTexture )
          goto LABEL_94;
        gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                       (UnityEngine_Component_o *)_4__this->fields.lnkTexture,
                                       0LL);
        if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Object__Instantiate_object_(
                                                                    gameObject,
                                                                    (const MethodInfo_30BDAA4 *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_94;
        v73 = this;
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                    0LL);
        if ( !this )
          goto LABEL_94;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
        GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v73, parent, 0LL);
        if ( !byte_4B3E916 )
        {
          sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v75);
          byte_4B3E916 = 1;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v73,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        if ( !v73 )
          goto LABEL_94;
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v73,
                                                                    (const MethodInfo_3088520 *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        additionalTextures = (System_Collections_Generic_List_object__o *)_4__this->fields.additionalTextures;
        if ( !additionalTextures )
          goto LABEL_94;
        items = additionalTextures->fields._items;
        v80 = Method_System_Collections_Generic_List_LinkableTexture__Add__;
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
            *(const MethodInfo_36D5DC4 **)(*(_QWORD *)(v80[4] + 192LL) + 112LL));
        }
        else
        {
          v82 = &items->obj.klass + size;
          additionalTextures->fields._size = size + 1;
          v82[4] = (Il2CppClass *)lnkTexture;
          sub_1BDB81C((CGThumbnailListItem_o *)(v82 + 4), (int32_t)lnkTexture, v76, v77);
        }
      }
      if ( !lnkTexture )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)lnkTexture->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      (*(void (__fastcall **)(NotificationDialog__StartDownloadBanner_d__57_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
        this,
        v40,
        this->klass[1].vtable._0_Equals.methodPtr);
      this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)lnkTexture,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v83 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
      v85 = (UnityEngine_GameObject_o *)v83;
      v86 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v86 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v86->static_fields->BANNER_RETRY_MAX;
      v88 = p_BANNER_RETRY_MAX[17];
      v89 = p_BANNER_RETRY_MAX[18];
      v90 = p_BANNER_RETRY_MAX[19];
      VectFromScript = NotificationDialog__getVectFromScript(
                         v83,
                         v4->fields._banner_5__2,
                         (System_String_o *)StringLiteral_22387/*"offset"*/,
                         v84);
      VectFromScript.fields.x = v88 + VectFromScript.fields.x;
      VectFromScript.fields.y = v89 + VectFromScript.fields.y;
      VectFromScript.fields.z = v90 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v85, VectFromScript, 0LL);
      v109 = NotificationDialog__getVectFromScript(
               v91,
               v4->fields._banner_5__2,
               (System_String_o *)StringLiteral_23538/*"size"*/,
               v92);
      x = v109.fields.x;
      y = v109.fields.y;
      z = v109.fields.z;
      if ( !byte_4B3E911 )
      {
        sub_1BDB878(&UnityEngine_Vector3_TypeInfo, v93);
        byte_4B3E911 = 1;
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
          v100 = 0x80000000;
        else
          v100 = (int)x;
        if ( y == INFINITY )
          v101 = 0x80000000;
        else
          v101 = (int)y;
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, v100, v101, 0LL);
      }
      IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                v98,
                                                v4->fields._banner_5__2,
                                                (System_String_o *)StringLiteral_24523/*"urlOpenType"*/,
                                                v99);
      banner_5__2 = v4->fields._banner_5__2;
      v104 = (int)IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           IntFromScript,
                           banner_5__2,
                           (System_String_o *)StringLiteral_24522/*"urlLink"*/,
                           v105);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v104, StringFromScript, 0LL);
      NotificationDialog__LoadNext(_4__this, v107);
    }
    else
    {
LABEL_35:
      v44 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v44;
      v45 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v45 = NotificationDialog_TypeInfo;
      }
      if ( v44 <= v45->static_fields->BANNER_RETRY_MAX )
      {
        started = NotificationDialog__StartDownloadBanner(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_70269772((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_3916288 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v47 = LocalizationManager__Get((System_String_o *)StringLiteral_9257/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v48 = (ErrorDialog_ClickDelegate_o *)sub_1BDBAC4(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v48,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__57_0__,
          0LL);
        if ( !Instance )
          goto LABEL_94;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v47, v48, 0, 0LL);
      }
    }
    v50 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v50 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v50, 0LL);
      *p_mBannerWWW = 0LL;
      sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.mBannerWWW, 0, v51, v52);
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
          sub_1BDBADC(this, method, v2);
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
          p_banner_5__2 = (CGThumbnailListItem_o *)&v4->fields._banner_5__2;
          if ( LOBYTE(v29->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
            v54 = (System_Collections_Generic_Dictionary_string__object__c *)v29->klass->_2.typeHierarchy[methodPtr_low - 1] == v30
                ? (int)v29
                : 0;
          else
            v54 = 0;
        }
        else
        {
          v54 = 0;
          v4->fields._banner_5__2 = 0LL;
          p_banner_5__2 = (CGThumbnailListItem_o *)&v4->fields._banner_5__2;
        }
        sub_1BDB81C(p_banner_5__2, v54, v2, v3);
        v58 = NotificationDialog__getStringFromScript(
                v56,
                (System_Collections_Generic_Dictionary_string__object__o *)p_banner_5__2->klass,
                (System_String_o *)StringLiteral_17038/*"bannerUrl"*/,
                v57);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        WebViewFullAddress = NetworkManager__getWebViewFullAddress(v58, 0LL);
        v60 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1BDBAC4(UnityEngine_Networking_UnityWebRequest_TypeInfo);
        UnityEngine_Networking_UnityWebRequest___ctor(v60, WebViewFullAddress, 0LL);
        _4__this->fields.mBannerWWW = v60;
        sub_1BDB81C((CGThumbnailListItem_o *)&_4__this->fields.mBannerWWW, (int32_t)v60, v61, v62);
        v63 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1BDBAC4(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
        UnityEngine_Networking_DownloadHandlerTexture___ctor(v63, 0, 0LL);
        v4->fields._texDl_5__3 = v63;
        sub_1BDB81C((CGThumbnailListItem_o *)&v4->fields._texDl_5__3, (int32_t)v63, v64, v65);
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)_4__this->fields.mBannerWWW;
        if ( this )
        {
          UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
            (UnityEngine_Networking_UnityWebRequest_o *)this,
            (UnityEngine_Networking_DownloadHandler_o *)v4->fields._texDl_5__3,
            0LL);
          this = (NotificationDialog__StartDownloadBanner_d__57_o *)_4__this->fields.mBannerWWW;
          v53 = 1;
          _4__this->fields.refuseInit = 1;
          if ( this )
          {
            v66 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0LL);
            v4->fields.__2__current = (Il2CppObject *)v66;
            p__2__current = (CGThumbnailListItem_o *)&v4->fields.__2__current;
            sub_1BDB81C(p__2__current, (int32_t)v66, v68, v69);
            LODWORD(p__2__current[-1].fields._ThumbnailSpritePath_k__BackingField) = 1;
            return v53;
          }
        }
      }
    }
LABEL_94:
    sub_1BDBAD4(this, method);
  }
  return 0;
}


Il2CppObject *__fastcall NotificationDialog__StartDownloadBanner_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall __noreturn NotificationDialog__StartDownloadBanner_d__57__System_Collections_IEnumerator_Reset(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_1BDB88C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1BDBAC4(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1BDB88C(&Method_NotificationDialog__StartDownloadBanner_d__57_System_Collections_IEnumerator_Reset__);
  sub_1BDB9A0(v3, v4);
}


Il2CppObject *__fastcall NotificationDialog__StartDownloadBanner_d__57__System_Collections_IEnumerator_get_Current(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __fastcall NotificationDialog__StartDownloadBanner_d__57__System_IDisposable_Dispose(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  ;
}