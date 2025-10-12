void MessageAndScrollDetailConfirmDialog___cctor(const MethodInfo *method)
{
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x8
  MessageAndScrollDetailConfirmDialog_c *v2; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v3; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v4; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v5; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v6; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v7; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v8; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v9; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v10; // x8

  if ( (byte_4C3AC3B & 1) == 0 )
  {
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    byte_4C3AC3B = 1;
  }
  static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MainTitleBasePos.fields.x = 0x4361000000000000LL;
  static_fields->MainTitleBasePos.fields.z = 0.0;
  v2 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v3 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&v3->MainMessageBasePos.fields.x = 0x42BE000000000000LL;
  v3->MainMessageBasePos.fields.z = 0.0;
  v4 = v2->static_fields;
  *(_QWORD *)&v4->NoTitleMainMessageBasePos.fields.x = 0x42F0000000000000LL;
  v4->NoTitleMainMessageBasePos.fields.z = 0.0;
  v5 = v2->static_fields;
  *(_QWORD *)&v5->DetailTitleBasePos.fields.x = 0x4361000000000000LL;
  v5->DetailTitleBasePos.fields.z = 0.0;
  v6 = v2->static_fields;
  *(_QWORD *)&v6->DetailMessageBasePos.fields.x = 0x4357000000000000LL;
  v6->DetailMessageBasePos.fields.z = 0.0;
  v7 = v2->static_fields;
  *(_QWORD *)&v7->NoTitleDetailMessageBasePos.fields.x = 0x436B000000000000LL;
  v7->NoTitleDetailMessageBasePos.fields.z = 0.0;
  v8 = v2->static_fields;
  *(_QWORD *)&v8->OkButtonBasePos.fields.x = 0xC340800000000000LL;
  v8->OkButtonBasePos.fields.z = 0.0;
  v9 = v2->static_fields;
  *(_QWORD *)&v9->OkButtonBasePosTypeTwoAlternative.fields.x = 0xC3408000C3200000LL;
  v9->OkButtonBasePosTypeTwoAlternative.fields.z = 0.0;
  v10 = v2->static_fields;
  v10->DetailMessageBaseHeight = 1000;
  *(_OWORD *)&v10->ButtonBaseSizeX = xmmword_C0DF20;
  *(_OWORD *)&v10->MainTitleFontSize = xmmword_C0DC90;
}


void MessageAndScrollDetailConfirmDialog___ctor(MessageAndScrollDetailConfirmDialog_o *this, const MethodInfo *method)
{
  if ( (byte_4C3AC3A & 1) == 0 )
  {
    sub_1C32C20(&BaseDialog_TypeInfo);
    byte_4C3AC3A = 1;
  }
  this->fields.isInitPanelDepth = 1;
  *(_QWORD *)&this->fields.onClickOkSeKind = 0x800000001LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0);
}


void MessageAndScrollDetailConfirmDialog__AdjustBtnSize(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Nullable_int__o inputCancelBtnWidth,
        System_Nullable_int__o inputDecideBtnWidth,
        const MethodInfo *method)
{
  UnityEngine_Component_o *okBtnLabel; // x0
  UnityEngine_GameObject_o *v8; // x22
  UIWidget_o *Component_object; // x23
  Il2CppObject *v10; // x22
  unsigned __int64 v11; // x1
  MessageAndScrollDetailConfirmDialog_c *v12; // x0
  int mWidth; // s8
  int32_t ButtonBaseSizeY; // s9
  UnityEngine_GameObject_o *decideBtn; // x8
  UIWidget_o *v16; // x20
  Il2CppObject *v17; // x21
  unsigned __int64 v18; // x1
  MessageAndScrollDetailConfirmDialog_c *v19; // x0
  int v20; // s8
  int32_t v21; // s9
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v23; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3AC30 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_int__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_int__get_HasValue__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AC30 = 1;
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.okBtnLabel;
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(okBtnLabel, 0);
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)okBtnLabel, 0);
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(okBtnLabel, 0);
  if ( !okBtnLabel )
    goto LABEL_45;
  v8 = (UnityEngine_GameObject_o *)okBtnLabel;
  Component_object = (UIWidget_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)okBtnLabel,
                                     (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v10 = UnityEngine_GameObject__GetComponent_object_(
          v8,
          (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v10, 0, 0);
    if ( ((unsigned __int8)okBtnLabel & 1) != 0 )
    {
      if ( inputCancelBtnWidth.fields.hasValue )
      {
        v11 = HIDWORD(*(unsigned __int64 *)&inputCancelBtnWidth);
        if ( !Component_object )
          goto LABEL_45;
      }
      else
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        LODWORD(v11) = *(_DWORD *)(okBtnLabel[7].fields.m_CachedPtr + 96);
        if ( !Component_object )
          goto LABEL_45;
      }
      UIWidget__set_width(Component_object, v11, 0);
      v12 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v12 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      UIWidget__set_height(Component_object, v12->static_fields->ButtonBaseSizeY, 0);
      if ( !v10 )
        goto LABEL_45;
      mWidth = Component_object->fields.mWidth;
      ButtonBaseSizeY = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v10, 0);
      size.fields.x = (float)mWidth;
      size.fields.y = (float)ButtonBaseSizeY;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v10, size, 0);
    }
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)okBtnLabel,
                                            0);
  if ( !okBtnLabel )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)okBtnLabel, 0) )
  {
    okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
    if ( !okBtnLabel )
      goto LABEL_45;
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)okBtnLabel,
                                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    decideBtn = this->fields.decideBtn;
    if ( !decideBtn )
      goto LABEL_45;
    v16 = (UIWidget_o *)okBtnLabel;
    v17 = UnityEngine_GameObject__GetComponent_object_(
            decideBtn,
            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v16, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v17, 0, 0);
      if ( ((unsigned __int8)okBtnLabel & 1) != 0 )
      {
        if ( inputDecideBtnWidth.fields.hasValue )
        {
          v18 = HIDWORD(*(unsigned __int64 *)&inputDecideBtnWidth);
          if ( !v16 )
            goto LABEL_45;
        }
        else
        {
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
            okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          LODWORD(v18) = *(_DWORD *)(okBtnLabel[7].fields.m_CachedPtr + 96);
          if ( !v16 )
            goto LABEL_45;
        }
        UIWidget__set_width(v16, v18, 0);
        v19 = MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
          v19 = MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        UIWidget__set_height(v16, v19->static_fields->ButtonBaseSizeY, 0);
        if ( v17 )
        {
          v20 = v16->fields.mWidth;
          v21 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
          v23 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v17, 0);
          v23.fields.x = (float)v20;
          v23.fields.y = (float)v21;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v17, v23, 0);
          return;
        }
LABEL_45:
        sub_1C32E7C(okBtnLabel);
      }
    }
  }
}


void MessageAndScrollDetailConfirmDialog__AdjustBtnSize_46965188(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  UnityEngine_Component_o *okBtnLabel; // x0
  UnityEngine_GameObject_o *v6; // x21
  Il2CppObject *Component_object; // x22
  Il2CppObject *v8; // x21
  _BOOL8 v9; // x0
  const MethodInfo *v10; // x3
  int32_t v11; // w23
  MessageAndScrollDetailConfirmDialog_c *v12; // x0
  int32_t ButtonBaseSizeY; // s8
  UIWidget_o *v14; // x21
  Il2CppObject *v15; // x20
  _BOOL8 v16; // x0
  const MethodInfo *v17; // x3
  int32_t v18; // w19
  MessageAndScrollDetailConfirmDialog_c *v19; // x0
  int32_t v20; // s8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v22; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3AC31 & 1) == 0 )
  {
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    sub_1C32C20(&Method_UnityEngine_GameObject_GetComponent_UISprite___);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_17721/*"cancelBtnWidth"*/);
    sub_1C32C20(&StringLiteral_18518/*"decideBtnWidth"*/);
    byte_4C3AC31 = 1;
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.okBtnLabel;
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(okBtnLabel, 0);
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)okBtnLabel, 0);
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(okBtnLabel, 0);
  if ( !okBtnLabel )
    goto LABEL_43;
  v6 = (UnityEngine_GameObject_o *)okBtnLabel;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)okBtnLabel,
                       (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v8 = UnityEngine_GameObject__GetComponent_object_(
         v6,
         (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v9 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v8, 0, 0);
    if ( v9 )
    {
      okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                                (MessageAndScrollDetailConfirmDialog_o *)v9,
                                                script,
                                                (System_String_o *)StringLiteral_17721/*"cancelBtnWidth"*/,
                                                v10);
      v11 = (int)okBtnLabel;
      if ( !(_DWORD)okBtnLabel )
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        v11 = *(_DWORD *)(okBtnLabel[7].fields.m_CachedPtr + 96);
      }
      if ( !Component_object )
        goto LABEL_43;
      UIWidget__set_width((UIWidget_o *)Component_object, v11, 0);
      v12 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v12 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      UIWidget__set_height((UIWidget_o *)Component_object, v12->static_fields->ButtonBaseSizeY, 0);
      if ( !v8 )
        goto LABEL_43;
      ButtonBaseSizeY = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v8, 0);
      size.fields.x = (float)v11;
      size.fields.y = (float)ButtonBaseSizeY;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v8, size, 0);
    }
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)okBtnLabel,
                                            0);
  if ( !okBtnLabel )
    goto LABEL_43;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)okBtnLabel, 0) )
  {
    okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
    if ( !okBtnLabel )
      goto LABEL_43;
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)okBtnLabel,
                                              (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !this->fields.decideBtn )
      goto LABEL_43;
    v14 = (UIWidget_o *)okBtnLabel;
    v15 = UnityEngine_GameObject__GetComponent_object_(
            this->fields.decideBtn,
            (const MethodInfo_3134970 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v14, 0, 0) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v16 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0, 0);
      if ( v16 )
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                                  (MessageAndScrollDetailConfirmDialog_o *)v16,
                                                  script,
                                                  (System_String_o *)StringLiteral_18518/*"decideBtnWidth"*/,
                                                  v17);
        v18 = (int)okBtnLabel;
        if ( !(_DWORD)okBtnLabel )
        {
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
            okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          v18 = *(_DWORD *)(okBtnLabel[7].fields.m_CachedPtr + 96);
        }
        if ( v14 )
        {
          UIWidget__set_width(v14, v18, 0);
          v19 = MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
            v19 = MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          UIWidget__set_height(v14, v19->static_fields->ButtonBaseSizeY, 0);
          if ( v15 )
          {
            v20 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
            v22 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v15, 0);
            v22.fields.x = (float)v18;
            v22.fields.y = (float)v20;
            UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v15, v22, 0);
            return;
          }
        }
LABEL_43:
        sub_1C32E7C(okBtnLabel);
      }
    }
  }
}


void MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel(
        MessageAndScrollDetailConfirmDialog_o *this,
        bool isNoMainTitle,
        bool isNoDetailTitle,
        System_String_o *mainMessage,
        System_String_o *detailMessage,
        int32_t mainFontSize,
        int32_t detailFontSize,
        int32_t maxLine,
        UnityEngine_Vector3_o mainMessagePos,
        UnityEngine_Vector3_o detailMessagePos,
        int32_t mainMsgAlignment,
        int32_t detailMsgAlignment,
        const MethodInfo *method)
{
  MessageAndScrollDetailConfirmDialog_o *v19; // x28
  UILabel_o *noTitleMainMessageLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  MessageAndScrollDetailConfirmDialog_c *v22; // x8
  UnityEngine_GameObject_o *v23; // x29
  UnityEngine_GameObject_o *v24; // x0
  MessageAndScrollDetailConfirmDialog_c *v25; // x8
  UnityEngine_GameObject_o *v26; // x29
  struct UILabel_o *noTitleDetailMessageLabel; // x23
  UnityEngine_GameObject_o *v28; // x0
  MessageAndScrollDetailConfirmDialog_c *v29; // x8
  UnityEngine_GameObject_o *v30; // x29
  UnityEngine_GameObject_o *v31; // x0
  MessageAndScrollDetailConfirmDialog_c *v32; // x8
  UnityEngine_GameObject_o *v33; // x29
  MessageAndScrollDetailConfirmDialog_c *v34; // x0
  System_String_o *Empty; // x25
  System_String_o *v36; // x24
  MessageAndScrollDetailConfirmDialog_c *v37; // x0
  MessageAndScrollDetailConfirmDialog_c *v38; // x0
  MessageAndScrollDetailConfirmDialog_c *v39; // x0
  MessageAndScrollDetailConfirmDialog_c *v40; // x0

  v19 = this;
  if ( (byte_4C3AC2D & 1) == 0 )
  {
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1C32C20(&string_TypeInfo);
    byte_4C3AC2D = 1;
  }
  if ( isNoMainTitle )
  {
    noTitleMainMessageLabel = v19->fields.noTitleMainMessageLabel;
    if ( !noTitleMainMessageLabel )
      goto LABEL_46;
    gameObject = UnityEngine_Component__get_gameObject(
                   (UnityEngine_Component_o *)v19->fields.noTitleMainMessageLabel,
                   0);
    v22 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v23 = gameObject;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v22 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v23, v22->static_fields->NoTitleMainMessageBasePos, 0);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.mainMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  else
  {
    noTitleMainMessageLabel = v19->fields.mainMessageLabel;
    if ( !noTitleMainMessageLabel )
      goto LABEL_46;
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.mainMessageLabel, 0);
    v25 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v26 = v24;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v25 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v26, v25->static_fields->MainMessageBasePos, 0);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.noTitleMainMessageLabel;
    if ( !this )
