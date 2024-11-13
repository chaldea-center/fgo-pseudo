void __fastcall NotificationDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct NotificationDialog_StaticFields *static_fields; // x8
  NotificationDialog_c *v4; // x8
  struct NotificationDialog_StaticFields *v5; // x9
  struct NotificationDialog_StaticFields *v6; // x9
  struct NotificationDialog_StaticFields *v7; // x9
  struct NotificationDialog_StaticFields *v8; // x9
  struct NotificationDialog_StaticFields *v9; // x9
  struct NotificationDialog_StaticFields *v10; // x9

  if ( (byte_4B19CE9 & 1) == 0 )
  {
    sub_1BCA7E0(&NotificationDialog_TypeInfo, v1, v2);
    byte_4B19CE9 = 1;
  }
  static_fields = NotificationDialog_TypeInfo->static_fields;
  static_fields->BANNER_RETRY_MAX = 3;
  *(_QWORD *)&static_fields->TITLE_BASE_POS.fields.x = 0x4334000000000000LL;
  static_fields->TITLE_BASE_POS.fields.z = 0.0;
  v4 = NotificationDialog_TypeInfo;
  v5 = NotificationDialog_TypeInfo->static_fields;
  *(_QWORD *)&v5->MESSAGE_BASE_POS.fields.x = 0x416B333300000000LL;
  v5->MESSAGE_BASE_POS.fields.z = 0.0;
  v6 = v4->static_fields;
  *(_QWORD *)&v6->NO_TITLE_MESSAGE_BASE_POS.fields.x = 0x4218000000000000LL;
  v6->NO_TITLE_MESSAGE_BASE_POS.fields.z = 0.0;
  v7 = v4->static_fields;
  *(_QWORD *)&v7->MESSAGE_LINE_POS.fields.x = 0x40A0000000000000LL;
  v7->MESSAGE_LINE_POS.fields.z = 0.0;
  v8 = v4->static_fields;
  *(_OWORD *)&v8->MESSAGE_BASE_SIZE_X = xmmword_BD24D0;
  *(_QWORD *)&v8->IMAGE_BASE_POS.fields.y = 0LL;
  v8->IMAGE_BASE_POS.fields.x = 0.0;
  v9 = v4->static_fields;
  *(_QWORD *)&v9->BUTTON_BASE_POS.fields.x = 0xC322000000000000LL;
  v9->BUTTON_BASE_POS.fields.z = 0.0;
  v10 = v4->static_fields;
  *(_QWORD *)&v10->BUTTON_TEXT_POS.fields.x = 0xBF80000000000000LL;
  v10->BUTTON_TEXT_POS.fields.z = 0.0;
  *(_QWORD *)&v4->static_fields->BUTTON_BASE_SIZE_X = 0x38000000DALL;
}


void __fastcall NotificationDialog___ctor(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B19CE8 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B19CE8 = 1;
  }
  this->fields.MESSAGE_FONT_SIZE = 30;
  this->fields.isInitPanelDepth = 1;
  this->fields.onClickOkSeKind = 1;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  UnityEngine_GameObject_o *baseWindow; // x0
  struct UILabel_o *messageLabel; // x24
  int monitor_high; // w27
  float v43; // s12
  float v44; // s0
  UnityEngine_Object_o *v45; // x27
  NotificationDialog_c *v46; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  System_String_o *Empty; // x25
  float v49; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v51; // [xsp+0h] [xbp-B0h] BYREF
  Il2CppObject *v52; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v53; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-98h] BYREF
  Il2CppObject *v55; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v56; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4B19CDF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___, isNoTitle, message);
    sub_1BCA7E0(&Method_UnityEngine_Component_TryGetComponent_UISprite___, v27, v28);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___, v29, v30);
    sub_1BCA7E0(&System_Math_TypeInfo, v31, v32);
    sub_1BCA7E0(&NotificationDialog_TypeInfo, v33, v34);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v35, v36);
    sub_1BCA7E0(&string_TypeInfo, v37, v38);
    byte_4B19CDF = 1;
  }
  v55 = 0LL;
  v53 = 0LL;
  component = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNoTitle);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      baseWindow = this->fields.baseWindow;
      if ( !baseWindow )
        goto LABEL_54;
      messageLabel = this->fields.noTitleMessageLabel;
      if ( !UnityEngine_GameObject__TryGetComponent_object_(
              baseWindow,
              &component,
              (const MethodInfo_2F63960 *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
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
                                                 &v53,
                                                 (const MethodInfo_2F0A5F8 *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)baseWindow & 1) != 0 )
      {
        if ( !component || !v53 )
          goto LABEL_54;
        monitor_high = HIDWORD(component[10].monitor);
        v43 = (float)((float)SHIDWORD(v53[10].monitor) * 0.5) + buttonPosY;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo, isNoTitle);
        v44 = fabsf((float)((float)monitor_high * 0.5) + -30.0) + fabsf(v43);
        if ( isAdjustTextPos )
          y = v43 + (float)(v44 * 0.5);
        if ( v44 == INFINITY )
          messageSizeY = 0x80000000;
        else
          messageSizeY = (int)v44;
      }
      else
      {
LABEL_30:
        v46 = NotificationDialog_TypeInfo;
        if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, isNoTitle);
          v46 = NotificationDialog_TypeInfo;
        }
        static_fields = v46->static_fields;
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
                                                     &v52,
                                                     (const MethodInfo_2F0A5F8 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
          if ( ((unsigned __int8)baseWindow & 1) == 0 )
            goto LABEL_38;
          baseWindow = (UnityEngine_GameObject_o *)v52;
          if ( !v52 )
            goto LABEL_54;
          goto LABEL_37;
        }
      }
LABEL_54:
      sub_1BCAA3C(baseWindow, isNoTitle);
    }
  }
  messageLabel = this->fields.messageLabel;
  v45 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNoTitle);
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v45, 0LL, 0LL);
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
                                                   (Il2CppObject **)&v51,
                                                   (const MethodInfo_2F0A5F8 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
        if ( ((unsigned __int8)baseWindow & 1) == 0 )
          goto LABEL_38;
        baseWindow = v51;
        if ( !v51 )
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
    baseWindow = (UnityEngine_GameObject_o *)System_String__Trim_62430580(message, 0xAu, 0LL);
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
         &v55,
         (const MethodInfo_2F0A5F8 *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___) )
  {
    baseWindow = (UnityEngine_GameObject_o *)v55;
    if ( !v55 )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v55, 1, 0LL);
  }
  if ( adjustText )
    WrapControlText__textAdjust(messageLabel, Empty, messageLabel->fields.mFontSize, 0, 0, 0LL);
  else
    UILabel__set_text(messageLabel, Empty, 0LL);
  if ( messagePosYForcedAdd == 0.0 )
    v49 = y;
  else
    v49 = y + messagePosYForcedAdd;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
  v56.fields.x = x;
  v56.fields.y = v49;
  v56.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v56, 0LL);
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
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  UILabel_o *messageLabel; // x0
  struct UILabel_o *v25; // x24
  struct UIWidget_OnDimensionsChanged_o *onChange; // x10
  System_String_o *Empty; // x1
  UnityEngine_Object_o *v28; // x25
  System_String_o *v29; // x23
  __int64 v30; // x1
  UnityEngine_Object_o *v31; // x21
  NotificationDialog_o *gameObject; // x21
  const MethodInfo *v33; // x3
  UnityEngine_Object_o *v34; // x21
  NotificationDialog_o *v35; // x20
  const MethodInfo *v36; // x3
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v38; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4B19CE0 & 1) == 0 )
  {
    sub_1BCA7E0(&NotificationDialog_TypeInfo, isNoTitle, message);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v17, v18);
    sub_1BCA7E0(&string_TypeInfo, v19, v20);
    sub_1BCA7E0(&StringLiteral_21638/*"messageOffset"*/, v21, v22);
    byte_4B19CE0 = 1;
  }
  if ( isNoTitle )
  {
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNoTitle);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
      v25 = this->fields.noTitleMessageLabel;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, isNoTitle);
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
  v25 = this->fields.messageLabel;
  v28 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNoTitle);
  if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    messageLabel = this->fields.noTitleMessageLabel;
    if ( !messageLabel )
      goto LABEL_34;
    Empty = string_TypeInfo->static_fields->Empty;
