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

  if ( (byte_4BE017D & 1) == 0 )
  {
    sub_1C21E38(&NotificationDialog_TypeInfo);
    byte_4BE017D = 1;
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
  *(_OWORD *)&v6->MESSAGE_BASE_SIZE_X = xmmword_BFDE70;
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
  if ( (byte_4BE017C & 1) == 0 )
  {
    sub_1C21E38(&BaseDialog_TypeInfo);
    byte_4BE017C = 1;
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
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  __int64 v28; // x1
  UnityEngine_GameObject_o *baseWindow; // x0
  struct UILabel_o *messageLabel; // x24
  int monitor_high; // w27
  float v32; // s12
  float v33; // s0
  UnityEngine_Object_o *v34; // x27
  NotificationDialog_c *v35; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  System_String_o *Empty; // x25
  float v38; // s10
  UnityEngine_GameObject_o *gameObject; // x0
  UnityEngine_GameObject_o *v40; // [xsp+0h] [xbp-B0h] BYREF
  Il2CppObject *v41; // [xsp+8h] [xbp-A8h] BYREF
  Il2CppObject *v42; // [xsp+10h] [xbp-A0h] BYREF
  Il2CppObject *component; // [xsp+18h] [xbp-98h] BYREF
  Il2CppObject *v44; // [xsp+58h] [xbp-58h] BYREF
  UnityEngine_Vector3_o v45; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4BE0173 & 1) == 0 )
  {
    sub_1C21E38(&Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
    sub_1C21E38(&Method_UnityEngine_Component_TryGetComponent_UISprite___);
    sub_1C21E38(&Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___);
    sub_1C21E38(&System_Math_TypeInfo);
    sub_1C21E38(&NotificationDialog_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    byte_4BE0173 = 1;
  }
  v44 = 0LL;
  v42 = 0LL;
  component = 0LL;
  v40 = 0LL;
  v41 = 0LL;
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
              (const MethodInfo_30017C4 *)Method_UnityEngine_GameObject_TryGetComponent_UISkinSprite___) )
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
                                                 &v42,
                                                 (const MethodInfo_2FA776C *)Method_UnityEngine_Component_TryGetComponent_UISprite___);
      if ( ((unsigned __int8)baseWindow & 1) != 0 )
      {
        if ( !component || !v42 )
          goto LABEL_54;
        monitor_high = HIDWORD(component[10].monitor);
        v32 = (float)((float)SHIDWORD(v42[10].monitor) * 0.5) + buttonPosY;
        if ( !System_Math_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Math_TypeInfo);
        v33 = fabsf((float)((float)monitor_high * 0.5) + -30.0) + fabsf(v32);
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
        if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
          v35 = NotificationDialog_TypeInfo;
        }
        static_fields = v35->static_fields;
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
                                                     &v41,
                                                     (const MethodInfo_2FA776C *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
          if ( ((unsigned __int8)baseWindow & 1) == 0 )
            goto LABEL_38;
          baseWindow = (UnityEngine_GameObject_o *)v41;
          if ( !v41 )
            goto LABEL_54;
          goto LABEL_37;
        }
      }
LABEL_54:
      sub_1C22094(baseWindow, v28);
    }
  }
  messageLabel = this->fields.messageLabel;
  v34 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  baseWindow = (UnityEngine_GameObject_o *)UnityEngine_Object__op_Inequality(v34, 0LL, 0LL);
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
                                                   (Il2CppObject **)&v40,
                                                   (const MethodInfo_2FA776C *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___);
        if ( ((unsigned __int8)baseWindow & 1) == 0 )
          goto LABEL_38;
        baseWindow = v40;
        if ( !v40 )
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
    baseWindow = (UnityEngine_GameObject_o *)System_String__Trim_63144836(message, 0xAu, 0LL);
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
         &v44,
         (const MethodInfo_2FA776C *)Method_UnityEngine_Component_TryGetComponent_BoxCollider___) )
  {
    baseWindow = (UnityEngine_GameObject_o *)v44;
    if ( !v44 )
      goto LABEL_54;
    UnityEngine_Collider__set_enabled((UnityEngine_Collider_o *)v44, 1, 0LL);
  }
  if ( adjustText )
    WrapControlText__textAdjust(messageLabel, Empty, messageLabel->fields.mFontSize, 0, 0LL);
  else
    UILabel__set_text(messageLabel, Empty, 0LL);
  if ( messagePosYForcedAdd == 0.0 )
    v38 = y;
  else
    v38 = y + messagePosYForcedAdd;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
  v45.fields.x = x;
  v45.fields.y = v38;
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
  UnityEngine_Object_o *noTitleMessageLabel; // x24
  __int64 v18; // x1
  UILabel_o *messageLabel; // x0
  struct UILabel_o *v20; // x24
  struct UIWidget_OnDimensionsChanged_o *onChange; // x10
  System_String_o *Empty; // x1
  UnityEngine_Object_o *v23; // x25
  System_String_o *v24; // x23
  UnityEngine_Object_o *v25; // x21
  NotificationDialog_o *gameObject; // x21
  const MethodInfo *v27; // x3
  UnityEngine_Object_o *v28; // x21
  NotificationDialog_o *v29; // x20
  const MethodInfo *v30; // x3
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v32; // 0:s0.4,4:s1.4,8:s2.4

  z = messagePos.fields.z;
  y = messagePos.fields.y;
  x = messagePos.fields.x;
  if ( (byte_4BE0174 & 1) == 0 )
  {
    sub_1C21E38(&NotificationDialog_TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&string_TypeInfo);
    sub_1C21E38(&StringLiteral_21792/*"messageOffset"*/);
    byte_4BE0174 = 1;
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
        goto LABEL_34;
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
      goto LABEL_34;
    Empty = string_TypeInfo->static_fields->Empty;
LABEL_16:
    UILabel__set_text(messageLabel, Empty, 0LL);
  }
  if ( message )
    v24 = System_String__Trim_63144836(message, 0xAu, 0LL);
  else
    v24 = string_TypeInfo->static_fields->Empty;
  messageLabel = (UILabel_o *)NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
  if ( !v20 )
    goto LABEL_34;
  UIWidget__SetDimensions(
    (UIWidget_o *)v20,
    NotificationDialog_TypeInfo->static_fields->MESSAGE_BASE_SIZE_X,
    messageSizeY,
    0LL);
  UILabel__set_maxLineCount(v20, maxLine, 0LL);
  UILabel__set_fontSize(v20, this->fields.MESSAGE_FONT_SIZE, 0LL);
  WrapControlText__textAdjust(v20, v24, v20->fields.mFontSize, 0, 0LL);
  v25 = (UnityEngine_Object_o *)this->fields.noTitleMessageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v25, 0LL, 0LL) )
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
                       (System_String_o *)StringLiteral_21792/*"messageOffset"*/,
                       v27);
    VectFromScript.fields.x = x + VectFromScript.fields.x;
    VectFromScript.fields.y = y + VectFromScript.fields.y;
    VectFromScript.fields.z = z + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)gameObject, VectFromScript, 0LL);
  }
  v28 = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(v28, 0LL, 0LL) )
  {
    messageLabel = this->fields.messageLabel;
    if ( messageLabel )
    {
      v29 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)messageLabel, 0LL);
      v32 = NotificationDialog__getVectFromScript(v29, script, (System_String_o *)StringLiteral_21792/*"messageOffset"*/, v30);
      v32.fields.x = x + v32.fields.x;
      v32.fields.z = z + v32.fields.z;
      v32.fields.y = y + v32.fields.y;
      GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v29, v32, 0LL);
      return;
    }
LABEL_34:
    sub_1C22094(messageLabel, v18);
  }
}


void __fastcall NotificationDialog__Close(NotificationDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  NotificationDialog__Close_46577676(this, 0LL, v2);
}


