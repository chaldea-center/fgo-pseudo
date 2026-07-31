void NotificationDialog___cctor(const MethodInfo *method)
{
  struct NotificationDialog_StaticFields *static_fields; // x8
  NotificationDialog_c *v2; // x9
  struct NotificationDialog_StaticFields *v3; // x10
  struct NotificationDialog_StaticFields *v4; // x8
  struct NotificationDialog_StaticFields *v5; // x8
  struct NotificationDialog_StaticFields *v6; // x8
  struct NotificationDialog_StaticFields *v7; // x10
  struct NotificationDialog_StaticFields *v8; // x8

  if ( (byte_5931FB5 & 1) == 0 )
  {
    sub_21FFC50(&NotificationDialog_TypeInfo);
    byte_5931FB5 = 1;
  }
  static_fields = NotificationDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x4334000000000000LL;
  v2 = NotificationDialog_TypeInfo;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  static_fields->BANNER_RETRY_MAX = 3;
  v3 = v2->static_fields;
  *(_QWORD *)&v3->MESSAGE_BASE_POS.fields.x = 0x416B333300000000LL;
  v3->MESSAGE_BASE_POS.fields.z = 0.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->NO_TITLE_MESSAGE_BASE_POS.fields.x = 0x4218000000000000LL;
  v4->NO_TITLE_MESSAGE_BASE_POS.fields.z = 0.0;
  v5 = v2->static_fields;
  *(_QWORD *)&v5->MESSAGE_LINE_POS.fields.x = 0x40A0000000000000LL;
  v5->MESSAGE_LINE_POS.fields.z = 0.0;
  v6 = v2->static_fields;
  v6->IMAGE_BASE_POS.fields.x = 0.0;
  *(_QWORD *)&v6->IMAGE_BASE_POS.fields.y = 0;
  v7 = v2->static_fields;
  *(_OWORD *)&v6->MESSAGE_BASE_SIZE_X = xmmword_E93430;
  *(_QWORD *)&v7->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v7->BUTTON_BASE_POS.fields.z = 0.0;
  v8 = v2->static_fields;
  *(_QWORD *)&v8->BUTTON_TEXT_POS.fields.x = 0xBF80000000000000LL;
  v8->BUTTON_TEXT_POS.fields.z = 0.0;
  *(_QWORD *)&v2->static_fields->BUTTON_BASE_SIZE_X = 0x38000000DALL;
}


void NotificationDialog___ctor(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  BaseDialog_c *v4; // x0
  int v5; // w9

  if ( (byte_5931FB4 & 1) == 0 )
  {
    sub_21FFC50(&BaseDialog_TypeInfo);
    byte_5931FB4 = 1;
  }
  v4 = BaseDialog_TypeInfo;
  this->fields.MESSAGE_FONT_SIZE = 30;
  v5 = *(&v4->_2.cctor_finished + 1);
  this->fields.isInitPanelDepth = 1;
  this->fields.onClickOkSeKind = 1;
  if ( !v5 )
    j_il2cpp_runtime_class_init_0(v4, method, v2);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


// local variable allocation has failed, the output may be wrong!
void NotificationDialog__AdjustMessageLabel(
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
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  UnityEngine_GameObject_o *baseWindow; // x0
  struct UILabel_o *messageLabel; // x24
  __int64 v30; // x2
  unsigned int monitor_high; // w27
  float v32; // s12
  float v33; // s0
  UnityEngine_Object_o *v34; // x27
  NotificationDialog_c *v35; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  System_String_o *v37; // x25
  float v38; // s0
  float v39; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v41; // [xsp+0h] [xbp-B0h] BYREF
  Il2CppObject *v42; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v43; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-98h] BYREF
  Il2CppObject *v45; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v46; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_5931FAA & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    sub_21FFC50(&Method_UnityEngine_Component_TryGetComponent_UISprite___);
    sub_21FFC50(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___);
    sub_21FFC50(&System_Math_TypeInfo);
    sub_21FFC50(&NotificationDialog_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931FAA = 1;
  }
  v45 = 0;
  component = 0;
  v43 = 0;
  v41 = 0;
  v42 = 0;
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNoTitle, message);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0, 0) )
    {
      baseWindow = this->fields.baseWindow;
      if ( !baseWindow )
        goto LABEL_53;
      messageLabel = this->fields.noTitleMessageLabel;
      if ( !UnityEngine_GameObject__TryGetComponent_object_(
              baseWindow,
              &component,
              (const MethodInfo_3884A68 *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
        goto LABEL_30;
      baseWindow = (UnityEngine_GameObject_o *)this->fields.okBtnLabel;
      if ( !baseWindow )
        goto LABEL_53;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__get_transform(
                                                 (UnityEngine_Component_o *)baseWindow,
                                                 0);
      if ( !baseWindow )
        goto LABEL_53;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Transform__get_parent(
                                                 (UnityEngine_Transform_o *)baseWindow,
                                                 0);
      if ( !baseWindow )
        goto LABEL_53;
      baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                 (UnityEngine_Component_o *)baseWindow,
                                                 &v43,
                                                 (const MethodInfo_37EE6DC *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)baseWindow & 1) != 0 )
      {
        if ( !component || !v43 )
          goto LABEL_53;
        monitor_high = HIDWORD(component[10].monitor);
        v32 = (float)((float)SHIDWORD(v43[10].monitor) * 0.5) + buttonPosY;
        if ( !*(&System_Math_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, isNoTitle, v30);
        v33 = fabsf(vcvts_n_f32_s32(monitor_high, 1u) + -30.0) + fabsf(v32);
        if ( isAdjustTextPos )
          y = v32 + (float)(v33 * 0.5);
        if ( v33 == INFINITY )
          messageSizeY = 0x80000000;
        else
          messageSizeY = (int)v33;
      }
      else
      {
LABEL_30:
        v35 = NotificationDialog_TypeInfo;
        if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, isNoTitle, v30);
          v35 = NotificationDialog_TypeInfo;
        }
        static_fields = v35->static_fields;
        y = static_fields->NO_TITLE_MESSAGE_BASE_POS.fields.y;
        messageSizeY = static_fields->NO_TITLE_MESSAGE_BASE_SIZE_Y;
      }
      baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
      if ( baseWindow )
      {
        UILabel__set_text((UILabel_o *)baseWindow, **(System_String_o ***)(qword_594C0B8 + 184), 0);
        baseWindow = (UnityEngine_GameObject_o *)this->fields.messageLabel;
        if ( baseWindow )
        {
          baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                     (UnityEngine_Component_o *)baseWindow,
                                                     &v42,
                                                     (const MethodInfo_37EE6DC *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
          if ( ((unsigned __int8)baseWindow & 1) == 0 )
            goto LABEL_38;
          baseWindow = (UnityEngine_GameObject_o *)v42;
          if ( !v42 )
            goto LABEL_53;
          goto LABEL_37;
        }
      }
LABEL_53:
      sub_21FFECC(baseWindow, isNoTitle);
    }
  }
  messageLabel = this->fields.messageLabel;
  v34 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNoTitle, message);
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v34, 0, 0);
  if ( ((unsigned __int8)baseWindow & 1) != 0 )
  {
    baseWindow = (UnityEngine_GameObject_o *)this->fields.noTitleMessageLabel;
    if ( baseWindow )
    {
      UILabel__set_text((UILabel_o *)baseWindow, **(System_String_o ***)(qword_594C0B8 + 184), 0);
      baseWindow = (UnityEngine_GameObject_o *)this->fields.noTitleMessageLabel;
      if ( baseWindow )
      {
        baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Component__TryGetComponent_object_(
                                                   (UnityEngine_Component_o *)baseWindow,
                                                   (Il2CppObject **)&v41,
                                                   (const MethodInfo_37EE6DC *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
        if ( ((unsigned __int8)baseWindow & 1) == 0 )
          goto LABEL_38;
        baseWindow = v41;
        if ( !v41 )
          goto LABEL_53;
LABEL_37:
        UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)baseWindow, 0, 0);
        goto LABEL_38;
      }
    }
    goto LABEL_53;
  }
LABEL_38:
  if ( message )
  {
    baseWindow = (UnityEngine_GameObject_o *)System_String__Trim_75499764(message, 0xAu, 0);
    v37 = (System_String_o *)baseWindow;
    if ( !messageLabel )
      goto LABEL_53;
  }
  else
  {
    v37 = **(System_String_o ***)(qword_594C0B8 + 184);
    if ( !messageLabel )
      goto LABEL_53;
  }
  UILabel__set_spacingY(messageLabel, spacingY, 0);
  UIWidget__SetDimensions((UIWidget_o *)messageLabel, messageSizeX, messageSizeY, 0);
  UILabel__set_maxLineCount(messageLabel, maxLine, 0);
  if ( !messageFontSize )
    messageFontSize = this->fields.MESSAGE_FONT_SIZE;
  UILabel__set_fontSize(messageLabel, messageFontSize, 0);
  if ( UnityEngine_Component__TryGetComponent_object_(
         (UnityEngine_Component_o *)messageLabel,
         &v45,
         (const MethodInfo_37EE6DC *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___) )
  {
    baseWindow = (UnityEngine_GameObject_o *)v45;
    if ( !v45 )
      goto LABEL_53;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v45, 1, 0);
  }
  if ( adjustText )
    WrapControlText__textAdjust(messageLabel, v37, messageLabel->fields.mFontSize, 0, 0);
  else
    UILabel__set_text(messageLabel, v37, 0);
  v38 = -0.0;
  if ( messagePosYForcedAdd != 0.0 )
    v38 = messagePosYForcedAdd;
  v39 = v38 + y;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0);
  v46.fields.x = x;
  v46.fields.y = v39;
  v46.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v46, 0);
}