LABEL_46:
      sub_1C32E7C(this);
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  if ( isNoDetailTitle )
  {
    noTitleDetailMessageLabel = v19->fields.noTitleDetailMessageLabel;
    if ( !noTitleDetailMessageLabel )
      goto LABEL_46;
    v28 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.noTitleDetailMessageLabel, 0);
    v29 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v30 = v28;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v29 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v30, v29->static_fields->NoTitleDetailMessageBasePos, 0);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.detailMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  else
  {
    noTitleDetailMessageLabel = v19->fields.detailMessageLabel;
    if ( !noTitleDetailMessageLabel )
      goto LABEL_46;
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.detailMessageLabel, 0);
    v32 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v33 = v31;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v32 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v33, v32->static_fields->DetailMessageBasePos, 0);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.noTitleDetailMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0);
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0);
  v34 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v34 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UIWidget__set_height((UIWidget_o *)noTitleDetailMessageLabel, v34->static_fields->DetailMessageBaseHeight, 0);
  UILabel__set_alignment(noTitleMainMessageLabel, mainMsgAlignment, 0);
  UILabel__set_alignment(noTitleDetailMessageLabel, detailMsgAlignment, 0);
  if ( mainMessage )
    Empty = System_String__Trim_63574704(mainMessage, 0xAu, 0);
  else
    Empty = string_TypeInfo->static_fields->Empty;
  if ( detailMessage )
    v36 = System_String__Trim_63574704(detailMessage, 0xAu, 0);
  else
    v36 = string_TypeInfo->static_fields->Empty;
  v37 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v37 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, v37->static_fields->MainMessageFontSize, 0);
  UILabel__set_maxLineCount(noTitleMainMessageLabel, maxLine, 0);
  WrapControlText__textAdjust(noTitleMainMessageLabel, Empty, noTitleMainMessageLabel->fields.mFontSize, 0, 0);
  if ( mainFontSize <= 0 )
  {
    v38 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v38 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    mainFontSize = v38->static_fields->MainMessageFontSize;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, mainFontSize, 0);
  v39 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v39 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v39->static_fields->DetailMessageFontSize, 0);
  WrapControlText__textAdjust(
    noTitleDetailMessageLabel,
    v36,
    noTitleDetailMessageLabel->fields.mFontSize,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageFontSize,
    0);
  if ( detailFontSize <= 0 )
  {
    v40 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v40 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    detailFontSize = v40->static_fields->DetailMessageFontSize;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, detailFontSize, 0);
  UILabel__set_overflowMethod(noTitleDetailMessageLabel, 3, 0);
}


void MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel_46959584(
        MessageAndScrollDetailConfirmDialog_o *this,
        bool isNoMainTitle,
        bool isNoDetailTitle,
        System_String_o *mainMessage,
        System_String_o *detailMessage,
        int32_t maxLine,
        UnityEngine_Vector3_o mainMessagePos,
        UnityEngine_Vector3_o detailMessagePos,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  float z; // s8
  float x; // s9
  float v13; // s10
  float v14; // s11
  struct UILabel_o *noTitleMainMessageLabel; // x21
  UnityEngine_Component_o *mainMessageLabel; // x0
  float y; // s12
  MessageAndScrollDetailConfirmDialog_o *gameObject; // x26
  const MethodInfo *v25; // x3
  float v26; // s12
  MessageAndScrollDetailConfirmDialog_o *v27; // x26
  const MethodInfo *v28; // x3
  struct UILabel_o *noTitleDetailMessageLabel; // x24
  float v30; // s10
  MessageAndScrollDetailConfirmDialog_o *v31; // x26
  const MethodInfo *v32; // x3
  float v33; // s10
  MessageAndScrollDetailConfirmDialog_o *v34; // x26
  const MethodInfo *v35; // x3
  MessageAndScrollDetailConfirmDialog_o *v36; // x0
  const MethodInfo *v37; // x3
  System_String_o *StringFromScript; // x25
  const MethodInfo *v39; // x3
  System_String_o *v40; // x25
  _BOOL8 v41; // x0
  const MethodInfo *v42; // x3
  System_String_o *Empty; // x23
  System_String_o *v44; // x22
  MessageAndScrollDetailConfirmDialog_o *v45; // x0
  const MethodInfo *v46; // x3
  int32_t IntFromScript; // w0
  MessageAndScrollDetailConfirmDialog_o *v48; // x0
  const MethodInfo *v49; // x3
  int MainMessageFontSize; // w1
  MessageAndScrollDetailConfirmDialog_c *v51; // x0
  MessageAndScrollDetailConfirmDialog_c *v52; // x0
  MessageAndScrollDetailConfirmDialog_o *v53; // x0
  const MethodInfo *v54; // x3
  int32_t v55; // w0
  MessageAndScrollDetailConfirmDialog_o *v56; // x0
  const MethodInfo *v57; // x3
  int DetailMessageFontSize; // w1
  MessageAndScrollDetailConfirmDialog_c *v59; // x0
  int32_t result; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o VecFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v62; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v63; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v64; // 0:s0.4,4:s1.4,8:s2.4

  z = detailMessagePos.fields.z;
  x = detailMessagePos.fields.x;
  v13 = mainMessagePos.fields.z;
  v14 = mainMessagePos.fields.x;
  if ( (byte_4C3AC2E & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Enum_TryParse_NGUIText_Alignment___);
    sub_1C32C20(&System_Enum_TypeInfo);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_21392/*"mainMsgAlignment"*/);
    sub_1C32C20(&StringLiteral_21394/*"mainMsgOffset"*/);
    sub_1C32C20(&StringLiteral_21393/*"mainMsgFontSize"*/);
    sub_1C32C20(&StringLiteral_18600/*"detailMsgOffset"*/);
    sub_1C32C20(&StringLiteral_18599/*"detailMsgFontSize"*/);
    sub_1C32C20(&StringLiteral_18601/*"detailMsgSpacingY"*/);
    sub_1C32C20(&StringLiteral_18598/*"detailMsgAlignment"*/);
    sub_1C32C20(&StringLiteral_21391/*"mainMsg"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_21395/*"mainMsgSpacingY"*/);
    byte_4C3AC2E = 1;
  }
  result = 0;
  if ( isNoMainTitle )
  {
    noTitleMainMessageLabel = this->fields.noTitleMainMessageLabel;
    mainMessageLabel = (UnityEngine_Component_o *)noTitleMainMessageLabel;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleMainMessageLabel;
    }
    if ( !mainMessageLabel )
      goto LABEL_58;
    y = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->NoTitleMainMessageBasePos.fields.y;
    gameObject = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0);
    VecFromScript = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
                      gameObject,
                      script,
                      (System_String_o *)StringLiteral_21394/*"mainMsgOffset"*/,
                      v25);
    VecFromScript.fields.x = v14 + VecFromScript.fields.x;
    VecFromScript.fields.y = y + VecFromScript.fields.y;
    VecFromScript.fields.z = v13 + VecFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)gameObject, VecFromScript, 0);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.mainMessageLabel;
    if ( !mainMessageLabel )
      goto LABEL_58;
  }
  else
  {
    noTitleMainMessageLabel = this->fields.mainMessageLabel;
    mainMessageLabel = (UnityEngine_Component_o *)noTitleMainMessageLabel;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      mainMessageLabel = (UnityEngine_Component_o *)this->fields.mainMessageLabel;
    }
    if ( !mainMessageLabel )
      goto LABEL_58;
    v26 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageBasePos.fields.y;
    v27 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0);
    v62 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v27,
            script,
            (System_String_o *)StringLiteral_21394/*"mainMsgOffset"*/,
            v28);
    v62.fields.x = v14 + v62.fields.x;
    v62.fields.y = v26 + v62.fields.y;
    v62.fields.z = v13 + v62.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v27, v62, 0);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleMainMessageLabel;
    if ( !mainMessageLabel )
LABEL_58:
      sub_1C32E7C(mainMessageLabel);
  }
  mainMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0);
  if ( !mainMessageLabel )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainMessageLabel, 0, 0);
  if ( isNoDetailTitle )
  {
    noTitleDetailMessageLabel = this->fields.noTitleDetailMessageLabel;
    mainMessageLabel = (UnityEngine_Component_o *)noTitleDetailMessageLabel;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleDetailMessageLabel;
    }
    if ( !mainMessageLabel )
      goto LABEL_58;
    v30 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->NoTitleDetailMessageBasePos.fields.y;
    v31 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0);
    v63 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v31,
            script,
            (System_String_o *)StringLiteral_18600/*"detailMsgOffset"*/,
            v32);
    v63.fields.x = x + v63.fields.x;
    v63.fields.y = v30 + v63.fields.y;
    v63.fields.z = z + v63.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v31, v63, 0);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.detailMessageLabel;
    if ( !mainMessageLabel )
      goto LABEL_58;
  }
  else
  {
    noTitleDetailMessageLabel = this->fields.detailMessageLabel;
    mainMessageLabel = (UnityEngine_Component_o *)noTitleDetailMessageLabel;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      mainMessageLabel = (UnityEngine_Component_o *)this->fields.detailMessageLabel;
    }
    if ( !mainMessageLabel )
      goto LABEL_58;
    v33 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageBasePos.fields.y;
    v34 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0);
    v64 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v34,
            script,
            (System_String_o *)StringLiteral_18600/*"detailMsgOffset"*/,
            v35);
    v64.fields.x = x + v64.fields.x;
    v64.fields.y = v33 + v64.fields.y;
    v64.fields.z = z + v64.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v34, v64, 0);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleDetailMessageLabel;
    if ( !mainMessageLabel )
      goto LABEL_58;
  }
  mainMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0);
  if ( !mainMessageLabel )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainMessageLabel, 0, 0);
  mainMessageLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
  if ( !noTitleDetailMessageLabel )
    goto LABEL_58;
  UIWidget__set_height(
    (UIWidget_o *)noTitleDetailMessageLabel,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageBaseHeight,
    0);
  result = 2;
  StringFromScript = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                       v36,
                       script,
                       (System_String_o *)StringLiteral_21392/*"mainMsgAlignment"*/,
                       v37);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  mainMessageLabel = (UnityEngine_Component_o *)System_Enum__TryParse_Int32Enum_(
                                                  StringFromScript,
                                                  &result,
                                                  (const MethodInfo_30E3F34 *)Method_System_Enum_TryParse_NGUIText_Alignment___);
  if ( ((unsigned __int8)mainMessageLabel & 1) != 0 )
  {
    if ( !noTitleMainMessageLabel )
      goto LABEL_58;
    UILabel__set_alignment(noTitleMainMessageLabel, result, 0);
  }
  v40 = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
          (MessageAndScrollDetailConfirmDialog_o *)mainMessageLabel,
          script,
          (System_String_o *)StringLiteral_18598/*"detailMsgAlignment"*/,
          v39);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( System_Enum__TryParse_Int32Enum_(
         v40,
         &result,
         (const MethodInfo_30E3F34 *)Method_System_Enum_TryParse_NGUIText_Alignment___) )
  {
    UILabel__set_alignment(noTitleDetailMessageLabel, result, 0);
  }
  v41 = System_String__op_Inequality(mainMessage, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( !v41 )
    mainMessage = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                    (MessageAndScrollDetailConfirmDialog_o *)v41,
                    script,
                    (System_String_o *)StringLiteral_21391/*"mainMsg"*/,
                    v42);
  if ( mainMessage )
  {
    Empty = System_String__Trim_63574704(mainMessage, 0xAu, 0);
    if ( detailMessage )
    {
LABEL_41:
      v44 = System_String__Trim_63574704(detailMessage, 0xAu, 0);
      goto LABEL_44;
    }
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( detailMessage )
      goto LABEL_41;
  }
  v44 = string_TypeInfo->static_fields->Empty;