LABEL_16:
    UILabel__set_text(messageLabel, Empty, 0LL);
  }
  if ( message )
    v29 = System_String__Trim_62430580(message, 0xAu, 0LL);
  else
    v29 = string_TypeInfo->static_fields->Empty;
  messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, isNoTitle);
  if ( !v25 )
    goto LABEL_34;
  UIWidget__SetDimensions(
    (UIWidget_o *)v25,
    NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
    messageSizeY,
    0LL);
  UILabel__set_maxLineCount(v25, maxLine, 0LL);
  UILabel__set_fontSize(v25, this->fields.MESSAGE_FONT_SIZE, 0LL);
  WrapControlText__textAdjust(v25, v29, v25->fields.mFontSize, 0, 0, 0LL);
  v31 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
  if ( UnityEngine_Object__op_Inequality(v31, 0LL, 0LL) )
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
                       (System_String_o *)StringLiteral_21638/*"messageOffset"*/,
                       v33);
    VectFromScript.fields.x = x + VectFromScript.fields.x;
    VectFromScript.fields.y = y + VectFromScript.fields.y;
    VectFromScript.fields.z = z + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)gameObject, VectFromScript, 0LL);
  }
  v34 = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, isNoTitle);
  if ( UnityEngine_Object__op_Inequality(v34, 0LL, 0LL) )
  {
    messageLabel = this->fields.messageLabel;
    if ( messageLabel )
    {
      v35 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
      v38 = NotificationDialog__getVectFromScript(v35, script, (System_String_o *)StringLiteral_21638/*"messageOffset"*/, v36);
      v38.fields.x = x + v38.fields.x;
      v38.fields.z = z + v38.fields.z;
      v38.fields.y = y + v38.fields.y;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v35, v38, 0LL);
      return;
    }
LABEL_34:
    sub_1BCAA3C(messageLabel, isNoTitle);
  }
}


void __fastcall NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_45952964(this, 0LL, v2);
}


void __fastcall NotificationDialog__Close_45952964(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x3
  System_Action_o *v15; // x20

  if ( (byte_4B19CE4 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_NotificationDialog_EndClose__, v10, v11);
    byte_4B19CE4 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeEndFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v15 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v12, v13, v14);
  System_Action___ctor(v15, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall NotificationDialog__EndClose(NotificationDialog_o *this, const MethodInfo *method)
{
  int64_t v3; // x2
  int32_t v4; // w3
  System_String_o *v5; // x4
  BattleSetupInfo_o *v6; // x5
  FollowerInfo_o *v7; // x6
  PartyListViewItem_o *v8; // x7
  PartyOrganizationUtility_o *p_closeEndFunc; // x19
  struct System_Action_o *v10; // x20
  struct System_Action_o *closeEndFunc; // t1

  NotificationDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (PartyOrganizationUtility_o *)&this->fields.closeEndFunc;
  v10 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0LL;
    sub_1BCA784(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v10->fields.m_target)(
      v10->fields.original_method_info,
      *(_QWORD *)&v10->fields.extra_arg);
  }
}


void __fastcall NotificationDialog__EndOpen(NotificationDialog_o *this, const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


void __fastcall NotificationDialog__Init(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  __int64 v16; // x1
  __int64 v17; // x2
  __int64 v18; // x1
  __int64 v19; // x2
  __int64 v20; // x1
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  void *titleLabel; // x0
  __int64 v27; // x1
  UnityEngine_Object_o *v28; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  int64_t v33; // x2
  int32_t v34; // w3
  System_String_o *v35; // x4
  BattleSetupInfo_o *v36; // x5
  FollowerInfo_o *v37; // x6
  PartyListViewItem_o *v38; // x7
  UnityEngine_Object_o *lnkTexture; // x20
  __int64 v40; // x2
  __int64 v41; // x3
  struct LinkableTexture_o *v42; // x8
  __int64 v43; // x1
  UnityEngine_Object_o *v44; // x20
  struct LinkableTexture_o *v45; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  int32_t v47; // w21
  __int64 v48; // x2
  __int64 v49; // x1
  UnityEngine_Object_o *gameObject; // x22
  int v51; // w8
  System_Collections_Generic_List_object__o *v52; // x21
  int64_t v53; // x2
  int32_t v54; // w3
  System_String_o *v55; // x4
  BattleSetupInfo_o *v56; // x5
  FollowerInfo_o *v57; // x6
  PartyListViewItem_o *v58; // x7
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  int32_t v60; // w21
  int32_t v61; // w2
  __int64 v62; // x1
  UnityEngine_Object_o *v63; // x22
  UnityEngine_Object_o *v64; // x0
  int v65; // w8
  System_Collections_Generic_List_object__o *v66; // x21
  int64_t v67; // x2
  int32_t v68; // w3
  System_String_o *v69; // x4
  BattleSetupInfo_o *v70; // x5
  FollowerInfo_o *v71; // x6
  PartyListViewItem_o *v72; // x7

  if ( (byte_4B19CDB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableTexture__Clear__, method, v2);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableSprite__Clear__, v4, v5);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableSprite___ctor__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableTexture___ctor__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__, v10, v11);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__, v12, v13);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__, v14, v15);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__, v16, v17);
    sub_1BCA7E0(&System_Collections_Generic_List_LinkableSprite__TypeInfo, v18, v19);
    sub_1BCA7E0(&System_Collections_Generic_List_LinkableTexture__TypeInfo, v20, v21);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v22, v23);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v24, v25);
    byte_4B19CDB = 1;
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
    v28 = (UnityEngine_Object_o *)this->fields.titleLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
    {
      titleLabel = this->fields.titleLabel;
      if ( !titleLabel )
        goto LABEL_65;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
    {
      titleLabel = this->fields.messageLabel;
      if ( !titleLabel )
        goto LABEL_65;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    noTitleMessageLabel = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    if ( UnityEngine_Object__op_Inequality(noTitleMessageLabel, 0LL, 0LL) )
    {
      titleLabel = this->fields.noTitleMessageLabel;
      if ( !titleLabel )
        goto LABEL_65;
      UILabel__set_text((UILabel_o *)titleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    }
    okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
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
      sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.mBannerWWW, 0LL, v33, v34, v35, v36, v37, v38);
    }
    lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    titleLabel = (void *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
    if ( ((unsigned __int8)titleLabel & 1) != 0 )
    {
      v42 = this->fields.lnkTexture;
      if ( !v42 )
        goto LABEL_65;
      titleLabel = v42->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_65;
      v44 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                      titleLabel,
                                      *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v43);
      UnityEngine_Object__Destroy_70154244(v44, 0LL);
      v45 = this->fields.lnkTexture;
      if ( !v45 )
        goto LABEL_65;
      titleLabel = v45->fields.mUiTexture;
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
      v47 = 0;
      while ( 1 )
      {
        v48 = *((unsigned int *)titleLabel + 6);
        if ( v47 >= (int)v48 )
          break;
        titleLabel = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)titleLabel,
                       v47,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
        if ( titleLabel )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)titleLabel,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v49);
          UnityEngine_Object__Destroy_70154244(gameObject, 0LL);
          titleLabel = *p_additionalSprites;
          ++v47;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_65;
      }
      v51 = *((_DWORD *)titleLabel + 7) + 1;
      *((_DWORD *)titleLabel + 6) = 0;
      *((_DWORD *)titleLabel + 7) = v51;
      if ( (int)v48 >= 1 )
        System_Array__Clear(*((System_Array_o **)titleLabel + 2), 0, v48, 0LL);
    }
    else
    {
      v52 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_LinkableSprite__TypeInfo,
                                                           method,
                                                           v40,
                                                           v41);
      System_Collections_Generic_List_object____ctor(
        v52,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v52;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.additionalSprites,
        (int64_t)v52,
        v53,
        v54,
        v55,
        v56,
        v57,
        v58);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    titleLabel = this->fields.additionalTextures;
    if ( titleLabel )
    {
      v60 = 0;
      while ( 1 )
      {
        v61 = *((_DWORD *)titleLabel + 6);
        if ( v60 >= v61 )
          break;
        titleLabel = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)titleLabel,
                       v60,
                       (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
        if ( titleLabel )
        {
          titleLabel = (void *)*((_QWORD *)titleLabel + 6);
          if ( titleLabel )
          {
            v63 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                            titleLabel,
                                            *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v62);
            UnityEngine_Object__Destroy_70154244(v63, 0LL);
            titleLabel = *p_additionalTextures;
            if ( *p_additionalTextures )
            {
              titleLabel = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)titleLabel,
                             v60,
                             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
              if ( titleLabel )
              {
                v64 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0LL);
                UnityEngine_Object__Destroy_70154244(v64, 0LL);
                titleLabel = *p_additionalTextures;
                ++v60;
                if ( *p_additionalTextures )
                  continue;
              }
            }
          }
        }
        goto LABEL_65;
      }
      v65 = *((_DWORD *)titleLabel + 7) + 1;
      *((_DWORD *)titleLabel + 6) = 0;
      *((_DWORD *)titleLabel + 7) = v65;
      if ( v61 >= 1 )
        System_Array__Clear(*((System_Array_o **)titleLabel + 2), 0, v61, 0LL);
    }
    else
    {
      v66 = (System_Collections_Generic_List_object__o *)sub_1BCAA2C(
                                                           System_Collections_Generic_List_LinkableTexture__TypeInfo,
                                                           method,
                                                           v48,
                                                           v41);
      System_Collections_Generic_List_object____ctor(
        v66,
        (const MethodInfo_35A1428 *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v66;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.additionalTextures,
        (int64_t)v66,
        v67,
        v68,
        v69,
        v70,
        v71,
        v72);
    }
    titleLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      BaseDialog__Init((BaseDialog_o *)this, 0LL);
      return;
    }