// local variable allocation has failed, the output may be wrong!
void NotificationDialog__AdjustScriptMessageLabel(
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
  struct UILabel_o *v18; // x24
  UILabel_o *messageLabel; // x0
  struct NotificationDialog_StaticFields *static_fields; // x9
  System_String_o **v21; // x8
  UnityEngine_Object_o *v22; // x25
  __int64 v23; // x2
  System_String_o *v24; // x23
  __int64 v25; // x1
  __int64 v26; // x2
  UnityEngine_Object_o *v27; // x21
  __int64 v28; // x2
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
  if ( (byte_5931FAB & 1) == 0 )
  {
    sub_21FFC50(&NotificationDialog_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_22605/*"messageOffset"*/);
    byte_5931FAB = 1;
  }
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNoTitle, message);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0, 0) )
    {
      v18 = this->fields.noTitleMessageLabel;
      if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, isNoTitle, message);
      messageLabel = this->fields.messageLabel;
      if ( !messageLabel )
        goto LABEL_34;
      static_fields = NotificationDialog_TypeInfo->static_fields;
      v21 = *(System_String_o ***)(qword_594C0B8 + 184);
      messageSizeY = static_fields->NO_TITLE_MESSAGE_BASE_SIZE_Y;
      y = static_fields->NO_TITLE_MESSAGE_BASE_POS.fields.y;
      goto LABEL_16;
    }
  }
  v18 = this->fields.messageLabel;
  v22 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNoTitle, message);
  if ( UnityEngine_Object__op_Inequality(v22, 0, 0) )
  {
    messageLabel = this->fields.noTitleMessageLabel;
    if ( !messageLabel )
      goto LABEL_34;
    v21 = *(System_String_o ***)(qword_594C0B8 + 184);
LABEL_16:
    UILabel__set_text(messageLabel, *v21, 0);
  }
  if ( message )
    v24 = System_String__Trim_75499764(message, 0xAu, 0);
  else
    v24 = **(System_String_o ***)(qword_594C0B8 + 184);
  messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
  if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, isNoTitle, v23);
  if ( !v18 )
    goto LABEL_34;
  UIWidget__SetDimensions(
    (UIWidget_o *)v18,
    NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
    messageSizeY,
    0);
  UILabel__set_maxLineCount(v18, maxLine, 0);
  UILabel__set_fontSize(v18, this->fields.MESSAGE_FONT_SIZE, 0);
  WrapControlText__textAdjust(v18, v24, v18->fields.mFontSize, 0, 0);
  v27 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25, v26);
  if ( UnityEngine_Object__op_Inequality(v27, 0, 0) )
  {
    messageLabel = this->fields.noTitleMessageLabel;
    if ( !messageLabel )
      goto LABEL_34;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)messageLabel,
                                           0);
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_22605/*"messageOffset"*/,
                       v30);
    VectFromScript.fields.x = x + VectFromScript.fields.x;
    VectFromScript.fields.y = y + VectFromScript.fields.y;
    VectFromScript.fields.z = z + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)gameObject, VectFromScript, 0);
  }
  v31 = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNoTitle, v28);
  if ( UnityEngine_Object__op_Inequality(v31, 0, 0) )
  {
    messageLabel = this->fields.messageLabel;
    if ( messageLabel )
    {
      v32 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0);
      v35 = NotificationDialog__getVectFromScript(v32, script, (System_String_o *)StringLiteral_22605/*"messageOffset"*/, v33);
      v35.fields.x = x + v35.fields.x;
      v35.fields.z = z + v35.fields.z;
      v35.fields.y = y + v35.fields.y;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v32, v35, 0);
      return;
    }
LABEL_34:
    sub_21FFECC(messageLabel, isNoTitle);
  }
}


// local variable allocation has failed, the output may be wrong!
void NotificationDialog__CachedTitleLabel(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo_45B4BD8 *v2; // x3
  NotificationDialog_o *v3; // x19
  struct UILabel_o *titleLabel; // x8
  __int64 *v5; // x0 OVERLAPPED
  __int64 v6; // x1 OVERLAPPED
  UnityEngine_Vector2Int_o v7; // x2
  int32_t v8; // w9
  __int64 v9; // [xsp+0h] [xbp-30h] BYREF
  int32_t v10; // [xsp+8h] [xbp-28h]

  v3 = this;
  if ( (byte_5931FA6 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_Vector2Int___ctor__);
    this = (NotificationDialog_o *)sub_21FFC50(&Method_System_Nullable_Vector2Int__get_HasValue__);
    byte_5931FA6 = 1;
  }
  if ( !v3->fields.titleLabelDefaultSize.fields.hasValue )
  {
    titleLabel = v3->fields.titleLabel;
    if ( !titleLabel )
      sub_21FFECC(this, method);
    v5 = &v9;
    v6 = *(_QWORD *)&titleLabel->fields.mWidth;
    v10 = 0;
    v9 = 0;
    v7 = (UnityEngine_Vector2Int_o)Method_System_Nullable_Vector2Int___ctor__;
    System_Nullable_Vector2Int____ctor(*(System_Nullable_Vector2Int__o *)&v5, v7, v2);
    v8 = v10;
    *(_QWORD *)&v3->fields.titleLabelDefaultSize.fields.hasValue = v9;
    v3->fields.titleLabelDefaultSize.fields.value.fields.m_Y = v8;
  }
}


void NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_37499964(this, 0, v2);
}


void NotificationDialog__Close_37499964(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  System_Action_c *v10; // x0
  System_Action_o *v11; // x20

  if ( (byte_5931FB0 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_NotificationDialog_EndClose__);
    byte_5931FB0 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  v10 = System_Action_TypeInfo;
  this->fields.isButtonEnable = 0;
  v11 = (System_Action_o *)sub_21FFEBC(v10);
  System_Action___ctor(v11, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v11, 0);
}


void NotificationDialog__EndClose(NotificationDialog_o *this, const MethodInfo *method)
{
  System_String_o *v3; // x2
  System_String_o *v4; // x3
  int32_t v5; // w4
  int32_t v6; // w5
  bool v7; // w6
  bool v8; // w7
  MissionNaviTransitionBoardItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  NotificationDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_21FFBF4(p_closeEndFunc, 0, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(intptr_t, intptr_t))v10->fields.invoke_impl)(v10->fields.method_code, v10->fields.method);
  }
}


void NotificationDialog__EndOpen(NotificationDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void NotificationDialog__Init(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 titleLabel; // x0
  __int64 v4; // x1
  __int64 v5; // x2
  UnityEngine_Object_o *v6; // x20
  __int64 v7; // x2
  const MethodInfo_45B4BF0 *v8; // x2
  UIWidget_o *v9; // x21
  UIWidget_o *v10; // x21
  const MethodInfo_45B4BF0 *v11; // x2
  UnityEngine_Transform_o *v12; // x20
  UnityEngine_Object_o *messageLabel; // x20
  __int64 v14; // x2
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  __int64 v16; // x2
  UnityEngine_Object_o *okBtnLabel; // x20
  __int64 v18; // x2
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  System_String_o *v20; // x2
  System_String_o *v21; // x3
  int32_t v22; // w4
  int32_t v23; // w5
  bool v24; // w6
  bool v25; // w7
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v27; // x8
  __int64 v28; // x1
  __int64 v29; // x2
  UnityEngine_Object_o *v30; // x20
  struct LinkableTexture_o *v31; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  int32_t v33; // w21
  int32_t v34; // w2
  __int64 v35; // x1
  __int64 v36; // x2
  UnityEngine_Object_o *gameObject; // x22
  int v38; // w8
  System_Collections_Generic_List_object__o *v39; // x21
  System_String_o *v40; // x2
  System_String_o *v41; // x3
  int32_t v42; // w4
  int32_t v43; // w5
  bool v44; // w6
  bool v45; // w7
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  int32_t v47; // w21
  int32_t v48; // w2
  __int64 v49; // x1
  __int64 v50; // x2
  UnityEngine_Object_o *v51; // x22
  UnityEngine_Object_o *v52; // x0
  int v53; // w8
  System_Collections_Generic_List_object__o *v54; // x21
  System_String_o *v55; // x2
  System_String_o *v56; // x3
  int32_t v57; // w4
  int32_t v58; // w5
  bool v59; // w6
  bool v60; // w7
  System_Nullable_Vector2Int__o v61; // 0:x0.12
  System_Nullable_Vector2Int__o v62; // 0:x0.12

  if ( (byte_5931FA5 & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    sub_21FFC50(&Method_System_Collections_Generic_List_LinkableSprite___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_LinkableTexture___ctor__);
    sub_21FFC50(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
    sub_21FFC50(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
    sub_21FFC50(&System_Collections_Generic_List_LinkableSprite__TypeInfo);
    sub_21FFC50(&System_Collections_Generic_List_LinkableTexture__TypeInfo);
    sub_21FFC50(&Method_System_Nullable_Vector2Int__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_Vector2Int__get_Value__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5931FA5 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    titleLabel = (__int64)this->fields.titleLabel;
    if ( !titleLabel )
      goto LABEL_67;
    UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    titleLabel = (__int64)this->fields.messageLabel;
    if ( !titleLabel )
      goto LABEL_67;
    UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    v6 = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4, v5);
    if ( UnityEngine_Object__op_Inequality(v6, 0, 0) )
    {
      titleLabel = (__int64)this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_67;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( this->fields.titleLabelDefaultSize.fields.hasValue )
      {
        *(_QWORD *)&v61.fields.hasValue = &this->fields.titleLabelDefaultSize;
        v9 = (UIWidget_o *)this->fields.titleLabel;
        v61.fields.value.fields.m_Y = Method_System_Nullable_Vector2Int__get_Value__;
        titleLabel = (__int64)System_Nullable_Vector2Int___get_Value(v61, v8);
        if ( !v9 )
          goto LABEL_67;
        UIWidget__set_width(v9, titleLabel, 0);
        v62.fields.value.fields.m_Y = Method_System_Nullable_Vector2Int__get_Value__;
        v10 = (UIWidget_o *)this->fields.titleLabel;
        *(_QWORD *)&v62.fields.hasValue = &this->fields.titleLabelDefaultSize;
        titleLabel = (__int64)System_Nullable_Vector2Int___get_Value(v62, v11);
        if ( !v10 )
          goto LABEL_67;
        UIWidget__set_height(v10, SHIDWORD(titleLabel), 0);
      }
      titleLabel = (__int64)this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_67;
      titleLabel = (__int64)UnityEngine_Component__get_transform((UnityEngine_Component_o *)titleLabel, 0);
      v12 = (UnityEngine_Transform_o *)titleLabel;
      if ( !byte_5931945 )
      {
        titleLabel = sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
        byte_5931945 = 1;
      }
      if ( !v12 )
        goto LABEL_67;
      UnityEngine_Transform__set_localScale(v12, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
    }
    messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v7);
    if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
    {
      titleLabel = (__int64)this->fields.messageLabel;
      if ( !titleLabel )
        goto LABEL_67;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v14);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0, 0) )
    {
      titleLabel = (__int64)this->fields.noTitleMessageLabel;
      if ( !titleLabel )
        goto LABEL_67;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
    okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v16);
    if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
    {
      titleLabel = (__int64)this->fields.okBtnLabel;
      if ( !titleLabel )
        goto LABEL_67;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    }
    mBannerWWW = this->fields.mBannerWWW;
    if ( mBannerWWW )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(mBannerWWW, 0);
      this->fields.mBannerWWW = 0;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.mBannerWWW, 0, v20, v21, v22, v23, v24, v25);
    }
    lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v18);
    titleLabel = UnityEngine_Object__op_Inequality(lnkTexture, 0, 0);
    if ( (titleLabel & 1) != 0 )
    {
      v27 = this->fields.lnkTexture;
      if ( !v27 )
        goto LABEL_67;
      titleLabel = (__int64)v27->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_67;
      v30 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                      titleLabel,
                                      *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28, v29);
      UnityEngine_Object__Destroy_83246496(v30, 0);
      v31 = this->fields.lnkTexture;
      if ( !v31 )
        goto LABEL_67;
      titleLabel = (__int64)v31->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_67;
      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)titleLabel + 744LL))(
        titleLabel,
        0,
        *(_QWORD *)(*(_QWORD *)titleLabel + 752LL));
    }
    p_additionalSprites = &this->fields.additionalSprites;
    titleLabel = (__int64)this->fields.additionalSprites;
    if ( titleLabel )
    {
      v33 = 0;
      while ( 1 )
      {
        v34 = *(_DWORD *)(titleLabel + 24);
        if ( v33 >= v34 )
          break;
        titleLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)titleLabel,
                                v33,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
        if ( titleLabel )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)titleLabel,
                                                 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v35, v36);
          UnityEngine_Object__Destroy_83246496(gameObject, 0);
          titleLabel = (__int64)*p_additionalSprites;
          ++v33;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_67;
      }
      v38 = *(_DWORD *)(titleLabel + 28) + 1;
      *(_DWORD *)(titleLabel + 24) = 0;
      *(_DWORD *)(titleLabel + 28) = v38;
      if ( v34 >= 1 )
        System_Array__Clear(*(System_Array_o **)(titleLabel + 16), 0, v34, 0);
    }
    else
    {
      v39 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_LinkableSprite__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v39,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v39;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.additionalSprites,
        (int32_t)v39,
        v40,
        v41,
        v42,
        v43,
        v44,
        v45);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    titleLabel = (__int64)this->fields.additionalTextures;
    if ( titleLabel )
    {
      v47 = 0;
      while ( 1 )
      {
        v48 = *(_DWORD *)(titleLabel + 24);
        if ( v47 >= v48 )
          break;
        titleLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                (System_Collections_Generic_List_object__o *)titleLabel,
                                v47,
                                (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
        if ( titleLabel )
        {
          titleLabel = *(_QWORD *)(titleLabel + 48);
          if ( titleLabel )
          {
            v51 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                            titleLabel,
                                            *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49, v50);
            UnityEngine_Object__Destroy_83246496(v51, 0);
            titleLabel = (__int64)*p_additionalTextures;
            if ( *p_additionalTextures )
            {
              titleLabel = (__int64)System_Collections_Generic_List_object___get_Item(
                                      (System_Collections_Generic_List_object__o *)titleLabel,
                                      v47,
                                      (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
              if ( titleLabel )
              {
                v52 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0);
                UnityEngine_Object__Destroy_83246496(v52, 0);
                titleLabel = (__int64)*p_additionalTextures;
                ++v47;
                if ( *p_additionalTextures )
                  continue;
              }
            }
          }
        }
        goto LABEL_67;
      }
      v53 = *(_DWORD *)(titleLabel + 28) + 1;
      *(_DWORD *)(titleLabel + 24) = 0;
      *(_DWORD *)(titleLabel + 28) = v53;
      if ( v48 >= 1 )
        System_Array__Clear(*(System_Array_o **)(titleLabel + 16), 0, v48, 0);
    }
    else
    {
      v54 = (System_Collections_Generic_List_object__o *)sub_21FFEBC(System_Collections_Generic_List_LinkableTexture__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v54,
        (const MethodInfo_444F2C4 *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v54;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.additionalTextures,
        (int32_t)v54,
        v55,
        v56,
        v57,
        v58,
        v59,
        v60);
    }
    titleLabel = (__int64)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0);
      BaseDialog__Init((BaseDialog_o *)this, 0);
      return;
    }