LABEL_44:
  mainMessageLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
  if ( !noTitleMainMessageLabel )
    goto LABEL_58;
  UILabel__set_fontSize(
    noTitleMainMessageLabel,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageFontSize,
    0);
  UILabel__set_maxLineCount(noTitleMainMessageLabel, maxLine, 0);
  IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                    v45,
                    script,
                    (System_String_o *)StringLiteral_21395/*"mainMsgSpacingY"*/,
                    v46);
  UILabel__set_spacingY(noTitleMainMessageLabel, IntFromScript, 0);
  v48 = (MessageAndScrollDetailConfirmDialog_o *)WrapControlText__textAdjust(
                                                   noTitleMainMessageLabel,
                                                   Empty,
                                                   noTitleMainMessageLabel->fields.mFontSize,
                                                   MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageFontSize,
                                                   0);
  MainMessageFontSize = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                          v48,
                          script,
                          (System_String_o *)StringLiteral_21393/*"mainMsgFontSize"*/,
                          v49);
  if ( MainMessageFontSize <= 0 )
  {
    v51 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v51 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    MainMessageFontSize = v51->static_fields->MainMessageFontSize;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, MainMessageFontSize, 0);
  v52 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v52 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v52->static_fields->DetailMessageFontSize, 0);
  v55 = MessageAndScrollDetailConfirmDialog__GetIntFromScript(v53, script, (System_String_o *)StringLiteral_18601/*"detailMsgSpacingY"*/, v54);
  UILabel__set_spacingY(noTitleDetailMessageLabel, v55, 0);
  v56 = (MessageAndScrollDetailConfirmDialog_o *)WrapControlText__textAdjust(
                                                   noTitleDetailMessageLabel,
                                                   v44,
                                                   noTitleDetailMessageLabel->fields.mFontSize,
                                                   MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageFontSize,
                                                   0);
  DetailMessageFontSize = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                            v56,
                            script,
                            (System_String_o *)StringLiteral_18599/*"detailMsgFontSize"*/,
                            v57);
  if ( DetailMessageFontSize <= 0 )
  {
    v59 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v59 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    DetailMessageFontSize = v59->static_fields->DetailMessageFontSize;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, DetailMessageFontSize, 0);
  UILabel__set_overflowMethod(noTitleDetailMessageLabel, 3, 0);
}


void MessageAndScrollDetailConfirmDialog__Awake(MessageAndScrollDetailConfirmDialog_o *this, const MethodInfo *method)
{
  ;
}


void MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByGachaId(
        MessageAndScrollDetailConfirmDialog_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  TerminalPramsManager_c *v4; // x0
  Il2CppObject *Master_object; // x0
  int32_t klass; // w19
  TerminalPramsManager_c *v7; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3AC32 & 1) == 0 )
  {
    sub_1C32C20(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C3AC32 = 1;
  }
  entity = 0;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_4C33F3A )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C33F3A = 1;
  }
  v4 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v4 = TerminalPramsManager_TypeInfo;
  }
  v4->static_fields->_SummonType_k__BackingField = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    gachaId,
                                    (const MethodInfo_3396884 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    klass = (int32_t)entity[3].klass;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_4C33F3A )
    {
      sub_1C32C20(&TerminalPramsManager_TypeInfo);
      byte_4C33F3A = 1;
    }
    v7 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v7 = TerminalPramsManager_TypeInfo;
    }
    v7->static_fields->_SummonType_k__BackingField = klass;
  }
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Master_object )
LABEL_23:
    sub_1C32E7C(Master_object);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 20, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByLinkInfo(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_String_array *linkInfo,
        const MethodInfo *method)
{
  struct System_Threading_CancellationTokenSource_o *m_CancellationTokenSource; // x8
  int32_t v4; // w1
  int32_t result; // [xsp+Ch] [xbp-4h] BYREF

  result = 0;
  if ( !linkInfo )
    goto LABEL_10;
  if ( SLODWORD(linkInfo->max_length) < 2 )
  {
LABEL_8:
    v4 = 0;
    goto LABEL_9;
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)linkInfo->m_Items[1];
  if ( !this
    || (this = (MessageAndScrollDetailConfirmDialog_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0)) == 0 )
  {
LABEL_10:
    sub_1C32E7C(this);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_8;
  if ( !(_DWORD)m_CancellationTokenSource )
    sub_1C32E84(this);
  this = (MessageAndScrollDetailConfirmDialog_o *)System_Int32__TryParse(
                                                    (System_String_o *)this->fields.basePanel,
                                                    &result,
                                                    0);
  v4 = result;
LABEL_9:
  MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByGachaId(this, v4, method);
}


void MessageAndScrollDetailConfirmDialog__Close(MessageAndScrollDetailConfirmDialog_o *this, const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MessageAndScrollDetailConfirmDialog__Close_46966268(this, 0, v2);
}


void MessageAndScrollDetailConfirmDialog__CloseFuncDialog(
        MessageAndScrollDetailConfirmDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *closeNotificationCallback; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  __int64 v8; // x21
  TerminalPramsManager_c *v9; // x0
  CGThumbnailListItem_o *p_TransitionScrollTabName_k__BackingField; // x0
  const MethodInfo *v11; // x2

  if ( (byte_4C3AC2C & 1) == 0 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3AC2C = 1;
  }
  closeNotificationCallback = this->fields.closeNotificationCallback;
  this->fields.closeNotificationCallback = 0;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeNotificationCallback, 0, (int32_t)method, v3);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v8 = StringLiteral_1/*""*/;
  if ( !byte_4C319B9 )
  {
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    byte_4C319B9 = 1;
  }
  v9 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v9 = TerminalPramsManager_TypeInfo;
  }
  p_TransitionScrollTabName_k__BackingField = (CGThumbnailListItem_o *)&v9->static_fields->_TransitionScrollTabName_k__BackingField;
  p_TransitionScrollTabName_k__BackingField->klass = (CGThumbnailListItem_c *)v8;
  sub_1C32BC4(p_TransitionScrollTabName_k__BackingField, v8, v6, v7);
  MessageAndScrollDetailConfirmDialog__Close_46966268(this, closeNotificationCallback, v11);
}


void MessageAndScrollDetailConfirmDialog__Close_46966268(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  System_Action_o *v6; // x20

  if ( (byte_4C3AC37 & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog_EndClose__);
    byte_4C3AC37 = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v6 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v6, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndClose__, 0);
  BaseDialog__Close((BaseDialog_o *)this, v6, 0);
}


void MessageAndScrollDetailConfirmDialog__DeicedFuncDialog(
        MessageAndScrollDetailConfirmDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  CGThumbnailListItem_o *p_decideNotificationCallback; // x0
  System_Action_o *decideNotificationCallback; // t1
  const MethodInfo *v7; // x2

  decideNotificationCallback = this->fields.decideNotificationCallback;
  p_decideNotificationCallback = (CGThumbnailListItem_o *)&this->fields.decideNotificationCallback;
  p_decideNotificationCallback->klass = 0;
  sub_1C32BC4(p_decideNotificationCallback, 0, (int32_t)method, v3);
  MessageAndScrollDetailConfirmDialog__Close_46966268(this, decideNotificationCallback, v7);
}


void MessageAndScrollDetailConfirmDialog__EndClose(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  int32_t v3; // w2
  const MethodInfo *v4; // x3
  CGThumbnailListItem_o *p_closeEndFunc; // x19
  struct System_Action_o *v6; // x20
  struct System_Action_o *closeEndFunc; // t1

  MessageAndScrollDetailConfirmDialog__Init(this, method);
  closeEndFunc = this->fields.closeEndFunc;
  p_closeEndFunc = (CGThumbnailListItem_o *)&this->fields.closeEndFunc;
  v6 = closeEndFunc;
  if ( closeEndFunc )
  {
    p_closeEndFunc->klass = 0;
    sub_1C32BC4(p_closeEndFunc, 0, v3, v4);
    ((void (__fastcall *)(intptr_t, intptr_t))v6->fields.invoke_impl)(v6->fields.method_code, v6->fields.method);
  }
}


void MessageAndScrollDetailConfirmDialog__EndOpen(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


int32_t MessageAndScrollDetailConfirmDialog__GetIntFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *v6; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3AC36 & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    byte_4C3AC36 = 1;
  }
  value = 0;
  if ( !script )
    sub_1C32E7C(this);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v6 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v6, 0);
}


System_String_o *MessageAndScrollDetailConfirmDialog__GetStringFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4C3AC35 & 1) == 0 )
  {
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&string_TypeInfo);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3AC35 = 1;
  }
  value = 0;
  if ( !script )
    sub_1C32E7C(this);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !value )
    return 0;
  if ( (System_String_c *)value->klass == string_TypeInfo )
    return (System_String_o *)value;
  return 0;
}


System_String_array *MessageAndScrollDetailConfirmDialog__GetTransitionParam(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  System_String_o *StringValue; // x0

  if ( (byte_4C3AC33 & 1) == 0 )
  {
    sub_1C32C20(&string_TypeInfo);
    sub_1C32C20(&StringLiteral_24181/*"transitionParam"*/);
    byte_4C3AC33 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  script,
                  (System_String_o *)StringLiteral_24181/*"transitionParam"*/,
                  string_TypeInfo->static_fields->Empty,
                  0);
  if ( !StringValue )
    sub_1C32E7C(0);
  return System_String__Split(StringValue, 0x2Fu, 0, 0);
}


UnityEngine_Vector3_o MessageAndScrollDetailConfirmDialog__GetVecFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
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
  Il2CppObject *Item; // x20
  double v13; // d8
  Il2CppObject *v14; // x0
  double v15; // d1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF
  UnityEngine_Vector3_o result; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4C3AC34 & 1) == 0 )
  {
    sub_1C32C20(&System_Convert_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Count__);
    sub_1C32C20(&Method_System_Collections_Generic_List_object__get_Item__);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1C32C20(&System_Collections_Generic_List_object__TypeInfo);
    byte_4C3AC34 = 1;
  }
  value = 0;
  if ( !script )
    sub_1C32E7C(this);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_345A5D4 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v6 = value) != 0
    && (naturalAligment = System_Collections_Generic_List_object__TypeInfo->_2.naturalAligment,
        value->klass->_2.naturalAligment >= (unsigned int)naturalAligment)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[naturalAligment - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v13 = System_Convert__ToDouble(Item, 0);
    v14 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v6,
            1,
            (const MethodInfo_37984EC *)Method_System_Collections_Generic_List_object__get_Item__);
    v15 = System_Convert__ToDouble(v14, 0);
    x = v13;
    y = v15;
    z = 0.0;
  }
  else
  {
    if ( !byte_4C313D1 )
    {
      sub_1C32C20(&UnityEngine_Vector3_TypeInfo);
      byte_4C313D1 = 1;
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


void MessageAndScrollDetailConfirmDialog__Init(MessageAndScrollDetailConfirmDialog_o *this, const MethodInfo *method)
{
  UILabel_o *mainTitleLabel; // x0

  if ( (byte_4C3AC27 & 1) == 0 )
  {
    sub_1C32C20(&StringLiteral_1/*""*/);
    byte_4C3AC27 = 1;
  }
  if ( !this->fields.refuseInit )
  {
    mainTitleLabel = this->fields.mainTitleLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    mainTitleLabel = this->fields.mainMessageLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    mainTitleLabel = this->fields.noTitleMainMessageLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    mainTitleLabel = this->fields.detailTitleLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    mainTitleLabel = this->fields.detailMessageLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0);
    mainTitleLabel = this->fields.noTitleDetailMessageLabel;
    if ( !mainTitleLabel
      || (UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
          (mainTitleLabel = this->fields.okBtnLabel) == 0)
      || (UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
          (mainTitleLabel = this->fields.decideBtnLabel) == 0)
      || (UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0),
          (mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0)) == 0) )
    {
LABEL_14:
      sub_1C32E7C(mainTitleLabel);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 0, 0);
    BaseDialog__Init((BaseDialog_o *)this, 0);
  }
}


void MessageAndScrollDetailConfirmDialog__OnClickDecide(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct MessageAndScrollDetailConfirmDialog_ClickDelegate_o *clickDecideBtnFunc; // x8

  if ( (byte_4C3AC39 & 1) == 0 )
  {
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__);
    byte_4C3AC39 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0, 0);
    clickDecideBtnFunc = this->fields.clickDecideBtnFunc;
    if ( clickDecideBtnFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickDecideBtnFunc->fields.invoke_impl)(
        clickDecideBtnFunc->fields.method_code,
        1,
        clickDecideBtnFunc->fields.method);
  }
}