LABEL_65:
    sub_1BCAA3C(titleLabel, method);
  }
}


void __fastcall NotificationDialog__LoadBanners(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  const MethodInfo *v9; // x1
  System_Collections_IEnumerator_o *started; // x1

  this->fields.mAfterLoad = callback;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.mAfterLoad,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.mLoadingIdx = 0;
  started = NotificationDialog__StartDownloadBanner(this, v9);
  UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_1BCAA3C(this, method);
  if ( v3 >= (signed int)banners->max_length )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0LL);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
}


void __fastcall NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct NotificationDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4B19CE5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_NotificationDialog_OnClickOk__, method, v2);
    byte_4B19CE5 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_NotificationDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_NotificationDialog_OnClickOk__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_NotificationDialog_OnClickOk__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.onClickOkSeKind, 0LL);
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
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  float value; // s9
  NotificationDialog_c *v46; // x0
  int32_t v47; // w25
  float y; // s1
  NotificationDialog_c *v49; // x0
  int32_t v50; // w27
  System_Nullable_float__o v52; // [xsp+0h] [xbp-B0h]
  bool v53; // [xsp+Ch] [xbp-A4h]
  bool v54; // [xsp+Ch] [xbp-A4h]
  bool v56; // [xsp+10h] [xbp-A0h]
  bool v57; // [xsp+10h] [xbp-A0h]
  int32_t v59; // [xsp+18h] [xbp-98h]
  int32_t v60; // [xsp+18h] [xbp-98h]
  int32_t v62; // [xsp+20h] [xbp-90h]
  int32_t v63; // [xsp+20h] [xbp-90h]
  System_Nullable_float__o v64; // [xsp+28h] [xbp-88h]
  System_Nullable_float__o v65; // [xsp+28h] [xbp-88h]
  System_Nullable_int__o v66; // [xsp+30h] [xbp-80h]
  System_Nullable_int__o v67; // [xsp+30h] [xbp-80h]
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
  if ( (byte_4B19CDC & 1) == 0 )
  {
    v39 = titleSize;
    sub_1BCA7E0(&NotificationDialog_TypeInfo, title, message);
    sub_1BCA7E0(&Method_System_Nullable_float__GetValueOrDefault__, v41, v42);
    sub_1BCA7E0(&Method_System_Nullable_float__get_HasValue__, v43, v44);
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
    byte_4B19CDC = 1;
  }
  if ( messagePosY.fields.hasValue )
  {
    value = messagePosY.fields.value;
  }
  else
  {
    v46 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      titleSizea = titleSize;
      v64 = v27;
      v66 = v25;
      v47 = v26;
      v62 = v28;
      v59 = v29;
      v53 = v30;
      v56 = v24;
      v52 = v21;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, title);
      v21 = v52;
      v30 = v53;
      v24 = v56;
      v29 = v59;
      v28 = v62;
      v27 = v64;
      v25 = v66;
      titleSize = titleSizea;
      v46 = NotificationDialog_TypeInfo;
      v26 = v47;
    }
    value = v46->static_fields->MESSAGE_BASE_POS.fields.y;
  }
  if ( v21.fields.hasValue )
  {
    y = v21.fields.value;
  }
  else
  {
    v49 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      titleSizeb = titleSize;
      v65 = v27;
      v67 = v25;
      v50 = v26;
      v63 = v28;
      v60 = v29;
      v54 = v30;
      v57 = v24;
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, title);
      v30 = v54;
      v24 = v57;
      v29 = v60;
      v28 = v63;
      v27 = v65;
      v25 = v67;
      titleSize = titleSizeb;
      v49 = NotificationDialog_TypeInfo;
      v26 = v50;
    }
    y = v49->static_fields->BUTTON_BASE_POS.fields.y;
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
    0LL,
    method);
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
        const MethodInfo *method)
{
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  UIPanel_o *TargetPanel; // x0
  __int64 v56; // x1
  int64_t v57; // x2
  int32_t v58; // w3
  System_String_o *v59; // x4
  BattleSetupInfo_o *v60; // x5
  FollowerInfo_o *v61; // x6
  PartyListViewItem_o *v62; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v64; // x21
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  __int64 v67; // x1
  UnityEngine_Object_o *titleLabel; // x29
  System_String_o *v69; // x1
  NotificationDialog_c *v70; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s12
  float z; // s11
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v76; // x0
  struct NotificationDialog_StaticFields *v77; // x8
  float v78; // s11
  float v79; // s12
  unsigned __int64 v80; // x28
  unsigned __int64 messageSizeX; // x19
  UnityEngine_Object_o *lineSprite; // x29
  NotificationDialog_c *v83; // x0
  struct NotificationDialog_StaticFields *v84; // x8
  UnityEngine_Object_o *messageLabel; // x27
  __int64 v86; // x1
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x22
  UnityEngine_Object_o *lnkTexture; // x22
  UnityEngine_Object_o *okBtnLabel; // x22
  NotificationDialog_c *v91; // x0
  struct NotificationDialog_StaticFields *v92; // x8
  UILabel_o *v93; // x22
  float v94; // s10
  float v95; // s9
  float v96; // s13
  float v97; // s11
  float y; // s12
  UnityEngine_GameObject_o *v99; // x0
  UnityEngine_GameObject_o *v100; // x0
  UnityEngine_GameObject_o *v101; // x22
  Il2CppObject *Component_object; // x23
  __int64 v103; // x1
  Il2CppObject *v104; // x22
  unsigned __int64 v105; // x19
  unsigned __int64 v106; // x25
  __int64 v107; // x1
  __int64 v108; // x2
  __int64 v109; // x3
  System_Action_o *v110; // x19
  const MethodInfo *v111; // [xsp+10h] [xbp-E0h]
  float v; // [xsp+5Ch] [xbp-94h]
  UnityEngine_Vector3_o v116; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v117; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19CDD & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, title, message);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, v31, v32);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v33, v34);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_NotificationDialog_EndOpen__, v37, v38);
    sub_1BCA7E0(&NotificationDialog_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_System_Nullable_float__GetValueOrDefault__, v41, v42);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v43, v44);
    sub_1BCA7E0(&Method_System_Nullable_float__get_HasValue__, v45, v46);
    sub_1BCA7E0(&Method_System_Nullable_int__get_HasValue__, v47, v48);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v49, v50);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v53, v54);
    byte_4B19CDD = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v64 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v56);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v64, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v64 )
        goto LABEL_112;
      this->fields.keepPanelDepth = v64->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v57, v58, v59, v60, v61, v62);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v67);
  if ( UnityEngine_Object__op_Inequality(titleLabel, 0LL, 0LL) )
  {
    transform = this->fields.titleLabel;
    if ( titleSize <= 0 )
      titleSize = this->fields.MESSAGE_FONT_SIZE;
    if ( !transform )
      goto LABEL_112;
    UILabel__set_fontSize(transform, titleSize, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_112;
    if ( title )
      v69 = title;
    else
      v69 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v69, 0LL);
    v70 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth);
      v70 = NotificationDialog_TypeInfo;
    }
    static_fields = v70->static_fields;
    x = static_fields->TITLE_BASE_POS.fields.x;
    z = static_fields->TITLE_BASE_POS.fields.z;
    if ( titlePosY.fields.hasValue )
    {
      value = titlePosY.fields.value;
    }
    else
    {
      if ( !v70->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v70, keepPanelDepth);
        static_fields = NotificationDialog_TypeInfo->static_fields;
      }
      value = static_fields->TITLE_BASE_POS.fields.y;
    }
    v = value;
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_112;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v116.fields.y = v;
    v116.fields.x = x;
    v116.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v116, 0LL);
  }
  v76 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth);
    v76 = NotificationDialog_TypeInfo;
  }
  v77 = v76->static_fields;
  v78 = v77->MESSAGE_BASE_POS.fields.x;
  v79 = v77->MESSAGE_BASE_POS.fields.z;
  if ( v77->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = v77->MESSAGE_BASE_POS.fields.y;
  if ( messageWidgetSizeY.fields.hasValue )
  {
    v80 = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeY);
  }
  else
  {
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76, keepPanelDepth);
      v76 = NotificationDialog_TypeInfo;
      v77 = NotificationDialog_TypeInfo->static_fields;
    }
    LODWORD(v80) = v77->MESSAGE_BASE_SIZE_Y;
  }
  if ( messageWidgetSizeX.fields.hasValue )
  {
    messageSizeX = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeX);
  }
  else
  {
    if ( !v76->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v76, keepPanelDepth);
      v76 = NotificationDialog_TypeInfo;
    }
    LODWORD(messageSizeX) = v76->static_fields->MESSAGE_BASE_SIZE_X;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth);
  if ( UnityEngine_Object__op_Inequality(lineSprite, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lineSprite;
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, isLineDraw, 0LL);
    if ( isLineDraw )
    {
      v83 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth);
        v83 = NotificationDialog_TypeInfo;
      }
      v84 = v83->static_fields;
      v78 = v84->MESSAGE_LINE_POS.fields.x;
      messagePosY = v84->MESSAGE_LINE_POS.fields.y;
      v79 = v84->MESSAGE_LINE_POS.fields.z;
      LODWORD(v80) = v84->MESSAGE_LINE_SIZE_Y;
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v117.fields.x = v78;
    v117.fields.y = messagePosY;
    v117.fields.z = v79;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      v80,
      maxLine,
      messageFontSize,
      adjustText,
      v117,
      buttonPosY,
      messageSizeX,
      messagePosYForcedAdd,
      isAdjustTextPos,
      v111);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v86);
  if ( UnityEngine_Object__op_Inequality(lnkSprite, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lnkSprite;
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth);
  if ( UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL) )
  {
    transform = (UILabel_o *)this->fields.lnkTexture;
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)transform, 0, 0LL);
  }
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v91 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth);
      v91 = NotificationDialog_TypeInfo;
    }
    v92 = v91->static_fields;
    v93 = this->fields.okBtnLabel;
    v94 = v92->BUTTON_BASE_POS.fields.x;
    v95 = v92->BUTTON_BASE_POS.fields.z;
    v96 = v92->BUTTON_TEXT_POS.fields.x;
    y = v92->BUTTON_TEXT_POS.fields.y;
    v97 = v92->BUTTON_TEXT_POS.fields.z;
    if ( v92->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v92->BUTTON_BASE_POS.fields.y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, keepPanelDepth);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v93 )
      goto LABEL_112;
    UILabel__set_text(v93, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_112;
    v99 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v118.fields.x = v96;
    v118.fields.y = y;
    v118.fields.z = v97;
    GameObjectExtensions__SetLocalPosition(v99, v118, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    v100 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v119.fields.x = v94;
    v119.fields.y = buttonPosY;
    v119.fields.z = v95;
    GameObjectExtensions__SetLocalPosition(v100, v119, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    v101 = (UnityEngine_GameObject_o *)transform;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v104 = UnityEngine_GameObject__GetComponent_object_(
             v101,
             (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth);
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v104, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( buttonWidgetSizeX.fields.hasValue )
        {
          v105 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeX);
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v105) = transform->fields.onChange[1].monitor;
        }
        if ( buttonWidgetSizeY.fields.hasValue )
        {
          v106 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeY);
          if ( !Component_object )
            goto LABEL_112;
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v106) = HIDWORD(transform->fields.onChange[1].monitor);
          if ( !Component_object )
            goto LABEL_112;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v105, 0LL);
        UIWidget__set_height((UIWidget_o *)Component_object, v106, 0LL);
        if ( !v104 )
          goto LABEL_112;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v104, 0LL);
        size.fields.x = (float)(int)v105;
        size.fields.y = (float)(int)v106;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v104, size, 0LL);
      }
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v64, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( v64 )
    {
      UIPanel__set_depth(v64, keepPanelDepth, 0LL);
      goto LABEL_111;
    }