LABEL_67:
    sub_21FFECC(titleLabel, method);
  }
}


void NotificationDialog__LoadBanners(NotificationDialog_o *this, System_Action_o *callback, const MethodInfo *method)
{
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  const MethodInfo *v9; // x1
  System_Collections_IEnumerator_o *started; // x1

  this->fields.mAfterLoad = callback;
  sub_21FFBF4(
    (MissionNaviTransitionBoardItem_o *)&this->fields.mAfterLoad,
    (int32_t)callback,
    (System_String_o *)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.mLoadingIdx = 0;
  started = NotificationDialog__StartDownloadBanner(this, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, started, 0);
}


void NotificationDialog__LoadNext(NotificationDialog_o *this, const MethodInfo *method)
{
  struct System_Object_array *banners; // x9
  int32_t v3; // w8
  System_Collections_IEnumerator_o *started; // x1

  banners = this->fields.banners;
  v3 = this->fields.mLoadingIdx + 1;
  this->fields.mLoadingIdx = v3;
  if ( !banners )
    sub_21FFECC(this, method);
  if ( v3 >= SLODWORD(banners->max_length) )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, started, 0);
  }
}


void NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct NotificationDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_5931FB1 & 1) == 0 )
  {
    sub_21FFC50(&Method_NotificationDialog_OnClickOk__);
    byte_5931FB1 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NotificationDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_NotificationDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_21FFC68(Method_NotificationDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_21FFC34(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0, 0);
    clickFunc = this->fields.clickFunc;
    if ( clickFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickFunc->fields.invoke_impl)(
        clickFunc->fields.method_code,
        1,
        clickFunc->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
void NotificationDialog__Open(
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
  System_Nullable_int__o v24; // x13
  System_Nullable_float__o v25; // x25
  System_Nullable_float__o v26; // x20
  bool v27; // w12
  NotificationDialog_o *v28; // x11
  System_Nullable_int__o v29; // x14
  bool v30; // w10
  System_Nullable_int__o v31; // x15
  int32_t v32; // w23
  int32_t v33; // w21
  int32_t v34; // w19
  bool v35; // w17
  float value; // s9
  NotificationDialog_c *v38; // x0
  NotificationDialog_ClickDelegate_o *v39; // x22
  System_String_o *v40; // x24
  int32_t v41; // w20
  bool v42; // w29
  System_String_o *v43; // x25
  NotificationDialog_o *v44; // x28
  System_Nullable_int__o v45; // x19
  System_Nullable_int__o v46; // x21
  bool v47; // w23
  float y; // s1
  NotificationDialog_c *v49; // x0
  NotificationDialog_ClickDelegate_o *v50; // x22
  System_String_o *v51; // x24
  int32_t v52; // w20
  System_String_o *v53; // x25
  bool v54; // w28
  NotificationDialog_o *v55; // x29
  System_Nullable_int__o v56; // x19
  System_Nullable_int__o v57; // x21
  bool v58; // w23
  System_String_o *v59; // [xsp+8h] [xbp-A8h]
  System_String_o *v60; // [xsp+10h] [xbp-A0h]
  int32_t v61; // [xsp+10h] [xbp-A0h]
  NotificationDialog_ClickDelegate_o *v62; // [xsp+18h] [xbp-98h]
  System_Nullable_int__o v63; // [xsp+18h] [xbp-98h]
  System_Nullable_int__o v64; // [xsp+18h] [xbp-98h]
  int32_t v65; // [xsp+20h] [xbp-90h]
  bool v66; // [xsp+20h] [xbp-90h]
  bool v67; // [xsp+20h] [xbp-90h]
  int32_t v68; // [xsp+24h] [xbp-8Ch]
  System_Nullable_float__o v69; // [xsp+28h] [xbp-88h]
  System_Nullable_float__o v70; // [xsp+28h] [xbp-88h]
  int32_t v71; // [xsp+30h] [xbp-80h]
  int32_t v72; // [xsp+30h] [xbp-80h]
  bool v73; // [xsp+34h] [xbp-7Ch]
  bool v74; // [xsp+34h] [xbp-7Ch]
  bool v75; // [xsp+34h] [xbp-7Ch]
  int32_t v76; // [xsp+38h] [xbp-78h]
  int32_t v77; // [xsp+38h] [xbp-78h]
  int32_t v78; // [xsp+38h] [xbp-78h]
  int32_t v79; // [xsp+3Ch] [xbp-74h]
  int32_t v80; // [xsp+3Ch] [xbp-74h]
  int32_t v81; // [xsp+3Ch] [xbp-74h]

  v24 = buttonWidgetSizeY;
  v25 = buttonPosY;
  v26 = titlePosY;
  v27 = useTitleCondensedScale;
  v28 = this;
  v29 = buttonWidgetSizeX;
  v30 = adjustText;
  v31 = messageWidgetSizeY;
  v32 = spacingY;
  v33 = onClickOkSeKind;
  v34 = messageFontSize;
  v35 = canMaskTouchClose;
  if ( (byte_5931FA7 & 1) == 0 )
  {
    v76 = panelDepth;
    v79 = titleSize;
    v65 = maxLine;
    v60 = message;
    v62 = func;
    v73 = isLineDraw;
    v59 = title;
    sub_21FFC50(&NotificationDialog_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_float__get_HasValue__);
    v29 = buttonWidgetSizeX;
    v27 = useTitleCondensedScale;
    v24 = buttonWidgetSizeY;
    maxLine = v65;
    v34 = messageFontSize;
    isLineDraw = v73;
    title = v59;
    message = v60;
    v26 = titlePosY;
    panelDepth = v76;
    titleSize = v79;
    func = v62;
    v35 = canMaskTouchClose;
    v31 = messageWidgetSizeY;
    v28 = this;
    v30 = adjustText;
    byte_5931FA7 = 1;
  }
  if ( messagePosY.fields.hasValue )
  {
    value = messagePosY.fields.value;
  }
  else
  {
    v38 = NotificationDialog_TypeInfo;
    if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      v77 = panelDepth;
      v80 = titleSize;
      v39 = func;
      v40 = message;
      v69 = v26;
      v41 = maxLine;
      v42 = v30;
      v43 = title;
      v44 = v28;
      v71 = v34;
      v74 = isLineDraw;
      v45 = v24;
      v66 = v27;
      v46 = v31;
      v63 = v29;
      v47 = v35;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, title, message);
      v31 = v46;
      v24 = v45;
      v35 = v47;
      v27 = v66;
      v33 = onClickOkSeKind;
      v34 = v71;
      isLineDraw = v74;
      panelDepth = v77;
      titleSize = v80;
      v32 = spacingY;
      v29 = v63;
      title = v43;
      v25 = buttonPosY;
      maxLine = v41;
      v26 = v69;
      v38 = NotificationDialog_TypeInfo;
      v28 = v44;
      v30 = v42;
      message = v40;
      func = v39;
    }
    value = v38->static_fields->MESSAGE_BASE_POS.fields.y;
  }
  if ( v25.fields.hasValue )
  {
    y = v25.fields.value;
  }
  else
  {
    v49 = NotificationDialog_TypeInfo;
    if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      v78 = panelDepth;
      v81 = titleSize;
      v50 = func;
      v51 = message;
      v70 = v26;
      v52 = maxLine;
      v53 = title;
      v72 = v34;
      v75 = isLineDraw;
      v54 = v30;
      v55 = v28;
      v67 = v27;
      v68 = v33;
      v56 = v24;
      v57 = v31;
      v64 = v29;
      v61 = v32;
      v58 = v35;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, title, message);
      v31 = v57;
      v24 = v56;
      v35 = v58;
      v27 = v67;
      v33 = v68;
      v34 = v72;
      isLineDraw = v75;
      panelDepth = v78;
      titleSize = v81;
      v32 = v61;
      v29 = v64;
      maxLine = v52;
      v26 = v70;
      v49 = NotificationDialog_TypeInfo;
      v28 = v55;
      v30 = v54;
      title = v53;
      message = v51;
      func = v50;
    }
    y = v49->static_fields->BUTTON_BASE_POS.fields.y;
  }
  NotificationDialog__OpenDialog(
    v28,
    title,
    message,
    func,
    panelDepth,
    maxLine,
    titleSize,
    isLineDraw,
    v35,
    value,
    y,
    v34,
    v33,
    v26,
    v32,
    v31,
    v30,
    v29,
    v24,
    messagePosYForcedAdd,
    isAdjustTextPos,
    0,
    v27,
    (const MethodInfo *)isAdjustTextPos);
}