void MessageAndScrollDetailConfirmDialog__OnClickOk(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct MessageAndScrollDetailConfirmDialog_ClickDelegate_o *clickOkBtnFunc; // x8

  if ( (byte_4C3AC38 & 1) == 0 )
  {
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog_OnClickOk__);
    byte_4C3AC38 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MessageAndScrollDetailConfirmDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_MessageAndScrollDetailConfirmDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1C32C38(Method_MessageAndScrollDetailConfirmDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1C32C04(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0, 0);
    clickOkBtnFunc = this->fields.clickOkBtnFunc;
    if ( clickOkBtnFunc )
      ((void (__fastcall *)(intptr_t, __int64, intptr_t))clickOkBtnFunc->fields.invoke_impl)(
        clickOkBtnFunc->fields.method_code,
        1,
        clickOkBtnFunc->fields.method);
  }
}


void MessageAndScrollDetailConfirmDialog__Open(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_String_o *mainTitle,
        System_String_o *mainMessage,
        System_String_o *detailTitle,
        System_String_o *detailMessage,
        System_Action_o *func,
        System_Collections_Generic_Dictionary_string__object__o *script,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t mainTitleSize,
        int32_t detailTitleSize,
        bool canMaskTouchClose,
        int32_t onClickOkSe,
        const MethodInfo *method)
{
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v20; // x26
  const MethodInfo *v21; // x3
  const MethodInfo *v22; // [xsp+30h] [xbp-80h]

  if ( (byte_4C3AC28 & 1) == 0 )
  {
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__);
    byte_4C3AC28 = 1;
  }
  this->fields.closeNotificationCallback = func;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.closeNotificationCallback,
    (int32_t)func,
    (int32_t)mainMessage,
    (const MethodInfo *)detailTitle);
  v20 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1C32E6C(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
  MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
    v20,
    (Il2CppObject *)this,
    Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__,
    v21);
  MessageAndScrollDetailConfirmDialog__OpenDialog_46952204(
    this,
    mainTitle,
    mainMessage,
    detailTitle,
    detailMessage,
    v20,
    script,
    panelDepth,
    maxLine,
    mainTitleSize,
    detailTitleSize,
    canMaskTouchClose,
    this->fields.onClickOkSeKind,
    8,
    v22);
}


void MessageAndScrollDetailConfirmDialog__OpenDialog(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_String_o *mainTitle,
        System_String_o *mainMessage,
        System_String_o *detailTitle,
        System_String_o *detailMessage,
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *okFunc,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t mainTitleFontSize,
        int32_t detailTitleFontSize,
        int32_t mainMsgFontSize,
        int32_t detailMsgFontSize,
        System_Nullable_float__o mainTitlePosY,
        System_Nullable_float__o detailTitlePosY,
        int32_t mainMsgAlignment,
        int32_t detailMsgAlignment,
        bool canMaskTouchClose,
        System_String_o *cancelBtnLabelName,
        System_String_o *decideBtnLabelName,
        System_Nullable_int__o inputCancelBtnWidth,
        System_Nullable_int__o inputDecideBtnWidth,
        int32_t onClickOkSe,
        int32_t onClickDecideSe,
        const MethodInfo *method)
{
  int32_t v24; // w25
  int32_t v25; // w26
  UIPanel_o *TargetPanel; // x0
  int32_t v31; // w2
  const MethodInfo *v32; // x3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v34; // x23
  UILabel_o *mainTitleLabel; // x0
  MessageAndScrollDetailConfirmDialog_c *v36; // x0
  MessageAndScrollDetailConfirmDialog_c *v37; // x0
  System_String_o *v38; // x21
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x8
  float x; // s9
  float z; // s8
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  MessageAndScrollDetailConfirmDialog_c *v44; // x0
  MessageAndScrollDetailConfirmDialog_c *v45; // x0
  System_String_o *v46; // x25
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v47; // x8
  float v48; // s9
  float v49; // s8
  float y; // s0
  UnityEngine_GameObject_o *v51; // x0
  bool IsNullOrEmpty; // w20
  bool v53; // w0
  UnityEngine_Object_o *okBtnLabel; // x20
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v55; // x20
  const MethodInfo *v56; // x3
  int32_t v57; // w2
  const MethodInfo *v58; // x3
  UILabel_o *v59; // x20
  UnityEngine_GameObject_o *v60; // x0
  MessageAndScrollDetailConfirmDialog_c *v61; // x8
  UnityEngine_GameObject_o *v62; // x20
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v63; // x10
  System_Nullable_int__o v64; // x21
  System_Nullable_int__o v65; // x24
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  UILabel_o *v69; // x20
  UnityEngine_GameObject_o *v70; // x0
  MessageAndScrollDetailConfirmDialog_c *v71; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v72; // x10
  System_Nullable_int__o v73; // x1
  System_Nullable_int__o v74; // x2
  const MethodInfo *v75; // x3
  int32_t keepPanelDepth; // w1
  UnityEngine_Object_o *v77; // x20
  uint32_t cctor_finished; // w9
  UnityEngine_Object_o *v79; // x20
  struct UnityEngine_GameObject_o *v80; // x0
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  int32_t v83; // w1
  struct UnityEngine_GameObject_o **p_closeButton; // x0
  UnityEngine_GameObject_o *v85; // x0
  System_Action_o *v86; // x20
  const MethodInfo *v87; // [xsp+10h] [xbp-E0h]
  float v; // [xsp+7Ch] [xbp-74h]
  float va; // [xsp+7Ch] [xbp-74h]
  UnityEngine_Vector3_o v94; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v95; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v96; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v97; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v98; // 0:s3.4,4:s4.4,8:s5.4

  v24 = detailTitleFontSize;
  v25 = mainTitleFontSize;
  if ( (byte_4C3AC2A & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog_EndOpen__);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_1C32C20(&Method_System_Nullable_float__GetValueOrDefault__);
    sub_1C32C20(&Method_System_Nullable_float__get_HasValue__);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_15650/*"Window/OkBtn"*/);
    byte_4C3AC2A = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v34 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  this->fields.onClickDecideSeKind = onClickDecideSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0, 0);
    if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
    {
      if ( !v34 )
        goto LABEL_92;
      this->fields.keepPanelDepth = v34->fields.mDepth;
    }
  }
  this->fields.clickOkBtnFunc = okFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.clickOkBtnFunc, (int32_t)okFunc, v31, v32);
  if ( mainTitleFontSize <= 0 )
  {
    v36 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v36 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    v25 = v36->static_fields->MainTitleFontSize;
  }
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_fontSize(mainTitleLabel, v25, 0);
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_text(mainTitleLabel, mainTitle, 0);
  v37 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v38 = detailTitle;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v37 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  static_fields = v37->static_fields;
  x = static_fields->MainTitleBasePos.fields.x;
  z = static_fields->MainTitleBasePos.fields.z;
  if ( mainTitlePosY.fields.hasValue )
  {
    value = mainTitlePosY.fields.value;
  }
  else
  {
    if ( !v37->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v37);
      static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
    }
    value = static_fields->MainTitleBasePos.fields.y;
  }
  v = value;
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0);
  v94.fields.y = v;
  v94.fields.x = x;
  v94.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v94, 0);
  if ( detailTitleFontSize <= 0 )
  {
    v44 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v44 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    v24 = v44->static_fields->DetailTitleFontSize;
  }
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_fontSize(mainTitleLabel, v24, 0);
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_text(mainTitleLabel, detailTitle, 0);
  v45 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v46 = cancelBtnLabelName;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v45 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  v47 = v45->static_fields;
  v48 = v47->DetailTitleBasePos.fields.x;
  v49 = v47->DetailTitleBasePos.fields.z;
  if ( detailTitlePosY.fields.hasValue )
  {
    y = detailTitlePosY.fields.value;
  }
  else
  {
    if ( !v45->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v45);
      v47 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
    }
    y = v47->DetailTitleBasePos.fields.y;
  }
  va = y;
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
LABEL_92:
    sub_1C32E7C(mainTitleLabel);
  v51 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0);
  v95.fields.y = va;
  v95.fields.x = v48;
  v95.fields.z = v49;
  GameObjectExtensions__SetLocalPosition(v51, v95, 0);
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
  IsNullOrEmpty = System_String__IsNullOrEmpty(mainTitle, 0);
  v53 = System_String__IsNullOrEmpty(v38, 0);
  MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel(
    this,
    IsNullOrEmpty,
    v53,
    mainMessage,
    detailMessage,
    mainMsgFontSize,
    detailMsgFontSize,
    maxLine,
    v96,
    v98,
    mainMsgAlignment,
    detailMsgAlignment,
    v87);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0) )
  {
    if ( System_String__op_Inequality(decideBtnLabelName, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      mainTitleLabel = (UILabel_o *)this->fields.decideBtn;
      if ( !mainTitleLabel )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 1, 0);
      mainTitleLabel = this->fields.decideBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      UILabel__set_text(mainTitleLabel, decideBtnLabelName, 0);
      v55 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1C32E6C(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
      MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        v55,
        (Il2CppObject *)this,
        Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__,
        v56);
      this->fields.clickDecideBtnFunc = v55;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.clickDecideBtnFunc, (int32_t)v55, v57, v58);
      v59 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(
                                      cancelBtnLabelName,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
        v46 = (System_String_o *)mainTitleLabel;
      }
      if ( !v59 )
        goto LABEL_92;
      UILabel__set_text(v59, v46, 0);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v60 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0);
      v61 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v62 = v60;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v61 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v63 = v61->static_fields;
      v65 = inputCancelBtnWidth;
      v64 = inputDecideBtnWidth;
      p_x = &v63->OkButtonBasePosTypeTwoAlternative.fields.x;
      p_y = &v63->OkButtonBasePosTypeTwoAlternative.fields.y;
      p_z = &v63->OkButtonBasePosTypeTwoAlternative.fields.z;
    }
    else
    {
      v69 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(
                                      cancelBtnLabelName,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
        v46 = (System_String_o *)mainTitleLabel;
      }
      if ( !v69 )
        goto LABEL_92;
      UILabel__set_text(v69, v46, 0);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v70 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0);
      v71 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v62 = v70;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v71 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v72 = v71->static_fields;
      v65 = inputCancelBtnWidth;
      v64 = inputDecideBtnWidth;
      p_x = &v72->OkButtonBasePos.fields.x;
      p_y = &v72->OkButtonBasePos.fields.y;
      p_z = &v72->OkButtonBasePos.fields.z;
    }
    v97.fields.y = *p_y;
    v97.fields.x = *p_x;
    v97.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(v62, v97, 0);
    v73 = v65;
    v74 = v64;
    MessageAndScrollDetailConfirmDialog__AdjustBtnSize(this, v73, v74, v75);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v34, 0, 0);
  if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
  {
    keepPanelDepth = panelDepth;
    if ( panelDepth < 0 )
      keepPanelDepth = this->fields.keepPanelDepth;
    if ( !v34 )
      goto LABEL_92;
    UIPanel__set_depth(v34, keepPanelDepth, 0);
  }
  mainTitleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UIScrollView__ResetPosition((UIScrollView_o *)mainTitleLabel, 0);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  v77 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                  this,
                                  this->klass->vtable._4_get_closeBtnObject.method);
  cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
  if ( canMaskTouchClose )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v77, 0, 0) )
    {
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v79 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)mainTitleLabel,
                                      (System_String_o *)StringLiteral_15650/*"Window/OkBtn"*/,
                                      0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(v79, 0, 0);
      if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
      {
        if ( v79 )
        {
          v80 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v79, 0);
          v83 = (int)v80;
          this->fields.closeButton = v80;
          p_closeButton = &this->fields.closeButton;
LABEL_90:
          sub_1C32BC4((CGThumbnailListItem_o *)p_closeButton, v83, v81, v82);
          goto LABEL_91;
        }
        goto LABEL_92;
      }
    }
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v77, 0, 0) )
    {
      v85 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                          this,
                                          this->klass->vtable._4_get_closeBtnObject.method);
      AndroidBackKeyManager__RemoveBackBtn(v85, 0);
      this->fields.closeButton = 0;
      p_closeButton = &this->fields.closeButton;
      v83 = 0;
      goto LABEL_90;
    }
  }
LABEL_91:
  v86 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v86, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v86, 0, 0, 0);
}