LABEL_112:
    sub_1BCAA3C(transform, keepPanelDepth);
  }
LABEL_111:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v110 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v107, v108, v109);
  System_Action___ctor(v110, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v110, 0, 0LL);
}


void __fastcall NotificationDialog__Open_45947200(
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
  const MethodInfo *v18; // [xsp+58h] [xbp-18h]

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
    v18);
}


void __fastcall NotificationDialog__Open_45948364(
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
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  __int64 v49; // x1
  __int64 v50; // x2
  __int64 v51; // x1
  __int64 v52; // x2
  __int64 v53; // x1
  __int64 v54; // x2
  __int64 v55; // x1
  __int64 v56; // x2
  __int64 v57; // x1
  __int64 v58; // x2
  __int64 v59; // x1
  __int64 v60; // x2
  __int64 v61; // x1
  __int64 v62; // x2
  __int64 v63; // x1
  __int64 v64; // x2
  __int64 v65; // x1
  __int64 v66; // x2
  __int64 v67; // x1
  __int64 v68; // x2
  UIPanel_o *TargetPanel; // x0
  __int64 v70; // x1
  int64_t v71; // x2
  int32_t v72; // w3
  System_String_o *v73; // x4
  BattleSetupInfo_o *v74; // x5
  FollowerInfo_o *v75; // x6
  PartyListViewItem_o *v76; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v78; // x22
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  __int64 v81; // x1
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v83; // x1
  NotificationDialog_o *gameObject; // x0
  __int64 v85; // x1
  const MethodInfo *v86; // x3
  NotificationDialog_c *v87; // x8
  UnityEngine_GameObject_o *v88; // x26
  float *p_BANNER_RETRY_MAX; // x8
  float v90; // s8
  float v91; // s9
  float v92; // s10
  NotificationDialog_c *v93; // x0
  float *v94; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v96; // s8
  float v97; // s9
  float v98; // s10
  int32_t v99; // w26
  NotificationDialog_c *v100; // x0
  float *v101; // x8
  UnityEngine_Object_o *messageLabel; // x27
  __int64 v103; // x1
  bool IsNullOrEmpty; // w0
  const MethodInfo *v105; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 methodPtr_low; // x11
  struct System_Object_array *v108; // x0
  struct System_Object_array **p_sprites; // x23
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  __int64 v116; // x8
  UnityEngine_Component_o *v117; // x25
  unsigned __int64 v118; // x21
  __int64 v119; // x1
  Il2CppObject *v120; // x25
  UnityEngine_GameObject_o *v121; // x25
  UnityEngine_Component_o *parent; // x0
  __int64 v123; // x1
  __int64 v124; // x2
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  System_Collections_Generic_List_object__o *additionalSprites; // x8
  struct System_Object_array *items; // x9
  _QWORD *v133; // x10
  __int64 size; // x11
  Il2CppClass **v135; // x0
  struct System_Object_array *v136; // x8
  System_Collections_Generic_Dictionary_string__object__o *v137; // x8
  __int64 v138; // x11
  System_Collections_Generic_Dictionary_string__object__o *v139; // x26
  System_Collections_Generic_Dictionary_string__object__o *v140; // x22
  NotificationDialog_o *v141; // x0
  UISprite_o *klass; // x20
  UnityEngine_GameObject_o *v143; // x27
  const MethodInfo *v144; // x3
  __int64 v145; // x1
  System_String_o *StringFromScript; // x29
  NotificationDialog_o *v147; // x0
  __int64 v148; // x1
  const MethodInfo *v149; // x3
  NotificationDialog_c *v150; // x8
  UnityEngine_GameObject_o *v151; // x27
  float *v152; // x8
  float v153; // s8
  float v154; // s9
  float v155; // s10
  NotificationDialog_o *v156; // x0
  const MethodInfo *v157; // x3
  __int64 v158; // x1
  __int64 v159; // x2
  float x; // s9
  float y; // s8
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v164; // x0
  const MethodInfo *v165; // x3
  int32_t v166; // w1
  int32_t v167; // w2
  NotificationDialog_o *IntFromScript; // x0
  int32_t v169; // w27
  const MethodInfo *v170; // x3
  System_String_o *v171; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v173; // x11
  struct System_Object_array *v174; // x0
  int64_t v175; // x2
  int32_t v176; // w3
  System_String_o *v177; // x4
  BattleSetupInfo_o *v178; // x5
  FollowerInfo_o *v179; // x6
  PartyListViewItem_o *v180; // x7
  struct System_Object_array *banners; // x8
  int v182; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  __int64 v184; // x1
  UILabel_o *v185; // x23
  NotificationDialog_o *v186; // x0
  __int64 v187; // x1
  const MethodInfo *v188; // x3
  NotificationDialog_c *v189; // x8
  UnityEngine_GameObject_o *v190; // x23
  float *v191; // x8
  float v192; // s8
  float v193; // s9
  float v194; // s10
  __int64 v195; // x1
  __int64 v196; // x2
  __int64 v197; // x3
  System_Action_o *v198; // x20
  __int64 v199; // x1
  __int64 v200; // x2
  __int64 v201; // x3
  System_Action_o *v202; // x20
  const MethodInfo *v203; // x2
  UIPanel_o *v205; // [xsp+8h] [xbp-88h]
  Il2CppObject *value; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v208; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v209; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v210; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v211; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19CDE & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, title, message);
    sub_1BCA7E0(&AtlasManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v21, v22);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___, v25, v26);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableSprite__Add__, v27, v28);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__ToArray__, v29, v30);
    sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v31, v32);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v33, v34);
    sub_1BCA7E0(&Method_NotificationDialog_EndOpen__, v35, v36);
    sub_1BCA7E0(&Method_NotificationDialog__Open_b__42_0__, v37, v38);
    sub_1BCA7E0(&NotificationDialog_TypeInfo, v39, v40);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v41, v42);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v43, v44);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v45, v46);
    sub_1BCA7E0(&StringLiteral_17238/*"banners"*/, v47, v48);
    sub_1BCA7E0(&StringLiteral_23582/*"size"*/, v49, v50);
    sub_1BCA7E0(&StringLiteral_24591/*"urlOpenType"*/, v51, v52);
    sub_1BCA7E0(&StringLiteral_22448/*"offset"*/, v53, v54);
    sub_1BCA7E0(&StringLiteral_24210/*"titleOffset"*/, v55, v56);
    sub_1BCA7E0(&StringLiteral_23693/*"spriteName"*/, v57, v58);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v59, v60);
    sub_1BCA7E0(&StringLiteral_24590/*"urlLink"*/, v61, v62);
    sub_1BCA7E0(&StringLiteral_17824/*"buttonOffset"*/, v63, v64);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v65, v66);
    sub_1BCA7E0(&StringLiteral_23694/*"sprites"*/, v67, v68);
    byte_4B19CDE = 1;
  }
  value = 0LL;
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v78 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v70);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v78, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v78 )
        goto LABEL_138;
      this->fields.keepPanelDepth = v78->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v71, v72, v73, v74, v75, v76);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v81);
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
    v83 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v83, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
    v87 = NotificationDialog_TypeInfo;
    v88 = (UnityEngine_GameObject_o *)gameObject;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, v85);
      v87 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v87->static_fields->BANNER_RETRY_MAX;
    v90 = p_BANNER_RETRY_MAX[1];
    v91 = p_BANNER_RETRY_MAX[2];
    v92 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_24210/*"titleOffset"*/,
                       v86);
    VectFromScript.fields.x = v90 + VectFromScript.fields.x;
    VectFromScript.fields.y = v91 + VectFromScript.fields.y;
    VectFromScript.fields.z = v92 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v88, VectFromScript, 0LL);
  }
  v93 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth);
    v93 = NotificationDialog_TypeInfo;
  }
  v94 = (float *)&v93->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v96 = v94[4];
  v97 = v94[5];
  v98 = v94[6];
  v99 = *((_DWORD *)v94 + 14);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth);
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
      v100 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, keepPanelDepth);
        v100 = NotificationDialog_TypeInfo;
      }
      v101 = (float *)&v100->static_fields->BANNER_RETRY_MAX;
      v96 = v101[10];
      v97 = v101[11];
      v98 = v101[12];
      v99 = *((_DWORD *)v101 + 16);
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v208.fields.x = v96;
    v208.fields.y = v97;
    v208.fields.z = v98;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v99, maxLine, v208, script, v105);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v103);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkSprite, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !script )
      goto LABEL_138;
    transform = (UILabel_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                               (System_Collections_Generic_Dictionary_object__object__o *)script,
                               (Il2CppObject *)StringLiteral_23694/*"sprites"*/,
                               &value,
                               (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
    v108 = System_Collections_Generic_List_object___ToArray(
             (System_Collections_Generic_List_object__o *)value,
             (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v108;
    p_sprites = &this->fields.sprites;
    sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.sprites, (int64_t)v108, v110, v111, v112, v113, v114, v115);
    if ( this->fields.sprites && (v116 = *(_QWORD *)&this->fields.sprites->max_length) != 0 )
    {
      if ( (int)v116 >= 1 )
      {
        v117 = (UnityEngine_Component_o *)this->fields.lnkSprite;
        v118 = 0LL;
        v205 = v78;
        while ( 1 )
        {
          if ( v118 )
          {
            transform = (UILabel_o *)this->fields.lnkSprite;
            if ( !transform )
              break;
            v120 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v119);
            transform = (UILabel_o *)UnityEngine_Object__Instantiate_object_(
                                       v120,
                                       (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v121 = (UnityEngine_GameObject_o *)transform;
            transform = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)this->fields.lnkSprite,
                                       0LL);
            if ( !transform )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)transform,
                                                  0LL);
            GameObjectExtensions__SetParent(v121, parent, 0LL);
            if ( !byte_4B109C6 )
            {
              sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v123, v124);
              byte_4B109C6 = 1;
            }
            GameObjectExtensions__SetLocalScale(v121, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            if ( !v121 )
              break;
            transform = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                       v121,
                                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            additionalSprites = (System_Collections_Generic_List_object__o *)this->fields.additionalSprites;
            if ( !additionalSprites )
              break;
            items = additionalSprites->fields._items;
            v133 = Method_System_Collections_Generic_List_LinkableSprite__Add__;
            ++additionalSprites->fields._version;
            if ( !items )
              break;
            size = additionalSprites->fields._size;
            v117 = (UnityEngine_Component_o *)transform;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                additionalSprites,
                (Il2CppObject *)transform,
                *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v133[4] + 192LL) + 112LL));
            }
            else
            {
              v135 = &items->obj.klass + size;
              additionalSprites->fields._size = size + 1;
              v135[4] = (Il2CppClass *)v117;
              sub_1BCA784((PartyOrganizationUtility_o *)(v135 + 4), (int64_t)v117, v125, v126, v127, v128, v129, v130);
            }
          }
          v136 = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( v118 >= v136->max_length )
            sub_1BCAA44(transform, keepPanelDepth);
          v137 = (System_Collections_Generic_Dictionary_string__object__o *)v136->m_Items[v118];
          if ( v137
            && (v138 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(v137->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v138) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v137->klass->_2.typeHierarchy[v138 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v139 = v137;
            else
              v139 = 0LL;
            if ( !v117 )
              break;
          }
          else
          {
            v139 = 0LL;
            if ( !v117 )
              break;
          }
          v140 = script;
          v141 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v117, 0LL);
          klass = (UISprite_o *)v117[2].klass;
          v143 = (UnityEngine_GameObject_o *)v141;
          StringFromScript = NotificationDialog__getStringFromScript(
                               v141,
                               v139,
                               (System_String_o *)StringLiteral_23693/*"spriteName"*/,
                               v144);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo, v145);
          transform = (UILabel_o *)AtlasManager__SetEventUI(klass, StringFromScript, 0LL);
          if ( !v143 )
            break;
          UnityEngine_GameObject__SetActive(v143, (unsigned __int8)transform & 1, 0LL);
          v147 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v117, 0LL);
          v150 = NotificationDialog_TypeInfo;
          v151 = (UnityEngine_GameObject_o *)v147;
          script = v140;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, v148);
            v150 = NotificationDialog_TypeInfo;
          }
          v152 = (float *)&v150->static_fields->BANNER_RETRY_MAX;
          v78 = v205;
          v153 = v152[17];
          v154 = v152[18];
          v155 = v152[19];
          v209 = NotificationDialog__getVectFromScript(v147, v139, (System_String_o *)StringLiteral_22448/*"offset"*/, v149);
          v209.fields.x = v153 + v209.fields.x;
          v209.fields.y = v154 + v209.fields.y;
          v209.fields.z = v155 + v209.fields.z;
          GameObjectExtensions__SetLocalPosition(v151, v209, 0LL);
          v210 = NotificationDialog__getVectFromScript(v156, v139, (System_String_o *)StringLiteral_23582/*"size"*/, v157);
          x = v210.fields.x;
          y = v210.fields.y;
          z = v210.fields.z;
          if ( !byte_4B109C1 )
          {
            sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v158, v159);
            byte_4B109C1 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          if ( x == static_fields->zeroVector.fields.x
            && y == static_fields->zeroVector.fields.y
            && z == static_fields->zeroVector.fields.z )
          {
            LinkableSprite__MakePixelPerfect((LinkableSprite_o *)v117, 0LL);
          }
          else
          {
            v166 = x == INFINITY ? 0x80000000 : (int)x;
            v167 = y == INFINITY ? 0x80000000 : (int)y;
            LinkableSprite__SetSize((LinkableSprite_o *)v117, v166, v167, 0LL);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v164,
                                                    v139,
                                                    (System_String_o *)StringLiteral_24591/*"urlOpenType"*/,
                                                    v165);
          v169 = (int)IntFromScript;
          v171 = NotificationDialog__getStringFromScript(
                   IntFromScript,
                   v139,
                   (System_String_o *)StringLiteral_24590/*"urlLink"*/,
                   v170);
          LinkableSprite__SetUp((LinkableSprite_o *)v117, v169, v171, 0LL);
          if ( !*p_sprites )
            break;
          if ( (__int64)++v118 >= (int)(*p_sprites)->max_length )
            goto LABEL_98;
        }