void NotificationDialog__OpenDialog(
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
  UIPanel_o *TargetPanel; // x0
  __int64 v32; // x1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v40; // x21
  UnityEngine_Object_c *v41; // x0
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  __int64 v44; // x1
  __int64 v45; // x2
  UnityEngine_Object_o *titleLabel; // x29
  const MethodInfo *v47; // x1
  __int64 v48; // x2
  System_String_o *v49; // x1
  __int64 v50; // x2
  NotificationDialog_c *v51; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s12
  float z; // s11
  float value; // s13
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v57; // x0
  struct NotificationDialog_StaticFields *v58; // x8
  float v59; // s11
  float v60; // s12
  unsigned __int64 v61; // x28
  unsigned __int64 messageSizeX; // x19
  UnityEngine_Object_o *lineSprite; // x29
  __int64 v64; // x2
  NotificationDialog_c *v65; // x0
  struct NotificationDialog_StaticFields *v66; // x8
  UnityEngine_Object_o *messageLabel; // x27
  __int64 v68; // x1
  __int64 v69; // x2
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x22
  __int64 v72; // x2
  UnityEngine_Object_o *lnkTexture; // x22
  __int64 v74; // x2
  UnityEngine_Object_o *okBtnLabel; // x22
  __int64 v76; // x2
  NotificationDialog_c *v77; // x0
  struct NotificationDialog_StaticFields *v78; // x8
  float v79; // s9
  float y; // s12
  float v81; // s13
  UILabel_o *v82; // x22
  float v83; // s10
  float v84; // s8
  float v85; // s11
  UnityEngine_GameObject_o *v86; // x0
  UnityEngine_GameObject_o *v87; // x0
  UnityEngine_GameObject_o *v88; // x22
  Il2CppObject *Component_object; // x23
  __int64 v90; // x1
  __int64 v91; // x2
  Il2CppObject *v92; // x22
  unsigned __int64 v93; // x19
  unsigned __int64 v94; // x25
  System_Action_o *v95; // x19
  const MethodInfo *v96; // [xsp+10h] [xbp-E0h]
  UnityEngine_Vector3_o v101; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v102; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v103; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v104; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5931FA8 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_NotificationDialog_EndOpen__);
    sub_21FFC50(&NotificationDialog_TypeInfo);
    sub_21FFC50(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_21FFC50(&Method_System_Nullable_float__get_HasValue__);
    sub_21FFC50(&Method_System_Nullable_int__get_HasValue__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5931FA8 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v40 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    v41 = UnityEngine_Object_TypeInfo;
    this->fields.isInitPanelDepth = 0;
    if ( !*(&v41->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v41, v32, v33);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v40 )
        goto LABEL_115;
      this->fields.keepPanelDepth = v40->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v33, v34, v35, v36, v37, v38);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v44, v45);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    NotificationDialog__CachedTitleLabel(this, v47);
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_115;
    UILabel__set_fontSize(transform, titleSize, 0);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_115;
    if ( title )
      v49 = title;
    else
      v49 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v49, 0);
    v51 = NotificationDialog_TypeInfo;
    if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth, v50);
      v51 = NotificationDialog_TypeInfo;
    }
    static_fields = v51->static_fields;
    x = static_fields->TITLE_BASE_POS.fields.x;
    z = static_fields->TITLE_BASE_POS.fields.z;
    if ( titlePosY.fields.hasValue )
    {
      value = titlePosY.fields.value;
    }
    else
    {
      if ( !*(&v51->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(v51, keepPanelDepth, v50);
        static_fields = NotificationDialog_TypeInfo->static_fields;
      }
      value = static_fields->TITLE_BASE_POS.fields.y;
    }
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_115;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v101.fields.x = x;
    v101.fields.y = value;
    v101.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v101, 0);
  }
  if ( useTitleCondensedScale )
    NotificationDialog__SetCondensedScaleTitle(this, v47);
  v57 = NotificationDialog_TypeInfo;
  if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, v47, v48);
    v57 = NotificationDialog_TypeInfo;
  }
  v58 = v57->static_fields;
  v59 = v58->MESSAGE_BASE_POS.fields.x;
  v60 = v58->MESSAGE_BASE_POS.fields.z;
  if ( v58->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = v58->MESSAGE_BASE_POS.fields.y;
  if ( messageWidgetSizeY.fields.hasValue )
  {
    v61 = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeY);
  }
  else
  {
    if ( !*(&v57->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v57, v47, v48);
      v57 = NotificationDialog_TypeInfo;
      v58 = NotificationDialog_TypeInfo->static_fields;
    }
    LODWORD(v61) = v58->MESSAGE_BASE_SIZE_Y;
  }
  if ( messageWidgetSizeX.fields.hasValue )
  {
    messageSizeX = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeX);
  }
  else
  {
    if ( !*(&v57->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(v57, v47, v48);
      v57 = NotificationDialog_TypeInfo;
    }
    LODWORD(messageSizeX) = v57->static_fields->MESSAGE_BASE_SIZE_X;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v47, v48);
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0, 0) )
  {
    transform = (UILabel_o *)this->fields.lineSprite;
    if ( !transform )
      goto LABEL_115;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isLineDraw, 0);
    if ( isLineDraw )
    {
      v65 = NotificationDialog_TypeInfo;
      if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth, v64);
        v65 = NotificationDialog_TypeInfo;
      }
      v66 = v65->static_fields;
      v59 = v66->MESSAGE_LINE_POS.fields.x;
      messagePosY = v66->MESSAGE_LINE_POS.fields.y;
      v60 = v66->MESSAGE_LINE_POS.fields.z;
      LODWORD(v61) = v66->MESSAGE_LINE_SIZE_Y;
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth, v64);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0);
    v102.fields.x = v59;
    v102.fields.y = messagePosY;
    v102.fields.z = v60;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      v61,
      maxLine,
      messageFontSize,
      adjustText,
      v102,
      buttonPosY,
      messageSizeX,
      messagePosYForcedAdd,
      isAdjustTextPos,
      v96);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v68, v69);
  if ( UnityEngine_Object__op_Inequality(lnkSprite, 0, 0) )
  {
    transform = (UILabel_o *)this->fields.lnkSprite;
    if ( !transform )
      goto LABEL_115;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth, v72);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0, 0) )
  {
    transform = (UILabel_o *)this->fields.lnkTexture;
    if ( !transform )
      goto LABEL_115;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_115;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth, v74);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v77 = NotificationDialog_TypeInfo;
    if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth, v76);
      v77 = NotificationDialog_TypeInfo;
    }
    v78 = v77->static_fields;
    v79 = v78->BUTTON_BASE_POS.fields.x;
    y = v78->BUTTON_TEXT_POS.fields.y;
    v81 = v78->BUTTON_TEXT_POS.fields.z;
    v82 = this->fields.okBtnLabel;
    if ( v78->BUTTON_BASE_POS.fields.y == buttonPosY )
      v83 = v78->BUTTON_BASE_POS.fields.y;
    else
      v83 = buttonPosY;
    v84 = v78->BUTTON_BASE_POS.fields.z;
    v85 = v78->BUTTON_TEXT_POS.fields.x;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, keepPanelDepth, v76);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !v82 )
      goto LABEL_115;
    UILabel__set_text(v82, (System_String_o *)transform, 0);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_115;
    v86 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v103.fields.x = v85;
    v103.fields.y = y;
    v103.fields.z = v81;
    GameObjectExtensions__SetLocalPosition(v86, v103, 0);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_115;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_115;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_115;
    v87 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v104.fields.x = v79;
    v104.fields.y = v83;
    v104.fields.z = v84;
    GameObjectExtensions__SetLocalPosition(v87, v104, 0);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_115;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_115;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_115;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_115;
    v88 = (UnityEngine_GameObject_o *)transform;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v92 = UnityEngine_GameObject__GetComponent_object_(
            v88,
            (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v90, v91);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth, v76);
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v92, 0, 0);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( buttonWidgetSizeX.fields.hasValue )
        {
          v93 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeX);
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth, v76);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v93) = transform->fields.onChange->fields.data;
        }
        if ( buttonWidgetSizeY.fields.hasValue )
        {
          v94 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeY);
          if ( !Component_object )
            goto LABEL_115;
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth, v76);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v94) = HIDWORD(transform->fields.onChange->fields.data);
          if ( !Component_object )
            goto LABEL_115;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v93, 0);
        UIWidget__set_height((UIWidget_o *)Component_object, v94, 0);
        if ( !v92 )
          goto LABEL_115;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v92, 0);
        size.fields.x = (float)(int)v93;
        size.fields.y = (float)(int)v94;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v92, size, 0);
      }
    }
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth, v76);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v40, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( panelDepth < 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( v40 )
    {
      UIPanel__set_depth(v40, keepPanelDepth, 0);
      goto LABEL_114;
    }
LABEL_115:
    sub_21FFECC(transform, keepPanelDepth);
  }
LABEL_114:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  v95 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v95, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v95, 0, 0, 0);
}


void NotificationDialog__Open_37494112(
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
    0,
    1,
    0,
    0,
    0.0,
    isAdjustTextPos,
    messageWidgetSizeX,
    0,
    v18);
}