void MessageAndScrollDetailConfirmDialog__OpenDialog_46952204(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_String_o *mainTitle,
        System_String_o *mainMessage,
        System_String_o *detailTitle,
        System_String_o *detailMessage,
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *okFunc,
        System_Collections_Generic_Dictionary_string__object__o *script,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t mainTitleFontSize,
        int32_t detailTitleFontSize,
        bool canMaskTouchClose,
        int32_t onClickOkSe,
        int32_t onClickDecideSe,
        const MethodInfo *method)
{
  UIPanel_o *TargetPanel; // x0
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v24; // x22
  UILabel_o *mainTitleLabel; // x0
  MessageAndScrollDetailConfirmDialog_o *v26; // x0
  const MethodInfo *v27; // x3
  int IntFromScript; // w28
  MessageAndScrollDetailConfirmDialog_c *v29; // x0
  UILabel_o *v30; // x29
  const MethodInfo *v31; // x3
  MessageAndScrollDetailConfirmDialog_o *gameObject; // x0
  const MethodInfo *v33; // x3
  MessageAndScrollDetailConfirmDialog_c *v34; // x8
  UnityEngine_GameObject_o *v35; // x27
  float *p_x; // x8
  float v37; // s8
  float v38; // s9
  float v39; // s10
  MessageAndScrollDetailConfirmDialog_o *v40; // x0
  const MethodInfo *v41; // x3
  MessageAndScrollDetailConfirmDialog_c *v42; // x0
  UILabel_o *detailTitleLabel; // x27
  const MethodInfo *v44; // x3
  MessageAndScrollDetailConfirmDialog_o *v45; // x0
  const MethodInfo *v46; // x3
  MessageAndScrollDetailConfirmDialog_c *v47; // x8
  UnityEngine_GameObject_o *v48; // x26
  float *v49; // x8
  float v50; // s8
  float v51; // s9
  float v52; // s10
  struct UILabel_o *v53; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  float v58; // s11
  float v59; // s12
  float v60; // s13
  struct UILabel_o *v61; // x8
  char v62; // w26
  bool IsNullOrEmpty; // w0
  const MethodInfo *v64; // x7
  UnityEngine_Object_o *okBtnLabel; // x23
  _BOOL8 v66; // x0
  const MethodInfo *v67; // x3
  MessageAndScrollDetailConfirmDialog_o *StringFromScript; // x24
  const MethodInfo *v69; // x3
  System_String_o *v70; // x23
  MessageAndScrollDetailConfirmDialog_o *v71; // x0
  const MethodInfo *v72; // x3
  UILabel_o *decideBtnLabel; // x24
  int32_t data_high; // w1
  const MethodInfo *v75; // x2
  struct System_Action_o *v76; // x0
  int32_t v77; // w2
  const MethodInfo *v78; // x3
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v79; // x24
  const MethodInfo *v80; // x3
  int32_t v81; // w2
  const MethodInfo *v82; // x3
  UILabel_o *v83; // x24
  MessageAndScrollDetailConfirmDialog_o *v84; // x0
  const MethodInfo *v85; // x3
  MessageAndScrollDetailConfirmDialog_c *v86; // x8
  UnityEngine_GameObject_o *v87; // x23
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v88; // x10
  float *v89; // x8
  float *p_y; // x9
  float *p_z; // x10
  UILabel_o *v92; // x24
  MessageAndScrollDetailConfirmDialog_c *v93; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v94; // x10
  float v95; // s9
  float v96; // s8
  float v97; // s10
  MessageAndScrollDetailConfirmDialog_o *v98; // x0
  const MethodInfo *v99; // x3
  UILabel_o *v100; // x23
  int32_t data; // w1
  const MethodInfo *v102; // x2
  int32_t keepPanelDepth; // w1
  UnityEngine_Object_o *v104; // x20
  uint32_t cctor_finished; // w9
  UnityEngine_Object_o *v106; // x20
  struct UnityEngine_GameObject_o *v107; // x0
  int32_t v108; // w2
  const MethodInfo *v109; // x3
  int32_t v110; // w1
  struct UnityEngine_GameObject_o **p_closeButton; // x0
  UnityEngine_GameObject_o *v112; // x0
  System_Action_o *v113; // x20
  UnityEngine_Vector3_o VecFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v118; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v119; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v120; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v121; // 0:s3.4,4:s4.4,8:s5.4

  if ( (byte_4C3AC2B & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog_EndOpen__);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog_TypeInfo);
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    sub_1C32C20(&StringLiteral_21399/*"mainTitleFontSize"*/);
    sub_1C32C20(&StringLiteral_18516/*"decideBtnFontSize"*/);
    sub_1C32C20(&StringLiteral_18603/*"detailTitleFontSize"*/);
    sub_1C32C20(&StringLiteral_18602/*"detailTitle"*/);
    sub_1C32C20(&StringLiteral_21398/*"mainTitle"*/);
    sub_1C32C20(&StringLiteral_18604/*"detailTitleOffset"*/);
    sub_1C32C20(&StringLiteral_17719/*"cancelBtnFontSize"*/);
    sub_1C32C20(&StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/);
    sub_1C32C20(&StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/);
    sub_1C32C20(&StringLiteral_18517/*"decideBtnLabel"*/);
    sub_1C32C20(&StringLiteral_17720/*"cancelBtnLabel"*/);
    sub_1C32C20(&StringLiteral_17637/*"buttonOffset"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_15650/*"Window/OkBtn"*/);
    sub_1C32C20(&StringLiteral_21400/*"mainTitleOffset"*/);
    byte_4C3AC2B = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v24 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  this->fields.onClickDecideSeKind = onClickDecideSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0, 0);
    if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
    {
      if ( !v24 )
        goto LABEL_99;
      this->fields.keepPanelDepth = v24->fields.mDepth;
    }
  }
  this->fields.clickOkBtnFunc = okFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.clickOkBtnFunc, (int32_t)okFunc, v21, v22);
  if ( mainTitleFontSize )
  {
    IntFromScript = 0;
  }
  else
  {
    IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                      v26,
                      script,
                      (System_String_o *)StringLiteral_21399/*"mainTitleFontSize"*/,
                      v27);
    if ( IntFromScript <= 0 )
    {
      v29 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v29 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      IntFromScript = v29->static_fields->MainTitleFontSize;
    }
  }
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UILabel__set_fontSize(mainTitleLabel, IntFromScript, 0);
  v30 = this->fields.mainTitleLabel;
  mainTitleLabel = (UILabel_o *)System_String__op_Inequality(mainTitle, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
  {
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                    (MessageAndScrollDetailConfirmDialog_o *)mainTitleLabel,
                                    script,
                                    (System_String_o *)StringLiteral_21398/*"mainTitle"*/,
                                    v31);
    mainTitle = (System_String_o *)mainTitleLabel;
  }
  if ( !v30 )
    goto LABEL_99;
  UILabel__set_text(v30, mainTitle, 0);
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  gameObject = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)mainTitleLabel,
                                                          0);
  v34 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v35 = (UnityEngine_GameObject_o *)gameObject;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v34 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  p_x = &v34->static_fields->MainTitleBasePos.fields.x;
  v37 = *p_x;
  v38 = p_x[1];
  v39 = p_x[2];
  VecFromScript = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
                    gameObject,
                    script,
                    (System_String_o *)StringLiteral_21400/*"mainTitleOffset"*/,
                    v33);
  VecFromScript.fields.x = v37 + VecFromScript.fields.x;
  VecFromScript.fields.y = v38 + VecFromScript.fields.y;
  VecFromScript.fields.z = v39 + VecFromScript.fields.z;
  GameObjectExtensions__SetLocalPosition(v35, VecFromScript, 0);
  if ( !detailTitleFontSize )
  {
    IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                      v40,
                      script,
                      (System_String_o *)StringLiteral_18603/*"detailTitleFontSize"*/,
                      v41);
    if ( IntFromScript <= 0 )
    {
      v42 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v42 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      IntFromScript = v42->static_fields->DetailTitleFontSize;
    }
  }
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UILabel__set_fontSize(mainTitleLabel, IntFromScript, 0);
  detailTitleLabel = this->fields.detailTitleLabel;
  mainTitleLabel = (UILabel_o *)System_String__op_Inequality(detailTitle, (System_String_o *)StringLiteral_1/*""*/, 0);
  if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
  {
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                    (MessageAndScrollDetailConfirmDialog_o *)mainTitleLabel,
                                    script,
                                    (System_String_o *)StringLiteral_18602/*"detailTitle"*/,
                                    v44);
    detailTitle = (System_String_o *)mainTitleLabel;
  }
  if ( !detailTitleLabel )
    goto LABEL_99;
  UILabel__set_text(detailTitleLabel, detailTitle, 0);
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  v45 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mainTitleLabel,
                                                   0);
  v47 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v48 = (UnityEngine_GameObject_o *)v45;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v47 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  v49 = &v47->static_fields->MainTitleBasePos.fields.x;
  v50 = v49[9];
  v51 = v49[10];
  v52 = v49[11];
  v118 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(v45, script, (System_String_o *)StringLiteral_18604/*"detailTitleOffset"*/, v46);
  v118.fields.x = v50 + v118.fields.x;
  v118.fields.y = v51 + v118.fields.y;
  v118.fields.z = v52 + v118.fields.z;
  GameObjectExtensions__SetLocalPosition(v48, v118, 0);
  v53 = this->fields.mainTitleLabel;
  if ( !v53 )
    goto LABEL_99;
  static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  x = static_fields->MainMessageBasePos.fields.x;
  y = static_fields->MainMessageBasePos.fields.y;
  z = static_fields->MainMessageBasePos.fields.z;
  v58 = static_fields->DetailMessageBasePos.fields.x;
  v59 = static_fields->DetailMessageBasePos.fields.y;
  v60 = static_fields->DetailMessageBasePos.fields.z;
  mainTitleLabel = (UILabel_o *)System_String__IsNullOrEmpty(v53->fields.mText, 0);
  v61 = this->fields.detailTitleLabel;
  if ( !v61 )