LABEL_138:
        sub_1BCAA3C(transform, keepPanelDepth);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    if ( !script )
      goto LABEL_138;
    transform = (UILabel_o *)System_Collections_Generic_Dictionary_object__object___TryGetValue(
                               (System_Collections_Generic_Dictionary_object__object__o *)script,
                               (Il2CppObject *)StringLiteral_17238/*"banners"*/,
                               &value,
                               (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !value )
        goto LABEL_138;
      v173 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)v173
        || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v173 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_138;
      }
      v174 = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)value,
               (const MethodInfo_35A37B4 *)Method_System_Collections_Generic_List_object__ToArray__);
      this->fields.banners = v174;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.banners,
        (int64_t)v174,
        v175,
        v176,
        v177,
        v178,
        v179,
        v180);
      banners = this->fields.banners;
      if ( banners )
      {
        if ( *(_QWORD *)&banners->max_length )
        {
          v182 = 0;
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
  v182 = 1;
LABEL_113:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, keepPanelDepth);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v185 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v184);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v185 )
      goto LABEL_138;
    UILabel__set_text(v185, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    v186 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v189 = NotificationDialog_TypeInfo;
    v190 = (UnityEngine_GameObject_o *)v186;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, v187);
      v189 = NotificationDialog_TypeInfo;
    }
    v191 = (float *)&v189->static_fields->BANNER_RETRY_MAX;
    v192 = v191[20];
    v193 = v191[21];
    v194 = v191[22];
    v211 = NotificationDialog__getVectFromScript(v186, script, (System_String_o *)StringLiteral_17824/*"buttonOffset"*/, v188);
    v211.fields.x = v192 + v211.fields.x;
    v211.fields.y = v193 + v211.fields.y;
    v211.fields.z = v194 + v211.fields.z;
    GameObjectExtensions__SetLocalPosition(v190, v211, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v184);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v78, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !v78 )
      goto LABEL_138;
    UIPanel__set_depth(v78, keepPanelDepth, 0LL);
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  if ( v182 )
  {
    v198 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v195, v196, v197);
    System_Action___ctor(v198, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v198, 0, 0LL);
  }
  else
  {
    transform = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v202 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v199, v200, v201);
    System_Action___ctor(v202, (Il2CppObject *)this, Method_NotificationDialog__Open_b__42_0__, 0LL);
    NotificationDialog__LoadBanners(this, v202, v203);
  }
}