void NotificationDialog__Open_37495456(
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
  __int64 v20; // x1
  System_String_o *v21; // x2
  System_String_o *v22; // x3
  int32_t v23; // w4
  int32_t v24; // w5
  bool v25; // w6
  bool v26; // w7
  _BOOL4 isInitPanelDepth; // w8
  UnityEngine_Object_c *v28; // x0
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  __int64 v31; // x1
  __int64 v32; // x2
  UnityEngine_Object_o *titleLabel; // x27
  const MethodInfo *v34; // x1
  __int64 v35; // x2
  System_String_o *v36; // x1
  NotificationDialog_o *gameObject; // x0
  __int64 v38; // x1
  __int64 v39; // x2
  const MethodInfo *v40; // x3
  NotificationDialog_c *v41; // x8
  UnityEngine_GameObject_o *v42; // x26
  float *p_BANNER_RETRY_MAX; // x8
  float v44; // s8
  float v45; // s9
  float v46; // s10
  NotificationDialog_c *v47; // x0
  float *v48; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v50; // s8
  float v51; // s9
  float v52; // s10
  int32_t v53; // w26
  __int64 v54; // x2
  NotificationDialog_c *v55; // x0
  float *v56; // x8
  UnityEngine_Object_o *messageLabel; // x27
  __int64 v58; // x1
  __int64 v59; // x2
  bool IsNullOrEmpty; // w0
  const MethodInfo *v61; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 v63; // x2
  __int64 naturalAligment; // x10
  struct System_Object_array *v65; // x0
  struct System_Object_array **p_sprites; // x23
  System_String_o *v67; // x2
  System_String_o *v68; // x3
  int32_t v69; // w4
  int32_t v70; // w5
  bool v71; // w6
  bool v72; // w7
  struct System_Object_array *sprites; // x8
  unsigned __int64 v74; // x22
  UnityEngine_Component_o *v75; // x25
  __int64 v76; // x1
  __int64 v77; // x2
  Il2CppObject *v78; // x25
  UnityEngine_GameObject_o *v79; // x25
  UnityEngine_Component_o *parent; // x0
  System_String_o *v81; // x2
  System_String_o *v82; // x3
  int32_t v83; // w4
  int32_t v84; // w5
  bool v85; // w6
  bool v86; // w7
  System_Collections_Generic_List_object__o *additionalSprites; // x8
  struct System_Object_array *items; // x9
  _QWORD *v89; // x10
  __int64 size; // x11
  Il2CppClass **v91; // x0
  struct System_Object_array *v92; // x8
  System_Collections_Generic_Dictionary_string__object__o *v93; // x8
  __int64 v94; // x11
  System_Collections_Generic_Dictionary_string__object__o *v95; // x26
  NotificationDialog_o *v96; // x0
  UISprite_o *klass; // x21
  UnityEngine_GameObject_o *v98; // x27
  const MethodInfo *v99; // x3
  __int64 v100; // x1
  __int64 v101; // x2
  System_String_o *StringFromScript; // x29
  NotificationDialog_o *v103; // x0
  __int64 v104; // x1
  __int64 v105; // x2
  const MethodInfo *v106; // x3
  NotificationDialog_c *v107; // x8
  UnityEngine_GameObject_o *v108; // x27
  float *v109; // x8
  float v110; // s8
  float v111; // s9
  float v112; // s10
  NotificationDialog_o *v113; // x0
  const MethodInfo *v114; // x3
  float v115; // s9
  float y; // s8
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v119; // x0
  const MethodInfo *v120; // x3
  int32_t v121; // w1
  int32_t v122; // w2
  NotificationDialog_o *IntFromScript; // x0
  int32_t v124; // w27
  const MethodInfo *v125; // x3
  System_String_o *v126; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v128; // x2
  __int64 v129; // x10
  struct System_Object_array *v130; // x0
  System_String_o *v131; // x2
  System_String_o *v132; // x3
  int32_t v133; // w4
  int32_t v134; // w5
  bool v135; // w6
  bool v136; // w7
  struct System_Object_array *banners; // x8
  int v138; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  __int64 v140; // x1
  __int64 v141; // x2
  UILabel_o *v142; // x23
  NotificationDialog_o *v143; // x0
  __int64 v144; // x1
  __int64 v145; // x2
  const MethodInfo *v146; // x3
  NotificationDialog_c *v147; // x8
  UnityEngine_GameObject_o *v148; // x23
  float *v149; // x8
  float v150; // s8
  float v151; // s9
  float v152; // s10
  System_Action_o *v153; // x20
  System_Action_o *v154; // x20
  const MethodInfo *v155; // x2
  System_Collections_Generic_Dictionary_object__object__o *v157; // [xsp+10h] [xbp-90h]
  UnityEngine_Object_o *x; // [xsp+18h] [xbp-88h]
  Il2CppObject *value; // [xsp+28h] [xbp-78h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v161; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v162; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v163; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v164; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5931FA9 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&AtlasManager_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
    sub_21FFC50(&Method_System_Collections_Generic_List_LinkableSprite__Add__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&Method_NotificationDialog_EndOpen__);
    sub_21FFC50(&Method_NotificationDialog__Open_b__44_0__);
    sub_21FFC50(&NotificationDialog_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&StringLiteral_17720/*"banners"*/);
    sub_21FFC50(&StringLiteral_24701/*"size"*/);
    sub_21FFC50(&StringLiteral_25761/*"urlOpenType"*/);
    sub_21FFC50(&StringLiteral_23454/*"offset"*/);
    sub_21FFC50(&StringLiteral_25349/*"titleOffset"*/);
    sub_21FFC50(&StringLiteral_24824/*"spriteName"*/);
    sub_21FFC50(&StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/);
    sub_21FFC50(&StringLiteral_25760/*"urlLink"*/);
    sub_21FFC50(&StringLiteral_18378/*"buttonOffset"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    sub_21FFC50(&StringLiteral_24825/*"sprites"*/);
    byte_5931FA9 = 1;
  }
  value = 0;
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  x = (UnityEngine_Object_o *)TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  if ( isInitPanelDepth )
  {
    v28 = UnityEngine_Object_TypeInfo;
    this->fields.isInitPanelDepth = 0;
    if ( !*(&v28->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(v28, v20, v21);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality(x, 0, 0);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !x )
        goto LABEL_93;
      this->fields.keepPanelDepth = (int32_t)x[13].monitor;
    }
  }
  this->fields.clickFunc = func;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.clickFunc, (int32_t)func, v21, v22, v23, v24, v25, v26);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v31, v32);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0, 0) )
  {
    NotificationDialog__CachedTitleLabel(this, v34);
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_93;
    UILabel__set_fontSize(transform, titleSize, 0);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_93;
    v36 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v36, 0);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_93;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v41 = NotificationDialog_TypeInfo;
    v42 = (UnityEngine_GameObject_o *)gameObject;
    if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, v38, v39);
      v41 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v41->static_fields->BANNER_RETRY_MAX;
    v44 = p_BANNER_RETRY_MAX[1];
    v45 = p_BANNER_RETRY_MAX[2];
    v46 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_25349/*"titleOffset"*/,
                       v40);
    VectFromScript.fields.x = v44 + VectFromScript.fields.x;
    VectFromScript.fields.y = v45 + VectFromScript.fields.y;
    VectFromScript.fields.z = v46 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v42, VectFromScript, 0);
  }
  v47 = NotificationDialog_TypeInfo;
  if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, v34, v35);
    v47 = NotificationDialog_TypeInfo;
  }
  v48 = (float *)&v47->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v50 = v48[4];
  v51 = v48[5];
  v52 = v48[6];
  v53 = *((_DWORD *)v48 + 14);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v34, v35);
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0, 0) )
  {
    transform = (UILabel_o *)this->fields.lineSprite;
    if ( !transform )
      goto LABEL_93;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isLineDraw, 0);
    if ( isLineDraw )
    {
      v55 = NotificationDialog_TypeInfo;
      if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth, v54);
        v55 = NotificationDialog_TypeInfo;
      }
      v56 = (float *)&v55->static_fields->BANNER_RETRY_MAX;
      v50 = v56[10];
      v51 = v56[11];
      v52 = v56[12];
      v53 = *((_DWORD *)v56 + 16);
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth, v54);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0, 0) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0);
    v161.fields.x = v50;
    v161.fields.y = v51;
    v161.fields.z = v52;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v53, maxLine, v161, script, v61);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  v157 = (System_Collections_Generic_Dictionary_object__object__o *)script;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v58, v59);
  if ( UnityEngine_Object__op_Inequality(lnkSprite, 0, 0) )
  {
    transform = (UILabel_o *)script;
    if ( !script )
      goto LABEL_93;
    if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
            (System_Collections_Generic_Dictionary_object__object__o *)script,
            (Il2CppObject *)StringLiteral_24825/*"sprites"*/,
            &value,
            (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
      goto LABEL_94;
    transform = (UILabel_o *)value;
    if ( !value )
      goto LABEL_93;
    naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
    if ( value->klass->_2.naturalAligment < (unsigned int)naturalAligment
      || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] != System_Collections_Generic_List_object__TypeInfo )
    {
      goto LABEL_93;
    }
    v65 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)value,
            (const MethodInfo_445164C *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v65;
    p_sprites = &this->fields.sprites;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&this->fields.sprites, (int32_t)v65, v67, v68, v69, v70, v71, v72);
    sprites = this->fields.sprites;
    if ( sprites && sprites->max_length )
    {
      v74 = 0;
      v75 = (UnityEngine_Component_o *)this->fields.lnkSprite;
      while ( (__int64)v74 < SLODWORD(sprites->max_length) )
      {
        if ( v74 )
        {
          transform = (UILabel_o *)this->fields.lnkSprite;
          if ( !transform )
            goto LABEL_93;
          v78 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
          if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v76, v77);
          transform = (UILabel_o *)UnityEngine_Object__Instantiate_object_(
                                     v78,
                                     (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
          if ( !this->fields.lnkSprite )
            goto LABEL_93;
          v79 = (UnityEngine_GameObject_o *)transform;
          transform = (UILabel_o *)UnityEngine_Component__get_transform(
                                     (UnityEngine_Component_o *)this->fields.lnkSprite,
                                     0);
          if ( !transform )
            goto LABEL_93;
          parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
          GameObjectExtensions__SetParent(v79, parent, 0);
          if ( !byte_5931945 )
          {
            sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
            byte_5931945 = 1;
          }
          GameObjectExtensions__SetLocalScale(v79, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0);
          if ( !v79 )
            goto LABEL_93;
          transform = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                     v79,
                                     (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
          additionalSprites = (System_Collections_Generic_List_object__o *)this->fields.additionalSprites;
          if ( !additionalSprites )
            goto LABEL_93;
          items = additionalSprites->fields._items;
          v89 = Method_System_Collections_Generic_List_LinkableSprite__Add__;
          ++additionalSprites->fields._version;
          if ( !items )
            goto LABEL_93;
          size = additionalSprites->fields._size;
          v75 = (UnityEngine_Component_o *)transform;
          if ( (unsigned int)size >= LODWORD(items->max_length) )
          {
            System_Collections_Generic_List_object___AddWithResize(
              additionalSprites,
              (Il2CppObject *)transform,
              *(const MethodInfo_444FB2C **)(*(_QWORD *)(v89[4] + 192LL) + 112LL));
          }
          else
          {
            v91 = &items->obj.klass + size;
            additionalSprites->fields._size = size + 1;
            v91[4] = (Il2CppClass *)v75;
            sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v91 + 4), (int32_t)v75, v81, v82, v83, v84, v85, v86);
          }
        }
        v92 = *p_sprites;
        if ( !*p_sprites )
          goto LABEL_93;
        if ( v74 >= LODWORD(v92->max_length) )
          sub_21FFED4(transform);
        v93 = (System_Collections_Generic_Dictionary_string__object__o *)v92->m_Items[v74];
        if ( v93
          && (v94 = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment,
              v93->klass->_2.naturalAligment >= (unsigned int)v94) )
        {
          if ( (System_Collections_Generic_Dictionary_string__object__c *)v93->klass->_2.typeHierarchy[v94 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
            v95 = v93;
          else
            v95 = 0;
          if ( !v75 )
            goto LABEL_93;
        }
        else
        {
          v95 = 0;
          if ( !v75 )
            goto LABEL_93;
        }
        v96 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v75, 0);
        klass = (UISprite_o *)v75[2].klass;
        v98 = (UnityEngine_GameObject_o *)v96;
        StringFromScript = NotificationDialog__getStringFromScript(
                             v96,
                             v95,
                             (System_String_o *)StringLiteral_24824/*"spriteName"*/,
                             v99);
        if ( !*(&AtlasManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v100, v101);
        transform = (UILabel_o *)AtlasManager__SetEventUI(klass, StringFromScript, 0);
        if ( v98 )
        {
          UnityEngine_GameObject__SetActive(v98, (unsigned __int8)transform & 1, 0);
          v103 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v75, 0);
          v107 = NotificationDialog_TypeInfo;
          v108 = (UnityEngine_GameObject_o *)v103;
          if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, v104, v105);
            v107 = NotificationDialog_TypeInfo;
          }
          v109 = (float *)&v107->static_fields->BANNER_RETRY_MAX;
          v110 = v109[17];
          v111 = v109[18];
          v112 = v109[19];
          v162 = NotificationDialog__getVectFromScript(v103, v95, (System_String_o *)StringLiteral_23454/*"offset"*/, v106);
          v162.fields.x = v110 + v162.fields.x;
          v162.fields.y = v111 + v162.fields.y;
          v162.fields.z = v112 + v162.fields.z;
          GameObjectExtensions__SetLocalPosition(v108, v162, 0);
          v163 = NotificationDialog__getVectFromScript(v113, v95, (System_String_o *)StringLiteral_24701/*"size"*/, v114);
          v115 = v163.fields.x;
          y = v163.fields.y;
          z = v163.fields.z;
          if ( !byte_5931940 )
          {
            sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
            byte_5931940 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          if ( v115 == static_fields->zeroVector.fields.x
            && y == static_fields->zeroVector.fields.y
            && z == static_fields->zeroVector.fields.z )
          {
            LinkableSprite__MakePixelPerfect((LinkableSprite_o *)v75, 0);
          }
          else
          {
            v121 = v115 == INFINITY ? 0x80000000 : (int)v115;
            v122 = y == INFINITY ? 0x80000000 : (int)y;
            LinkableSprite__SetSize((LinkableSprite_o *)v75, v121, v122, 0);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v119,
                                                    v95,
                                                    (System_String_o *)StringLiteral_25761/*"urlOpenType"*/,
                                                    v120);
          v124 = (int)IntFromScript;
          v126 = NotificationDialog__getStringFromScript(
                   IntFromScript,
                   v95,
                   (System_String_o *)StringLiteral_25760/*"urlLink"*/,
                   v125);
          LinkableSprite__SetUp((LinkableSprite_o *)v75, v124, v126, 0);
          sprites = *p_sprites;
          ++v74;
          if ( *p_sprites )
            continue;
        }
        goto LABEL_93;
      }
    }
    else
    {
LABEL_94:
      transform = (UILabel_o *)this->fields.lnkSprite;
      if ( !transform )
        goto LABEL_93;
      transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
      if ( !transform )
        goto LABEL_93;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
    }
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth, v63);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkTexture, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !v157 )
      goto LABEL_93;
    if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
           v157,
           (Il2CppObject *)StringLiteral_17720/*"banners"*/,
           &value,
           (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    {
      transform = (UILabel_o *)value;
      if ( !value )
        goto LABEL_93;
      v129 = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment;
      if ( value->klass->_2.naturalAligment < (unsigned int)v129
        || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v129 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_93;
      }
      v130 = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)value,
               (const MethodInfo_445164C *)Method_System_Collections_Generic_List_object__ToArray__);
      this->fields.banners = v130;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&this->fields.banners,
        (int32_t)v130,
        v131,
        v132,
        v133,
        v134,
        v135,
        v136);
      banners = this->fields.banners;
      if ( banners )
      {
        if ( banners->max_length )
        {
          v138 = 0;
          goto LABEL_112;
        }
      }
    }
    transform = (UILabel_o *)this->fields.lnkTexture;
    if ( !transform )
      goto LABEL_93;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_93;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  }
  v138 = 1;