LABEL_99:
    sub_1C32E7C(mainTitleLabel);
  v62 = (char)mainTitleLabel;
  IsNullOrEmpty = System_String__IsNullOrEmpty(v61->fields.mText, 0);
  v119.fields.x = x;
  v119.fields.y = y;
  v119.fields.z = z;
  v121.fields.x = v58;
  v121.fields.y = v59;
  v121.fields.z = v60;
  MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel_46959584(
    this,
    v62 & 1,
    IsNullOrEmpty,
    mainMessage,
    detailMessage,
    maxLine,
    v119,
    v121,
    script,
    v64);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v66 = UnityEngine_Object__op_Inequality(okBtnLabel, 0, 0);
  if ( v66 )
  {
    StringFromScript = (MessageAndScrollDetailConfirmDialog_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                                                  (MessageAndScrollDetailConfirmDialog_o *)v66,
                                                                  script,
                                                                  (System_String_o *)StringLiteral_18517/*"decideBtnLabel"*/,
                                                                  v67);
    v70 = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
            StringFromScript,
            script,
            (System_String_o *)StringLiteral_17720/*"cancelBtnLabel"*/,
            v69);
    if ( System_String__op_Inequality((System_String_o *)StringFromScript, (System_String_o *)StringLiteral_1/*""*/, 0) )
    {
      mainTitleLabel = (UILabel_o *)this->fields.decideBtn;
      if ( !mainTitleLabel )
        goto LABEL_99;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 1, 0);
      mainTitleLabel = this->fields.decideBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      UILabel__set_text(mainTitleLabel, (System_String_o *)StringFromScript, 0);
      mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                      v71,
                                      script,
                                      (System_String_o *)StringLiteral_18516/*"decideBtnFontSize"*/,
                                      v72);
      decideBtnLabel = this->fields.decideBtnLabel;
      data_high = (int)mainTitleLabel;
      if ( (int)mainTitleLabel <= 0 )
      {
        mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
          mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        data_high = HIDWORD(mainTitleLabel->fields.onChange->fields.data);
      }
      if ( !decideBtnLabel )
        goto LABEL_99;
      UILabel__set_fontSize(decideBtnLabel, data_high, 0);
      v76 = MessageAndScrollDetailConfirmDialog__SetTransitionFunc(this, script, v75);
      this->fields.decideNotificationCallback = v76;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.decideNotificationCallback, (int32_t)v76, v77, v78);
      v79 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1C32E6C(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
      MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        v79,
        (Il2CppObject *)this,
        Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__,
        v80);
      this->fields.clickDecideBtnFunc = v79;
      sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.clickDecideBtnFunc, (int32_t)v79, v81, v82);
      v83 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(v70, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3684/*"COMMON_CONFIRM_CANCEL"*/, 0);
        v70 = (System_String_o *)mainTitleLabel;
      }
      if ( !v83 )
        goto LABEL_99;
      UILabel__set_text(v83, v70, 0);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v84 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)mainTitleLabel,
                                                       0);
      v86 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v87 = (UnityEngine_GameObject_o *)v84;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v86 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v88 = v86->static_fields;
      v89 = &v88->OkButtonBasePosTypeTwoAlternative.fields.x;
      p_y = &v88->OkButtonBasePosTypeTwoAlternative.fields.y;
      p_z = &v88->OkButtonBasePosTypeTwoAlternative.fields.z;
    }
    else
    {
      v92 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(v70, (System_String_o *)StringLiteral_1/*""*/, 0);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3685/*"COMMON_CONFIRM_CLOSE"*/, 0);
        v70 = (System_String_o *)mainTitleLabel;
      }
      if ( !v92 )
        goto LABEL_99;
      UILabel__set_text(v92, v70, 0);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v84 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                       (UnityEngine_Component_o *)mainTitleLabel,
                                                       0);
      v93 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v87 = (UnityEngine_GameObject_o *)v84;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v93 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v94 = v93->static_fields;
      v89 = &v94->OkButtonBasePos.fields.x;
      p_y = &v94->OkButtonBasePos.fields.y;
      p_z = &v94->OkButtonBasePos.fields.z;
    }
    v95 = *v89;
    v96 = *p_y;
    v97 = *p_z;
    v120 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
             v84,
             script,
             (System_String_o *)StringLiteral_17637/*"buttonOffset"*/,
             v85);
    v120.fields.x = v95 + v120.fields.x;
    v120.fields.y = v96 + v120.fields.y;
    v120.fields.z = v97 + v120.fields.z;
    GameObjectExtensions__SetLocalPosition(v87, v120, 0);
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                    v98,
                                    script,
                                    (System_String_o *)StringLiteral_17719/*"cancelBtnFontSize"*/,
                                    v99);
    v100 = this->fields.okBtnLabel;
    data = (int)mainTitleLabel;
    if ( (int)mainTitleLabel <= 0 )
    {
      mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      data = (int32_t)mainTitleLabel->fields.onChange->fields.data;
    }
    if ( !v100 )
      goto LABEL_99;
    UILabel__set_fontSize(v100, data, 0);
    MessageAndScrollDetailConfirmDialog__AdjustBtnSize_46965188(this, script, v102);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v24, 0, 0);
  if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
  {
    keepPanelDepth = panelDepth;
    if ( panelDepth < 0 )
      keepPanelDepth = this->fields.keepPanelDepth;
    if ( !v24 )
      goto LABEL_99;
    UIPanel__set_depth(v24, keepPanelDepth, 0);
  }
  mainTitleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UIScrollView__ResetPosition((UIScrollView_o *)mainTitleLabel, 0);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0);
  v104 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                   this,
                                   this->klass->vtable._4_get_closeBtnObject.method);
  cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
  if ( canMaskTouchClose )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v104, 0, 0) )
    {
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v106 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                       (UnityEngine_Transform_o *)mainTitleLabel,
                                       (System_String_o *)StringLiteral_15650/*"Window/OkBtn"*/,
                                       0);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(v106, 0, 0);
      if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
      {
        if ( v106 )
        {
          v107 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v106, 0);
          v110 = (int)v107;
          this->fields.closeButton = v107;
          p_closeButton = &this->fields.closeButton;
LABEL_97:
          sub_1C32BC4((CGThumbnailListItem_o *)p_closeButton, v110, v108, v109);
          goto LABEL_98;
        }
        goto LABEL_99;
      }
    }
  }
  else
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality(v104, 0, 0) )
    {
      v112 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, const MethodInfo *))this->klass->vtable._4_get_closeBtnObject.methodPtr)(
                                           this,
                                           this->klass->vtable._4_get_closeBtnObject.method);
      AndroidBackKeyManager__RemoveBackBtn(v112, 0);
      this->fields.closeButton = 0;
      p_closeButton = &this->fields.closeButton;
      v110 = 0;
      goto LABEL_97;
    }
  }
LABEL_98:
  v113 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
  System_Action___ctor(v113, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndOpen__, 0);
  BaseDialog__Open((BaseDialog_o *)this, v113, 0, 0, 0);
}


// local variable allocation has failed, the output may be wrong!
void MessageAndScrollDetailConfirmDialog__Open_46954632(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_String_o *mainTitle,
        System_String_o *mainMessage,
        System_String_o *detailTitle,
        System_String_o *detailMessage,
        System_Action_o *closeFunc,
        System_Action_o *decideFunc,
        int32_t panelDepth,
        int32_t maxLine,
        int32_t mainTitleFontSize,
        int32_t detailTitleFontSize,
        int32_t mainMsgFontSize,
        int32_t detailMsgFontSize,
        System_Nullable_float__o mainTitlePosY,
        System_Nullable_float__o detailTitlePosY,
        int32_t mainMsgAlignment,
        int32_t detailMsgAlignment,
        bool canMaskTouchClose,
        System_String_o *cancelBtnLabelName,
        System_String_o *decideBtnLabelName,
        System_Nullable_int__o inputCancelBtnWidth,
        System_Nullable_int__o inputDecideBtnWidth,
        int32_t onClickOkSe,
        int32_t onClickDecideSe,
        const MethodInfo *method)
{
  int32_t v28; // w2
  const MethodInfo *v29; // x3
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v30; // x26
  const MethodInfo *v31; // x3

  if ( (byte_4C3AC29 & 1) == 0 )
  {
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__);
    byte_4C3AC29 = 1;
  }
  this->fields.closeNotificationCallback = closeFunc;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)&this->fields.closeNotificationCallback,
    (int32_t)closeFunc,
    (int32_t)mainMessage,
    (const MethodInfo *)detailTitle);
  this->fields.decideNotificationCallback = decideFunc;
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.decideNotificationCallback, (int32_t)decideFunc, v28, v29);
  v30 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1C32E6C(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
  MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
    v30,
    (Il2CppObject *)this,
    Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__,
    v31);
  MessageAndScrollDetailConfirmDialog__OpenDialog(
    this,
    mainTitle,
    mainMessage,
    detailTitle,
    detailMessage,
    v30,
    panelDepth,
    maxLine,
    mainTitleFontSize,
    detailTitleFontSize,
    mainMsgFontSize,
    detailMsgFontSize,
    mainTitlePosY,
    detailTitlePosY,
    mainMsgAlignment,
    detailMsgAlignment,
    canMaskTouchClose,
    cancelBtnLabelName,
    decideBtnLabelName,
    inputCancelBtnWidth,
    inputDecideBtnWidth,
    this->fields.onClickOkSeKind,
    onClickDecideSe,
    *(const MethodInfo **)&onClickDecideSe);
}


System_Action_o *MessageAndScrollDetailConfirmDialog__SetTransitionFunc(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  __int64 v5; // x21
  SceneJumpInfo_o *IsNullOrEmpty; // x0
  int32_t v7; // w2
  const MethodInfo *v8; // x3
  MessageAndScrollDetailConfirmDialog_o *v9; // x0
  const MethodInfo *v10; // x2
  System_String_array *TransitionParam; // x0
  __int64 *v12; // x19
  int32_t v13; // w2
  const MethodInfo *v14; // x3
  __int64 v15; // x8
  System_Action_o *_9__51_4; // x20
  __int64 v17; // x8
  System_String_o *v18; // x19
  int32_t SceneType; // w23
  __int64 v20; // x22
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  __int64 *v23; // x19
  __int64 v24; // x8
  __int64 v25; // x8
  System_String_o *v26; // x20
  System_Action_o *v27; // x0
  Il2CppObject *v28; // x1
  intptr_t v29; // x2
  __int64 v30; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v31; // x0
  Il2CppObject *v32; // x19
  int32_t v33; // w2
  const MethodInfo *v34; // x3
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v35; // x0
  CGThumbnailListItem_o *p__9__51_4; // x0
  __int64 v37; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v38; // x0
  Il2CppObject *v39; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v40; // x0
  __int64 v41; // x8
  __int64 v42; // x21
  __int64 v43; // x8
  int32_t v44; // w22
  SceneJumpInfo_o *v45; // x20
  int32_t v46; // w2
  const MethodInfo *v47; // x3
  __int64 v48; // x8
  int32_t v49; // w19
  int32_t v50; // w20
  SceneJumpInfo_o *v51; // x23
  int32_t v52; // w2
  const MethodInfo *v53; // x3
  intptr_t *v54; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v55; // x0
  Il2CppObject *v56; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *static_fields; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v58; // x0
  Il2CppObject *v59; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v60; // x0
  __int64 v61; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v62; // x0
  Il2CppObject *v63; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v64; // x0
  __int64 v65; // x8
  __int64 v66; // x8
  System_String_o *v67; // x20
  SceneJumpInfo_o *v68; // x19
  int32_t v69; // w2
  const MethodInfo *v70; // x3
  __int64 v71; // x8
  System_String_o *v72; // x20
  SceneJumpInfo_o *v73; // x22
  int32_t v74; // w2
  const MethodInfo *v75; // x3
  __int64 v76; // x20
  __int64 v77; // x8
  System_String_o *v78; // x19
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  __int64 v81; // x8
  __int64 v82; // x8
  System_String_o *v83; // x20
  SceneJumpInfo_o *v84; // x19
  int32_t v85; // w2
  const MethodInfo *v86; // x3
  __int64 v87; // x20
  __int64 v88; // x8
  __int64 v89; // x8
  System_String_o *v90; // x21
  TerminalPramsManager_c *v91; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v92; // x0
  Il2CppObject *v93; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v94; // x0
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  System_Predicate_object__o *v96; // x22
  Il2CppObject *Instance; // x19
  System_String_o *v98; // x20
  System_String_o *v99; // x21
  MessageAndScrollDetailConfirmDialog___c_c *v100; // x8
  NotificationDialog_ClickDelegate_o *_9__51_12; // x22
  Il2CppObject *v102; // x23
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v103; // x0
  int32_t v104; // w2
  const MethodInfo *v105; // x3
  CGThumbnailListItem_c *v106; // x19
  TerminalPramsManager_c *v107; // x0
  CGThumbnailListItem_o *p_TransitionScrollTabName_k__BackingField; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v109; // x0
  Il2CppObject *v110; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v111; // x0
  int32_t eventType[2]; // [xsp+68h] [xbp-48h] BYREF
  int32_t result[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4C3AC2F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&NotificationDialog_ClickDelegate_TypeInfo);
    sub_1C32C20(&Method_DataManager_GetMaster_EventRewardSceneMaster___);
    sub_1C32C20(&Method_DataManager_GetMaster_GachaMaster___);
    sub_1C32C20(&DataManager_TypeInfo);
    sub_1C32C20(&Method_System_Enum_TryParse_ServantOperationManager_Kind___);
    sub_1C32C20(&Method_System_Enum_TryParse_MasterMissionComponent_Type___);
    sub_1C32C20(&Method_System_Enum_TryParse_PayType_Type___);
    sub_1C32C20(&System_Enum_TypeInfo);
    sub_1C32C20(&Method_System_Collections_Generic_List_GachaEntity__Find__);
    sub_1C32C20(&LocalizationManager_TypeInfo);
    sub_1C32C20(&System_Predicate_GachaEntity__TypeInfo);
    sub_1C32C20(&SceneJumpInfo_TypeInfo);
    sub_1C32C20(&SceneList_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&TerminalPramsManager_TypeInfo);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_10__);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_12__);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_2__);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_3__);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_4__);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_5__);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_6__);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_7__);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0__SetTransitionFunc_b__1__);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_TypeInfo);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1__SetTransitionFunc_b__0__);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_TypeInfo);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__8__);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__9__);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_TypeInfo);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3__SetTransitionFunc_b__11__);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_TypeInfo);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4__SetTransitionFunc_b__14__);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_TypeInfo);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5__SetTransitionFunc_b__15__);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_TypeInfo);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6__SetTransitionFunc_b__16__);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_TypeInfo);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    sub_1C32C20(&StringLiteral_9541/*"NormalEventShop"*/);
    sub_1C32C20(&StringLiteral_13363/*"TERMINAL_BANNER_ERROR_DIALOG_MESSAGE_TO_SUMMON"*/);
    sub_1C32C20(&StringLiteral_12639/*"Scroll"*/);
    sub_1C32C20(&StringLiteral_1/*""*/);
    sub_1C32C20(&StringLiteral_13364/*"TERMINAL_BANNER_ERROR_DIALOG_TITLE"*/);
    sub_1C32C20(&StringLiteral_12614/*"Scene"*/);
    byte_4C3AC2F = 1;
  }
  *(_QWORD *)result = 0;
  *(_QWORD *)eventType = 0;
  v5 = sub_1C32E6C(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v5, 0);
  if ( !v5 )
    goto LABEL_169;
  *(_QWORD *)(v5 + 16) = this;
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 16), (int32_t)this, v7, v8);
  TransitionParam = MessageAndScrollDetailConfirmDialog__GetTransitionParam(v9, script, v10);
  *(_QWORD *)(v5 + 24) = TransitionParam;
  v12 = (__int64 *)(v5 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v5 + 24), (int32_t)TransitionParam, v13, v14);
  v15 = *(_QWORD *)(v5 + 24);
  if ( !v15 )
    goto LABEL_169;
  if ( !*(_DWORD *)(v15 + 24) )
    goto LABEL_170;
  IsNullOrEmpty = (SceneJumpInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v15 + 32), 0);
  _9__51_4 = 0;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return _9__51_4;
  v17 = *v12;
  if ( !*v12 )
    goto LABEL_169;
  if ( !*(_DWORD *)(v17 + 24) )
    goto LABEL_170;
  v18 = System_String__Concat_63518544(*(System_String_o **)(v17 + 32), (System_String_o *)StringLiteral_12614/*"Scene"*/, 0);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v18, 0);
  v20 = sub_1C32E6C(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v20, 0);
  if ( !v20 )
    goto LABEL_169;
  *(_QWORD *)(v20 + 24) = v5;
  v23 = (__int64 *)(v20 + 24);
  sub_1C32BC4((CGThumbnailListItem_o *)(v20 + 24), v5, v21, v22);
  if ( SceneType > 32 )
  {
    if ( SceneType != 72 )
    {
      if ( SceneType != 91 )
      {
        if ( SceneType == 100 )
        {
          *(_DWORD *)(v20 + 16) = -1;
          v24 = *(_QWORD *)(v20 + 24);
          if ( v24 )
          {
            v25 = *(_QWORD *)(v24 + 24);
            if ( v25 )
            {
              if ( *(int *)(v25 + 24) >= 2 )
              {
                v26 = *(System_String_o **)(v25 + 40);
                if ( !System_Enum_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
                System_Enum__TryParse_Int32Enum_(
                  v26,
                  (int32_t *)(v20 + 16),
                  (const MethodInfo_30E3F34 *)Method_System_Enum_TryParse_MasterMissionComponent_Type___);
              }
              v27 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
              _9__51_4 = v27;
              v28 = (Il2CppObject *)v20;
              v29 = Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1__SetTransitionFunc_b__0__;
              goto LABEL_115;
            }
          }
LABEL_169:
          sub_1C32E7C(IsNullOrEmpty);
        }
        return 0;
      }
      v55 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
        v55 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__51_4 = v55->static_fields->__9__51_4;
      if ( !_9__51_4 )
      {
        if ( !v55->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v55);
          v55 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v56 = (Il2CppObject *)v55->static_fields->__9;
        _9__51_4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v56,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_4__,
          0);
        static_fields = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        static_fields->__9__51_4 = _9__51_4;
        p__9__51_4 = (CGThumbnailListItem_o *)&static_fields->__9__51_4;
LABEL_166:
        sub_1C32BC4(p__9__51_4, (int32_t)_9__51_4, v33, v34);
        return _9__51_4;
      }
      return _9__51_4;
    }
    if ( !*v23 )
      goto LABEL_169;
    v41 = *(_QWORD *)(*v23 + 24);
    if ( !v41 )
      goto LABEL_169;
    if ( *(int *)(v41 + 24) < 2 )
      return 0;
    v42 = sub_1C32E6C(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v42, 0);
    if ( !*v23 )
      goto LABEL_169;
    v43 = *(_QWORD *)(*v23 + 24);
    if ( !v43 )
      goto LABEL_169;
    if ( *(_DWORD *)(v43 + 24) > 1u )
    {
      System_Int32__TryParse(*(System_String_o **)(v43 + 40), result, 0);
      v44 = result[0];
      v45 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379640(v45, (System_String_o *)StringLiteral_9541/*"NormalEventShop"*/, v44, 0);
      if ( !v42 )
        goto LABEL_169;
      *(_QWORD *)(v42 + 16) = v45;
      sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 16), (int32_t)v45, v46, v47);
      IsNullOrEmpty = *(SceneJumpInfo_o **)(v42 + 16);
      if ( !IsNullOrEmpty )
        goto LABEL_169;
      SceneJumpInfo__SetReturnNowScene(IsNullOrEmpty, 0);
      _9__51_4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__51_4,
        (Il2CppObject *)v42,
        Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__8__,
        0);
      if ( !*v23 )
        goto LABEL_169;
      v48 = *(_QWORD *)(*v23 + 24);
      if ( !v48 )
        goto LABEL_169;
      if ( *(int *)(v48 + 24) < 3 )
        return _9__51_4;
      System_Int32__TryParse(*(System_String_o **)(v48 + 48), &eventType[1], 0);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      IsNullOrEmpty = (SceneJumpInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
      if ( !IsNullOrEmpty )
        goto LABEL_169;
      if ( !EventRewardSceneMaster__getEntityFromIdAndEventType(
              (EventRewardSceneMaster_o *)IsNullOrEmpty,
              result[0],
              eventType[1],
              0) )
        return _9__51_4;
      v49 = result[0];
      v50 = eventType[1];
      v51 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379700(v51, (System_String_o *)StringLiteral_1/*""*/, v49, v50, 0);
      *(_QWORD *)(v42 + 16) = v51;
      sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 16), (int32_t)v51, v52, v53);
      v27 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      v54 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__9__;