System_Collections_IEnumerator_o *__fastcall NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v3; // x3
  __int64 v5; // x20
  int64_t v6; // x2
  int32_t v7; // w3
  System_String_o *v8; // x4
  BattleSetupInfo_o *v9; // x5
  FollowerInfo_o *v10; // x6
  PartyListViewItem_o *v11; // x7

  if ( (byte_4B19CE6 & 1) == 0 )
  {
    sub_1BCA7E0(&NotificationDialog__StartDownloadBanner_d__54_TypeInfo, method, v2);
    byte_4B19CE6 = 1;
  }
  v5 = sub_1BCAA2C(NotificationDialog__StartDownloadBanner_d__54_TypeInfo, method, v2, v3);
  System_Object___ctor((Il2CppObject *)v5, 0LL);
  *(_DWORD *)(v5 + 16) = 0;
  *(_QWORD *)(v5 + 32) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v5 + 32), (int64_t)this, v6, v7, v8, v9, v10, v11);
  return (System_Collections_IEnumerator_o *)v5;
}


void __fastcall NotificationDialog___Open_b__42_0(NotificationDialog_o *this, const MethodInfo *method)
{
  __int64 v2; // x2
  __int64 v4; // x1
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  UnityEngine_GameObject_o *baseWindow; // x0
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x3
  System_Action_o *v12; // x20

  if ( (byte_4B19CEA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, method, v2);
    sub_1BCA7E0(&Method_NotificationDialog_EndOpen__, v4, v5);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v6, v7);
    byte_4B19CEA = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1BCAA3C(baseWindow, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v12 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v9, v10, v11);
  System_Action___ctor(v12, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v12, 0, 0LL);
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

  if ( (byte_4B19CEB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__, isDecide, method);
    byte_4B19CEB = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1BCAA3C(0LL, v7);
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
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19CE3 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, script, key);
    this = (NotificationDialog_o *)sub_1BCA7E0(
                                     &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                     v6,
                                     v7);
    byte_4B19CE3 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1BCAA3C(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v9 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v8);
  return System_Convert__ToInt32(v9, 0LL);
}