LABEL_112:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth, v128);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    v142 = this->fields.okBtnLabel;
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v140, v141);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3823/*"COMMON_CONFIRM_CLOSE"*/, 0);
    if ( !v142 )
      goto LABEL_93;
    UILabel__set_text(v142, (System_String_o *)transform, 0);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_93;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0);
    if ( !transform )
      goto LABEL_93;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0);
    if ( !transform )
      goto LABEL_93;
    v143 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0);
    v147 = NotificationDialog_TypeInfo;
    v148 = (UnityEngine_GameObject_o *)v143;
    if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, v144, v145);
      v147 = NotificationDialog_TypeInfo;
    }
    v149 = (float *)&v147->static_fields->BANNER_RETRY_MAX;
    v150 = v149[20];
    v151 = v149[21];
    v152 = v149[22];
    v164 = NotificationDialog__getVectFromScript(
             v143,
             (System_Collections_Generic_Dictionary_string__object__o *)v157,
             (System_String_o *)StringLiteral_18378/*"buttonOffset"*/,
             v146);
    v164.fields.x = v150 + v164.fields.x;
    v164.fields.y = v151 + v164.fields.y;
    v164.fields.z = v152 + v164.fields.z;
    GameObjectExtensions__SetLocalPosition(v148, v164, 0);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v140, v141);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality(x, 0, 0);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( panelDepth < 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !x )
      goto LABEL_93;
    UIPanel__set_depth((UIPanel_o *)x, keepPanelDepth, 0);
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  if ( v138 )
  {
    v153 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
    System_Action___ctor(v153, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0);
    BaseDialog__Open((BaseDialog_o *)this, v153, 0, 0, 0);
    return;
  }
  transform = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  if ( !transform
    || (CommonUI__SetLoadMode((CommonUI_o *)transform, 1, 0),
        (transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0)
    || (UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 1, 0),
        (transform = (UILabel_o *)this->fields.baseWindow) == 0) )
  {
LABEL_93:
    sub_21FFECC(transform, keepPanelDepth);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0);
  v154 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v154, (Il2CppObject *)this, Method_NotificationDialog__Open_b__44_0__, 0);
  NotificationDialog__LoadBanners(this, v154, v155);
}


void NotificationDialog__SetCondensedScaleTitle(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  UnityEngine_Object_o *titleLabel; // x20
  __int64 v5; // x1
  struct UILabel_o *Value; // x0
  UILabel_o *v7; // x20
  const MethodInfo_45B4BF0 *v8; // x2
  System_Nullable_Vector2Int__o v9; // 0:x0.12

  if ( (byte_5931FAF & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Nullable_Vector2Int__get_Value__);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_5931FAF = 1;
  }
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
  if ( !UnityEngine_Object__op_Equality(titleLabel, 0, 0) )
  {
    Value = this->fields.titleLabel;
    if ( !Value
      || (((void (__fastcall *)(struct UILabel_o *, const MethodInfo *))Value->klass->vtable._33_MakePixelPerfect.methodPtr)(
            Value,
            Value->klass->vtable._33_MakePixelPerfect.method),
          *(_QWORD *)&v9.fields.hasValue = &this->fields.titleLabelDefaultSize,
          v7 = this->fields.titleLabel,
          v9.fields.value.fields.m_Y = Method_System_Nullable_Vector2Int__get_Value__,
          Value = (struct UILabel_o *)System_Nullable_Vector2Int___get_Value(v9, v8),
          !v7) )
    {
      sub_21FFECC(Value, v5);
    }
    UILabel__SetCondensedScale(v7, (int32_t)Value, 0, 0);
  }
}


System_Collections_IEnumerator_o *NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x1
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7

  if ( (byte_5931FB2 & 1) == 0 )
  {
    sub_21FFC50(&NotificationDialog__StartDownloadBanner_d__57_TypeInfo);
    byte_5931FB2 = 1;
  }
  v3 = sub_21FFEBC(NotificationDialog__StartDownloadBanner_d__57_TypeInfo);
  NotificationDialog__StartDownloadBanner_d__57___ctor((NotificationDialog__StartDownloadBanner_d__57_o *)v3, 0, 0);
  if ( !v3 )
    sub_21FFECC(v4, v5);
  *(_QWORD *)(v3 + 32) = this;
  sub_21FFBF4((MissionNaviTransitionBoardItem_o *)(v3 + 32), (int32_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v3;
}


void NotificationDialog___Open_b__44_0(NotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  System_Action_o *v4; // x20

  if ( (byte_5931FB6 & 1) == 0 )
  {
    sub_21FFC50(&System_Action_TypeInfo);
    sub_21FFC50(&Method_NotificationDialog_EndOpen__);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_5931FB6 = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0) )
  {
    sub_21FFECC(baseWindow, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0);
  v4 = (System_Action_o *)sub_21FFEBC(System_Action_TypeInfo);
  System_Action___ctor(v4, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v4, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void NotificationDialog___StartDownloadBanner_b__57_0(
        NotificationDialog_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  System_Collections_IEnumerator_o *started; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1

  if ( (byte_5931FB7 & 1) == 0 )
  {
    sub_21FFC50(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_5931FB7 = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)this, started, 0);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_21FFECC(0, v7);
    ManagementManager__reboot((ManagementManager_o *)Instance, 0, 1, 0);
  }
}


int32_t NotificationDialog__getIntFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  Il2CppObject *v8; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5931FAE & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    this = (NotificationDialog_o *)sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_5931FAE = 1;
  }
  value = 0;
  if ( !script )
    sub_21FFECC(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v8 = value;
  if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v6, v7);
  return System_Convert__ToInt32(v8, 0);
}


System_String_o *NotificationDialog__getStringFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_5931FAD & 1) == 0 )
  {
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    this = (NotificationDialog_o *)sub_21FFC50(&StringLiteral_1/*""*/);
    byte_5931FAD = 1;
  }
  value = 0;
  if ( !script )
    sub_21FFECC(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !value )
    return 0;
  if ( value->klass == (Il2CppClass *)qword_594C0B8 )
    return (System_String_o *)value;
  return 0;
}