void __fastcall NotificationDialog__Close_46577676(
        NotificationDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  System_Action_o *v10; // x20

  if ( (byte_4BE0178 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_NotificationDialog_EndClose__);
    byte_4BE0178 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C21DDC(
    (PartyOrganizationUtility_o *)&this->fields.closeEndFunc,
    (int64_t)callback,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  this->fields.isButtonEnable = 0;
  v10 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v10, (Il2CppObject *)this, Method_NotificationDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v10, 0LL);
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
    sub_1C21DDC(p_closeEndFunc, 0LL, v3, v4, v5, v6, v7, v8);
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
  void *titleLabel; // x0
  UnityEngine_Object_o *v4; // x20
  UnityEngine_Object_o *messageLabel; // x20
  UnityEngine_Object_o *noTitleMessageLabel; // x20
  UnityEngine_Object_o *okBtnLabel; // x20
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  int64_t v9; // x2
  int32_t v10; // w3
  System_String_o *v11; // x4
  BattleSetupInfo_o *v12; // x5
  FollowerInfo_o *v13; // x6
  PartyListViewItem_o *v14; // x7
  UnityEngine_Object_o *lnkTexture; // x20
  struct LinkableTexture_o *v16; // x8
  UnityEngine_Object_o *v17; // x20
  struct LinkableTexture_o *v18; // x8
  struct System_Collections_Generic_List_LinkableSprite__o **p_additionalSprites; // x20
  int32_t v20; // w21
  int32_t v21; // w2
  UnityEngine_Object_o *gameObject; // x22
  int v23; // w8
  System_Collections_Generic_List_object__o *v24; // x21
  int64_t v25; // x2
  int32_t v26; // w3
  System_String_o *v27; // x4
  BattleSetupInfo_o *v28; // x5
  FollowerInfo_o *v29; // x6
  PartyListViewItem_o *v30; // x7
  struct System_Collections_Generic_List_LinkableTexture__o **p_additionalTextures; // x20
  int32_t v32; // w21
  int32_t v33; // w2
  UnityEngine_Object_o *v34; // x22
  UnityEngine_Object_o *v35; // x0
  int v36; // w8
  System_Collections_Generic_List_object__o *v37; // x21
  int64_t v38; // x2
  int32_t v39; // w3
  System_String_o *v40; // x4
  BattleSetupInfo_o *v41; // x5
  FollowerInfo_o *v42; // x6
  PartyListViewItem_o *v43; // x7

  if ( (byte_4BE016F & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableTexture__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableSprite__Clear__);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableSprite___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableTexture___ctor__);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableTexture__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableSprite__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
    sub_1C21E38(&System_Collections_Generic_List_LinkableSprite__TypeInfo);
    sub_1C21E38(&System_Collections_Generic_List_LinkableTexture__TypeInfo);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE016F = 1;
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
      sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.mBannerWWW, 0LL, v9, v10, v11, v12, v13, v14);
    }
    lnkTexture = (UnityEngine_Object_o *)this->fields.lnkTexture;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    titleLabel = (void *)UnityEngine_Object__op_Inequality(lnkTexture, 0LL, 0LL);
    if ( ((unsigned __int8)titleLabel & 1) != 0 )
    {
      v16 = this->fields.lnkTexture;
      if ( !v16 )
        goto LABEL_65;
      titleLabel = v16->fields.mUiTexture;
      if ( !titleLabel )
        goto LABEL_65;
      v17 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                      titleLabel,
                                      *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      UnityEngine_Object__Destroy_70869612(v17, 0LL);
      v18 = this->fields.lnkTexture;
      if ( !v18 )
        goto LABEL_65;
      titleLabel = v18->fields.mUiTexture;
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
      v20 = 0;
      while ( 1 )
      {
        v21 = *((_DWORD *)titleLabel + 6);
        if ( v20 >= v21 )
          break;
        titleLabel = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)titleLabel,
                       v20,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_LinkableSprite__get_Item__);
        if ( titleLabel )
        {
          gameObject = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                 (UnityEngine_Component_o *)titleLabel,
                                                 0LL);
          if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
          UnityEngine_Object__Destroy_70869612(gameObject, 0LL);
          titleLabel = *p_additionalSprites;
          ++v20;
          if ( *p_additionalSprites )
            continue;
        }
        goto LABEL_65;
      }
      v23 = *((_DWORD *)titleLabel + 7) + 1;
      *((_DWORD *)titleLabel + 6) = 0;
      *((_DWORD *)titleLabel + 7) = v23;
      if ( v21 >= 1 )
        System_Array__Clear(*((System_Array_o **)titleLabel + 2), 0, v21, 0LL);
    }
    else
    {
      v24 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_LinkableSprite__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v24,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_LinkableSprite___ctor__);
      *p_additionalSprites = (struct System_Collections_Generic_List_LinkableSprite__o *)v24;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.additionalSprites,
        (int64_t)v24,
        v25,
        v26,
        v27,
        v28,
        v29,
        v30);
    }
    p_additionalTextures = &this->fields.additionalTextures;
    titleLabel = this->fields.additionalTextures;
    if ( titleLabel )
    {
      v32 = 0;
      while ( 1 )
      {
        v33 = *((_DWORD *)titleLabel + 6);
        if ( v32 >= v33 )
          break;
        titleLabel = System_Collections_Generic_List_object___get_Item(
                       (System_Collections_Generic_List_object__o *)titleLabel,
                       v32,
                       (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
        if ( titleLabel )
        {
          titleLabel = (void *)*((_QWORD *)titleLabel + 6);
          if ( titleLabel )
          {
            v34 = (UnityEngine_Object_o *)(*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)titleLabel + 728LL))(
                                            titleLabel,
                                            *(_QWORD *)(*(_QWORD *)titleLabel + 736LL));
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            UnityEngine_Object__Destroy_70869612(v34, 0LL);
            titleLabel = *p_additionalTextures;
            if ( *p_additionalTextures )
            {
              titleLabel = System_Collections_Generic_List_object___get_Item(
                             (System_Collections_Generic_List_object__o *)titleLabel,
                             v32,
                             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_LinkableTexture__get_Item__);
              if ( titleLabel )
              {
                v35 = (UnityEngine_Object_o *)UnityEngine_Component__get_gameObject(
                                                (UnityEngine_Component_o *)titleLabel,
                                                0LL);
                UnityEngine_Object__Destroy_70869612(v35, 0LL);
                titleLabel = *p_additionalTextures;
                ++v32;
                if ( *p_additionalTextures )
                  continue;
              }
            }
          }
        }
        goto LABEL_65;
      }
      v36 = *((_DWORD *)titleLabel + 7) + 1;
      *((_DWORD *)titleLabel + 6) = 0;
      *((_DWORD *)titleLabel + 7) = v36;
      if ( v33 >= 1 )
        System_Array__Clear(*((System_Array_o **)titleLabel + 2), 0, v33, 0LL);
    }
    else
    {
      v37 = (System_Collections_Generic_List_object__o *)sub_1C22084(System_Collections_Generic_List_LinkableTexture__TypeInfo);
      System_Collections_Generic_List_object____ctor(
        v37,
        (const MethodInfo_364E880 *)Method_System_Collections_Generic_List_LinkableTexture___ctor__);
      *p_additionalTextures = (struct System_Collections_Generic_List_LinkableTexture__o *)v37;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.additionalTextures,
        (int64_t)v37,
        v38,
        v39,
        v40,
        v41,
        v42,
        v43);
    }
    titleLabel = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( titleLabel )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)titleLabel, 0, 0LL);
      BaseDialog__Init((BaseDialog_o *)this, 0LL);
      return;
    }