LABEL_114:
      v29 = *v54;
      _9__51_4 = v27;
      v28 = (Il2CppObject *)v42;
LABEL_115:
      System_Action___ctor(v27, v28, v29, 0);
      return _9__51_4;
    }
    goto LABEL_170;
  }
  _9__51_4 = 0;
  if ( SceneType <= 22 )
  {
    if ( SceneType == 20 )
    {
      result[1] = 1;
      v42 = *v23;
      if ( !*v23 )
        goto LABEL_169;
      v65 = *(_QWORD *)(v42 + 24);
      if ( !v65 )
        goto LABEL_169;
      if ( *(int *)(v65 + 24) >= 2 )
      {
        v87 = sub_1C32E6C(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_TypeInfo);
        System_Object___ctor((Il2CppObject *)v87, 0);
        if ( !*v23 )
          goto LABEL_169;
        v88 = *(_QWORD *)(*v23 + 24);
        if ( !v88 )
          goto LABEL_169;
        if ( *(_DWORD *)(v88 + 24) <= 1u )
          goto LABEL_170;
        if ( !v87 )
          goto LABEL_169;
        IsNullOrEmpty = (SceneJumpInfo_o *)System_Int32__TryParse(
                                             *(System_String_o **)(v88 + 40),
                                             (int32_t *)(v87 + 16),
                                             0);
        if ( !*v23 )
          goto LABEL_169;
        v89 = *(_QWORD *)(*v23 + 24);
        if ( !v89 )
          goto LABEL_169;
        if ( *(_DWORD *)(v89 + 24) <= 1u )
          goto LABEL_170;
        v90 = *(System_String_o **)(v89 + 40);
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
        System_Enum__TryParse_Int32Enum_(
          v90,
          &result[1],
          (const MethodInfo_30E3F34 *)Method_System_Enum_TryParse_PayType_Type___);
        if ( result[1] == 3 )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_4C33F3A )
          {
            sub_1C32C20(&TerminalPramsManager_TypeInfo);
            byte_4C33F3A = 1;
          }
          v91 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v91 = TerminalPramsManager_TypeInfo;
          }
          v91->static_fields->_SummonType_k__BackingField = 3;
          v92 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
            v92 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          _9__51_4 = v92->static_fields->__9__51_10;
          if ( !_9__51_4 )
          {
            if ( !v92->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v92);
              v92 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
            }
            v93 = (Il2CppObject *)v92->static_fields->__9;
            _9__51_4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_4,
              v93,
              Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_10__,
              0);
            v94 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            v94->__9__51_10 = _9__51_4;
            p__9__51_4 = (CGThumbnailListItem_o *)&v94->__9__51_10;
            goto LABEL_166;
          }
          return _9__51_4;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = (SceneJumpInfo_o *)DataManager__GetMaster_object_((const MethodInfo_30DD39C *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !IsNullOrEmpty )
          goto LABEL_169;
        ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                              (GachaMaster_o *)IsNullOrEmpty,
                                                                              0);
        v96 = (System_Predicate_object__o *)sub_1C32E6C(System_Predicate_GachaEntity__TypeInfo);
        System_Predicate_object____ctor(
          v96,
          (Il2CppObject *)v87,
          Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3__SetTransitionFunc_b__11__,
          0);
        if ( !ValidGachaEntityList )
          goto LABEL_169;
        if ( System_Collections_Generic_List_object___Find(
               ValidGachaEntityList,
               (System_Predicate_T__o *)v96,
               (const MethodInfo_3798E24 *)Method_System_Collections_Generic_List_GachaEntity__Find__) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v98 = LocalizationManager__Get((System_String_o *)StringLiteral_13364/*"TERMINAL_BANNER_ERROR_DIALOG_TITLE"*/, 0);
          IsNullOrEmpty = (SceneJumpInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13363/*"TERMINAL_BANNER_ERROR_DIALOG_MESSAGE_TO_SUMMON"*/, 0);
          v99 = (System_String_o *)IsNullOrEmpty;
          v100 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
            v100 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          _9__51_12 = v100->static_fields->__9__51_12;
          if ( !_9__51_12 )
          {
            if ( !v100->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v100);
              v100 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
            }
            v102 = (Il2CppObject *)v100->static_fields->__9;
            _9__51_12 = (NotificationDialog_ClickDelegate_o *)sub_1C32E6C(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              _9__51_12,
              v102,
              Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_12__,
              0);
            v103 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            v103->__9__51_12 = _9__51_12;
            sub_1C32BC4((CGThumbnailListItem_o *)&v103->__9__51_12, (int32_t)_9__51_12, v104, v105);
          }
          if ( !Instance )
            goto LABEL_169;
          CommonUI__OpenNotificationDialog_31193120(
            (CommonUI_o *)Instance,
            v98,
            v99,
            _9__51_12,
            -1,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            1,
            0,
            0,
            0,
            0);
          return 0;
        }
        v42 = *v23;
      }
      v27 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      v54 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0__SetTransitionFunc_b__1__;
      goto LABEL_114;
    }
    if ( SceneType != 22 )
      return _9__51_4;
    if ( !*v23 )
      goto LABEL_169;
    v37 = *(_QWORD *)(*v23 + 24);
    if ( !v37 )
      goto LABEL_169;
    if ( *(int *)(v37 + 24) < 2 )
    {
      v38 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
        v38 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__51_4 = v38->static_fields->__9__51_2;
      if ( !_9__51_4 )
      {
        if ( !v38->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v38);
          v38 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v39 = (Il2CppObject *)v38->static_fields->__9;
        _9__51_4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v39,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_2__,
          0);
        v40 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        v40->__9__51_2 = _9__51_4;
        p__9__51_4 = (CGThumbnailListItem_o *)&v40->__9__51_2;
        goto LABEL_166;
      }
      return _9__51_4;
    }
    v42 = sub_1C32E6C(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_TypeInfo);
    System_Object___ctor((Il2CppObject *)v42, 0);
    if ( !*v23 )
      goto LABEL_169;
    v71 = *(_QWORD *)(*v23 + 24);
    if ( !v71 )
      goto LABEL_169;
    if ( *(_DWORD *)(v71 + 24) > 1u )
    {
      v72 = *(System_String_o **)(v71 + 40);
      v73 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379552(v73, v72, 0);
      if ( !v42 )
        goto LABEL_169;
      *(_QWORD *)(v42 + 16) = v73;
      v76 = v42 + 16;
      sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 16), (int32_t)v73, v74, v75);
      if ( !*v23 )
        goto LABEL_169;
      v77 = *(_QWORD *)(*v23 + 24);
      if ( !v77 )
        goto LABEL_169;
      if ( *(int *)(v77 + 24) >= 3 )
      {
        eventType[0] = 0;
        v78 = *(System_String_o **)(v77 + 48);
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
        IsNullOrEmpty = (SceneJumpInfo_o *)System_Enum__TryParse_Int32Enum_(
                                             v78,
                                             eventType,
                                             (const MethodInfo_30E3F34 *)Method_System_Enum_TryParse_ServantOperationManager_Kind___);
        if ( !*(_QWORD *)v76 )
          goto LABEL_169;
        *(_DWORD *)(*(_QWORD *)v76 + 24LL) = eventType[0];
      }
      v27 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      v54 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4__SetTransitionFunc_b__14__;
      goto LABEL_114;
    }