UnityEngine_Vector3_o NotificationDialog__getVectFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x19
  __int64 naturalAligment; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  __int64 v12; // x1
  __int64 v13; // x2
  Il2CppObject *Item; // x20
  double v15; // d8
  Il2CppObject *v16; // x0
  double v17; // d1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_5931FAC & 1) == 0 )
  {
    sub_21FFC50(&System_Convert_TypeInfo);
    sub_21FFC50(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_21FFC50(&Method_System_Collections_Generic_List_object__get_Item__);
    this = (NotificationDialog_o *)sub_21FFC50(&System_Collections_Generic_List_object__TypeInfo);
    byte_5931FAC = 1;
  }
  value = 0;
  if ( !script )
    sub_21FFECC(this, script);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3FCBFD0 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v6 = value) != 0
    && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        value->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !*(&System_Convert_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v12, v13);
    v15 = System_Convert__ToDouble(Item, 0);
    v16 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v6,
            1,
            (const MethodInfo_444F85C *)Method_System_Collections_Generic_List_object__get_Item__);
    v17 = System_Convert__ToDouble(v16, 0);
    x = v15;
    z = 0.0;
    y = v17;
  }
  else
  {
    if ( !byte_5931940 )
    {
      sub_21FFC50(&UnityEngine_Vector3_TypeInfo);
      byte_5931940 = 1;
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


System_String_o *NotificationDialog__get_closeBtnPath(NotificationDialog_o *this, const MethodInfo *method)
{
  if ( (byte_5931FB3 & 1) == 0 )
  {
    sub_21FFC50(&StringLiteral_16238/*"Window/OkBtn"*/);
    byte_5931FB3 = 1;
  }
  return (System_String_o *)StringLiteral_16238/*"Window/OkBtn"*/;
}


void NotificationDialog_ClickDelegate___ctor(
        NotificationDialog_ClickDelegate_o *this,
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
  this->fields.invoke_impl = (intptr_t)sub_1FECA98;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1FECA50;
}


System_IAsyncResult_o *NotificationDialog_ClickDelegate__BeginInvoke(
        NotificationDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  _QWORD v9[2]; // [xsp+8h] [xbp-38h] BYREF
  bool v10[4]; // [xsp+1Ch] [xbp-24h] BYREF

  v10[0] = isOk;
  v9[1] = 0;
  v9[0] = j_il2cpp_value_box_0(qword_594C050, v10);
  return (System_IAsyncResult_o *)sub_21FFC04(this, v9, callback, object);
}


void NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_21FFC08(result, 0, method);
}


void NotificationDialog_ClickDelegate__Invoke(
        NotificationDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isOk,
    this->fields.method);
}


void NotificationDialog__StartDownloadBanner_d__57___ctor(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        int32_t 1__state,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
  this->fields.__1__state = 1__state;
}