LABEL_65:
    sub_1C22094(titleLabel, method);
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
  sub_1C21DDC(
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
  UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
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
    sub_1C22094(this, method);
  if ( v3 >= (signed int)banners->max_length )
  {
    ActionExtensions__Call(this->fields.mAfterLoad, 0LL);
  }
  else
  {
    started = NotificationDialog__StartDownloadBanner(this, method);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
}


void __fastcall NotificationDialog__OnClickOk(NotificationDialog_o *this, const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct NotificationDialog_ClickDelegate_o *clickFunc; // x8

  if ( (byte_4BE0179 & 1) == 0 )
  {
    sub_1C21E38(&Method_NotificationDialog_OnClickOk__);
    byte_4BE0179 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_NotificationDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_NotificationDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C21E50(Method_NotificationDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C21E1C(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0, 0LL);
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
  if ( (byte_4BE0170 & 1) == 0 )
  {
    v39 = titleSize;
    sub_1C21E38(&NotificationDialog_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_float__get_HasValue__);
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
    byte_4BE0170 = 1;
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
  UIPanel_o *TargetPanel; // x0
  int64_t v32; // x2
  int32_t v33; // w3
  System_String_o *v34; // x4
  BattleSetupInfo_o *v35; // x5
  FollowerInfo_o *v36; // x6
  PartyListViewItem_o *v37; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v39; // x21
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x29
  System_String_o *v43; // x1
  NotificationDialog_c *v44; // x0
  struct NotificationDialog_StaticFields *static_fields; // x8
  float x; // s12
  float z; // s11
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  NotificationDialog_c *v50; // x0
  struct NotificationDialog_StaticFields *v51; // x8
  float v52; // s11
  float v53; // s12
  unsigned __int64 v54; // x28
  unsigned __int64 messageSizeX; // x19
  UnityEngine_Object_o *lineSprite; // x29
  NotificationDialog_c *v57; // x0
  struct NotificationDialog_StaticFields *v58; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  UnityEngine_Object_o *lnkSprite; // x22
  UnityEngine_Object_o *lnkTexture; // x22
  UnityEngine_Object_o *okBtnLabel; // x22
  NotificationDialog_c *v64; // x0
  struct NotificationDialog_StaticFields *v65; // x8
  UILabel_o *v66; // x22
  float v67; // s10
  float v68; // s9
  float v69; // s13
  float v70; // s11
  float y; // s12
  UnityEngine_GameObject_o *v72; // x0
  UnityEngine_GameObject_o *v73; // x0
  UnityEngine_GameObject_o *v74; // x22
  Il2CppObject *Component_object; // x23
  Il2CppObject *v76; // x22
  unsigned __int64 v77; // x19
  unsigned __int64 v78; // x25
  System_Action_o *v79; // x19
  const MethodInfo *v80; // [xsp+10h] [xbp-E0h]
  float v; // [xsp+5Ch] [xbp-94h]
  UnityEngine_Vector3_o v85; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v86; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v87; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v88; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BE0171 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_NotificationDialog_EndOpen__);
    sub_1C21E38(&NotificationDialog_TypeInfo);
    sub_1C21E38(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C21E38(&Method_System_Nullable_float__get_HasValue__);
    sub_1C21E38(&Method_System_Nullable_int__get_HasValue__);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE0171 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v39 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSeKind;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v39 )
        goto LABEL_112;
      this->fields.keepPanelDepth = v39->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v32, v33, v34, v35, v36, v37);
  titleLabel = (UnityEngine_Object_o *)this->fields.titleLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v43 = title;
    else
      v43 = (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v43, 0LL);
    v44 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v44 = NotificationDialog_TypeInfo;
    }
    static_fields = v44->static_fields;
    x = static_fields->TITLE_BASE_POS.fields.x;
    z = static_fields->TITLE_BASE_POS.fields.z;
    if ( titlePosY.fields.hasValue )
    {
      value = titlePosY.fields.value;
    }
    else
    {
      if ( !v44->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v44);
        static_fields = NotificationDialog_TypeInfo->static_fields;
      }
      value = static_fields->TITLE_BASE_POS.fields.y;
    }
    v = value;
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_112;
    gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v85.fields.y = v;
    v85.fields.x = x;
    v85.fields.z = z;
    GameObjectExtensions__SetLocalPosition(gameObject, v85, 0LL);
  }
  v50 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v50 = NotificationDialog_TypeInfo;
  }
  v51 = v50->static_fields;
  v52 = v51->MESSAGE_BASE_POS.fields.x;
  v53 = v51->MESSAGE_BASE_POS.fields.z;
  if ( v51->MESSAGE_BASE_POS.fields.y == messagePosY )
    messagePosY = v51->MESSAGE_BASE_POS.fields.y;
  if ( messageWidgetSizeY.fields.hasValue )
  {
    v54 = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeY);
  }
  else
  {
    if ( !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      v50 = NotificationDialog_TypeInfo;
      v51 = NotificationDialog_TypeInfo->static_fields;
    }
    LODWORD(v54) = v51->MESSAGE_BASE_SIZE_Y;
  }
  if ( messageWidgetSizeX.fields.hasValue )
  {
    messageSizeX = HIDWORD(*(unsigned __int64 *)&messageWidgetSizeX);
  }
  else
  {
    if ( !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      v50 = NotificationDialog_TypeInfo;
    }
    LODWORD(messageSizeX) = v50->static_fields->MESSAGE_BASE_SIZE_X;
  }
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
      v57 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v57 = NotificationDialog_TypeInfo;
      }
      v58 = v57->static_fields;
      v52 = v58->MESSAGE_LINE_POS.fields.x;
      messagePosY = v58->MESSAGE_LINE_POS.fields.y;
      v53 = v58->MESSAGE_LINE_POS.fields.z;
      LODWORD(v54) = v58->MESSAGE_LINE_SIZE_Y;
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v86.fields.x = v52;
    v86.fields.y = messagePosY;
    v86.fields.z = v53;
    NotificationDialog__AdjustMessageLabel(
      this,
      IsNullOrEmpty,
      message,
      spacingY,
      v54,
      maxLine,
      messageFontSize,
      adjustText,
      v86,
      buttonPosY,
      messageSizeX,
      messagePosYForcedAdd,
      isAdjustTextPos,
      v80);
  }
  lnkSprite = (UnityEngine_Object_o *)this->fields.lnkSprite;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
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
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v64 = NotificationDialog_TypeInfo;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v64 = NotificationDialog_TypeInfo;
    }
    v65 = v64->static_fields;
    v66 = this->fields.okBtnLabel;
    v67 = v65->BUTTON_BASE_POS.fields.x;
    v68 = v65->BUTTON_BASE_POS.fields.z;
    v69 = v65->BUTTON_TEXT_POS.fields.x;
    y = v65->BUTTON_TEXT_POS.fields.y;
    v70 = v65->BUTTON_TEXT_POS.fields.z;
    if ( v65->BUTTON_BASE_POS.fields.y == buttonPosY )
      buttonPosY = v65->BUTTON_BASE_POS.fields.y;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v66 )
      goto LABEL_112;
    UILabel__set_text(v66, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_112;
    v72 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v87.fields.x = v69;
    v87.fields.y = y;
    v87.fields.z = v70;
    GameObjectExtensions__SetLocalPosition(v72, v87, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_112;
    v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v88.fields.x = v67;
    v88.fields.y = buttonPosY;
    v88.fields.z = v68;
    GameObjectExtensions__SetLocalPosition(v73, v88, 0LL);
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
    v74 = (UnityEngine_GameObject_o *)transform;
    Component_object = UnityEngine_GameObject__GetComponent_object_(
                         (UnityEngine_GameObject_o *)transform,
                         (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    v76 = UnityEngine_GameObject__GetComponent_object_(
            v74,
            (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v76, 0LL, 0LL);
      if ( ((unsigned __int8)transform & 1) != 0 )
      {
        if ( buttonWidgetSizeX.fields.hasValue )
        {
          v77 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeX);
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v77) = transform->fields.onChange[1].monitor;
        }
        if ( buttonWidgetSizeY.fields.hasValue )
        {
          v78 = HIDWORD(*(unsigned __int64 *)&buttonWidgetSizeY);
          if ( !Component_object )
            goto LABEL_112;
        }
        else
        {
          transform = (UILabel_o *)NotificationDialog_TypeInfo;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            transform = (UILabel_o *)NotificationDialog_TypeInfo;
          }
          LODWORD(v78) = HIDWORD(transform->fields.onChange[1].monitor);
          if ( !Component_object )
            goto LABEL_112;
        }
        UIWidget__set_width((UIWidget_o *)Component_object, v77, 0LL);
        UIWidget__set_height((UIWidget_o *)Component_object, v78, 0LL);
        if ( !v76 )
          goto LABEL_112;
        size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v76, 0LL);
        size.fields.x = (float)(int)v77;
        size.fields.y = (float)(int)v78;
        UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v76, size, 0LL);
      }
    }
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v39, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( v39 )
    {
      UIPanel__set_depth(v39, keepPanelDepth, 0LL);
      goto LABEL_111;
    }
LABEL_112:
    sub_1C22094(transform, keepPanelDepth);
  }
LABEL_111:
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v79 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
  System_Action___ctor(v79, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v79, 0, 0LL);
}