LABEL_170:
    sub_1C32E84(IsNullOrEmpty);
  }
  if ( SceneType == 23 )
  {
    v58 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
      v58 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    _9__51_4 = v58->static_fields->__9__51_5;
    if ( !_9__51_4 )
    {
      if ( !v58->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v58);
        v58 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      v59 = (Il2CppObject *)v58->static_fields->__9;
      _9__51_4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      System_Action___ctor(
        _9__51_4,
        v59,
        Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_5__,
        0);
      v60 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
      v60->__9__51_5 = _9__51_4;
      p__9__51_4 = (CGThumbnailListItem_o *)&v60->__9__51_5;
      goto LABEL_166;
    }
    return _9__51_4;
  }
  if ( SceneType == 30 )
  {
    if ( !*v23 )
      goto LABEL_169;
    v61 = *(_QWORD *)(*v23 + 24);
    if ( !v61 )
      goto LABEL_169;
    if ( *(int *)(v61 + 24) < 2 )
    {
      v62 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
        v62 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__51_4 = v62->static_fields->__9__51_7;
      if ( !_9__51_4 )
      {
        if ( !v62->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v62);
          v62 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v63 = (Il2CppObject *)v62->static_fields->__9;
        _9__51_4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v63,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_7__,
          0);
        v64 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        v64->__9__51_7 = _9__51_4;
        p__9__51_4 = (CGThumbnailListItem_o *)&v64->__9__51_7;
        goto LABEL_166;
      }
      return _9__51_4;
    }
    IsNullOrEmpty = (SceneJumpInfo_o *)System_String__op_Equality(
                                         *(System_String_o **)(v61 + 40),
                                         (System_String_o *)StringLiteral_12639/*"Scroll"*/,
                                         0);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !*v23 )
        goto LABEL_169;
      v81 = *(_QWORD *)(*v23 + 24);
      if ( !v81 )
        goto LABEL_169;
      if ( *(int *)(v81 + 24) >= 3 )
      {
        v106 = *(CGThumbnailListItem_c **)(v81 + 48);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_4C319B9 )
        {
          sub_1C32C20(&TerminalPramsManager_TypeInfo);
          byte_4C319B9 = 1;
        }
        v107 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v107 = TerminalPramsManager_TypeInfo;
        }
        p_TransitionScrollTabName_k__BackingField = (CGThumbnailListItem_o *)&v107->static_fields->_TransitionScrollTabName_k__BackingField;
        p_TransitionScrollTabName_k__BackingField->klass = v106;
        sub_1C32BC4(p_TransitionScrollTabName_k__BackingField, (int32_t)v106, v79, v80);
        v109 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
          v109 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        _9__51_4 = v109->static_fields->__9__51_6;
        if ( !_9__51_4 )
        {
          if ( !v109->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v109);
            v109 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          v110 = (Il2CppObject *)v109->static_fields->__9;
          _9__51_4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
          System_Action___ctor(
            _9__51_4,
            v110,
            Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_6__,
            0);
          v111 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
          v111->__9__51_6 = _9__51_4;
          p__9__51_4 = (CGThumbnailListItem_o *)&v111->__9__51_6;
          goto LABEL_166;
        }
        return _9__51_4;
      }
    }
    v42 = sub_1C32E6C(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v42, 0);
    if ( !*v23 )
      goto LABEL_169;
    v82 = *(_QWORD *)(*v23 + 24);
    if ( !v82 )
      goto LABEL_169;
    if ( *(_DWORD *)(v82 + 24) > 1u )
    {
      v83 = *(System_String_o **)(v82 + 40);
      v84 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379552(v84, v83, 0);
      if ( !v42 )
        goto LABEL_169;
      *(_QWORD *)(v42 + 16) = v84;
      sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 16), (int32_t)v84, v85, v86);
      v27 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      v54 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6__SetTransitionFunc_b__16__;
      goto LABEL_114;
    }
    goto LABEL_170;
  }
  if ( SceneType != 32 )
    return _9__51_4;
  if ( !*v23 )
    goto LABEL_169;
  v30 = *(_QWORD *)(*v23 + 24);
  if ( !v30 )
    goto LABEL_169;
  if ( *(int *)(v30 + 24) >= 2 )
  {
    v42 = sub_1C32E6C(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_TypeInfo);
    System_Object___ctor((Il2CppObject *)v42, 0);
    if ( !*v23 )
      goto LABEL_169;
    v66 = *(_QWORD *)(*v23 + 24);
    if ( !v66 )
      goto LABEL_169;
    if ( *(_DWORD *)(v66 + 24) > 1u )
    {
      v67 = *(System_String_o **)(v66 + 40);
      v68 = (SceneJumpInfo_o *)sub_1C32E6C(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_41379552(v68, v67, 0);
      if ( !v42 )
        goto LABEL_169;
      *(_QWORD *)(v42 + 16) = v68;
      sub_1C32BC4((CGThumbnailListItem_o *)(v42 + 16), (int32_t)v68, v69, v70);
      v27 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
      v54 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5__SetTransitionFunc_b__15__;
      goto LABEL_114;
    }
    goto LABEL_170;
  }
  v31 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    v31 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  }
  _9__51_4 = v31->static_fields->__9__51_3;
  if ( !_9__51_4 )
  {
    if ( !v31->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v31);
      v31 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    v32 = (Il2CppObject *)v31->static_fields->__9;
    _9__51_4 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(_9__51_4, v32, Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_3__, 0);
    v35 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    v35->__9__51_3 = _9__51_4;
    p__9__51_4 = (CGThumbnailListItem_o *)&v35->__9__51_3;
    goto LABEL_166;
  }
  return _9__51_4;
}


UnityEngine_GameObject_o *MessageAndScrollDetailConfirmDialog__get_closeBtnObject(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_4C3AC26 & 1) == 0 )
  {
    sub_1C32C20(&UnityEngine_Object_TypeInfo);
    byte_4C3AC26 = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(closeButton, 0, 0);
  result = 0;
  if ( !v4 )
    return this->fields.closeButton;
  return result;
}


void MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
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
  sub_1C32BC4((CGThumbnailListItem_o *)&this->fields.m_target, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(method + 82);
  this->fields.method_code = (intptr_t)this;
  if ( (sub_1C32CE0(method) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1C32E98(0, "Delegate to an instance method cannot have null 'this'.");
      sub_1C32D48(v10, 0);
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
  this->fields.invoke_impl = (intptr_t)sub_1A7AB94;
LABEL_6:
  this->fields.extra_arg = (intptr_t)sub_1A7AB4C;
}


System_IAsyncResult_o *MessageAndScrollDetailConfirmDialog_ClickDelegate__BeginInvoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v5; // x5
  __int64 v6; // x6
  __int64 v7; // x7
  _QWORD v12[2]; // [xsp+8h] [xbp-48h] BYREF
  bool v13[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v13[0] = isOk;
  if ( (byte_4C3AC3C & 1) == 0 )
  {
    sub_1C32C20(&bool_TypeInfo);
    byte_4C3AC3C = 1;
  }
  v12[1] = 0;
  v12[0] = j_il2cpp_value_box_0(bool_TypeInfo, v13, callback, object, method, v5, v6, v7);
  return (System_IAsyncResult_o *)sub_1C32BD4(this, v12, callback, object);
}


void MessageAndScrollDetailConfirmDialog_ClickDelegate__EndInvoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1C32BD8(result, 0, method);
}


void MessageAndScrollDetailConfirmDialog_ClickDelegate__Invoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(intptr_t, bool, intptr_t))this->fields.invoke_impl)(
    this->fields.method_code,
    isOk,
    this->fields.method);
}


void MessageAndScrollDetailConfirmDialog___c___cctor(const MethodInfo *method)
{
  Il2CppObject *v1; // x19
  int32_t v2; // w2
  const MethodInfo *v3; // x3

  if ( (byte_4C3AC3D & 1) == 0 )
  {
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    byte_4C3AC3D = 1;
  }
  v1 = (Il2CppObject *)sub_1C32E6C(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
  System_Object___ctor(v1, 0);
  MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields->__9 = (struct MessageAndScrollDetailConfirmDialog___c_o *)v1;
  sub_1C32BC4(
    (CGThumbnailListItem_o *)MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields,
    (int32_t)v1,
    v2,
    v3);
}


void MessageAndScrollDetailConfirmDialog___c___ctor(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_10(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AC3E & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3AC3E = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_12(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v4; // x8
  CommonUI_o *v5; // x19
  System_Action_o *_9__51_13; // x20
  Il2CppObject *v7; // x21
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *static_fields; // x0
  int32_t v9; // w2
  const MethodInfo *v10; // x3

  if ( (byte_4C3AC3F & 1) == 0 )
  {
    sub_1C32C20(&System_Action_TypeInfo);
    sub_1C32C20(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
    sub_1C32C20(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_13__);
    sub_1C32C20(&MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    byte_4C3AC3F = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v4 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  v5 = (CommonUI_o *)Instance;
  if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    v4 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  }
  _9__51_13 = v4->static_fields->__9__51_13;
  if ( !_9__51_13 )
  {
    if ( !v4->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v4);
      v4 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    v7 = (Il2CppObject *)v4->static_fields->__9;
    _9__51_13 = (System_Action_o *)sub_1C32E6C(System_Action_TypeInfo);
    System_Action___ctor(_9__51_13, v7, Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_13__, 0);
    static_fields = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__51_13 = _9__51_13;
    sub_1C32BC4((CGThumbnailListItem_o *)&static_fields->__9__51_13, (int32_t)_9__51_13, v9, v10);
  }
  if ( !v5 )
    sub_1C32E7C(Instance);
  CommonUI__CloseNotificationDialog_31193592(v5, _9__51_13, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_13(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AC40 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3AC40 = 1;
  }
  TopLoginRequest__ResetAccesTime(0);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_2(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AC41 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3AC41 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_3(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AC42 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3AC42 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_4(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AC43 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3AC43 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 91, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_5(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AC44 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3AC44 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 23, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_6(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AC45 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3AC45 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_7(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AC46 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3AC46 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0___SetTransitionFunc_b__1(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1C32E7C(this);
  MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByLinkInfo(this->fields.__4__this, this->fields.linkInfo, v2);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1___SetTransitionFunc_b__0(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *mPlayerStatus; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_o *CS___8__locals1; // x9
  struct MessageAndScrollDetailConfirmDialog_o *_4__this; // x9

  if ( (byte_4C3AC47 & 1) == 0 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C3AC47 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_4C319B6 )
  {
    sub_1C32C20(&TerminalSceneComponent_TypeInfo);
    byte_4C319B6 = 1;
  }
  mPlayerStatus = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mPlayerStatus = TerminalSceneComponent_TypeInfo;
  }
  mInstance = mPlayerStatus->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalList = mInstance->fields.mTerminalList) == 0
    || (CS___8__locals1 = this->fields.CS___8__locals1) == 0
    || (_4__this = CS___8__locals1->fields.__4__this) == 0
    || (mPlayerStatus = (TerminalSceneComponent_c *)mTerminalList->fields.mPlayerStatus) == 0 )
  {
    sub_1C32E7C(mPlayerStatus);
  }
  ScrPlayerStatus__ClickLoginDialogOpenMasterMission(
    (ScrPlayerStatus_o *)mPlayerStatus,
    this->fields.tabNo,
    _4__this->fields.closeNotificationCallback,
    0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2___SetTransitionFunc_b__8(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AC48 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3AC48 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    72,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2___SetTransitionFunc_b__9(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AC49 & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3AC49 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    72,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


bool MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3___SetTransitionFunc_b__11(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_o *this,
        GachaEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1C32E7C(this);
  return n->fields.id == this->fields.gachaId;
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4___SetTransitionFunc_b__14(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AC4A & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3AC4A = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)this->fields.info, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5___SetTransitionFunc_b__15(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AC4B & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3AC4B = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, (Il2CppObject *)this->fields.info, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0);
}


void MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6___SetTransitionFunc_b__16(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0

  if ( (byte_4C3AC4C & 1) == 0 )
  {
    sub_1C32C20(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
    byte_4C3AC4C = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_39E2904 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1C32E7C(0);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, (Il2CppObject *)this->fields.info, 0);
}