System_String_o *__fastcall NotificationDialog__getStringFromScript(
        NotificationDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B19CE2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, script, key);
    sub_1BCA7E0(&string_TypeInfo, v6, v7);
    this = (NotificationDialog_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B19CE2 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1BCAA3C(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x1
  __int64 v13; // x2
  __int64 v14; // x1
  __int64 v15; // x2
  Il2CppObject *v16; // x19
  __int64 methodPtr_low; // x10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  float x; // s0
  float y; // s1
  float z; // s2
  __int64 v22; // x1
  Il2CppObject *Item; // x20
  double v24; // d8
  Il2CppObject *v25; // x0
  double v26; // d1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B19CE1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, script, key);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v10, v11);
    this = (NotificationDialog_o *)sub_1BCA7E0(&System_Collections_Generic_List_object__TypeInfo, v12, v13);
    byte_4B19CE1 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1BCAA3C(this, script);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3266A6C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v16 = value) != 0LL
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo, v22);
    v24 = System_Convert__ToDouble(Item, 0LL);
    v25 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v16,
            1,
            (const MethodInfo_35A198C *)Method_System_Collections_Generic_List_object__get_Item__);
    v26 = System_Convert__ToDouble(v25, 0LL);
    x = v24;
    y = v26;
    z = 0.0;
  }
  else
  {
    if ( !byte_4B109C1 )
    {
      sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v14, v15);
      byte_4B109C1 = 1;
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
  __int64 v2; // x2

  if ( (byte_4B19CE7 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15819/*"Window/OkBtn"*/, method, v2);
    byte_4B19CE7 = 1;
  }
  return (System_String_o *)StringLiteral_15819/*"Window/OkBtn"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall NotificationDialog_ClickDelegate___ctor(
        NotificationDialog_ClickDelegate_o *this,
        Il2CppObject *object,
        intptr_t method,
        const MethodInfo *a4)
{
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v8; // x8
  __int64 v10; // x21
  int v12; // w22
  struct System_Reflection_MethodInfo_o *v13; // x9
  __int64 v14; // x0

  v8 = *(_QWORD *)(*(_QWORD *)&method + 8LL);
  *(_QWORD *)&this->fields.extra_arg = *(_QWORD *)&method;
  v10 = *(_QWORD *)&method;
  *(_QWORD *)&this->fields.method_ptr = v8;
  *(_QWORD *)&this->fields.method = object;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.method,
    (int64_t)object,
    *(int64_t *)&method,
    (int32_t)a4,
    v4,
    v5,
    v6,
    v7);
  v12 = *(unsigned __int8 *)(v10 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1BCA8A0(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1BCAA58(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1BCA908(v14, 0LL);
    }
    goto LABEL_5;
  }
  if ( v12 != 1 )
  {
LABEL_5:
    v13 = *(struct System_Reflection_MethodInfo_o **)&this->fields.method;
    this->fields.m_target = *(Il2CppObject **)&this->fields.method_ptr;
    this->fields.original_method_info = v13;
    goto LABEL_6;
  }
  this->fields.m_target = (Il2CppObject *)sub_1A1167C;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A11634;
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
  if ( (byte_4B19CEC & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isOk, callback);
    byte_4B19CEC = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  int64_t v2; // x2
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  NotificationDialog__StartDownloadBanner_d__54_o *v8; // x20
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  __int64 v17; // x1
  __int64 v18; // x2
  __int64 v19; // x1
  __int64 v20; // x2
  __int64 v21; // x1
  __int64 v22; // x2
  __int64 v23; // x1
  __int64 v24; // x2
  __int64 v25; // x1
  __int64 v26; // x2
  __int64 v27; // x1
  __int64 v28; // x2
  __int64 v29; // x1
  __int64 v30; // x2
  __int64 v31; // x1
  __int64 v32; // x2
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x1
  __int64 v36; // x2
  __int64 v37; // x1
  __int64 v38; // x2
  __int64 v39; // x1
  __int64 v40; // x2
  __int64 v41; // x1
  __int64 v42; // x2
  __int64 v43; // x1
  __int64 v44; // x2
  __int64 v45; // x1
  __int64 v46; // x2
  __int64 v47; // x1
  __int64 v48; // x2
  int32_t _1__state; // w8
  struct NotificationDialog_o *_4__this; // x19
  struct System_Object_array *banners; // x8
  __int64 mLoadingIdx; // x9
  Il2CppObject *v53; // x8
  System_Collections_Generic_Dictionary_string__object__c *v54; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__object__o *v56; // x11
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  NotificationDialog__StartDownloadBanner_d__54_o **p_mBannerWWW; // x21
  System_String_o *error; // x0
  NotificationDialog__StartDownloadBanner_d__54_o *v60; // x23
  int32_t v61; // w24
  int32_t v62; // w25
  int32_t format; // w26
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x3
  UnityEngine_Texture2D_o *v67; // x22
  System_Byte_array *data; // x0
  System_String_o *v69; // x0
  bool IsNullOrEmpty; // w0
  int v71; // w20
  NotificationDialog_c *v72; // x0
  __int64 v73; // x1
  Il2CppObject *Instance; // x20
  System_String_o *v75; // x22
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x3
  ErrorDialog_ClickDelegate_o *v79; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v81; // x0
  int64_t v82; // x2
  int32_t v83; // w3
  System_String_o *v84; // x4
  BattleSetupInfo_o *v85; // x5
  FollowerInfo_o *v86; // x6
  PartyListViewItem_o *v87; // x7
  bool v88; // w21
  int64_t v89; // x1
  PartyOrganizationUtility_o *p_banner_5__2; // x21
  NotificationDialog_o *v91; // x0
  const MethodInfo *v92; // x3
  __int64 v93; // x1
  System_String_o *v94; // x21
  System_String_o *WebViewFullAddress; // x21
  __int64 v96; // x1
  __int64 v97; // x2
  __int64 v98; // x3
  UnityEngine_Networking_UnityWebRequest_o *v99; // x22
  int64_t v100; // x2
  int32_t v101; // w3
  System_String_o *v102; // x4
  BattleSetupInfo_o *v103; // x5
  FollowerInfo_o *v104; // x6
  PartyListViewItem_o *v105; // x7
  __int64 v106; // x1
  __int64 v107; // x2
  __int64 v108; // x3
  UnityEngine_Networking_DownloadHandlerTexture_o *v109; // x22
  int64_t v110; // x2
  int32_t v111; // w3
  System_String_o *v112; // x4
  BattleSetupInfo_o *v113; // x5
  FollowerInfo_o *v114; // x6
  PartyListViewItem_o *v115; // x7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v116; // x0
  PartyOrganizationUtility_o *p__2__current; // x20
  int64_t v118; // x2
  int32_t v119; // w3
  System_String_o *v120; // x4
  BattleSetupInfo_o *v121; // x5
  FollowerInfo_o *v122; // x6
  PartyListViewItem_o *v123; // x7
  NotificationDialog__StartDownloadBanner_d__54_o *lnkTexture; // x23
  __int64 v126; // x1
  Il2CppObject *gameObject; // x23
  NotificationDialog__StartDownloadBanner_d__54_o *v128; // x23
  UnityEngine_Component_o *parent; // x0
  __int64 v130; // x1
  __int64 v131; // x2
  int64_t v132; // x2
  int32_t v133; // w3
  System_String_o *v134; // x4
  BattleSetupInfo_o *v135; // x5
  FollowerInfo_o *v136; // x6
  PartyListViewItem_o *v137; // x7
  System_Collections_Generic_List_object__o *additionalTextures; // x8
  struct System_Object_array *items; // x9
  _QWORD *v140; // x10
  __int64 size; // x11
  Il2CppClass **v142; // x0
  NotificationDialog_o *v143; // x0
  __int64 v144; // x1
  const MethodInfo *v145; // x3
  UnityEngine_GameObject_o *v146; // x22
  NotificationDialog_c *v147; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v149; // s8
  float v150; // s9
  float v151; // s10
  NotificationDialog_o *v152; // x0
  const MethodInfo *v153; // x3
  __int64 v154; // x1
  __int64 v155; // x2
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v160; // x0
  const MethodInfo *v161; // x3
  int32_t v162; // w1
  int32_t v163; // w2
  NotificationDialog_o *IntFromScript; // x0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v166; // w20
  const MethodInfo *v167; // x3
  System_String_o *StringFromScript; // x0
  const MethodInfo *v169; // x1
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v171; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4B19CED & 1) == 0 )
  {
    sub_1BCA7E0(&ErrorDialog_ClickDelegate_TypeInfo, method, v2);
    sub_1BCA7E0(&System_Collections_Generic_Dictionary_string__object__TypeInfo, v9, v10);
    sub_1BCA7E0(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo, v11, v12);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___, v13, v14);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_LinkableTexture__Add__, v15, v16);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v17, v18);
    sub_1BCA7E0(&NetworkManager_TypeInfo, v19, v20);
    sub_1BCA7E0(&Method_NotificationDialog__StartDownloadBanner_b__54_0__, v21, v22);
    sub_1BCA7E0(&NotificationDialog_TypeInfo, v23, v24);
    sub_1BCA7E0(&Method_UnityEngine_Object_Instantiate_GameObject___, v25, v26);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v27, v28);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v29, v30);
    sub_1BCA7E0(&UnityEngine_Texture2D_TypeInfo, v31, v32);
    sub_1BCA7E0(&UnityEngine_Networking_UnityWebRequest_TypeInfo, v33, v34);
    sub_1BCA7E0(&StringLiteral_17231/*"bannerUrl"*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_23582/*"size"*/, v37, v38);
    sub_1BCA7E0(&StringLiteral_24591/*"urlOpenType"*/, v39, v40);
    sub_1BCA7E0(&StringLiteral_22448/*"offset"*/, v41, v42);
    sub_1BCA7E0(&StringLiteral_24590/*"urlLink"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v45, v46);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)sub_1BCA7E0(&StringLiteral_9366/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, v47, v48);
    byte_4B19CED = 1;
  }
  _1__state = v8->fields.__1__state;
  _4__this = v8->fields.__4__this;
  if ( _1__state == 1 )
  {
    v8->fields.__1__state = -1;
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
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)v8->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandler__get_data(
                                                                  (UnityEngine_Networking_DownloadHandler_o *)this,
                                                                  0LL);
      if ( !v8->fields._texDl_5__3 )
        goto LABEL_94;
      v60 = this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v8->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__54_o *, Il2CppMethodPointer))this->klass->vtable._4_System_Collections_Generic_IEnumerator_System_Object__get_Current.method)(
                                                                  this,
                                                                  this->klass->vtable._5_System_IDisposable_Dispose.methodPtr);
      if ( !v8->fields._texDl_5__3 )
        goto LABEL_94;
      v61 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v8->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)((__int64 (__fastcall *)(NotificationDialog__StartDownloadBanner_d__54_o *, Il2CppMethodPointer))this->klass->vtable._6_MoveNext.method)(
                                                                  this,
                                                                  this->klass->vtable._7_System_Collections_IEnumerator_get_Current.methodPtr);
      if ( !v8->fields._texDl_5__3 )
        goto LABEL_94;
      v62 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v8->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0LL);
      v67 = (UnityEngine_Texture2D_o *)sub_1BCAA2C(UnityEngine_Texture2D_TypeInfo, v64, v65, v66);
      UnityEngine_Texture2D___ctor_70042420(v67, v61, v62, format, 0, 0LL);
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)v8->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      UnityEngine_ImageConversion__LoadImage_70259252(v67, data, 0LL);
    }
    else
    {
LABEL_25:
      v67 = 0LL;
      v60 = 0LL;
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
    v69 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v69, 0LL);
    if ( !v60 || !IsNullOrEmpty || !v60->fields.__2__current )
      goto LABEL_35;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, method);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)v67,
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
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v126);
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Object__Instantiate_object_(
                                                                    gameObject,
                                                                    (const MethodInfo_2F9779C *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_94;
        v128 = this;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                    0LL);
        if ( !this )
          goto LABEL_94;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
        GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v128, parent, 0LL);
        if ( !byte_4B109C6 )
        {
          sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v130, v131);
          byte_4B109C6 = 1;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v128,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        if ( !v128 )
          goto LABEL_94;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v128,
                                                                    (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        additionalTextures = (System_Collections_Generic_List_object__o *)_4__this->fields.additionalTextures;
        if ( !additionalTextures )
          goto LABEL_94;
        items = additionalTextures->fields._items;
        v140 = Method_System_Collections_Generic_List_LinkableTexture__Add__;
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
            *(const MethodInfo_35A1C5C **)(*(_QWORD *)(v140[4] + 192LL) + 112LL));
        }
        else
        {
          v142 = &items->obj.klass + size;
          additionalTextures->fields._size = size + 1;
          v142[4] = (Il2CppClass *)lnkTexture;
          sub_1BCA784((PartyOrganizationUtility_o *)(v142 + 4), (int64_t)lnkTexture, v132, v133, v134, v135, v136, v137);
        }
      }
      if ( !lnkTexture )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)lnkTexture->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      (*(void (__fastcall **)(NotificationDialog__StartDownloadBanner_d__54_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
        this,
        v67,
        this->klass[1].vtable._0_Equals.methodPtr);
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)lnkTexture,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v143 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
      v146 = (UnityEngine_GameObject_o *)v143;
      v147 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, v144);
        v147 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v147->static_fields->BANNER_RETRY_MAX;
      v149 = p_BANNER_RETRY_MAX[17];
      v150 = p_BANNER_RETRY_MAX[18];
      v151 = p_BANNER_RETRY_MAX[19];
      VectFromScript = NotificationDialog__getVectFromScript(
                         v143,
                         v8->fields._banner_5__2,
                         (System_String_o *)StringLiteral_22448/*"offset"*/,
                         v145);
      VectFromScript.fields.x = v149 + VectFromScript.fields.x;
      VectFromScript.fields.y = v150 + VectFromScript.fields.y;
      VectFromScript.fields.z = v151 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v146, VectFromScript, 0LL);
      v171 = NotificationDialog__getVectFromScript(
               v152,
               v8->fields._banner_5__2,
               (System_String_o *)StringLiteral_23582/*"size"*/,
               v153);
      x = v171.fields.x;
      y = v171.fields.y;
      z = v171.fields.z;
      if ( !byte_4B109C1 )
      {
        sub_1BCA7E0(&UnityEngine_Vector3_TypeInfo, v154, v155);
        byte_4B109C1 = 1;
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
          v162 = 0x80000000;
        else
          v162 = (int)x;
        if ( y == INFINITY )
          v163 = 0x80000000;
        else
          v163 = (int)y;
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, v162, v163, 0LL);
      }
      IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                v160,
                                                v8->fields._banner_5__2,
                                                (System_String_o *)StringLiteral_24591/*"urlOpenType"*/,
                                                v161);
      banner_5__2 = v8->fields._banner_5__2;
      v166 = (int)IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           IntFromScript,
                           banner_5__2,
                           (System_String_o *)StringLiteral_24590/*"urlLink"*/,
                           v167);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v166, StringFromScript, 0LL);
      NotificationDialog__LoadNext(_4__this, v169);
    }
    else
    {
LABEL_35:
      v71 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v71;
      v72 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo, method);
        v72 = NotificationDialog_TypeInfo;
      }
      if ( v71 <= v72->static_fields->BANNER_RETRY_MAX )
      {
        started = NotificationDialog__StartDownloadBanner(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_70139516((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v73);
        v75 = LocalizationManager__Get((System_String_o *)StringLiteral_9366/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v79 = (ErrorDialog_ClickDelegate_o *)sub_1BCAA2C(ErrorDialog_ClickDelegate_TypeInfo, v76, v77, v78);
        ErrorDialog_ClickDelegate___ctor(
          v79,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__54_0__,
          0LL);
        if ( !Instance )
          goto LABEL_94;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v75, v79, 0, 0LL);
      }
    }
    v81 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v81 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v81, 0LL);
      *p_mBannerWWW = 0LL;
      sub_1BCA784((PartyOrganizationUtility_o *)&_4__this->fields.mBannerWWW, 0LL, v82, v83, v84, v85, v86, v87);
    }
  }
  else if ( !_1__state )
  {
    v8->fields.__1__state = -1;
    if ( _4__this )
    {
      banners = _4__this->fields.banners;
      if ( banners )
      {
        mLoadingIdx = _4__this->fields.mLoadingIdx;
        if ( (unsigned int)mLoadingIdx >= banners->max_length )
          sub_1BCAA44(this, method);
        v53 = banners->m_Items[mLoadingIdx];
        if ( v53 )
        {
          v54 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v53->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
            v56 = (System_Collections_Generic_Dictionary_string__object__c *)v53->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
                ? (struct System_Collections_Generic_Dictionary_string__object__o *)v53
                : 0LL;
          else
            v56 = 0LL;
          v8->fields._banner_5__2 = v56;
          p_banner_5__2 = (PartyOrganizationUtility_o *)&v8->fields._banner_5__2;
          if ( LOBYTE(v53->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
            v89 = (System_Collections_Generic_Dictionary_string__object__c *)v53->klass->_2.typeHierarchy[methodPtr_low - 1] == v54
                ? (int64_t)v53
                : 0LL;
          else
            v89 = 0LL;
        }
        else
        {
          v89 = 0LL;
          v8->fields._banner_5__2 = 0LL;
          p_banner_5__2 = (PartyOrganizationUtility_o *)&v8->fields._banner_5__2;
        }
        sub_1BCA784(p_banner_5__2, v89, v2, v3, v4, v5, v6, v7);
        v94 = NotificationDialog__getStringFromScript(
                v91,
                (System_Collections_Generic_Dictionary_string__object__o *)p_banner_5__2->klass,
                (System_String_o *)StringLiteral_17231/*"bannerUrl"*/,
                v92);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo, v93);
        WebViewFullAddress = NetworkManager__getWebViewFullAddress(v94, 0LL);
        v99 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1BCAA2C(
                                                            UnityEngine_Networking_UnityWebRequest_TypeInfo,
                                                            v96,
                                                            v97,
                                                            v98);
        UnityEngine_Networking_UnityWebRequest___ctor(v99, WebViewFullAddress, 0LL);
        _4__this->fields.mBannerWWW = v99;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&_4__this->fields.mBannerWWW,
          (int64_t)v99,
          v100,
          v101,
          v102,
          v103,
          v104,
          v105);
        v109 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1BCAA2C(
                                                                    UnityEngine_Networking_DownloadHandlerTexture_TypeInfo,
                                                                    v106,
                                                                    v107,
                                                                    v108);
        UnityEngine_Networking_DownloadHandlerTexture___ctor(v109, 0, 0LL);
        v8->fields._texDl_5__3 = v109;
        sub_1BCA784(
          (PartyOrganizationUtility_o *)&v8->fields._texDl_5__3,
          (int64_t)v109,
          v110,
          v111,
          v112,
          v113,
          v114,
          v115);
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
        if ( this )
        {
          UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
            (UnityEngine_Networking_UnityWebRequest_o *)this,
            (UnityEngine_Networking_DownloadHandler_o *)v8->fields._texDl_5__3,
            0LL);
          this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
          v88 = 1;
          _4__this->fields.refuseInit = 1;
          if ( this )
          {
            v116 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                     (UnityEngine_Networking_UnityWebRequest_o *)this,
                     0LL);
            v8->fields.__2__current = (Il2CppObject *)v116;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1BCA784(p__2__current, (int64_t)v116, v118, v119, v120, v121, v122, v123);
            *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
            return v88;
          }
        }
      }
    }
LABEL_94:
    sub_1BCAA3C(this, method);
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
  __int64 v5; // x3
  System_NotSupportedException_o *v6; // x19
  __int64 v7; // x1
  __int64 v8; // x0

  v2 = sub_1BCA7F4(&System_NotSupportedException_TypeInfo, method);
  v6 = (System_NotSupportedException_o *)sub_1BCAA2C(v2, v3, v4, v5);
  System_NotSupportedException___ctor(v6, 0LL);
  v8 = sub_1BCA7F4(&Method_NotificationDialog__StartDownloadBanner_d__54_System_Collections_IEnumerator_Reset__, v7);
  sub_1BCA908(v6, v8);
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