void __fastcall NotificationDialog__Open_46571920(
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


void __fastcall NotificationDialog__Open_46573080(
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
  int64_t v20; // x2
  int32_t v21; // w3
  System_String_o *v22; // x4
  BattleSetupInfo_o *v23; // x5
  FollowerInfo_o *v24; // x6
  PartyListViewItem_o *v25; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v27; // x22
  UILabel_o *transform; // x0
  __int64 keepPanelDepth; // x1
  UnityEngine_Object_o *titleLabel; // x27
  System_String_o *v31; // x1
  NotificationDialog_o *gameObject; // x0
  const MethodInfo *v33; // x3
  NotificationDialog_c *v34; // x8
  UnityEngine_GameObject_o *v35; // x26
  float *p_BANNER_RETRY_MAX; // x8
  float v37; // s8
  float v38; // s9
  float v39; // s10
  NotificationDialog_c *v40; // x0
  float *v41; // x8
  UnityEngine_Object_o *lineSprite; // x27
  float v43; // s8
  float v44; // s9
  float v45; // s10
  int32_t v46; // w26
  NotificationDialog_c *v47; // x0
  float *v48; // x8
  UnityEngine_Object_o *messageLabel; // x27
  bool IsNullOrEmpty; // w0
  const MethodInfo *v51; // x6
  UnityEngine_Object_o *lnkSprite; // x23
  __int64 methodPtr_low; // x11
  struct System_Object_array *v54; // x0
  struct System_Object_array **p_sprites; // x23
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  __int64 v62; // x8
  UnityEngine_Component_o *v63; // x25
  unsigned __int64 v64; // x21
  Il2CppObject *v65; // x25
  UnityEngine_GameObject_o *v66; // x25
  UnityEngine_Component_o *parent; // x0
  int64_t v68; // x2
  int32_t v69; // w3
  System_String_o *v70; // x4
  BattleSetupInfo_o *v71; // x5
  FollowerInfo_o *v72; // x6
  PartyListViewItem_o *v73; // x7
  System_Collections_Generic_List_object__o *additionalSprites; // x8
  struct System_Object_array *items; // x9
  _QWORD *v76; // x10
  __int64 size; // x11
  Il2CppClass **v78; // x0
  struct System_Object_array *v79; // x8
  System_Collections_Generic_Dictionary_string__object__o *v80; // x8
  __int64 v81; // x11
  System_Collections_Generic_Dictionary_string__object__o *v82; // x26
  System_Collections_Generic_Dictionary_string__object__o *v83; // x22
  NotificationDialog_o *v84; // x0
  UISprite_o *klass; // x20
  UnityEngine_GameObject_o *v86; // x27
  const MethodInfo *v87; // x3
  System_String_o *StringFromScript; // x29
  NotificationDialog_o *v89; // x0
  const MethodInfo *v90; // x3
  NotificationDialog_c *v91; // x8
  UnityEngine_GameObject_o *v92; // x27
  float *v93; // x8
  float v94; // s8
  float v95; // s9
  float v96; // s10
  NotificationDialog_o *v97; // x0
  const MethodInfo *v98; // x3
  float x; // s9
  float y; // s8
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v103; // x0
  const MethodInfo *v104; // x3
  int32_t v105; // w1
  int32_t v106; // w2
  NotificationDialog_o *IntFromScript; // x0
  int32_t v108; // w27
  const MethodInfo *v109; // x3
  System_String_o *v110; // x0
  UnityEngine_Object_o *lnkTexture; // x23
  __int64 v112; // x11
  struct System_Object_array *v113; // x0
  int64_t v114; // x2
  int32_t v115; // w3
  System_String_o *v116; // x4
  BattleSetupInfo_o *v117; // x5
  FollowerInfo_o *v118; // x6
  PartyListViewItem_o *v119; // x7
  struct System_Object_array *banners; // x8
  int v121; // w21
  UnityEngine_Object_o *okBtnLabel; // x23
  UILabel_o *v123; // x23
  NotificationDialog_o *v124; // x0
  const MethodInfo *v125; // x3
  NotificationDialog_c *v126; // x8
  UnityEngine_GameObject_o *v127; // x23
  float *v128; // x8
  float v129; // s8
  float v130; // s9
  float v131; // s10
  System_Action_o *v132; // x20
  System_Action_o *v133; // x20
  const MethodInfo *v134; // x2
  UIPanel_o *v136; // [xsp+8h] [xbp-88h]
  Il2CppObject *value; // [xsp+18h] [xbp-78h] BYREF
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v140; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v141; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v142; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4BE0172 & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&AtlasManager_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableSprite__Add__);
    sub_1C21E38(&Method_System_Collections_Generic_List_object__ToArray__);
    sub_1C21E38(&System_Collections_Generic_List_object__TypeInfo);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&Method_NotificationDialog_EndOpen__);
    sub_1C21E38(&Method_NotificationDialog__Open_b__42_0__);
    sub_1C21E38(&NotificationDialog_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&StringLiteral_17352/*"banners"*/);
    sub_1C21E38(&StringLiteral_23762/*"size"*/);
    sub_1C21E38(&StringLiteral_24774/*"urlOpenType"*/);
    sub_1C21E38(&StringLiteral_22615/*"offset"*/);
    sub_1C21E38(&StringLiteral_24392/*"titleOffset"*/);
    sub_1C21E38(&StringLiteral_23873/*"spriteName"*/);
    sub_1C21E38(&StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C21E38(&StringLiteral_24773/*"urlLink"*/);
    sub_1C21E38(&StringLiteral_17943/*"buttonOffset"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    sub_1C21E38(&StringLiteral_23874/*"sprites"*/);
    byte_4BE0172 = 1;
  }
  value = 0LL;
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v27 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !v27 )
        goto LABEL_138;
      this->fields.keepPanelDepth = v27->fields.mDepth;
    }
  }
  this->fields.clickFunc = func;
  sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.clickFunc, (int64_t)func, v20, v21, v22, v23, v24, v25);
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
    v31 = title ? title : (System_String_o *)StringLiteral_1/*""*/;
    UILabel__set_text(transform, v31, 0LL);
    transform = this->fields.titleLabel;
    if ( !transform )
      goto LABEL_138;
    gameObject = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(
                                           (UnityEngine_Component_o *)transform,
                                           0LL);
    v34 = NotificationDialog_TypeInfo;
    v35 = (UnityEngine_GameObject_o *)gameObject;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v34 = NotificationDialog_TypeInfo;
    }
    p_BANNER_RETRY_MAX = (float *)&v34->static_fields->BANNER_RETRY_MAX;
    v37 = p_BANNER_RETRY_MAX[1];
    v38 = p_BANNER_RETRY_MAX[2];
    v39 = p_BANNER_RETRY_MAX[3];
    VectFromScript = NotificationDialog__getVectFromScript(
                       gameObject,
                       script,
                       (System_String_o *)StringLiteral_24392/*"titleOffset"*/,
                       v33);
    VectFromScript.fields.x = v37 + VectFromScript.fields.x;
    VectFromScript.fields.y = v38 + VectFromScript.fields.y;
    VectFromScript.fields.z = v39 + VectFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition(v35, VectFromScript, 0LL);
  }
  v40 = NotificationDialog_TypeInfo;
  if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
    v40 = NotificationDialog_TypeInfo;
  }
  v41 = (float *)&v40->static_fields->BANNER_RETRY_MAX;
  lineSprite = (UnityEngine_Object_o *)this->fields.lineSprite;
  v43 = v41[4];
  v44 = v41[5];
  v45 = v41[6];
  v46 = *((_DWORD *)v41 + 14);
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
      v47 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v47 = NotificationDialog_TypeInfo;
      }
      v48 = (float *)&v47->static_fields->BANNER_RETRY_MAX;
      v43 = v48[10];
      v44 = v48[11];
      v45 = v48[12];
      v46 = *((_DWORD *)v48 + 16);
    }
  }
  messageLabel = (UnityEngine_Object_o *)this->fields.messageLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(messageLabel, 0LL, 0LL) )
  {
    IsNullOrEmpty = System_String__IsNullOrEmpty(title, 0LL);
    v139.fields.x = v43;
    v139.fields.y = v44;
    v139.fields.z = v45;
    NotificationDialog__AdjustScriptMessageLabel(this, IsNullOrEmpty, message, v46, maxLine, v139, script, v51);
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
                               (Il2CppObject *)StringLiteral_23874/*"sprites"*/,
                               &value,
                               (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
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
    v54 = System_Collections_Generic_List_object___ToArray(
            (System_Collections_Generic_List_object__o *)value,
            (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_object__ToArray__);
    this->fields.sprites = v54;
    p_sprites = &this->fields.sprites;
    sub_1C21DDC((PartyOrganizationUtility_o *)&this->fields.sprites, (int64_t)v54, v56, v57, v58, v59, v60, v61);
    if ( this->fields.sprites && (v62 = *(_QWORD *)&this->fields.sprites->max_length) != 0 )
    {
      if ( (int)v62 >= 1 )
      {
        v63 = (UnityEngine_Component_o *)this->fields.lnkSprite;
        v64 = 0LL;
        v136 = v27;
        while ( 1 )
        {
          if ( v64 )
          {
            transform = (UILabel_o *)this->fields.lnkSprite;
            if ( !transform )
              break;
            v65 = (Il2CppObject *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
            if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
              j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
            transform = (UILabel_o *)UnityEngine_Object__Instantiate_object_(
                                       v65,
                                       (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
            if ( !this->fields.lnkSprite )
              break;
            v66 = (UnityEngine_GameObject_o *)transform;
            transform = (UILabel_o *)UnityEngine_Component__get_transform(
                                       (UnityEngine_Component_o *)this->fields.lnkSprite,
                                       0LL);
            if ( !transform )
              break;
            parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent(
                                                  (UnityEngine_Transform_o *)transform,
                                                  0LL);
            GameObjectExtensions__SetParent(v66, parent, 0LL);
            if ( !byte_4BD6BB6 )
            {
              sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
              byte_4BD6BB6 = 1;
            }
            GameObjectExtensions__SetLocalScale(v66, UnityEngine_Vector3_TypeInfo->static_fields->oneVector, 0LL);
            if ( !v66 )
              break;
            transform = (UILabel_o *)UnityEngine_GameObject__GetComponent_object_(
                                       v66,
                                       (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_LinkableSprite___);
            additionalSprites = (System_Collections_Generic_List_object__o *)this->fields.additionalSprites;
            if ( !additionalSprites )
              break;
            items = additionalSprites->fields._items;
            v76 = Method_System_Collections_Generic_List_LinkableSprite__Add__;
            ++additionalSprites->fields._version;
            if ( !items )
              break;
            size = additionalSprites->fields._size;
            v63 = (UnityEngine_Component_o *)transform;
            if ( (unsigned int)size >= items->max_length )
            {
              System_Collections_Generic_List_object___AddWithResize(
                additionalSprites,
                (Il2CppObject *)transform,
                *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v76[4] + 192LL) + 112LL));
            }
            else
            {
              v78 = &items->obj.klass + size;
              additionalSprites->fields._size = size + 1;
              v78[4] = (Il2CppClass *)v63;
              sub_1C21DDC((PartyOrganizationUtility_o *)(v78 + 4), (int64_t)v63, v68, v69, v70, v71, v72, v73);
            }
          }
          v79 = *p_sprites;
          if ( !*p_sprites )
            break;
          if ( v64 >= v79->max_length )
            sub_1C2209C(transform, keepPanelDepth);
          v80 = (System_Collections_Generic_Dictionary_string__object__o *)v79->m_Items[v64];
          if ( v80
            && (v81 = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr),
                LOBYTE(v80->klass->vtable._0_Equals.methodPtr) >= (unsigned int)v81) )
          {
            if ( (System_Collections_Generic_Dictionary_string__object__c *)v80->klass->_2.typeHierarchy[v81 - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo )
              v82 = v80;
            else
              v82 = 0LL;
            if ( !v63 )
              break;
          }
          else
          {
            v82 = 0LL;
            if ( !v63 )
              break;
          }
          v83 = script;
          v84 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v63, 0LL);
          klass = (UISprite_o *)v63[2].klass;
          v86 = (UnityEngine_GameObject_o *)v84;
          StringFromScript = NotificationDialog__getStringFromScript(
                               v84,
                               v82,
                               (System_String_o *)StringLiteral_23873/*"spriteName"*/,
                               v87);
          if ( !AtlasManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(AtlasManager_TypeInfo);
          transform = (UILabel_o *)AtlasManager__SetEventUI(klass, StringFromScript, 0LL);
          if ( !v86 )
            break;
          UnityEngine_GameObject__SetActive(v86, (unsigned __int8)transform & 1, 0LL);
          v89 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject(v63, 0LL);
          v91 = NotificationDialog_TypeInfo;
          v92 = (UnityEngine_GameObject_o *)v89;
          script = v83;
          if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
            v91 = NotificationDialog_TypeInfo;
          }
          v93 = (float *)&v91->static_fields->BANNER_RETRY_MAX;
          v27 = v136;
          v94 = v93[17];
          v95 = v93[18];
          v96 = v93[19];
          v140 = NotificationDialog__getVectFromScript(v89, v82, (System_String_o *)StringLiteral_22615/*"offset"*/, v90);
          v140.fields.x = v94 + v140.fields.x;
          v140.fields.y = v95 + v140.fields.y;
          v140.fields.z = v96 + v140.fields.z;
          GameObjectExtensions__SetLocalPosition(v92, v140, 0LL);
          v141 = NotificationDialog__getVectFromScript(v97, v82, (System_String_o *)StringLiteral_23762/*"size"*/, v98);
          x = v141.fields.x;
          y = v141.fields.y;
          z = v141.fields.z;
          if ( !byte_4BD6BB1 )
          {
            sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
            byte_4BD6BB1 = 1;
          }
          static_fields = UnityEngine_Vector3_TypeInfo->static_fields;
          if ( x == static_fields->zeroVector.fields.x
            && y == static_fields->zeroVector.fields.y
            && z == static_fields->zeroVector.fields.z )
          {
            LinkableSprite__MakePixelPerfect((LinkableSprite_o *)v63, 0LL);
          }
          else
          {
            v105 = x == INFINITY ? 0x80000000 : (int)x;
            v106 = y == INFINITY ? 0x80000000 : (int)y;
            LinkableSprite__SetSize((LinkableSprite_o *)v63, v105, v106, 0LL);
          }
          IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                    v103,
                                                    v82,
                                                    (System_String_o *)StringLiteral_24774/*"urlOpenType"*/,
                                                    v104);
          v108 = (int)IntFromScript;
          v110 = NotificationDialog__getStringFromScript(
                   IntFromScript,
                   v82,
                   (System_String_o *)StringLiteral_24773/*"urlLink"*/,
                   v109);
          LinkableSprite__SetUp((LinkableSprite_o *)v63, v108, v110, 0LL);
          if ( !*p_sprites )
            break;
          if ( (__int64)++v64 >= (int)(*p_sprites)->max_length )
            goto LABEL_98;
        }
LABEL_138:
        sub_1C22094(transform, keepPanelDepth);
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
                               (Il2CppObject *)StringLiteral_17352/*"banners"*/,
                               &value,
                               (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    if ( ((unsigned __int8)transform & 1) != 0 )
    {
      if ( !value )
        goto LABEL_138;
      v112 = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr);
      if ( LOBYTE(value->klass->vtable[0].methodPtr) < (unsigned int)v112
        || (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[v112 - 1] != System_Collections_Generic_List_object__TypeInfo )
      {
        goto LABEL_138;
      }
      v113 = System_Collections_Generic_List_object___ToArray(
               (System_Collections_Generic_List_object__o *)value,
               (const MethodInfo_3650C0C *)Method_System_Collections_Generic_List_object__ToArray__);
      this->fields.banners = v113;
      sub_1C21DDC(
        (PartyOrganizationUtility_o *)&this->fields.banners,
        (int64_t)v113,
        v114,
        v115,
        v116,
        v117,
        v118,
        v119);
      banners = this->fields.banners;
      if ( banners )
      {
        if ( *(_QWORD *)&banners->max_length )
        {
          v121 = 0;
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
  v121 = 1;
LABEL_113:
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    v123 = this->fields.okBtnLabel;
    if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
    transform = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3811/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
    if ( !v123 )
      goto LABEL_138;
    UILabel__set_text(v123, (System_String_o *)transform, 0LL);
    transform = this->fields.okBtnLabel;
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    transform = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)transform, 0LL);
    if ( !transform )
      goto LABEL_138;
    v124 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)transform, 0LL);
    v126 = NotificationDialog_TypeInfo;
    v127 = (UnityEngine_GameObject_o *)v124;
    if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
      v126 = NotificationDialog_TypeInfo;
    }
    v128 = (float *)&v126->static_fields->BANNER_RETRY_MAX;
    v129 = v128[20];
    v130 = v128[21];
    v131 = v128[22];
    v142 = NotificationDialog__getVectFromScript(v124, script, (System_String_o *)StringLiteral_17943/*"buttonOffset"*/, v125);
    v142.fields.x = v129 + v142.fields.x;
    v142.fields.y = v130 + v142.fields.y;
    v142.fields.z = v131 + v142.fields.z;
    GameObjectExtensions__SetLocalPosition(v127, v142, 0LL);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  transform = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL);
  if ( ((unsigned __int8)transform & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !v27 )
      goto LABEL_138;
    UIPanel__set_depth(v27, keepPanelDepth, 0LL);
  }
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  if ( v121 )
  {
    v132 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v132, (Il2CppObject *)this, Method_NotificationDialog_EndOpen__, 0LL);
    BaseDialog__Open((BaseDialog_o *)this, v132, 0, 0LL);
  }
  else
  {
    transform = (UILabel_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
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
    v133 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
    System_Action___ctor(v133, (Il2CppObject *)this, Method_NotificationDialog__Open_b__42_0__, 0LL);
    NotificationDialog__LoadBanners(this, v133, v134);
  }
}


System_Collections_IEnumerator_o *__fastcall NotificationDialog__StartDownloadBanner(
        NotificationDialog_o *this,
        const MethodInfo *method)
{
  __int64 v3; // x20
  int64_t v4; // x2
  int32_t v5; // w3
  System_String_o *v6; // x4
  BattleSetupInfo_o *v7; // x5
  FollowerInfo_o *v8; // x6
  PartyListViewItem_o *v9; // x7

  if ( (byte_4BE017A & 1) == 0 )
  {
    sub_1C21E38(&NotificationDialog__StartDownloadBanner_d__54_TypeInfo);
    byte_4BE017A = 1;
  }
  v3 = sub_1C22084(NotificationDialog__StartDownloadBanner_d__54_TypeInfo);
  System_Object___ctor((Il2CppObject *)v3, 0LL);
  *(_DWORD *)(v3 + 16) = 0;
  *(_QWORD *)(v3 + 32) = this;
  sub_1C21DDC((PartyOrganizationUtility_o *)(v3 + 32), (int64_t)this, v4, v5, v6, v7, v8, v9);
  return (System_Collections_IEnumerator_o *)v3;
}


void __fastcall NotificationDialog___Open_b__42_0(NotificationDialog_o *this, const MethodInfo *method)
{
  UnityEngine_GameObject_o *baseWindow; // x0
  System_Action_o *v4; // x20

  if ( (byte_4BE017E & 1) == 0 )
  {
    sub_1C21E38(&System_Action_TypeInfo);
    sub_1C21E38(&Method_NotificationDialog_EndOpen__);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    byte_4BE017E = 1;
  }
  baseWindow = this->fields.baseWindow;
  if ( !baseWindow
    || (UnityEngine_GameObject__SetActive(baseWindow, 1, 0LL),
        (baseWindow = (UnityEngine_GameObject_o *)SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__)) == 0LL) )
  {
    sub_1C22094(baseWindow, method);
  }
  CommonUI__SetLoadMode((CommonUI_o *)baseWindow, 0, 0LL);
  v4 = (System_Action_o *)sub_1C22084(System_Action_TypeInfo);
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

  if ( (byte_4BE017F & 1) == 0 )
  {
    sub_1C21E38(&Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    byte_4BE017F = 1;
  }
  if ( isDecide )
  {
    started = NotificationDialog__StartDownloadBanner(this, (const MethodInfo *)isDecide);
    UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)this, started, 0LL);
  }
  else
  {
    Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_ManagementManager__get_Instance__);
    if ( !Instance )
      sub_1C22094(0LL, v7);
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

  if ( (byte_4BE0177 & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    this = (NotificationDialog_o *)sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4BE0177 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1C22094(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4BE0176 & 1) == 0 )
  {
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C21E38(&string_TypeInfo);
    this = (NotificationDialog_o *)sub_1C21E38(&StringLiteral_1/*""*/);
    byte_4BE0176 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1C22094(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
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

  if ( (byte_4BE0175 & 1) == 0 )
  {
    sub_1C21E38(&System_Convert_TypeInfo);
    sub_1C21E38(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C21E38(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C21E38(&Method_System_Collections_Generic_List_object__get_Item__);
    this = (NotificationDialog_o *)sub_1C21E38(&System_Collections_Generic_List_object__TypeInfo);
    byte_4BE0175 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1C22094(this, script);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3317E8C *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v6 = value) != 0LL
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v13 = System_Convert__ToDouble(Item, 0LL);
    v14 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v6,
            1,
            (const MethodInfo_364EDE4 *)Method_System_Collections_Generic_List_object__get_Item__);
    v15 = System_Convert__ToDouble(v14, 0LL);
    x = v13;
    y = v15;
    z = 0.0;
  }
  else
  {
    if ( !byte_4BD6BB1 )
    {
      sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
      byte_4BD6BB1 = 1;
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
  if ( (byte_4BE017B & 1) == 0 )
  {
    sub_1C21E38(&StringLiteral_15920/*"Window/OkBtn"*/);
    byte_4BE017B = 1;
  }
  return (System_String_o *)StringLiteral_15920/*"Window/OkBtn"*/;
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
  sub_1C21DDC(
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
  if ( (sub_1C21EF8(v10) & 1) == 0 )
  {
    if ( !object )
    {
      v14 = sub_1C220B0(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1C21F60(v14, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_1A67A58;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A67A10;
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
  if ( (byte_4BE0180 & 1) == 0 )
  {
    sub_1C21E38(&bool_TypeInfo);
    byte_4BE0180 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1C21DEC(this, v9, callback, object);
}


void __fastcall NotificationDialog_ClickDelegate__EndInvoke(
        NotificationDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C21DF0(result, 0LL, method);
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
  int32_t _1__state; // w8
  struct NotificationDialog_o *_4__this; // x19
  struct System_Object_array *banners; // x8
  __int64 mLoadingIdx; // x9
  Il2CppObject *v13; // x8
  System_Collections_Generic_Dictionary_string__object__c *v14; // x9
  __int64 methodPtr_low; // x10
  struct System_Collections_Generic_Dictionary_string__object__o *v16; // x11
  UnityEngine_Networking_UnityWebRequest_o *mBannerWWW; // x0
  NotificationDialog__StartDownloadBanner_d__54_o **p_mBannerWWW; // x21
  System_String_o *error; // x0
  NotificationDialog__StartDownloadBanner_d__54_o *v20; // x23
  int32_t v21; // w24
  int32_t v22; // w25
  int32_t format; // w26
  UnityEngine_Texture2D_o *v24; // x22
  System_Byte_array *data; // x0
  System_String_o *v26; // x0
  bool IsNullOrEmpty; // w0
  int v28; // w20
  NotificationDialog_c *v29; // x0
  Il2CppObject *Instance; // x20
  System_String_o *v31; // x22
  ErrorDialog_ClickDelegate_o *v32; // x23
  System_Collections_IEnumerator_o *started; // x0
  UnityEngine_Networking_UnityWebRequest_o *v34; // x0
  int64_t v35; // x2
  int32_t v36; // w3
  System_String_o *v37; // x4
  BattleSetupInfo_o *v38; // x5
  FollowerInfo_o *v39; // x6
  PartyListViewItem_o *v40; // x7
  bool v41; // w21
  int64_t v42; // x1
  PartyOrganizationUtility_o *p_banner_5__2; // x21
  NotificationDialog_o *v44; // x0
  const MethodInfo *v45; // x3
  System_String_o *v46; // x21
  System_String_o *WebViewFullAddress; // x21
  UnityEngine_Networking_UnityWebRequest_o *v48; // x22
  int64_t v49; // x2
  int32_t v50; // w3
  System_String_o *v51; // x4
  BattleSetupInfo_o *v52; // x5
  FollowerInfo_o *v53; // x6
  PartyListViewItem_o *v54; // x7
  UnityEngine_Networking_DownloadHandlerTexture_o *v55; // x22
  int64_t v56; // x2
  int32_t v57; // w3
  System_String_o *v58; // x4
  BattleSetupInfo_o *v59; // x5
  FollowerInfo_o *v60; // x6
  PartyListViewItem_o *v61; // x7
  UnityEngine_Networking_UnityWebRequestAsyncOperation_o *v62; // x0
  PartyOrganizationUtility_o *p__2__current; // x20
  int64_t v64; // x2
  int32_t v65; // w3
  System_String_o *v66; // x4
  BattleSetupInfo_o *v67; // x5
  FollowerInfo_o *v68; // x6
  PartyListViewItem_o *v69; // x7
  NotificationDialog__StartDownloadBanner_d__54_o *lnkTexture; // x23
  Il2CppObject *gameObject; // x23
  NotificationDialog__StartDownloadBanner_d__54_o *v73; // x23
  UnityEngine_Component_o *parent; // x0
  int64_t v75; // x2
  int32_t v76; // w3
  System_String_o *v77; // x4
  BattleSetupInfo_o *v78; // x5
  FollowerInfo_o *v79; // x6
  PartyListViewItem_o *v80; // x7
  System_Collections_Generic_List_object__o *additionalTextures; // x8
  struct System_Object_array *items; // x9
  _QWORD *v83; // x10
  __int64 size; // x11
  Il2CppClass **v85; // x0
  NotificationDialog_o *v86; // x0
  const MethodInfo *v87; // x3
  UnityEngine_GameObject_o *v88; // x22
  NotificationDialog_c *v89; // x8
  float *p_BANNER_RETRY_MAX; // x8
  float v91; // s8
  float v92; // s9
  float v93; // s10
  NotificationDialog_o *v94; // x0
  const MethodInfo *v95; // x3
  float x; // s8
  float y; // s9
  float z; // s10
  struct UnityEngine_Vector3_StaticFields *static_fields; // x8
  NotificationDialog_o *v100; // x0
  const MethodInfo *v101; // x3
  int32_t v102; // w1
  int32_t v103; // w2
  NotificationDialog_o *IntFromScript; // x0
  System_Collections_Generic_Dictionary_string__object__o *banner_5__2; // x1
  int32_t v106; // w20
  const MethodInfo *v107; // x3
  System_String_o *StringFromScript; // x0
  const MethodInfo *v109; // x1
  UnityEngine_Vector3_o VectFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v111; // 0:s0.4,4:s1.4,8:s2.4

  v8 = this;
  if ( (byte_4BE0181 & 1) == 0 )
  {
    sub_1C21E38(&ErrorDialog_ClickDelegate_TypeInfo);
    sub_1C21E38(&System_Collections_Generic_Dictionary_string__object__TypeInfo);
    sub_1C21E38(&UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
    sub_1C21E38(&Method_System_Collections_Generic_List_LinkableTexture__Add__);
    sub_1C21E38(&LocalizationManager_TypeInfo);
    sub_1C21E38(&NetworkManager_TypeInfo);
    sub_1C21E38(&Method_NotificationDialog__StartDownloadBanner_b__54_0__);
    sub_1C21E38(&NotificationDialog_TypeInfo);
    sub_1C21E38(&Method_UnityEngine_Object_Instantiate_GameObject___);
    sub_1C21E38(&UnityEngine_Object_TypeInfo);
    sub_1C21E38(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C21E38(&UnityEngine_Texture2D_TypeInfo);
    sub_1C21E38(&UnityEngine_Networking_UnityWebRequest_TypeInfo);
    sub_1C21E38(&StringLiteral_17345/*"bannerUrl"*/);
    sub_1C21E38(&StringLiteral_23762/*"size"*/);
    sub_1C21E38(&StringLiteral_24774/*"urlOpenType"*/);
    sub_1C21E38(&StringLiteral_22615/*"offset"*/);
    sub_1C21E38(&StringLiteral_24773/*"urlLink"*/);
    sub_1C21E38(&StringLiteral_1/*""*/);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)sub_1C21E38(&StringLiteral_9428/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/);
    byte_4BE0181 = 1;
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
      v20 = this;
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
      v21 = (int)this;
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
      v22 = (int)this;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Networking_DownloadHandlerTexture__get_texture(
                                                                  v8->fields._texDl_5__3,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      format = UnityEngine_Texture2D__get_format((UnityEngine_Texture2D_o *)this, 0LL);
      v24 = (UnityEngine_Texture2D_o *)sub_1C22084(UnityEngine_Texture2D_TypeInfo);
      UnityEngine_Texture2D___ctor_70757788(v24, v21, v22, format, 0, 0LL);
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)v8->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      data = UnityEngine_Networking_DownloadHandler__get_data((UnityEngine_Networking_DownloadHandler_o *)this, 0LL);
      UnityEngine_ImageConversion__LoadImage_70974788(v24, data, 0LL);
    }
    else
    {
LABEL_25:
      v24 = 0LL;
      v20 = 0LL;
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
    v26 = UnityEngine_Networking_UnityWebRequest__get_error((UnityEngine_Networking_UnityWebRequest_o *)this, 0LL);
    IsNullOrEmpty = System_String__IsNullOrEmpty(v26, 0LL);
    if ( !v20 || !IsNullOrEmpty || !v20->fields.__2__current )
      goto LABEL_35;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Object__op_Equality(
                                                                (UnityEngine_Object_o *)v24,
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
                                                                    (const MethodInfo_30358BC *)Method_UnityEngine_Object_Instantiate_GameObject___);
        if ( !_4__this->fields.lnkSprite )
          goto LABEL_94;
        v73 = this;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_transform(
                                                                    (UnityEngine_Component_o *)_4__this->fields.lnkSprite,
                                                                    0LL);
        if ( !this )
          goto LABEL_94;
        parent = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)this, 0LL);
        GameObjectExtensions__SetParent((UnityEngine_GameObject_o *)v73, parent, 0LL);
        if ( !byte_4BD6BB6 )
        {
          sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
          byte_4BD6BB6 = 1;
        }
        GameObjectExtensions__SetLocalScale(
          (UnityEngine_GameObject_o *)v73,
          UnityEngine_Vector3_TypeInfo->static_fields->oneVector,
          0LL);
        if ( !v73 )
          goto LABEL_94;
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_GameObject__GetComponent_object_(
                                                                    (UnityEngine_GameObject_o *)v73,
                                                                    (const MethodInfo_3000534 *)Method_UnityEngine_GameObject_GetComponent_LinkableTexture___);
        additionalTextures = (System_Collections_Generic_List_object__o *)_4__this->fields.additionalTextures;
        if ( !additionalTextures )
          goto LABEL_94;
        items = additionalTextures->fields._items;
        v83 = Method_System_Collections_Generic_List_LinkableTexture__Add__;
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
            *(const MethodInfo_364F0B4 **)(*(_QWORD *)(v83[4] + 192LL) + 112LL));
        }
        else
        {
          v85 = &items->obj.klass + size;
          additionalTextures->fields._size = size + 1;
          v85[4] = (Il2CppClass *)lnkTexture;
          sub_1C21DDC((PartyOrganizationUtility_o *)(v85 + 4), (int64_t)lnkTexture, v75, v76, v77, v78, v79, v80);
        }
      }
      if ( !lnkTexture )
        goto LABEL_94;
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)lnkTexture->fields._texDl_5__3;
      if ( !this )
        goto LABEL_94;
      (*(void (__fastcall **)(NotificationDialog__StartDownloadBanner_d__54_o *, UnityEngine_Texture2D_o *, Il2CppMethodPointer))&this->klass[1]._2.naturalAligment)(
        this,
        v24,
        this->klass[1].vtable._0_Equals.methodPtr);
      this = (NotificationDialog__StartDownloadBanner_d__54_o *)UnityEngine_Component__get_gameObject(
                                                                  (UnityEngine_Component_o *)lnkTexture,
                                                                  0LL);
      if ( !this )
        goto LABEL_94;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 1, 0LL);
      v86 = (NotificationDialog_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)lnkTexture, 0LL);
      v88 = (UnityEngine_GameObject_o *)v86;
      v89 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v89 = NotificationDialog_TypeInfo;
      }
      p_BANNER_RETRY_MAX = (float *)&v89->static_fields->BANNER_RETRY_MAX;
      v91 = p_BANNER_RETRY_MAX[17];
      v92 = p_BANNER_RETRY_MAX[18];
      v93 = p_BANNER_RETRY_MAX[19];
      VectFromScript = NotificationDialog__getVectFromScript(
                         v86,
                         v8->fields._banner_5__2,
                         (System_String_o *)StringLiteral_22615/*"offset"*/,
                         v87);
      VectFromScript.fields.x = v91 + VectFromScript.fields.x;
      VectFromScript.fields.y = v92 + VectFromScript.fields.y;
      VectFromScript.fields.z = v93 + VectFromScript.fields.z;
      GameObjectExtensions__SetLocalPosition(v88, VectFromScript, 0LL);
      v111 = NotificationDialog__getVectFromScript(
               v94,
               v8->fields._banner_5__2,
               (System_String_o *)StringLiteral_23762/*"size"*/,
               v95);
      x = v111.fields.x;
      y = v111.fields.y;
      z = v111.fields.z;
      if ( !byte_4BD6BB1 )
      {
        sub_1C21E38(&UnityEngine_Vector3_TypeInfo);
        byte_4BD6BB1 = 1;
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
          v102 = 0x80000000;
        else
          v102 = (int)x;
        if ( y == INFINITY )
          v103 = 0x80000000;
        else
          v103 = (int)y;
        LinkableTexture__SetSize((LinkableTexture_o *)lnkTexture, v102, v103, 0LL);
      }
      IntFromScript = (NotificationDialog_o *)NotificationDialog__getIntFromScript(
                                                v100,
                                                v8->fields._banner_5__2,
                                                (System_String_o *)StringLiteral_24774/*"urlOpenType"*/,
                                                v101);
      banner_5__2 = v8->fields._banner_5__2;
      v106 = (int)IntFromScript;
      StringFromScript = NotificationDialog__getStringFromScript(
                           IntFromScript,
                           banner_5__2,
                           (System_String_o *)StringLiteral_24773/*"urlLink"*/,
                           v107);
      LinkableTexture__SetUp((LinkableTexture_o *)lnkTexture, v106, StringFromScript, 0LL);
      NotificationDialog__LoadNext(_4__this, v109);
    }
    else
    {
LABEL_35:
      v28 = _4__this->fields.mBannerRetryCount + 1;
      _4__this->fields.mBannerRetryCount = v28;
      v29 = NotificationDialog_TypeInfo;
      if ( !NotificationDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(NotificationDialog_TypeInfo);
        v29 = NotificationDialog_TypeInfo;
      }
      if ( v28 <= v29->static_fields->BANNER_RETRY_MAX )
      {
        started = NotificationDialog__StartDownloadBanner(_4__this, method);
        UnityEngine_MonoBehaviour__StartCoroutine_70854884((UnityEngine_MonoBehaviour_o *)_4__this, started, 0LL);
      }
      else
      {
        _4__this->fields.mBannerRetryCount = 0;
        Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_388D058 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        v31 = LocalizationManager__Get((System_String_o *)StringLiteral_9428/*"NETWORK_ERROR_TIME_OVER_MESSAGE"*/, 0LL);
        v32 = (ErrorDialog_ClickDelegate_o *)sub_1C22084(ErrorDialog_ClickDelegate_TypeInfo);
        ErrorDialog_ClickDelegate___ctor(
          v32,
          (Il2CppObject *)_4__this,
          Method_NotificationDialog__StartDownloadBanner_b__54_0__,
          0LL);
        if ( !Instance )
          goto LABEL_94;
        CommonUI__OpenRetryDialog((CommonUI_o *)Instance, (System_String_o *)StringLiteral_1/*""*/, v31, v32, 0, 0LL);
      }
    }
    v34 = _4__this->fields.mBannerWWW;
    _4__this->fields.refuseInit = 0;
    if ( v34 )
    {
      UnityEngine_Networking_UnityWebRequest__Dispose(v34, 0LL);
      *p_mBannerWWW = 0LL;
      sub_1C21DDC((PartyOrganizationUtility_o *)&_4__this->fields.mBannerWWW, 0LL, v35, v36, v37, v38, v39, v40);
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
          sub_1C2209C(this, method);
        v13 = banners->m_Items[mLoadingIdx];
        if ( v13 )
        {
          v14 = System_Collections_Generic_Dictionary_string__object__TypeInfo;
          methodPtr_low = LOBYTE(System_Collections_Generic_Dictionary_string__object__TypeInfo->vtable._0_Equals.methodPtr);
          if ( LOBYTE(v13->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
            v16 = (System_Collections_Generic_Dictionary_string__object__c *)v13->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_Dictionary_string__object__TypeInfo
                ? (struct System_Collections_Generic_Dictionary_string__object__o *)v13
                : 0LL;
          else
            v16 = 0LL;
          v8->fields._banner_5__2 = v16;
          p_banner_5__2 = (PartyOrganizationUtility_o *)&v8->fields._banner_5__2;
          if ( LOBYTE(v13->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low )
            v42 = (System_Collections_Generic_Dictionary_string__object__c *)v13->klass->_2.typeHierarchy[methodPtr_low - 1] == v14
                ? (int64_t)v13
                : 0LL;
          else
            v42 = 0LL;
        }
        else
        {
          v42 = 0LL;
          v8->fields._banner_5__2 = 0LL;
          p_banner_5__2 = (PartyOrganizationUtility_o *)&v8->fields._banner_5__2;
        }
        sub_1C21DDC(p_banner_5__2, v42, v2, v3, v4, v5, v6, v7);
        v46 = NotificationDialog__getStringFromScript(
                v44,
                (System_Collections_Generic_Dictionary_string__object__o *)p_banner_5__2->klass,
                (System_String_o *)StringLiteral_17345/*"bannerUrl"*/,
                v45);
        if ( !NetworkManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(NetworkManager_TypeInfo);
        WebViewFullAddress = NetworkManager__getWebViewFullAddress(v46, 0LL);
        v48 = (UnityEngine_Networking_UnityWebRequest_o *)sub_1C22084(UnityEngine_Networking_UnityWebRequest_TypeInfo);
        UnityEngine_Networking_UnityWebRequest___ctor(v48, WebViewFullAddress, 0LL);
        _4__this->fields.mBannerWWW = v48;
        sub_1C21DDC(
          (PartyOrganizationUtility_o *)&_4__this->fields.mBannerWWW,
          (int64_t)v48,
          v49,
          v50,
          v51,
          v52,
          v53,
          v54);
        v55 = (UnityEngine_Networking_DownloadHandlerTexture_o *)sub_1C22084(UnityEngine_Networking_DownloadHandlerTexture_TypeInfo);
        UnityEngine_Networking_DownloadHandlerTexture___ctor(v55, 0, 0LL);
        v8->fields._texDl_5__3 = v55;
        sub_1C21DDC((PartyOrganizationUtility_o *)&v8->fields._texDl_5__3, (int64_t)v55, v56, v57, v58, v59, v60, v61);
        this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
        if ( this )
        {
          UnityEngine_Networking_UnityWebRequest__set_downloadHandler(
            (UnityEngine_Networking_UnityWebRequest_o *)this,
            (UnityEngine_Networking_DownloadHandler_o *)v8->fields._texDl_5__3,
            0LL);
          this = (NotificationDialog__StartDownloadBanner_d__54_o *)_4__this->fields.mBannerWWW;
          v41 = 1;
          _4__this->fields.refuseInit = 1;
          if ( this )
          {
            v62 = UnityEngine_Networking_UnityWebRequest__SendWebRequest(
                    (UnityEngine_Networking_UnityWebRequest_o *)this,
                    0LL);
            v8->fields.__2__current = (Il2CppObject *)v62;
            p__2__current = (PartyOrganizationUtility_o *)&v8->fields.__2__current;
            sub_1C21DDC(p__2__current, (int64_t)v62, v64, v65, v66, v67, v68, v69);
            *(_DWORD *)&p__2__current[-1].fields._IsQuestStartMenuMode_k__BackingField = 1;
            return v41;
          }
        }
      }
    }
LABEL_94:
    sub_1C22094(this, method);
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

  v2 = sub_1C21E4C(&System_NotSupportedException_TypeInfo);
  v3 = (System_NotSupportedException_o *)sub_1C22084(v2);
  System_NotSupportedException___ctor(v3, 0LL);
  v4 = sub_1C21E4C(&Method_NotificationDialog__StartDownloadBanner_d__54_System_Collections_IEnumerator_Reset__);
  sub_1C21F60(v3, v4);
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