bool NotificationDialog__StartDownloadBanner_d__57__MoveNext(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  System_String_o *v2; // x2
  System_String_o *v3; // x3
  int32_t v4; // w4
  int32_t v5; // w5
  bool v6; // w6
  bool v7; // w7
  NotificationDialog__StartDownloadBanner_d__57_o *v8; // x20
  int32_t _1__state; // w27
  struct NotificationDialog_o *_4__this; // x19
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  NotificationDialog__StartDownloadBanner_d__57_o **p_mBannerWWW; // x21
  UnityEngine_Texture2D_o *v13; // x22
  NotificationDialog__StartDownloadBanner_d__57_o *v14; // x23
  System_String_o *error; // x0
  int32_t v16; // w24
  int32_t v17; // w25
  int32_t format; // w26
  System_Byte_array *data; // x0
  System_String_o *v20; // x0
  NotificationDialog_c *v21; // x0
  int v22; // w20
  __int64 v23; // x1
  __int64 v24; // x2
  Il2CppObject *Instance; // x20
  System_String_o *v26; // x22
  ErrorDialog_ClickDelegate_o *v27; // x23
  struct System_Object_array *banners; // x8
  __int64 mLoadingIdx; // x9
  struct System_Collections_Generic_Dictionary_string__object__o *v30; // x8
  System_Collections_Generic_Dictionary_string__object__c *v31; // x9
  __int64 naturalAligment; // x10
  struct System_Collections_Generic_Dictionary_string__object__o *v33; // x11
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v35; // x0
  System_String_o *v36; // x2
  System_String_o *v37; // x3
  int32_t v38; // w4
  int32_t v39; // w5
  bool v40; // w6
  bool v41; // w7
  int32_t v42; // w1
  MissionNaviTransitionBoardItem_o *p_banner_5__2; // x21
  __int64 v44; // x1
  __int64 v45; // x2
  System_String_o *StringFromScript; // x21
  System_String_o *WebViewFullAddress; // x21
  UnityEngine_Networking_UnityWebRequest_o *v48; // x22
  System_String_o *v49; // x2
  System_String_o *v50; // x3
  int32_t v51; // w4
  int32_t v52; // w5
  bool v53; // w6
  bool v54; // w7
  UnityEngine_Networking_DownloadHandlerTexture_o *v55; // x22
  System_String_o *v56; // x2
  System_String_o *v57; // x3
  int32_t v58; // w4
  int32_t v59; // w5
  bool v60; // w6
  bool v61; // w7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v62; // x0
  MissionNaviTransitionBoardItem_o *p__2__current; // x20
  System_String_o *v64; // x2
  System_String_o *v65; // x3
  int32_t v66; // w4
  int32_t v67; // w5
  bool v68; // w6
  bool v69; // w7
  NotificationDialog__StartDownloadBanner_d__57_o *lnkTexture; // x23
  __int64 v72; // x1
  __int64 v73; // x2
  Il2CppObject *gameObject; // x23
  NotificationDialog__StartDownloadBanner_d__57_o *v75; // x23
  UnityEngine_Component_o *parent; // x0
  __int64 v77; // x1
  __int64 v78; // x2
  UnityEngine_GameObject_o *v79; // x22
  NotificationDialog_c *v80; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v82; // s8
  float v83; // s9
  float v84; // s10
  float x; // s9
  float y; // s8
  float z; // s10
  float v88; // s1
  float v89; // s2
  int32_t v90; // w1
  int32_t v91; // w2
  int32_t IntFromScript; // w0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v94; // w20
  System_String_o *v95; // x0
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_593264A & 1) == 0 )
  {
    sub_21FFC50(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_21FFC50(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_21FFC50(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
    sub_21FFC50(&Method_System_Collections_Generic_List_LinkableTexture__Add__);
    sub_21FFC50(&LocalizationManager_TypeInfo);
    sub_21FFC50(&NetworkManager_TypeInfo);
    sub_21FFC50(&Method_NotificationDialog__StartDownloadBanner_b__57_0__);
    sub_21FFC50(&NotificationDialog_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_21FFC50(&UnityEngine_Texture2D_TypeInfo);
    sub_21FFC50(&UnityEngine_Networking_UnityWebRequest_TypeInfo);
    sub_21FFC50(&StringLiteral_17713/*"bannerUrl"*/);
    sub_21FFC50(&StringLiteral_24701/*"size"*/);
    sub_21FFC50(&StringLiteral_25761/*"urlOpenType"*/);
    sub_21FFC50(&StringLiteral_23454/*"offset"*/);
    sub_21FFC50(&StringLiteral_25760/*"urlLink"*/);
    sub_21FFC50(&StringLiteral_1/*""*/);
    this = (NotificationDialog__StartDownloadBanner_d__57_o *)sub_21FFC50(&StringLiteral_9632/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_593264A = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      banners = _4__this->fields.banners;
      if ( banners )
      {
        mLoadingIdx = _4__this->fields.mLoadingIdx;
        if ( (unsigned int)mLoadingIdx >= LODWORD(banners->max_length) )
          sub_21FFED4(this);
        v30 = (struct System_Collections_Generic_Dictionary_string__object__o *)banners->m_Items[mLoadingIdx];
        if ( v30 )
        {
          v31 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
          naturalAligment = System_Collections_Generic_Dictionary_string__object__TypeInfo->_2.naturalAligment;
          if ( v30->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v30->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v33 = v30;
            else
              v33 = 0;
          }
          else
          {
            v33 = 0;
          }
          v8->fields._banner_5__2 = v33;
          p_banner_5__2 = (MissionNaviTransitionBoardItem_o *)&v8->fields._banner_5__2;
          if ( v30->klass->_2.naturalAligment >= (unsigned int)naturalAligment )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v30->klass->_2.typeHierarchy[naturalAligment - 1] == v31 )
              v42 = (int)v30;
            else
              v42 = 0;
          }
          else
          {
            v42 = 0;
          }
        }
        else
        {
          v42 = 0;
          v8->fields._banner_5__2 = 0;
          p_banner_5__2 = (MissionNaviTransitionBoardItem_o *)&v8->fields._banner_5__2;
        }
        sub_21FFBF4(p_banner_5__2, v42, v2, v3, v4, v5, v6, v7);
        StringFromScript = NotificationDialog__getStringFromScript(
                             _4__this,
                             (System_Collections_Generic_Dictionary_string__object__o *)p_banner_5__2->klass,
                             (System_String_o *)StringLiteral_17713/*"bannerUrl"*/,
                             0);
        if ( !*(&NetworkManager_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v44, v45);
        WebViewFullAddress = NetworkManager__getWebViewFullAddress(StringFromScript, 0);
        v48 = (UnityEngine_Networking_UnityWebRequest_o *)sub_21FFEBC(UnityEngine_Networking_UnityWebRequest_TypeInfo);
        UnityEngine_Networking_UnityWebRequest___ctor_86522876(v48, WebViewFullAddress, 0);
        _4__this->fields.mBannerWWW = v48;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&_4__this->fields.mBannerWWW,
          (int32_t)v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
        v55 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_21FFEBC(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
        UnityEngine_Networking_DownloadHandlerTexture___ctor(v55, 0, 0);
        v8->fields._texDl_5__3 = v55;
        sub_21FFBF4(
          (MissionNaviTransitionBoardItem_o *)&v8->fields._texDl_5__3,
          (int32_t)v55,
          v56,
          v57,
          v58,
          v59,
          v60,
          v61);
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)_4__this->fields.mBannerWWW;
        if ( this )
        {
          UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
            (UnityEngine_Networking_UnityWebRequest_o *)this,
            (UnityEngine_Networking_DownloadHandler_o *)v8->fields._texDl_5__3,
            0);
          this = (NotificationDialog__StartDownloadBanner_d__57_o *)_4__this->fields.mBannerWWW;
          _4__this->fields.refuseInit = 1;
          if ( this )
          {
            v62 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0);
            v8->fields.__2__current = (Il2CppObject *)v62;
            p__2__current = (MissionNaviTransitionBoardItem_o *)&v8->fields.__2__current;
            sub_21FFBF4(p__2__current, (int32_t)v62, v64, v65, v66, v67, v68, v69);
            p__2__current[-1].fields._BoardType_k__BackingField = 1;
            return _1__state == 0;
          }
        }
      }
    }
    goto LABEL_85;
  }
  if ( _1__state != 1 )
    return _1__state == 0;
  v8->fields.__1__state = -1;
  if ( !_4__this )
LABEL_85:
    sub_21FFECC(this, method);
  p_mBannerWWW = (NotificationDialog__StartDownloadBanner_d__57_o **)&_4__this->fields.mBannerWWW;
  mBannerWWW = _4__this->fields.mBannerWWW;
  if ( mBannerWWW )
  {
    v13 = 0;
    v14 = 0;
    if ( UnityEngine_Networking_UnityWebRequest__get_isDone(mBannerWWW, 0) )
    {
      this = *p_mBannerWWW;
      if ( !*p_mBannerWWW )
        goto LABEL_85;
      error = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      v13 = 0;
      v14 = 0;
      if ( System_String__IsNullOrEmpty(error, 0) )
      {
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)v8->fields._texDl_5__3;
        if ( !this )
          goto LABEL_85;
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                    (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                    0);
        if ( !v8->fields._texDl_5__3 )
          goto LABEL_85;
        v14 = this;
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                    v8->fields._texDl_5__3,
                                                                    0);
        if ( !this )
          goto LABEL_85;
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__57_o *, const MethodInfo *))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.methodPtr)(
                                                                    this,
                                                                    this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method);
        if ( !v8->fields._texDl_5__3 )
          goto LABEL_85;
        v16 = (int)this;
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                    v8->fields._texDl_5__3,
                                                                    0);
        if ( !this )
          goto LABEL_85;
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__57_o *, const MethodInfo *))this->klass->vtable._6_MoveNext.methodPtr)(
                                                                    this,
                                                                    this->klass->vtable._6_MoveNext.method);
        if ( !v8->fields._texDl_5__3 )
          goto LABEL_85;
        v17 = (int)this;
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                    v8->fields._texDl_5__3,
                                                                    0);
        if ( !this )
          goto LABEL_85;
        format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0);
        v13 = (UnityEngine_Texture2D_o *)sub_21FFEBC(UnityEngine_Texture2D_TypeInfo);
        UnityEngine_Texture2D___ctor_83105640(v13, v16, v17, format, 0, 0);
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)v8->fields._texDl_5__3;
        if ( !this )
          goto LABEL_85;
        data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0);
        UnityEngine_ImageConversion__LoadImage_83406964(v13, data, 0);
      }
    }
    if ( *p_mBannerWWW
      && UnityEngine_Networking_UnityWebRequest__get_isDone(
           (UnityEngine_Networking_UnityWebRequest_o *)*p_mBannerWWW,
           0) )
    {
      this = *p_mBannerWWW;
      if ( !*p_mBannerWWW )
        goto LABEL_85;
      v20 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0);
      if ( System_String__IsNullOrEmpty(v20, 0) && v14 && v14->fields.__2__current )
      {
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method, v2);
        this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Object__op_Equality(
                                                                    (UnityEngine_Object_o *)v13,
                                                                    0,
                                                                    0);
        if ( ((unsigned __int8)this & 1) == 0 )
        {
          lnkTexture = (NotificationDialog__StartDownloadBanner_d__57_o *)_4__this->fields.lnkTexture;
          if ( _4__this->fields.mLoadingIdx >= 1 )
          {
            if ( !lnkTexture )
              goto LABEL_85;
            gameObject = (Il2CppObject *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)_4__this->fields.lnkTexture,
                                           0);
            if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v72, v73);
            this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Object__Instantiate_object_(
                                                                        gameObject,
                                                                        (const MethodInfo_38C0004 *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !_4__this->fields.lnkSprite )
              goto LABEL_85;
            v75 = this;
            this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Component__get_transform(
                                                                        (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                        0);
            if ( !this )
              goto LABEL_85;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0);
            GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v75, parent, 0);
            v96.fields.x = sub_24182CC(0);
            GameObjectExtensions__SetLocalScale((UnityEngine_GameObject_o *)v75, v96, 0);
            if ( !v75 )
              goto LABEL_85;
            this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                        (UnityEngine_GameObject_o *)v75,
                                                                        (const MethodInfo_3883A78 *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
            if ( !_4__this->fields.additionalTextures )
              goto LABEL_85;
            lnkTexture = this;
            this = (NotificationDialog__StartDownloadBanner_d__57_o *)sub_1FEBF38(
                                                                        _4__this->fields.additionalTextures,
                                                                        this,
                                                                        Method_System_Collections_Generic_List_LinkableTexture__Add__);
          }
          if ( lnkTexture )
          {
            this = (NotificationDialog__StartDownloadBanner_d__57_o *)lnkTexture->fields._texDl_5__3;
            if ( this )
            {
              (*(void (__fastcall **)(NotificationDialog__StartDownloadBanner_d__57_o *, UnityEngine_Texture2D_o *, _QWORD))&this->klass[1]._2.field_count)(
                this,
                v13,
                *(_QWORD *)&this->klass[1]._2.interfaces_count);
              this = (NotificationDialog__StartDownloadBanner_d__57_o *)UnityEngine_Component__get_gameObject(
                                                                          (UnityEngine_Component_o *)lnkTexture,
                                                                          0);
              if ( this )
              {
                UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0);
                v79 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0);
                v80 = NotificationDialog_TypeInfo;
                if ( !*(&NotificationDialog_TypeInfo->_2.cctor_finished + 1) )
                {
                  j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, v77, v78);
                  v80 = NotificationDialog_TypeInfo;
                }
                p_BANNER_RETRY_MAX = (float *)&v80->static_fields->BANNER_RETRY_MAX;
                v82 = p_BANNER_RETRY_MAX[17];
                v83 = p_BANNER_RETRY_MAX[18];
                v84 = p_BANNER_RETRY_MAX[19];
                VectFromScript = NotificationDialog__getVectFromScript(
                                   _4__this,
                                   v8->fields._banner_5__2,
                                   (System_String_o *)StringLiteral_23454/*"offset"*/,
                                   0);
                VectFromScript.fields.x = v82 + VectFromScript.fields.x;
                VectFromScript.fields.y = v83 + VectFromScript.fields.y;
                VectFromScript.fields.z = v84 + VectFromScript.fields.z;
                GameObjectExtensions__SetLocalPosition(v79, VectFromScript, 0);
                v98 = NotificationDialog__getVectFromScript(
                        _4__this,
                        v8->fields._banner_5__2,
                        (System_String_o *)StringLiteral_24701/*"size"*/,
                        0);
                x = v98.fields.x;
                y = v98.fields.y;
                z = v98.fields.z;
                if ( v98.fields.x == sub_24A40FC(0) && y == v88 && z == v89 )
                {
                  LinkableTexture__MakePixelPerfect((LinkableTexture_o *)lnkTexture, 0);
                }
                else
                {
                  if ( x == INFINITY )
                    v90 = 0x80000000;
                  else
                    v90 = (int)x;
                  if ( y == INFINITY )
                    v91 = 0x80000000;
                  else
                    v91 = (int)y;
                  LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, v90, v91, 0);
                }
                IntFromScript = NotificationDialog__getIntFromScript(
                                  _4__this,
                                  v8->fields._banner_5__2,
                                  (System_String_o *)StringLiteral_25761/*"urlOpenType"*/,
                                  0);
                banner_5__2 = v8->fields._banner_5__2;
                v94 = IntFromScript;
                v95 = NotificationDialog__getStringFromScript(
                        _4__this,
                        banner_5__2,
                        (System_String_o *)StringLiteral_25760/*"urlLink"*/,
                        0);
                LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v94, v95, 0);
                NotificationDialog__LoadNext(_4__this, 0);
                goto LABEL_42;
              }
            }
          }
          goto LABEL_85;
        }
      }
    }
  }
  v21 = NotificationDialog_TypeInfo;
  v22 = _4__this->fields.mBannerRetryCount + 1;
  _4__this->fields.mBannerRetryCount = v22;
  if ( !*(&v21->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(v21, method, v2);
    v21 = NotificationDialog_TypeInfo;
  }
  if ( v22 > v21->static_fields->BANNER_RETRY_MAX )
  {
    _4__this->fields.mBannerRetryCount = 0;
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_476E8C0 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    if ( !*(&LocalizationManager_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v23, v24);
    v26 = LocalizationManager__Get((System_String_o *)StringLiteral_9632/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0);
    v27 = (ErrorDialog_ClickDelegate_o *)sub_21FFEBC(ErrorDialog_ClickDelegate_TypeInfo);
    ErrorDialog_ClickDelegate___ctor(
      v27,
      (Il2CppObject *)_4__this,
      Method_NotificationDialog__StartDownloadBanner_b__57_0__,
      0);
    if ( Instance )
    {
      CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v26, v27, 0, 0);
      goto LABEL_42;
    }
    goto LABEL_85;
  }
  started = NotificationDialog__StartDownloadBanner(_4__this, 0);
  UnityEngine_MonoBehaviour__StartCoroutine_83231452((UnityEngine_MonoBehaviour_o *)_4__this, started, 0);
LABEL_42:
  v35 = _4__this->fields.mBannerWWW;
  _4__this->fields.refuseInit = 0;
  if ( v35 )
  {
    UnityEngine_Networking_UnityWebRequest__Dispose(v35, 0);
    *p_mBannerWWW = 0;
    sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&_4__this->fields.mBannerWWW, 0, v36, v37, v38, v39, v40, v41);
  }
  return _1__state == 0;
}


Il2CppObject *NotificationDialog__StartDownloadBanner_d__57__System_Collections_Generic_IEnumerator_System_Object__get_Current(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void __noreturn NotificationDialog__StartDownloadBanner_d__57__System_Collections_IEnumerator_Reset(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x0
  System_NotSupportedException_o *v3; // x19
  __int64 v4; // x0

  v2 = sub_21FFC64(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_21FFEBC(v2);
  System_NotSupportedException___ctor(v3, 0);
  v4 = sub_21FFC64(&Method_NotificationDialog__StartDownloadBanner_d__57_System_Collections_IEnumerator_Reset__);
  sub_21FFD90(v3, v4);
}


Il2CppObject *NotificationDialog__StartDownloadBanner_d__57__System_Collections_IEnumerator_get_Current(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  return this->fields.__2__current;
}


void NotificationDialog__StartDownloadBanner_d__57__System_IDisposable_Dispose(
        NotificationDialog__StartDownloadBanner_d__57_o *this,
        const MethodInfo *method)
{
  ;
}