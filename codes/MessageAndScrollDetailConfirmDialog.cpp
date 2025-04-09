void __fastcall MessageAndScrollDetailConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x8
  MessageAndScrollDetailConfirmDialog_c *v3; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v4; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v5; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v6; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v7; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v8; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v9; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v10; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v11; // x8

  if ( (byte_49BE1BF & 1) == 0 )
  {
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog_TypeInfo, v1);
    byte_49BE1BF = 1;
  }
  static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MainTitleBasePos.fields.x = 0x4361000000000000LL;
  static_fields->MainTitleBasePos.fields.z = 0.0;
  v3 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v4 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&v4->MainMessageBasePos.fields.x = 0x42BE000000000000LL;
  v4->MainMessageBasePos.fields.z = 0.0;
  v5 = v3->static_fields;
  *(_QWORD *)&v5->NoTitleMainMessageBasePos.fields.x = 0x42F0000000000000LL;
  v5->NoTitleMainMessageBasePos.fields.z = 0.0;
  v6 = v3->static_fields;
  *(_QWORD *)&v6->DetailTitleBasePos.fields.x = 0x4361000000000000LL;
  v6->DetailTitleBasePos.fields.z = 0.0;
  v7 = v3->static_fields;
  *(_QWORD *)&v7->DetailMessageBasePos.fields.x = 0x4357000000000000LL;
  v7->DetailMessageBasePos.fields.z = 0.0;
  v8 = v3->static_fields;
  *(_QWORD *)&v8->NoTitleDetailMessageBasePos.fields.x = 0x436B000000000000LL;
  v8->NoTitleDetailMessageBasePos.fields.z = 0.0;
  v9 = v3->static_fields;
  *(_QWORD *)&v9->OkButtonBasePos.fields.x = 0xC340800000000000LL;
  v9->OkButtonBasePos.fields.z = 0.0;
  v10 = v3->static_fields;
  *(_QWORD *)&v10->OkButtonBasePosTypeTwoAlternative.fields.x = 0xC3408000C3200000LL;
  v10->OkButtonBasePosTypeTwoAlternative.fields.z = 0.0;
  v11 = v3->static_fields;
  v11->DetailMessageBaseHeight = 1000;
  *(_OWORD *)&v11->ButtonBaseSizeX = xmmword_BAB390;
  *(_OWORD *)&v11->MainTitleFontSize = xmmword_BAB110;
}


void __fastcall MessageAndScrollDetailConfirmDialog___ctor(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  if ( (byte_49BE1BE & 1) == 0 )
  {
    sub_1B4CF90(&BaseDialog_TypeInfo, method);
    byte_49BE1BE = 1;
  }
  this->fields.isInitPanelDepth = 1;
  *(_QWORD *)&this->fields.onClickOkSeKind = 0x800000001LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo);
  BaseDialog___ctor((BaseDialog_o *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog__AdjustBtnSize(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Nullable_int__o inputCancelBtnWidth,
        System_Nullable_int__o inputDecideBtnWidth,
        const MethodInfo *method)
{
  System_Nullable_int__o v5; // x21
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  UnityEngine_Component_o *okBtnLabel; // x0
  UnityEngine_GameObject_o *v13; // x22
  UIWidget_o *Component_object; // x23
  Il2CppObject *v15; // x22
  MessageAndScrollDetailConfirmDialog_c *v16; // x0
  int mWidth; // s8
  int32_t ButtonBaseSizeY; // s9
  UnityEngine_GameObject_o *decideBtn; // x8
  UIWidget_o *v20; // x20
  Il2CppObject *v21; // x21
  MessageAndScrollDetailConfirmDialog_c *v22; // x0
  int v23; // s8
  int32_t v24; // s9
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v26; // 0:s0.4,4:s1.4,8:s2.4

  v5 = inputCancelBtnWidth;
  if ( (byte_49BE1B4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, inputCancelBtnWidth);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog_TypeInfo, v8);
    sub_1B4CF90(&Method_System_Nullable_int__GetValueOrDefault__, v9);
    sub_1B4CF90(&Method_System_Nullable_int__get_HasValue__, v10);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v11);
    byte_49BE1B4 = 1;
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.okBtnLabel;
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(okBtnLabel, 0LL);
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)okBtnLabel, 0LL);
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(okBtnLabel, 0LL);
  if ( !okBtnLabel )
    goto LABEL_45;
  v13 = (UnityEngine_GameObject_o *)okBtnLabel;
  Component_object = (UIWidget_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)okBtnLabel,
                                     (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v15 = UnityEngine_GameObject__GetComponent_object_(
          v13,
          (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v15, 0LL, 0LL);
    if ( ((unsigned __int8)okBtnLabel & 1) != 0 )
    {
      if ( v5.fields.hasValue )
      {
        inputCancelBtnWidth = (System_Nullable_int__o)HIDWORD(*(unsigned __int64 *)&v5);
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
        inputCancelBtnWidth = (System_Nullable_int__o)*(unsigned int *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr
                                                                      + 96LL);
        if ( !Component_object )
          goto LABEL_45;
      }
      UIWidget__set_width(Component_object, *(int32_t *)&inputCancelBtnWidth.fields.hasValue, 0LL);
      v16 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v16 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      UIWidget__set_height(Component_object, v16->static_fields->ButtonBaseSizeY, 0LL);
      if ( !v15 )
        goto LABEL_45;
      mWidth = Component_object->fields.mWidth;
      ButtonBaseSizeY = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v15, 0LL);
      size.fields.x = (float)mWidth;
      size.fields.y = (float)ButtonBaseSizeY;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v15, size, 0LL);
    }
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
  if ( !okBtnLabel )
    goto LABEL_45;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)okBtnLabel,
                                            0LL);
  if ( !okBtnLabel )
    goto LABEL_45;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)okBtnLabel, 0LL) )
  {
    okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
    if ( !okBtnLabel )
      goto LABEL_45;
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)okBtnLabel,
                                              (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    decideBtn = this->fields.decideBtn;
    if ( !decideBtn )
      goto LABEL_45;
    v20 = (UIWidget_o *)okBtnLabel;
    v21 = UnityEngine_GameObject__GetComponent_object_(
            decideBtn,
            (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL);
      if ( ((unsigned __int8)okBtnLabel & 1) != 0 )
      {
        if ( inputDecideBtnWidth.fields.hasValue )
        {
          inputCancelBtnWidth = (System_Nullable_int__o)HIDWORD(*(unsigned __int64 *)&inputDecideBtnWidth);
          if ( !v20 )
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
          inputCancelBtnWidth = (System_Nullable_int__o)*(unsigned int *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr
                                                                        + 96LL);
          if ( !v20 )
            goto LABEL_45;
        }
        UIWidget__set_width(v20, *(int32_t *)&inputCancelBtnWidth.fields.hasValue, 0LL);
        v22 = MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
          v22 = MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        UIWidget__set_height(v20, v22->static_fields->ButtonBaseSizeY, 0LL);
        if ( v21 )
        {
          v23 = v20->fields.mWidth;
          v24 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
          v26 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v21, 0LL);
          v26.fields.x = (float)v23;
          v26.fields.y = (float)v24;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v21, v26, 0LL);
          return;
        }
LABEL_45:
        ((void (__fastcall __noreturn *)(_QWORD, _QWORD))sub_1B4D1EC)(okBtnLabel, inputCancelBtnWidth);
      }
    }
  }
}


void __fastcall MessageAndScrollDetailConfirmDialog__AdjustBtnSize_44870944(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  UnityEngine_Component_o *okBtnLabel; // x0
  UnityEngine_GameObject_o *v11; // x21
  Il2CppObject *Component_object; // x22
  Il2CppObject *v13; // x21
  _BOOL8 v14; // x0
  const MethodInfo *v15; // x3
  int32_t v16; // w23
  MessageAndScrollDetailConfirmDialog_c *v17; // x0
  int32_t ButtonBaseSizeY; // s8
  UIWidget_o *v19; // x21
  Il2CppObject *v20; // x20
  _BOOL8 v21; // x0
  const MethodInfo *v22; // x3
  int32_t v23; // w19
  MessageAndScrollDetailConfirmDialog_c *v24; // x0
  int32_t v25; // s8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v27; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_49BE1B5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, script);
    sub_1B4CF90(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog_TypeInfo, v6);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v7);
    sub_1B4CF90(&StringLiteral_17420/*"cancelBtnWidth"*/, v8);
    sub_1B4CF90(&StringLiteral_18208/*"decideBtnWidth"*/, v9);
    byte_49BE1B5 = 1;
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.okBtnLabel;
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_transform(okBtnLabel, 0LL);
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)okBtnLabel, 0LL);
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(okBtnLabel, 0LL);
  if ( !okBtnLabel )
    goto LABEL_43;
  v11 = (UnityEngine_GameObject_o *)okBtnLabel;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)okBtnLabel,
                       (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v13 = UnityEngine_GameObject__GetComponent_object_(
          v11,
          (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    v14 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v13, 0LL, 0LL);
    if ( v14 )
    {
      okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                                (MessageAndScrollDetailConfirmDialog_o *)v14,
                                                script,
                                                (System_String_o *)StringLiteral_17420/*"cancelBtnWidth"*/,
                                                v15);
      v16 = (int)okBtnLabel;
      if ( !(_DWORD)okBtnLabel )
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        v16 = *(_DWORD *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr + 96LL);
      }
      if ( !Component_object )
        goto LABEL_43;
      UIWidget__set_width((UIWidget_o *)Component_object, v16, 0LL);
      v17 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v17 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      UIWidget__set_height((UIWidget_o *)Component_object, v17->static_fields->ButtonBaseSizeY, 0LL);
      if ( !v13 )
        goto LABEL_43;
      ButtonBaseSizeY = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v13, 0LL);
      size.fields.x = (float)v16;
      size.fields.y = (float)ButtonBaseSizeY;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v13, size, 0LL);
    }
  }
  okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
  if ( !okBtnLabel )
    goto LABEL_43;
  okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__get_gameObject(
                                            (UnityEngine_GameObject_o *)okBtnLabel,
                                            0LL);
  if ( !okBtnLabel )
    goto LABEL_43;
  if ( UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)okBtnLabel, 0LL) )
  {
    okBtnLabel = (UnityEngine_Component_o *)this->fields.decideBtn;
    if ( !okBtnLabel )
      goto LABEL_43;
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_GameObject__GetComponent_object_(
                                              (UnityEngine_GameObject_o *)okBtnLabel,
                                              (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !this->fields.decideBtn )
      goto LABEL_43;
    v19 = (UIWidget_o *)okBtnLabel;
    v20 = UnityEngine_GameObject__GetComponent_object_(
            this->fields.decideBtn,
            (const MethodInfo_2F53444 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      v21 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL);
      if ( v21 )
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                                  (MessageAndScrollDetailConfirmDialog_o *)v21,
                                                  script,
                                                  (System_String_o *)StringLiteral_18208/*"decideBtnWidth"*/,
                                                  v22);
        v23 = (int)okBtnLabel;
        if ( !(_DWORD)okBtnLabel )
        {
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
            okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          v23 = *(_DWORD *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr + 96LL);
        }
        if ( v19 )
        {
          UIWidget__set_width(v19, v23, 0LL);
          v24 = MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
            v24 = MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          UIWidget__set_height(v19, v24->static_fields->ButtonBaseSizeY, 0LL);
          if ( v20 )
          {
            v25 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
            v27 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v20, 0LL);
            v27.fields.x = (float)v23;
            v27.fields.y = (float)v25;
            UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v20, v27, 0LL);
            return;
          }
        }
LABEL_43:
        sub_1B4D1EC(okBtnLabel, script);
      }
    }
  }
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel(
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
  __int64 v20; // x1
  UILabel_o *noTitleMainMessageLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  MessageAndScrollDetailConfirmDialog_c *v23; // x8
  UnityEngine_GameObject_o *v24; // x29
  UnityEngine_GameObject_o *v25; // x0
  MessageAndScrollDetailConfirmDialog_c *v26; // x8
  UnityEngine_GameObject_o *v27; // x29
  struct UILabel_o *noTitleDetailMessageLabel; // x23
  UnityEngine_GameObject_o *v29; // x0
  MessageAndScrollDetailConfirmDialog_c *v30; // x8
  UnityEngine_GameObject_o *v31; // x29
  UnityEngine_GameObject_o *v32; // x0
  MessageAndScrollDetailConfirmDialog_c *v33; // x8
  UnityEngine_GameObject_o *v34; // x29
  MessageAndScrollDetailConfirmDialog_c *v35; // x0
  System_String_o *Empty; // x25
  System_String_o *v37; // x24
  MessageAndScrollDetailConfirmDialog_c *v38; // x0
  MessageAndScrollDetailConfirmDialog_c *v39; // x0
  MessageAndScrollDetailConfirmDialog_c *v40; // x0
  MessageAndScrollDetailConfirmDialog_c *v41; // x0

  v19 = this;
  if ( (byte_49BE1B1 & 1) == 0 )
  {
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1B4CF90(&string_TypeInfo, v20);
    byte_49BE1B1 = 1;
  }
  if ( isNoMainTitle )
  {
    noTitleMainMessageLabel = v19->fields.noTitleMainMessageLabel;
    if ( !noTitleMainMessageLabel )
      goto LABEL_46;
    gameObject = UnityEngine_Component__get_gameObject(
                   (UnityEngine_Component_o *)v19->fields.noTitleMainMessageLabel,
                   0LL);
    v23 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v24 = gameObject;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v23 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v24, v23->static_fields->NoTitleMainMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.mainMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  else
  {
    noTitleMainMessageLabel = v19->fields.mainMessageLabel;
    if ( !noTitleMainMessageLabel )
      goto LABEL_46;
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.mainMessageLabel, 0LL);
    v26 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v27 = v25;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v26 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v27, v26->static_fields->MainMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.noTitleMainMessageLabel;
    if ( !this )
LABEL_46:
      sub_1B4D1EC(this, isNoMainTitle);
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( isNoDetailTitle )
  {
    noTitleDetailMessageLabel = v19->fields.noTitleDetailMessageLabel;
    if ( !noTitleDetailMessageLabel )
      goto LABEL_46;
    v29 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.noTitleDetailMessageLabel, 0LL);
    v30 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v31 = v29;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v30 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v31, v30->static_fields->NoTitleDetailMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.detailMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  else
  {
    noTitleDetailMessageLabel = v19->fields.detailMessageLabel;
    if ( !noTitleDetailMessageLabel )
      goto LABEL_46;
    v32 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v19->fields.detailMessageLabel, 0LL);
    v33 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v34 = v32;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v33 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v34, v33->static_fields->DetailMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v19->fields.noTitleDetailMessageLabel;
    if ( !this )
      goto LABEL_46;
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  if ( !this )
    goto LABEL_46;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v35 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v35 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UIWidget__set_height((UIWidget_o *)noTitleDetailMessageLabel, v35->static_fields->DetailMessageBaseHeight, 0LL);
  UILabel__set_alignment(noTitleMainMessageLabel, mainMsgAlignment, 0LL);
  UILabel__set_alignment(noTitleDetailMessageLabel, detailMsgAlignment, 0LL);
  if ( mainMessage )
    Empty = System_String__Trim_61149748(mainMessage, 0xAu, 0LL);
  else
    Empty = string_TypeInfo->static_fields->Empty;
  if ( detailMessage )
    v37 = System_String__Trim_61149748(detailMessage, 0xAu, 0LL);
  else
    v37 = string_TypeInfo->static_fields->Empty;
  v38 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v38 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, v38->static_fields->MainMessageFontSize, 0LL);
  UILabel__set_maxLineCount(noTitleMainMessageLabel, maxLine, 0LL);
  WrapControlText__textAdjust(noTitleMainMessageLabel, Empty, noTitleMainMessageLabel->fields.mFontSize, 0, 0LL);
  if ( mainFontSize <= 0 )
  {
    v39 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v39 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    mainFontSize = v39->static_fields->MainMessageFontSize;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, mainFontSize, 0LL);
  v40 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v40 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v40->static_fields->DetailMessageFontSize, 0LL);
  WrapControlText__textAdjust(
    noTitleDetailMessageLabel,
    v37,
    noTitleDetailMessageLabel->fields.mFontSize,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageFontSize,
    0LL);
  if ( detailFontSize <= 0 )
  {
    v41 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v41 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    detailFontSize = v41->static_fields->DetailMessageFontSize;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, detailFontSize, 0LL);
  UILabel__set_overflowMethod(noTitleDetailMessageLabel, 3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel_44865340(
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
  struct UILabel_o *noTitleMainMessageLabel; // x21
  UnityEngine_Component_o *mainMessageLabel; // x0
  float y; // s12
  MessageAndScrollDetailConfirmDialog_o *gameObject; // x26
  const MethodInfo *v38; // x3
  float v39; // s12
  MessageAndScrollDetailConfirmDialog_o *v40; // x26
  const MethodInfo *v41; // x3
  struct UILabel_o *noTitleDetailMessageLabel; // x24
  float v43; // s10
  MessageAndScrollDetailConfirmDialog_o *v44; // x26
  const MethodInfo *v45; // x3
  float v46; // s10
  MessageAndScrollDetailConfirmDialog_o *v47; // x26
  const MethodInfo *v48; // x3
  MessageAndScrollDetailConfirmDialog_o *v49; // x0
  const MethodInfo *v50; // x3
  System_String_o *StringFromScript; // x25
  const MethodInfo *v52; // x3
  System_String_o *v53; // x25
  _BOOL8 v54; // x0
  const MethodInfo *v55; // x3
  System_String_o *Empty; // x23
  System_String_o *v57; // x22
  MessageAndScrollDetailConfirmDialog_o *v58; // x0
  const MethodInfo *v59; // x3
  int32_t IntFromScript; // w0
  MessageAndScrollDetailConfirmDialog_o *v61; // x0
  const MethodInfo *v62; // x3
  int MainMessageFontSize; // w1
  MessageAndScrollDetailConfirmDialog_c *v64; // x0
  MessageAndScrollDetailConfirmDialog_c *v65; // x0
  MessageAndScrollDetailConfirmDialog_o *v66; // x0
  const MethodInfo *v67; // x3
  int32_t v68; // w0
  MessageAndScrollDetailConfirmDialog_o *v69; // x0
  const MethodInfo *v70; // x3
  int DetailMessageFontSize; // w1
  MessageAndScrollDetailConfirmDialog_c *v72; // x0
  int32_t result; // [xsp+Ch] [xbp-84h] BYREF
  UnityEngine_Vector3_o VecFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v75; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v76; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4

  z = detailMessagePos.fields.z;
  x = detailMessagePos.fields.x;
  v13 = mainMessagePos.fields.z;
  v14 = mainMessagePos.fields.x;
  if ( (byte_49BE1B2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Enum_TryParse_NGUIText_Alignment___, isNoMainTitle);
    sub_1B4CF90(&System_Enum_TypeInfo, v21);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog_TypeInfo, v22);
    sub_1B4CF90(&string_TypeInfo, v23);
    sub_1B4CF90(&StringLiteral_20961/*"mainMsgAlignment"*/, v24);
    sub_1B4CF90(&StringLiteral_20963/*"mainMsgOffset"*/, v25);
    sub_1B4CF90(&StringLiteral_20962/*"mainMsgFontSize"*/, v26);
    sub_1B4CF90(&StringLiteral_18289/*"detailMsgOffset"*/, v27);
    sub_1B4CF90(&StringLiteral_18288/*"detailMsgFontSize"*/, v28);
    sub_1B4CF90(&StringLiteral_18290/*"detailMsgSpacingY"*/, v29);
    sub_1B4CF90(&StringLiteral_18287/*"detailMsgAlignment"*/, v30);
    sub_1B4CF90(&StringLiteral_20960/*"mainMsg"*/, v31);
    sub_1B4CF90(&StringLiteral_1/*""*/, v32);
    sub_1B4CF90(&StringLiteral_20964/*"mainMsgSpacingY"*/, v33);
    byte_49BE1B2 = 1;
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
    gameObject = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    VecFromScript = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
                      gameObject,
                      script,
                      (System_String_o *)StringLiteral_20963/*"mainMsgOffset"*/,
                      v38);
    VecFromScript.fields.x = v14 + VecFromScript.fields.x;
    VecFromScript.fields.y = y + VecFromScript.fields.y;
    VecFromScript.fields.z = v13 + VecFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)gameObject, VecFromScript, 0LL);
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
    v39 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageBasePos.fields.y;
    v40 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    v75 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v40,
            script,
            (System_String_o *)StringLiteral_20963/*"mainMsgOffset"*/,
            v41);
    v75.fields.x = v14 + v75.fields.x;
    v75.fields.y = v39 + v75.fields.y;
    v75.fields.z = v13 + v75.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v40, v75, 0LL);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleMainMessageLabel;
    if ( !mainMessageLabel )
LABEL_58:
      sub_1B4D1EC(mainMessageLabel, isNoMainTitle);
  }
  mainMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
  if ( !mainMessageLabel )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainMessageLabel, 0, 0LL);
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
    v43 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->NoTitleDetailMessageBasePos.fields.y;
    v44 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    v76 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v44,
            script,
            (System_String_o *)StringLiteral_18289/*"detailMsgOffset"*/,
            v45);
    v76.fields.x = x + v76.fields.x;
    v76.fields.y = v43 + v76.fields.y;
    v76.fields.z = z + v76.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v44, v76, 0LL);
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
    v46 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageBasePos.fields.y;
    v47 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    v77 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v47,
            script,
            (System_String_o *)StringLiteral_18289/*"detailMsgOffset"*/,
            v48);
    v77.fields.x = x + v77.fields.x;
    v77.fields.y = v46 + v77.fields.y;
    v77.fields.z = z + v77.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v47, v77, 0LL);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleDetailMessageLabel;
    if ( !mainMessageLabel )
      goto LABEL_58;
  }
  mainMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
  if ( !mainMessageLabel )
    goto LABEL_58;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainMessageLabel, 0, 0LL);
  mainMessageLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
  if ( !noTitleDetailMessageLabel )
    goto LABEL_58;
  UIWidget__set_height(
    (UIWidget_o *)noTitleDetailMessageLabel,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageBaseHeight,
    0LL);
  result = 2;
  StringFromScript = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                       v49,
                       script,
                       (System_String_o *)StringLiteral_20961/*"mainMsgAlignment"*/,
                       v50);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  mainMessageLabel = (UnityEngine_Component_o *)System_Enum__TryParse_Int32Enum_(
                                                  StringFromScript,
                                                  &result,
                                                  (const MethodInfo_2F08668 *)Method_System_Enum_TryParse_NGUIText_Alignment___);
  if ( ((unsigned __int8)mainMessageLabel & 1) != 0 )
  {
    if ( !noTitleMainMessageLabel )
      goto LABEL_58;
    UILabel__set_alignment(noTitleMainMessageLabel, result, 0LL);
  }
  v53 = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
          (MessageAndScrollDetailConfirmDialog_o *)mainMessageLabel,
          script,
          (System_String_o *)StringLiteral_18287/*"detailMsgAlignment"*/,
          v52);
  if ( !System_Enum_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
  if ( System_Enum__TryParse_Int32Enum_(
         v53,
         &result,
         (const MethodInfo_2F08668 *)Method_System_Enum_TryParse_NGUIText_Alignment___) )
  {
    UILabel__set_alignment(noTitleDetailMessageLabel, result, 0LL);
  }
  v54 = System_String__op_Inequality(mainMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v54 )
    mainMessage = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                    (MessageAndScrollDetailConfirmDialog_o *)v54,
                    script,
                    (System_String_o *)StringLiteral_20960/*"mainMsg"*/,
                    v55);
  if ( mainMessage )
  {
    Empty = System_String__Trim_61149748(mainMessage, 0xAu, 0LL);
    if ( detailMessage )
    {
LABEL_41:
      v57 = System_String__Trim_61149748(detailMessage, 0xAu, 0LL);
      goto LABEL_44;
    }
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( detailMessage )
      goto LABEL_41;
  }
  v57 = string_TypeInfo->static_fields->Empty;
LABEL_44:
  mainMessageLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
  if ( !noTitleMainMessageLabel )
    goto LABEL_58;
  UILabel__set_fontSize(
    noTitleMainMessageLabel,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageFontSize,
    0LL);
  UILabel__set_maxLineCount(noTitleMainMessageLabel, maxLine, 0LL);
  IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                    v58,
                    script,
                    (System_String_o *)StringLiteral_20964/*"mainMsgSpacingY"*/,
                    v59);
  UILabel__set_spacingY(noTitleMainMessageLabel, IntFromScript, 0LL);
  v61 = (MessageAndScrollDetailConfirmDialog_o *)WrapControlText__textAdjust(
                                                   noTitleMainMessageLabel,
                                                   Empty,
                                                   noTitleMainMessageLabel->fields.mFontSize,
                                                   MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageFontSize,
                                                   0LL);
  MainMessageFontSize = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                          v61,
                          script,
                          (System_String_o *)StringLiteral_20962/*"mainMsgFontSize"*/,
                          v62);
  if ( MainMessageFontSize <= 0 )
  {
    v64 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v64 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    MainMessageFontSize = v64->static_fields->MainMessageFontSize;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, MainMessageFontSize, 0LL);
  v65 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v65 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v65->static_fields->DetailMessageFontSize, 0LL);
  v68 = MessageAndScrollDetailConfirmDialog__GetIntFromScript(v66, script, (System_String_o *)StringLiteral_18290/*"detailMsgSpacingY"*/, v67);
  UILabel__set_spacingY(noTitleDetailMessageLabel, v68, 0LL);
  v69 = (MessageAndScrollDetailConfirmDialog_o *)WrapControlText__textAdjust(
                                                   noTitleDetailMessageLabel,
                                                   v57,
                                                   noTitleDetailMessageLabel->fields.mFontSize,
                                                   MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageFontSize,
                                                   0LL);
  DetailMessageFontSize = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                            v69,
                            script,
                            (System_String_o *)StringLiteral_18288/*"detailMsgFontSize"*/,
                            v70);
  if ( DetailMessageFontSize <= 0 )
  {
    v72 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v72 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    DetailMessageFontSize = v72->static_fields->DetailMessageFontSize;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, DetailMessageFontSize, 0LL);
  UILabel__set_overflowMethod(noTitleDetailMessageLabel, 3, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog__Awake(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  ;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByGachaId(
        MessageAndScrollDetailConfirmDialog_o *this,
        int32_t gachaId,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x1
  __int64 v6; // x1
  __int64 v7; // x1
  TerminalPramsManager_c *v8; // x0
  Il2CppObject *Master_object; // x0
  __int64 v10; // x1
  int32_t klass; // w19
  TerminalPramsManager_c *v12; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BE1B6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaMaster___, *(_QWORD *)&gachaId);
    sub_1B4CF90(&DataManager_TypeInfo, v4);
    sub_1B4CF90(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v5);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v6);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v7);
    byte_49BE1B6 = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  if ( !byte_49B75B6 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, *(_QWORD *)&gachaId);
    byte_49B75B6 = 1;
  }
  v8 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v8 = TerminalPramsManager_TypeInfo;
  }
  v8->static_fields->_SummonType_k__BackingField = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    gachaId,
                                    (const MethodInfo_319D9E8 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    klass = (int32_t)entity[3].klass;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    if ( !byte_49B75B6 )
    {
      sub_1B4CF90(&TerminalPramsManager_TypeInfo, v10);
      byte_49B75B6 = 1;
    }
    v12 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
      v12 = TerminalPramsManager_TypeInfo;
    }
    v12->static_fields->_SummonType_k__BackingField = klass;
  }
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Master_object )
LABEL_23:
    sub_1B4D1EC(Master_object, v10);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Master_object, 20, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByLinkInfo(
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
  if ( (int)linkInfo->max_length < 2 )
  {
LABEL_8:
    v4 = 0;
    goto LABEL_9;
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)linkInfo->m_Items[1];
  if ( !this
    || (this = (MessageAndScrollDetailConfirmDialog_o *)System_String__Split((System_String_o *)this, 0x2Cu, 0, 0LL)) == 0LL )
  {
LABEL_10:
    sub_1B4D1EC(this, linkInfo);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_8;
  if ( !(_DWORD)m_CancellationTokenSource )
    sub_1B4D1F4(this, linkInfo);
  this = (MessageAndScrollDetailConfirmDialog_o *)System_Int32__TryParse(
                                                    (System_String_o *)this->fields.basePanel,
                                                    &result,
                                                    0LL);
  v4 = result;
LABEL_9:
  MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByGachaId(this, v4, method);
}


void __fastcall MessageAndScrollDetailConfirmDialog__Close(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  MessageAndScrollDetailConfirmDialog__Close_44872024(this, 0LL, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__CloseFuncDialog(
        MessageAndScrollDetailConfirmDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v5; // x1
  System_Action_o *closeNotificationCallback; // x20
  __int64 v7; // x1
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_c *v10; // x21
  TerminalPramsManager_c *v11; // x0
  CGThumbnailListItem_o *p_TransitionScrollTabName_k__BackingField; // x0
  const MethodInfo *v13; // x2

  if ( (byte_49BE1B0 & 1) == 0 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, result);
    sub_1B4CF90(&StringLiteral_1/*""*/, v5);
    byte_49BE1B0 = 1;
  }
  closeNotificationCallback = this->fields.closeNotificationCallback;
  this->fields.closeNotificationCallback = 0LL;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.closeNotificationCallback, 0, (int32_t)method, v3);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
  v10 = (CGThumbnailListItem_c *)StringLiteral_1/*""*/;
  if ( !byte_49B5936 )
  {
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v7);
    byte_49B5936 = 1;
  }
  v11 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
    v11 = TerminalPramsManager_TypeInfo;
  }
  p_TransitionScrollTabName_k__BackingField = (CGThumbnailListItem_o *)&v11->static_fields->_TransitionScrollTabName_k__BackingField;
  p_TransitionScrollTabName_k__BackingField->klass = v10;
  sub_1B4CF34(p_TransitionScrollTabName_k__BackingField, (int32_t)v10, v8, v9);
  MessageAndScrollDetailConfirmDialog__Close_44872024(this, closeNotificationCallback, v13);
}


void __fastcall MessageAndScrollDetailConfirmDialog__Close_44872024(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Action_o *callback,
        const MethodInfo *method)
{
  const MethodInfo *v3; // x3
  __int64 v6; // x1
  System_Action_o *v7; // x20

  if ( (byte_49BE1BB & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, callback);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog_EndClose__, v6);
    byte_49BE1BB = 1;
  }
  this->fields.closeEndFunc = callback;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.closeEndFunc, (int32_t)callback, (int32_t)method, v3);
  this->fields.isButtonEnable = 0;
  v7 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v7, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v7, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog__DeicedFuncDialog(
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
  p_decideNotificationCallback->klass = 0LL;
  sub_1B4CF34(p_decideNotificationCallback, 0, (int32_t)method, v3);
  MessageAndScrollDetailConfirmDialog__Close_44872024(this, decideNotificationCallback, v7);
}


void __fastcall MessageAndScrollDetailConfirmDialog__EndClose(
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
    p_closeEndFunc->klass = 0LL;
    sub_1B4CF34(p_closeEndFunc, 0, v3, v4);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v6->fields.m_target)(
      v6->fields.original_method_info,
      *(_QWORD *)&v6->fields.extra_arg);
  }
}


void __fastcall MessageAndScrollDetailConfirmDialog__EndOpen(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  this->fields.isButtonEnable = 1;
}


int32_t __fastcall MessageAndScrollDetailConfirmDialog__GetIntFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  Il2CppObject *v7; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BE1BA & 1) == 0 )
  {
    sub_1B4CF90(&System_Convert_TypeInfo, script);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1B4CF90(
                                                      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                                      v6);
    byte_49BE1BA = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1B4D1EC(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3259324 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return 0;
  v7 = value;
  if ( !System_Convert_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
  return System_Convert__ToInt32(v7, 0LL);
}


System_String_o *__fastcall MessageAndScrollDetailConfirmDialog__GetStringFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x1
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_49BE1B9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, script);
    sub_1B4CF90(&string_TypeInfo, v6);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1B4CF90(&StringLiteral_1/*""*/, v7);
    byte_49BE1B9 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1B4D1EC(this, script);
  if ( !System_Collections_Generic_Dictionary_object__object___TryGetValue(
          (System_Collections_Generic_Dictionary_object__object__o *)script,
          (Il2CppObject *)key,
          &value,
          (const MethodInfo_3259324 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__) )
    return (System_String_o *)StringLiteral_1/*""*/;
  if ( !value )
    return 0LL;
  if ( (System_String_c *)value->klass == string_TypeInfo )
    return (System_String_o *)value;
  return 0LL;
}


System_String_array *__fastcall MessageAndScrollDetailConfirmDialog__GetTransitionParam(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  __int64 v4; // x1
  System_String_o *StringValue; // x0
  __int64 v6; // x1

  if ( (byte_49BE1B7 & 1) == 0 )
  {
    sub_1B4CF90(&string_TypeInfo, script);
    sub_1B4CF90(&StringLiteral_23763/*"transitionParam"*/, v4);
    byte_49BE1B7 = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  script,
                  (System_String_o *)StringLiteral_23763/*"transitionParam"*/,
                  string_TypeInfo->static_fields->Empty,
                  0LL);
  if ( !StringValue )
    sub_1B4D1EC(0LL, v6);
  return System_String__Split(StringValue, 0x2Fu, 0, 0LL);
}


UnityEngine_Vector3_o __fastcall MessageAndScrollDetailConfirmDialog__GetVecFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
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

  if ( (byte_49BE1B8 & 1) == 0 )
  {
    sub_1B4CF90(&System_Convert_TypeInfo, script);
    sub_1B4CF90(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6);
    sub_1B4CF90(&Method_System_Collections_Generic_List_object__get_Count__, v7);
    sub_1B4CF90(&Method_System_Collections_Generic_List_object__get_Item__, v8);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1B4CF90(&System_Collections_Generic_List_object__TypeInfo, v9);
    byte_49BE1B8 = 1;
  }
  value = 0LL;
  if ( !script )
    sub_1B4D1EC(this, script);
  if ( System_Collections_Generic_Dictionary_object__object___TryGetValue(
         (System_Collections_Generic_Dictionary_object__object__o *)script,
         (Il2CppObject *)key,
         &value,
         (const MethodInfo_3259324 *)Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__)
    && (v11 = value) != 0LL
    && (methodPtr_low = LOBYTE(System_Collections_Generic_List_object__TypeInfo->vtable._0_Equals.methodPtr),
        LOBYTE(value->klass->vtable[0].methodPtr) >= (unsigned int)methodPtr_low)
    && (System_Collections_Generic_List_object__c *)value->klass->_2.typeHierarchy[methodPtr_low - 1] == System_Collections_Generic_List_object__TypeInfo
    && SLODWORD(value[1].monitor) >= 2 )
  {
    Item = System_Collections_Generic_List_object___get_Item(
             (System_Collections_Generic_List_object__o *)value,
             0,
             (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_object__get_Item__);
    if ( !System_Convert_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(System_Convert_TypeInfo);
    v18 = System_Convert__ToDouble(Item, 0LL);
    v19 = System_Collections_Generic_List_object___get_Item(
            (System_Collections_Generic_List_object__o *)v11,
            1,
            (const MethodInfo_357FF0C *)Method_System_Collections_Generic_List_object__get_Item__);
    v20 = System_Convert__ToDouble(v19, 0LL);
    x = v18;
    y = v20;
    z = 0.0;
  }
  else
  {
    if ( !byte_49B5361 )
    {
      sub_1B4CF90(&UnityEngine_Vector3_TypeInfo, v10);
      byte_49B5361 = 1;
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


void __fastcall MessageAndScrollDetailConfirmDialog__Init(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  UILabel_o *mainTitleLabel; // x0

  if ( (byte_49BE1AB & 1) == 0 )
  {
    sub_1B4CF90(&StringLiteral_1/*""*/, method);
    byte_49BE1AB = 1;
  }
  if ( !this->fields.refuseInit )
  {
    mainTitleLabel = this->fields.mainTitleLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mainTitleLabel = this->fields.mainMessageLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mainTitleLabel = this->fields.noTitleMainMessageLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mainTitleLabel = this->fields.detailTitleLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mainTitleLabel = this->fields.detailMessageLabel;
    if ( !mainTitleLabel )
      goto LABEL_14;
    UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL);
    mainTitleLabel = this->fields.noTitleDetailMessageLabel;
    if ( !mainTitleLabel
      || (UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
          (mainTitleLabel = this->fields.okBtnLabel) == 0LL)
      || (UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
          (mainTitleLabel = this->fields.decideBtnLabel) == 0LL)
      || (UILabel__set_text(mainTitleLabel, (System_String_o *)StringLiteral_1/*""*/, 0LL),
          (mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL)) == 0LL) )
    {
LABEL_14:
      sub_1B4D1EC(mainTitleLabel, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 0, 0LL);
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
  }
}


void __fastcall MessageAndScrollDetailConfirmDialog__OnClickDecide(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct MessageAndScrollDetailConfirmDialog_ClickDelegate_o *clickDecideBtnFunc; // x8

  if ( (byte_49BE1BD & 1) == 0 )
  {
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__, method);
    byte_49BE1BD = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickDecideSeKind, 0, 0LL);
    clickDecideBtnFunc = this->fields.clickDecideBtnFunc;
    if ( clickDecideBtnFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickDecideBtnFunc->fields.m_target)(
        clickDecideBtnFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickDecideBtnFunc->fields.extra_arg);
  }
}


void __fastcall MessageAndScrollDetailConfirmDialog__OnClickOk(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  _QWORD *v3; // x0
  System_Reflection_MethodBase_o *v4; // x0
  struct MessageAndScrollDetailConfirmDialog_ClickDelegate_o *clickOkBtnFunc; // x8

  if ( (byte_49BE1BC & 1) == 0 )
  {
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog_OnClickOk__, method);
    byte_49BE1BC = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v3 = Method_MessageAndScrollDetailConfirmDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_MessageAndScrollDetailConfirmDialog_OnClickOk__ + 83) & 2) != 0 )
      v3 = (_QWORD *)sub_1B4CFA8(Method_MessageAndScrollDetailConfirmDialog_OnClickOk__);
    v4 = (System_Reflection_MethodBase_o *)sub_1B4CF74(v3, v3[4]);
    OverwriteAssetSoundName__PlaySystemSe(v4, this->fields.onClickOkSeKind, 0, 0LL);
    clickOkBtnFunc = this->fields.clickOkBtnFunc;
    if ( clickOkBtnFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickOkBtnFunc->fields.m_target)(
        clickOkBtnFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickOkBtnFunc->fields.extra_arg);
  }
}


void __fastcall MessageAndScrollDetailConfirmDialog__Open(
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
  __int64 v20; // x1
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v21; // x26
  const MethodInfo *v22; // x3
  const MethodInfo *v23; // [xsp+30h] [xbp-80h]

  if ( (byte_49BE1AC & 1) == 0 )
  {
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo, mainTitle);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__, v20);
    byte_49BE1AC = 1;
  }
  this->fields.closeNotificationCallback = func;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.closeNotificationCallback,
    (int32_t)func,
    (int32_t)mainMessage,
    (const MethodInfo *)detailTitle);
  v21 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
  MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
    v21,
    (Il2CppObject *)this,
    Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__,
    v22);
  MessageAndScrollDetailConfirmDialog__OpenDialog_44857968(
    this,
    mainTitle,
    mainMessage,
    detailTitle,
    detailMessage,
    v21,
    script,
    panelDepth,
    maxLine,
    mainTitleSize,
    detailTitleSize,
    canMaskTouchClose,
    this->fields.onClickOkSeKind,
    8,
    v23);
}


void __fastcall MessageAndScrollDetailConfirmDialog__OpenDialog(
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
  UIPanel_o *TargetPanel; // x0
  int32_t v43; // w2
  const MethodInfo *v44; // x3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v46; // x23
  UILabel_o *mainTitleLabel; // x0
  __int64 keepPanelDepth; // x1
  MessageAndScrollDetailConfirmDialog_c *v49; // x0
  MessageAndScrollDetailConfirmDialog_c *v50; // x0
  System_String_o *v51; // x21
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x8
  float x; // s9
  float z; // s8
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  MessageAndScrollDetailConfirmDialog_c *v57; // x0
  MessageAndScrollDetailConfirmDialog_c *v58; // x0
  System_String_o *v59; // x25
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v60; // x8
  float v61; // s9
  float v62; // s8
  float y; // s0
  UnityEngine_GameObject_o *v64; // x0
  bool IsNullOrEmpty; // w20
  bool v66; // w0
  UnityEngine_Object_o *okBtnLabel; // x20
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v68; // x20
  const MethodInfo *v69; // x3
  int32_t v70; // w2
  const MethodInfo *v71; // x3
  UILabel_o *v72; // x20
  UnityEngine_GameObject_o *v73; // x0
  MessageAndScrollDetailConfirmDialog_c *v74; // x8
  UnityEngine_GameObject_o *v75; // x20
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v76; // x10
  System_Nullable_int__o v77; // x21
  System_Nullable_int__o v78; // x24
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  UILabel_o *v82; // x20
  UnityEngine_GameObject_o *v83; // x0
  MessageAndScrollDetailConfirmDialog_c *v84; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v85; // x10
  const MethodInfo *v86; // x3
  UnityEngine_Object_o *v87; // x20
  uint32_t cctor_finished; // w9
  UnityEngine_Object_o *v89; // x20
  struct UnityEngine_GameObject_o *v90; // x0
  int32_t v91; // w2
  const MethodInfo *v92; // x3
  int32_t v93; // w1
  struct UnityEngine_GameObject_o **p_closeButton; // x0
  UnityEngine_GameObject_o *v95; // x0
  System_Action_o *v96; // x20
  const MethodInfo *v97; // [xsp+10h] [xbp-E0h]
  float v; // [xsp+7Ch] [xbp-74h]
  float va; // [xsp+7Ch] [xbp-74h]
  System_Nullable_int__o v104; // 0:x1.8
  System_Nullable_int__o v105; // 0:x2.8
  UnityEngine_Vector3_o v106; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v107; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v108; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v109; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v110; // 0:s3.4,4:s4.4,8:s5.4

  v24 = detailTitleFontSize;
  v25 = mainTitleFontSize;
  if ( (byte_49BE1AE & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, mainTitle);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo, v30);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v31);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__, v32);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog_EndOpen__, v33);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog_TypeInfo, v34);
    sub_1B4CF90(&Method_System_Nullable_float__GetValueOrDefault__, v35);
    sub_1B4CF90(&Method_System_Nullable_float__get_HasValue__, v36);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v37);
    sub_1B4CF90(&StringLiteral_3656/*"COMMON_CONFIRM_CANCEL"*/, v38);
    sub_1B4CF90(&StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, v39);
    sub_1B4CF90(&StringLiteral_1/*""*/, v40);
    sub_1B4CF90(&StringLiteral_15352/*"Window/OkBtn"*/, v41);
    byte_49BE1AE = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v46 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  this->fields.onClickDecideSeKind = onClickDecideSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0LL, 0LL);
    if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
    {
      if ( !v46 )
        goto LABEL_92;
      this->fields.keepPanelDepth = v46->fields.mDepth;
    }
  }
  this->fields.clickOkBtnFunc = okFunc;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.clickOkBtnFunc, (int32_t)okFunc, v43, v44);
  if ( mainTitleFontSize <= 0 )
  {
    v49 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v49 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    v25 = v49->static_fields->MainTitleFontSize;
  }
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_fontSize(mainTitleLabel, v25, 0LL);
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_text(mainTitleLabel, mainTitle, 0LL);
  v50 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v51 = detailTitle;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v50 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  static_fields = v50->static_fields;
  x = static_fields->MainTitleBasePos.fields.x;
  z = static_fields->MainTitleBasePos.fields.z;
  if ( mainTitlePosY.fields.hasValue )
  {
    value = mainTitlePosY.fields.value;
  }
  else
  {
    if ( !v50->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v50);
      static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
    }
    value = static_fields->MainTitleBasePos.fields.y;
  }
  v = value;
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
  v106.fields.y = v;
  v106.fields.x = x;
  v106.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v106, 0LL);
  if ( detailTitleFontSize <= 0 )
  {
    v57 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
      v57 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    v24 = v57->static_fields->DetailTitleFontSize;
  }
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_fontSize(mainTitleLabel, v24, 0LL);
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UILabel__set_text(mainTitleLabel, detailTitle, 0LL);
  v58 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v59 = cancelBtnLabelName;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v58 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  v60 = v58->static_fields;
  v61 = v60->DetailTitleBasePos.fields.x;
  v62 = v60->DetailTitleBasePos.fields.z;
  if ( detailTitlePosY.fields.hasValue )
  {
    y = detailTitlePosY.fields.value;
  }
  else
  {
    if ( !v58->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v58);
      v60 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
    }
    y = v60->DetailTitleBasePos.fields.y;
  }
  va = y;
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
LABEL_92:
    sub_1B4D1EC(mainTitleLabel, keepPanelDepth);
  v64 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
  v107.fields.y = va;
  v107.fields.x = v61;
  v107.fields.z = v62;
  GameObjectExtensions__SetLocalPosition(v64, v107, 0LL);
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
  IsNullOrEmpty = System_String__IsNullOrEmpty(mainTitle, 0LL);
  v66 = System_String__IsNullOrEmpty(v51, 0LL);
  MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel(
    this,
    IsNullOrEmpty,
    v66,
    mainMessage,
    detailMessage,
    mainMsgFontSize,
    detailMsgFontSize,
    maxLine,
    v108,
    v110,
    mainMsgAlignment,
    detailMsgAlignment,
    v97);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    if ( System_String__op_Inequality(decideBtnLabelName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      mainTitleLabel = (UILabel_o *)this->fields.decideBtn;
      if ( !mainTitleLabel )
        goto LABEL_92;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 1, 0LL);
      mainTitleLabel = this->fields.decideBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      UILabel__set_text(mainTitleLabel, decideBtnLabelName, 0LL);
      v68 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
      MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        v68,
        (Il2CppObject *)this,
        Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__,
        v69);
      this->fields.clickDecideBtnFunc = v68;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.clickDecideBtnFunc, (int32_t)v68, v70, v71);
      v72 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(
                                      cancelBtnLabelName,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v59 = (System_String_o *)mainTitleLabel;
      }
      if ( !v72 )
        goto LABEL_92;
      UILabel__set_text(v72, v59, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v73 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      v74 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v75 = v73;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v74 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v76 = v74->static_fields;
      v78 = inputCancelBtnWidth;
      v77 = inputDecideBtnWidth;
      p_x = &v76->OkButtonBasePosTypeTwoAlternative.fields.x;
      p_y = &v76->OkButtonBasePosTypeTwoAlternative.fields.y;
      p_z = &v76->OkButtonBasePosTypeTwoAlternative.fields.z;
    }
    else
    {
      v82 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(
                                      cancelBtnLabelName,
                                      (System_String_o *)StringLiteral_1/*""*/,
                                      0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v59 = (System_String_o *)mainTitleLabel;
      }
      if ( !v82 )
        goto LABEL_92;
      UILabel__set_text(v82, v59, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v83 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      v84 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v75 = v83;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v84 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v85 = v84->static_fields;
      v78 = inputCancelBtnWidth;
      v77 = inputDecideBtnWidth;
      p_x = &v85->OkButtonBasePos.fields.x;
      p_y = &v85->OkButtonBasePos.fields.y;
      p_z = &v85->OkButtonBasePos.fields.z;
    }
    v109.fields.y = *p_y;
    v109.fields.x = *p_x;
    v109.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(v75, v109, 0LL);
    v104 = v78;
    v105 = v77;
    MessageAndScrollDetailConfirmDialog__AdjustBtnSize(this, v104, v105, v86);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v46, 0LL, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( !v46 )
      goto LABEL_92;
    UIPanel__set_depth(v46, keepPanelDepth, 0LL);
  }
  mainTitleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !mainTitleLabel )
    goto LABEL_92;
  UIScrollView__ResetPosition((UIScrollView_o *)mainTitleLabel, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v87 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                  this,
                                  this->klass->vtable._5_set_closeBtnObject.methodPtr);
  cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
  if ( canMaskTouchClose )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v87, 0LL, 0LL) )
    {
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_92;
      v89 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                      (UnityEngine_Transform_o *)mainTitleLabel,
                                      (System_String_o *)StringLiteral_15352/*"Window/OkBtn"*/,
                                      0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(v89, 0LL, 0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
      {
        if ( v89 )
        {
          v90 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v89, 0LL);
          v93 = (int)v90;
          this->fields.closeButton = v90;
          p_closeButton = &this->fields.closeButton;
LABEL_90:
          sub_1B4CF34((CGThumbnailListItem_o *)p_closeButton, v93, v91, v92);
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
    if ( UnityEngine_Object__op_Inequality(v87, 0LL, 0LL) )
    {
      v95 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                          this,
                                          this->klass->vtable._5_set_closeBtnObject.methodPtr);
      AndroidBackKeyManager__RemoveBackBtn(v95, 0LL);
      this->fields.closeButton = 0LL;
      p_closeButton = &this->fields.closeButton;
      v93 = 0;
      goto LABEL_90;
    }
  }
LABEL_91:
  v96 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v96, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v96, 0, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog__OpenDialog_44857968(
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
  System_String_o *v18; // x27
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
  UIPanel_o *TargetPanel; // x0
  int32_t v42; // w2
  const MethodInfo *v43; // x3
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v45; // x22
  UILabel_o *mainTitleLabel; // x0
  __int64 monitor_high; // x1
  MessageAndScrollDetailConfirmDialog_o *v48; // x0
  const MethodInfo *v49; // x3
  int IntFromScript; // w28
  MessageAndScrollDetailConfirmDialog_c *v51; // x0
  UILabel_o *v52; // x29
  const MethodInfo *v53; // x3
  MessageAndScrollDetailConfirmDialog_o *gameObject; // x0
  const MethodInfo *v55; // x3
  MessageAndScrollDetailConfirmDialog_c *v56; // x8
  UnityEngine_GameObject_o *v57; // x27
  float *p_x; // x8
  float v59; // s8
  float v60; // s9
  float v61; // s10
  MessageAndScrollDetailConfirmDialog_o *v62; // x0
  const MethodInfo *v63; // x3
  MessageAndScrollDetailConfirmDialog_c *v64; // x0
  UILabel_o *detailTitleLabel; // x27
  const MethodInfo *v66; // x3
  MessageAndScrollDetailConfirmDialog_o *v67; // x0
  const MethodInfo *v68; // x3
  MessageAndScrollDetailConfirmDialog_c *v69; // x8
  UnityEngine_GameObject_o *v70; // x26
  float *v71; // x8
  float v72; // s8
  float v73; // s9
  float v74; // s10
  struct UILabel_o *v75; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  float v80; // s11
  float v81; // s12
  float v82; // s13
  struct UILabel_o *v83; // x8
  char v84; // w26
  bool IsNullOrEmpty; // w0
  const MethodInfo *v86; // x7
  UnityEngine_Object_o *okBtnLabel; // x23
  _BOOL8 v88; // x0
  const MethodInfo *v89; // x3
  MessageAndScrollDetailConfirmDialog_o *StringFromScript; // x24
  const MethodInfo *v91; // x3
  System_String_o *v92; // x23
  MessageAndScrollDetailConfirmDialog_o *v93; // x0
  const MethodInfo *v94; // x3
  UILabel_o *decideBtnLabel; // x24
  const MethodInfo *v96; // x2
  struct System_Action_o *v97; // x0
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v100; // x24
  const MethodInfo *v101; // x3
  int32_t v102; // w2
  const MethodInfo *v103; // x3
  UILabel_o *v104; // x24
  MessageAndScrollDetailConfirmDialog_o *v105; // x0
  const MethodInfo *v106; // x3
  MessageAndScrollDetailConfirmDialog_c *v107; // x8
  UnityEngine_GameObject_o *v108; // x23
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v109; // x10
  float *v110; // x8
  float *p_y; // x9
  float *p_z; // x10
  UILabel_o *v113; // x24
  MessageAndScrollDetailConfirmDialog_c *v114; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v115; // x10
  float v116; // s9
  float v117; // s8
  float v118; // s10
  MessageAndScrollDetailConfirmDialog_o *v119; // x0
  const MethodInfo *v120; // x3
  UILabel_o *v121; // x23
  const MethodInfo *v122; // x2
  UnityEngine_Object_o *v123; // x20
  uint32_t cctor_finished; // w9
  UnityEngine_Object_o *v125; // x20
  struct UnityEngine_GameObject_o *v126; // x0
  int32_t v127; // w2
  const MethodInfo *v128; // x3
  int32_t v129; // w1
  struct UnityEngine_GameObject_o **p_closeButton; // x0
  UnityEngine_GameObject_o *v131; // x0
  System_Action_o *v132; // x20
  UnityEngine_Vector3_o VecFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v137; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v138; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v139; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v140; // 0:s3.4,4:s4.4,8:s5.4

  v18 = mainTitle;
  if ( (byte_49BE1AF & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, mainTitle);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo, v20);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v21);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__, v22);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog_EndOpen__, v23);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog_TypeInfo, v24);
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, v25);
    sub_1B4CF90(&StringLiteral_20969/*"mainTitleFontSize"*/, v26);
    sub_1B4CF90(&StringLiteral_18206/*"decideBtnFontSize"*/, v27);
    sub_1B4CF90(&StringLiteral_18292/*"detailTitleFontSize"*/, v28);
    sub_1B4CF90(&StringLiteral_18291/*"detailTitle"*/, v29);
    sub_1B4CF90(&StringLiteral_20968/*"mainTitle"*/, v30);
    sub_1B4CF90(&StringLiteral_18293/*"detailTitleOffset"*/, v31);
    sub_1B4CF90(&StringLiteral_17418/*"cancelBtnFontSize"*/, v32);
    sub_1B4CF90(&StringLiteral_3656/*"COMMON_CONFIRM_CANCEL"*/, v33);
    sub_1B4CF90(&StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, v34);
    sub_1B4CF90(&StringLiteral_18207/*"decideBtnLabel"*/, v35);
    sub_1B4CF90(&StringLiteral_17419/*"cancelBtnLabel"*/, v36);
    sub_1B4CF90(&StringLiteral_17336/*"buttonOffset"*/, v37);
    sub_1B4CF90(&StringLiteral_1/*""*/, v38);
    sub_1B4CF90(&StringLiteral_15352/*"Window/OkBtn"*/, v39);
    sub_1B4CF90(&StringLiteral_20970/*"mainTitleOffset"*/, v40);
    byte_49BE1AF = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v45 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  this->fields.onClickDecideSeKind = onClickDecideSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL);
    if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
    {
      if ( !v45 )
        goto LABEL_99;
      this->fields.keepPanelDepth = v45->fields.mDepth;
    }
  }
  this->fields.clickOkBtnFunc = okFunc;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.clickOkBtnFunc, (int32_t)okFunc, v42, v43);
  if ( mainTitleFontSize )
  {
    IntFromScript = 0;
  }
  else
  {
    IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                      v48,
                      script,
                      (System_String_o *)StringLiteral_20969/*"mainTitleFontSize"*/,
                      v49);
    if ( IntFromScript <= 0 )
    {
      v51 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v51 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      IntFromScript = v51->static_fields->MainTitleFontSize;
    }
  }
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UILabel__set_fontSize(mainTitleLabel, IntFromScript, 0LL);
  v52 = this->fields.mainTitleLabel;
  mainTitleLabel = (UILabel_o *)System_String__op_Inequality(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
  {
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                    (MessageAndScrollDetailConfirmDialog_o *)mainTitleLabel,
                                    script,
                                    (System_String_o *)StringLiteral_20968/*"mainTitle"*/,
                                    v53);
    v18 = (System_String_o *)mainTitleLabel;
  }
  if ( !v52 )
    goto LABEL_99;
  UILabel__set_text(v52, v18, 0LL);
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  gameObject = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)mainTitleLabel,
                                                          0LL);
  v56 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v57 = (UnityEngine_GameObject_o *)gameObject;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v56 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  p_x = &v56->static_fields->MainTitleBasePos.fields.x;
  v59 = *p_x;
  v60 = p_x[1];
  v61 = p_x[2];
  VecFromScript = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
                    gameObject,
                    script,
                    (System_String_o *)StringLiteral_20970/*"mainTitleOffset"*/,
                    v55);
  VecFromScript.fields.x = v59 + VecFromScript.fields.x;
  VecFromScript.fields.y = v60 + VecFromScript.fields.y;
  VecFromScript.fields.z = v61 + VecFromScript.fields.z;
  GameObjectExtensions__SetLocalPosition(v57, VecFromScript, 0LL);
  if ( !detailTitleFontSize )
  {
    IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                      v62,
                      script,
                      (System_String_o *)StringLiteral_18292/*"detailTitleFontSize"*/,
                      v63);
    if ( IntFromScript <= 0 )
    {
      v64 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v64 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      IntFromScript = v64->static_fields->DetailTitleFontSize;
    }
  }
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UILabel__set_fontSize(mainTitleLabel, IntFromScript, 0LL);
  detailTitleLabel = this->fields.detailTitleLabel;
  mainTitleLabel = (UILabel_o *)System_String__op_Inequality(detailTitle, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
  {
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                    (MessageAndScrollDetailConfirmDialog_o *)mainTitleLabel,
                                    script,
                                    (System_String_o *)StringLiteral_18291/*"detailTitle"*/,
                                    v66);
    detailTitle = (System_String_o *)mainTitleLabel;
  }
  if ( !detailTitleLabel )
    goto LABEL_99;
  UILabel__set_text(detailTitleLabel, detailTitle, 0LL);
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_99;
  v67 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mainTitleLabel,
                                                   0LL);
  v69 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v70 = (UnityEngine_GameObject_o *)v67;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
    v69 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  v71 = &v69->static_fields->MainTitleBasePos.fields.x;
  v72 = v71[9];
  v73 = v71[10];
  v74 = v71[11];
  v137 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(v67, script, (System_String_o *)StringLiteral_18293/*"detailTitleOffset"*/, v68);
  v137.fields.x = v72 + v137.fields.x;
  v137.fields.y = v73 + v137.fields.y;
  v137.fields.z = v74 + v137.fields.z;
  GameObjectExtensions__SetLocalPosition(v70, v137, 0LL);
  v75 = this->fields.mainTitleLabel;
  if ( !v75 )
    goto LABEL_99;
  static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  x = static_fields->MainMessageBasePos.fields.x;
  y = static_fields->MainMessageBasePos.fields.y;
  z = static_fields->MainMessageBasePos.fields.z;
  v80 = static_fields->DetailMessageBasePos.fields.x;
  v81 = static_fields->DetailMessageBasePos.fields.y;
  v82 = static_fields->DetailMessageBasePos.fields.z;
  mainTitleLabel = (UILabel_o *)System_String__IsNullOrEmpty(v75->fields.mText, 0LL);
  v83 = this->fields.detailTitleLabel;
  if ( !v83 )
LABEL_99:
    sub_1B4D1EC(mainTitleLabel, monitor_high);
  v84 = (char)mainTitleLabel;
  IsNullOrEmpty = System_String__IsNullOrEmpty(v83->fields.mText, 0LL);
  v138.fields.x = x;
  v138.fields.y = y;
  v138.fields.z = z;
  v140.fields.x = v80;
  v140.fields.y = v81;
  v140.fields.z = v82;
  MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel_44865340(
    this,
    v84 & 1,
    IsNullOrEmpty,
    mainMessage,
    detailMessage,
    maxLine,
    v138,
    v140,
    script,
    v86);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v88 = UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL);
  if ( v88 )
  {
    StringFromScript = (MessageAndScrollDetailConfirmDialog_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                                                  (MessageAndScrollDetailConfirmDialog_o *)v88,
                                                                  script,
                                                                  (System_String_o *)StringLiteral_18207/*"decideBtnLabel"*/,
                                                                  v89);
    v92 = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
            StringFromScript,
            script,
            (System_String_o *)StringLiteral_17419/*"cancelBtnLabel"*/,
            v91);
    if ( System_String__op_Inequality((System_String_o *)StringFromScript, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      mainTitleLabel = (UILabel_o *)this->fields.decideBtn;
      if ( !mainTitleLabel )
        goto LABEL_99;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 1, 0LL);
      mainTitleLabel = this->fields.decideBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      UILabel__set_text(mainTitleLabel, (System_String_o *)StringFromScript, 0LL);
      mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                      v93,
                                      script,
                                      (System_String_o *)StringLiteral_18206/*"decideBtnFontSize"*/,
                                      v94);
      decideBtnLabel = this->fields.decideBtnLabel;
      monitor_high = (unsigned int)mainTitleLabel;
      if ( (int)mainTitleLabel <= 0 )
      {
        mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
          mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        monitor_high = HIDWORD(mainTitleLabel->fields.onChange[1].monitor);
      }
      if ( !decideBtnLabel )
        goto LABEL_99;
      UILabel__set_fontSize(decideBtnLabel, monitor_high, 0LL);
      v97 = MessageAndScrollDetailConfirmDialog__SetTransitionFunc(this, script, v96);
      this->fields.decideNotificationCallback = v97;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.decideNotificationCallback, (int32_t)v97, v98, v99);
      v100 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
      MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        v100,
        (Il2CppObject *)this,
        Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__,
        v101);
      this->fields.clickDecideBtnFunc = v100;
      sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.clickDecideBtnFunc, (int32_t)v100, v102, v103);
      v104 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(v92, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3656/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
        v92 = (System_String_o *)mainTitleLabel;
      }
      if ( !v104 )
        goto LABEL_99;
      UILabel__set_text(v104, v92, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v105 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)mainTitleLabel,
                                                        0LL);
      v107 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v108 = (UnityEngine_GameObject_o *)v105;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v107 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v109 = v107->static_fields;
      v110 = &v109->OkButtonBasePosTypeTwoAlternative.fields.x;
      p_y = &v109->OkButtonBasePosTypeTwoAlternative.fields.y;
      p_z = &v109->OkButtonBasePosTypeTwoAlternative.fields.z;
    }
    else
    {
      v113 = this->fields.okBtnLabel;
      mainTitleLabel = (UILabel_o *)System_String__op_Inequality(v92, (System_String_o *)StringLiteral_1/*""*/, 0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
      {
        if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
        mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3657/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
        v92 = (System_String_o *)mainTitleLabel;
      }
      if ( !v113 )
        goto LABEL_99;
      UILabel__set_text(v113, v92, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v105 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)mainTitleLabel,
                                                        0LL);
      v114 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v108 = (UnityEngine_GameObject_o *)v105;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        v114 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v115 = v114->static_fields;
      v110 = &v115->OkButtonBasePos.fields.x;
      p_y = &v115->OkButtonBasePos.fields.y;
      p_z = &v115->OkButtonBasePos.fields.z;
    }
    v116 = *v110;
    v117 = *p_y;
    v118 = *p_z;
    v139 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
             v105,
             script,
             (System_String_o *)StringLiteral_17336/*"buttonOffset"*/,
             v106);
    v139.fields.x = v116 + v139.fields.x;
    v139.fields.y = v117 + v139.fields.y;
    v139.fields.z = v118 + v139.fields.z;
    GameObjectExtensions__SetLocalPosition(v108, v139, 0LL);
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                    v119,
                                    script,
                                    (System_String_o *)StringLiteral_17418/*"cancelBtnFontSize"*/,
                                    v120);
    v121 = this->fields.okBtnLabel;
    monitor_high = (unsigned int)mainTitleLabel;
    if ( (int)mainTitleLabel <= 0 )
    {
      mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo);
        mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      monitor_high = LODWORD(mainTitleLabel->fields.onChange[1].monitor);
    }
    if ( !v121 )
      goto LABEL_99;
    UILabel__set_fontSize(v121, monitor_high, 0LL);
    MessageAndScrollDetailConfirmDialog__AdjustBtnSize_44870944(this, script, v122);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v45, 0LL, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
  {
    monitor_high = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      monitor_high = (unsigned int)this->fields.keepPanelDepth;
    if ( !v45 )
      goto LABEL_99;
    UIPanel__set_depth(v45, monitor_high, 0LL);
  }
  mainTitleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !mainTitleLabel )
    goto LABEL_99;
  UIScrollView__ResetPosition((UIScrollView_o *)mainTitleLabel, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v123 = (UnityEngine_Object_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                   this,
                                   this->klass->vtable._5_set_closeBtnObject.methodPtr);
  cctor_finished = UnityEngine_Object_TypeInfo->_2.cctor_finished;
  if ( canMaskTouchClose )
  {
    if ( !cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( UnityEngine_Object__op_Equality(v123, 0LL, 0LL) )
    {
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)this, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_99;
      v125 = (UnityEngine_Object_o *)UnityEngine_Transform__Find(
                                       (UnityEngine_Transform_o *)mainTitleLabel,
                                       (System_String_o *)StringLiteral_15352/*"Window/OkBtn"*/,
                                       0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality(v125, 0LL, 0LL);
      if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
      {
        if ( v125 )
        {
          v126 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v125, 0LL);
          v129 = (int)v126;
          this->fields.closeButton = v126;
          p_closeButton = &this->fields.closeButton;
LABEL_97:
          sub_1B4CF34((CGThumbnailListItem_o *)p_closeButton, v129, v127, v128);
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
    if ( UnityEngine_Object__op_Inequality(v123, 0LL, 0LL) )
    {
      v131 = (UnityEngine_GameObject_o *)((__int64 (__fastcall *)(MessageAndScrollDetailConfirmDialog_o *, Il2CppMethodPointer))this->klass->vtable._4_get_closeBtnObject.method)(
                                           this,
                                           this->klass->vtable._5_set_closeBtnObject.methodPtr);
      AndroidBackKeyManager__RemoveBackBtn(v131, 0LL);
      this->fields.closeButton = 0LL;
      p_closeButton = &this->fields.closeButton;
      v129 = 0;
      goto LABEL_97;
    }
  }
LABEL_98:
  v132 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
  System_Action___ctor(v132, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v132, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__Open_44860392(
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
  __int64 v28; // x1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v31; // x26
  const MethodInfo *v32; // x3

  if ( (byte_49BE1AD & 1) == 0 )
  {
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo, mainTitle);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__, v28);
    byte_49BE1AD = 1;
  }
  this->fields.closeNotificationCallback = closeFunc;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)&this->fields.closeNotificationCallback,
    (int32_t)closeFunc,
    (int32_t)mainMessage,
    (const MethodInfo *)detailTitle);
  this->fields.decideNotificationCallback = decideFunc;
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.decideNotificationCallback, (int32_t)decideFunc, v29, v30);
  v31 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1B4D1DC(MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo);
  MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
    v31,
    (Il2CppObject *)this,
    Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__,
    v32);
  MessageAndScrollDetailConfirmDialog__OpenDialog(
    this,
    mainTitle,
    mainMessage,
    detailTitle,
    detailMessage,
    v31,
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


System_Action_o *__fastcall MessageAndScrollDetailConfirmDialog__SetTransitionFunc(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
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
  __int64 v44; // x1
  __int64 v45; // x1
  __int64 v46; // x1
  __int64 v47; // x1
  __int64 v48; // x1
  __int64 v49; // x1
  __int64 v50; // x21
  SceneJumpInfo_o *IsNullOrEmpty; // x0
  __int64 v52; // x1
  int32_t v53; // w2
  const MethodInfo *v54; // x3
  MessageAndScrollDetailConfirmDialog_o *v55; // x0
  const MethodInfo *v56; // x2
  System_String_array *TransitionParam; // x0
  __int64 *v58; // x19
  int32_t v59; // w2
  const MethodInfo *v60; // x3
  __int64 v61; // x8
  System_Action_o *_9__51_4; // x20
  __int64 v63; // x8
  System_String_o *v64; // x19
  int32_t SceneType; // w23
  __int64 v66; // x22
  int32_t v67; // w2
  const MethodInfo *v68; // x3
  __int64 *v69; // x19
  __int64 v70; // x8
  __int64 v71; // x8
  System_String_o *v72; // x20
  System_Action_o *v73; // x0
  Il2CppObject *v74; // x1
  __int64 v75; // x2
  __int64 v76; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v77; // x0
  Il2CppObject *v78; // x19
  int32_t v79; // w2
  const MethodInfo *v80; // x3
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v81; // x0
  CGThumbnailListItem_o *p__9__51_4; // x0
  __int64 v83; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v84; // x0
  Il2CppObject *v85; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v86; // x0
  __int64 v87; // x8
  __int64 v88; // x21
  __int64 v89; // x8
  int32_t v90; // w22
  SceneJumpInfo_o *v91; // x20
  int32_t v92; // w2
  const MethodInfo *v93; // x3
  __int64 v94; // x8
  int32_t v95; // w19
  int32_t v96; // w20
  SceneJumpInfo_o *v97; // x23
  int32_t v98; // w2
  const MethodInfo *v99; // x3
  __int64 *v100; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v101; // x0
  Il2CppObject *v102; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *static_fields; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v104; // x0
  Il2CppObject *v105; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v106; // x0
  __int64 v107; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v108; // x0
  Il2CppObject *v109; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v110; // x0
  __int64 v111; // x8
  __int64 v112; // x8
  System_String_o *v113; // x20
  SceneJumpInfo_o *v114; // x19
  int32_t v115; // w2
  const MethodInfo *v116; // x3
  __int64 v117; // x8
  System_String_o *v118; // x20
  SceneJumpInfo_o *v119; // x22
  int32_t v120; // w2
  const MethodInfo *v121; // x3
  __int64 v122; // x20
  __int64 v123; // x8
  System_String_o *v124; // x19
  int32_t v125; // w2
  const MethodInfo *v126; // x3
  __int64 v127; // x8
  __int64 v128; // x8
  System_String_o *v129; // x20
  SceneJumpInfo_o *v130; // x19
  int32_t v131; // w2
  const MethodInfo *v132; // x3
  __int64 v133; // x20
  __int64 v134; // x8
  __int64 v135; // x8
  System_String_o *v136; // x21
  __int64 v137; // x1
  TerminalPramsManager_c *v138; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v139; // x0
  Il2CppObject *v140; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v141; // x0
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  System_Predicate_object__o *v143; // x22
  Il2CppObject *Instance; // x19
  System_String_o *v145; // x20
  System_String_o *v146; // x21
  MessageAndScrollDetailConfirmDialog___c_c *v147; // x8
  NotificationDialog_ClickDelegate_o *_9__51_12; // x22
  Il2CppObject *v149; // x23
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v150; // x0
  int32_t v151; // w2
  const MethodInfo *v152; // x3
  CGThumbnailListItem_c *v153; // x19
  TerminalPramsManager_c *v154; // x0
  CGThumbnailListItem_o *p_TransitionScrollTabName_k__BackingField; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v156; // x0
  Il2CppObject *v157; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v158; // x0
  int32_t eventType[2]; // [xsp+68h] [xbp-48h] BYREF
  int32_t result[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_49BE1B3 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, script);
    sub_1B4CF90(&NotificationDialog_ClickDelegate_TypeInfo, v5);
    sub_1B4CF90(&Method_DataManager_GetMaster_EventRewardSceneMaster___, v6);
    sub_1B4CF90(&Method_DataManager_GetMaster_GachaMaster___, v7);
    sub_1B4CF90(&DataManager_TypeInfo, v8);
    sub_1B4CF90(&Method_System_Enum_TryParse_ServantOperationManager_Kind___, v9);
    sub_1B4CF90(&Method_System_Enum_TryParse_MasterMissionComponent_Type___, v10);
    sub_1B4CF90(&Method_System_Enum_TryParse_PayType_Type___, v11);
    sub_1B4CF90(&System_Enum_TypeInfo, v12);
    sub_1B4CF90(&Method_System_Collections_Generic_List_GachaEntity__Find__, v13);
    sub_1B4CF90(&LocalizationManager_TypeInfo, v14);
    sub_1B4CF90(&System_Predicate_GachaEntity__TypeInfo, v15);
    sub_1B4CF90(&SceneJumpInfo_TypeInfo, v16);
    sub_1B4CF90(&SceneList_TypeInfo, v17);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v18);
    sub_1B4CF90(&TerminalPramsManager_TypeInfo, v19);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_10__, v20);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_12__, v21);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_2__, v22);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_3__, v23);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_4__, v24);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_5__, v25);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_6__, v26);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_7__, v27);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0__SetTransitionFunc_b__1__, v28);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_TypeInfo, v29);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1__SetTransitionFunc_b__0__, v30);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_TypeInfo, v31);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__8__, v32);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__9__, v33);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_TypeInfo, v34);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3__SetTransitionFunc_b__11__, v35);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_TypeInfo, v36);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4__SetTransitionFunc_b__14__, v37);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_TypeInfo, v38);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5__SetTransitionFunc_b__15__, v39);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_TypeInfo, v40);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6__SetTransitionFunc_b__16__, v41);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_TypeInfo, v42);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog___c_TypeInfo, v43);
    sub_1B4CF90(&StringLiteral_9338/*"NormalEventShop"*/, v44);
    sub_1B4CF90(&StringLiteral_13070/*"TERMINAL_BANNER_ERROR_DIALOG_MESSAGE_TO_SUMMON"*/, v45);
    sub_1B4CF90(&StringLiteral_12349/*"Scroll"*/, v46);
    sub_1B4CF90(&StringLiteral_1/*""*/, v47);
    sub_1B4CF90(&StringLiteral_13071/*"TERMINAL_BANNER_ERROR_DIALOG_TITLE"*/, v48);
    sub_1B4CF90(&StringLiteral_12319/*"Scene"*/, v49);
    byte_49BE1B3 = 1;
  }
  *(_QWORD *)result = 0LL;
  *(_QWORD *)eventType = 0LL;
  v50 = sub_1B4D1DC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_TypeInfo);
  System_Object___ctor((Il2CppObject *)v50, 0LL);
  if ( !v50 )
    goto LABEL_169;
  *(_QWORD *)(v50 + 16) = this;
  sub_1B4CF34((CGThumbnailListItem_o *)(v50 + 16), (int32_t)this, v53, v54);
  TransitionParam = MessageAndScrollDetailConfirmDialog__GetTransitionParam(v55, script, v56);
  *(_QWORD *)(v50 + 24) = TransitionParam;
  v58 = (__int64 *)(v50 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v50 + 24), (int32_t)TransitionParam, v59, v60);
  v61 = *(_QWORD *)(v50 + 24);
  if ( !v61 )
    goto LABEL_169;
  if ( !*(_DWORD *)(v61 + 24) )
    goto LABEL_170;
  IsNullOrEmpty = (SceneJumpInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v61 + 32), 0LL);
  _9__51_4 = 0LL;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return _9__51_4;
  v63 = *v58;
  if ( !*v58 )
    goto LABEL_169;
  if ( !*(_DWORD *)(v63 + 24) )
    goto LABEL_170;
  v64 = System_String__Concat_61093468(*(System_String_o **)(v63 + 32), (System_String_o *)StringLiteral_12319/*"Scene"*/, 0LL);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo);
  SceneType = SceneList__getSceneType(v64, 0LL);
  v66 = sub_1B4D1DC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_TypeInfo);
  System_Object___ctor((Il2CppObject *)v66, 0LL);
  if ( !v66 )
    goto LABEL_169;
  *(_QWORD *)(v66 + 24) = v50;
  v69 = (__int64 *)(v66 + 24);
  sub_1B4CF34((CGThumbnailListItem_o *)(v66 + 24), v50, v67, v68);
  if ( SceneType > 32 )
  {
    if ( SceneType != 72 )
    {
      if ( SceneType != 91 )
      {
        if ( SceneType == 100 )
        {
          *(_DWORD *)(v66 + 16) = -1;
          v70 = *(_QWORD *)(v66 + 24);
          if ( v70 )
          {
            v71 = *(_QWORD *)(v70 + 24);
            if ( v71 )
            {
              if ( *(int *)(v71 + 24) >= 2 )
              {
                v72 = *(System_String_o **)(v71 + 40);
                if ( !System_Enum_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
                System_Enum__TryParse_Int32Enum_(
                  v72,
                  (int32_t *)(v66 + 16),
                  (const MethodInfo_2F08668 *)Method_System_Enum_TryParse_MasterMissionComponent_Type___);
              }
              v73 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
              _9__51_4 = v73;
              v74 = (Il2CppObject *)v66;
              LODWORD(v75) = Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1__SetTransitionFunc_b__0__;
              goto LABEL_115;
            }
          }
LABEL_169:
          sub_1B4D1EC(IsNullOrEmpty, v52);
        }
        return 0LL;
      }
      v101 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
        v101 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__51_4 = v101->static_fields->__9__51_4;
      if ( !_9__51_4 )
      {
        if ( !v101->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v101);
          v101 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v102 = (Il2CppObject *)v101->static_fields->__9;
        _9__51_4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v102,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_4__,
          0LL);
        static_fields = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        static_fields->__9__51_4 = _9__51_4;
        p__9__51_4 = (CGThumbnailListItem_o *)&static_fields->__9__51_4;
LABEL_166:
        sub_1B4CF34(p__9__51_4, (int32_t)_9__51_4, v79, v80);
        return _9__51_4;
      }
      return _9__51_4;
    }
    if ( !*v69 )
      goto LABEL_169;
    v87 = *(_QWORD *)(*v69 + 24);
    if ( !v87 )
      goto LABEL_169;
    if ( *(int *)(v87 + 24) < 2 )
      return 0LL;
    v88 = sub_1B4D1DC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_TypeInfo);
    System_Object___ctor((Il2CppObject *)v88, 0LL);
    if ( !*v69 )
      goto LABEL_169;
    v89 = *(_QWORD *)(*v69 + 24);
    if ( !v89 )
      goto LABEL_169;
    if ( *(_DWORD *)(v89 + 24) > 1u )
    {
      System_Int32__TryParse(*(System_String_o **)(v89 + 40), result, 0LL);
      v90 = result[0];
      v91 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39216272(v91, (System_String_o *)StringLiteral_9338/*"NormalEventShop"*/, v90, 0LL);
      if ( !v88 )
        goto LABEL_169;
      *(_QWORD *)(v88 + 16) = v91;
      sub_1B4CF34((CGThumbnailListItem_o *)(v88 + 16), (int32_t)v91, v92, v93);
      IsNullOrEmpty = *(SceneJumpInfo_o **)(v88 + 16);
      if ( !IsNullOrEmpty )
        goto LABEL_169;
      SceneJumpInfo__SetReturnNowScene(IsNullOrEmpty, 0LL);
      _9__51_4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__51_4,
        (Il2CppObject *)v88,
        Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__8__,
        0LL);
      if ( !*v69 )
        goto LABEL_169;
      v94 = *(_QWORD *)(*v69 + 24);
      if ( !v94 )
        goto LABEL_169;
      if ( *(int *)(v94 + 24) < 3 )
        return _9__51_4;
      System_Int32__TryParse(*(System_String_o **)(v94 + 48), &eventType[1], 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
      IsNullOrEmpty = (SceneJumpInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
      if ( !IsNullOrEmpty )
        goto LABEL_169;
      if ( !EventRewardSceneMaster__getEntityFromIdAndEventType(
              (EventRewardSceneMaster_o *)IsNullOrEmpty,
              result[0],
              eventType[1],
              0LL) )
        return _9__51_4;
      v95 = result[0];
      v96 = eventType[1];
      v97 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39216332(v97, (System_String_o *)StringLiteral_1/*""*/, v95, v96, 0LL);
      *(_QWORD *)(v88 + 16) = v97;
      sub_1B4CF34((CGThumbnailListItem_o *)(v88 + 16), (int32_t)v97, v98, v99);
      v73 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      v100 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2__SetTransitionFunc_b__9__;
LABEL_114:
      v75 = *v100;
      _9__51_4 = v73;
      v74 = (Il2CppObject *)v88;
LABEL_115:
      System_Action___ctor(v73, v74, v75, 0LL);
      return _9__51_4;
    }
    goto LABEL_170;
  }
  _9__51_4 = 0LL;
  if ( SceneType <= 22 )
  {
    if ( SceneType == 20 )
    {
      result[1] = 1;
      v88 = *v69;
      if ( !*v69 )
        goto LABEL_169;
      v111 = *(_QWORD *)(v88 + 24);
      if ( !v111 )
        goto LABEL_169;
      if ( *(int *)(v111 + 24) >= 2 )
      {
        v133 = sub_1B4D1DC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_TypeInfo);
        System_Object___ctor((Il2CppObject *)v133, 0LL);
        if ( !*v69 )
          goto LABEL_169;
        v134 = *(_QWORD *)(*v69 + 24);
        if ( !v134 )
          goto LABEL_169;
        if ( *(_DWORD *)(v134 + 24) <= 1u )
          goto LABEL_170;
        if ( !v133 )
          goto LABEL_169;
        IsNullOrEmpty = (SceneJumpInfo_o *)System_Int32__TryParse(
                                             *(System_String_o **)(v134 + 40),
                                             (int32_t *)(v133 + 16),
                                             0LL);
        if ( !*v69 )
          goto LABEL_169;
        v135 = *(_QWORD *)(*v69 + 24);
        if ( !v135 )
          goto LABEL_169;
        if ( *(_DWORD *)(v135 + 24) <= 1u )
          goto LABEL_170;
        v136 = *(System_String_o **)(v135 + 40);
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
        System_Enum__TryParse_Int32Enum_(
          v136,
          &result[1],
          (const MethodInfo_2F08668 *)Method_System_Enum_TryParse_PayType_Type___);
        if ( result[1] == 3 )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          if ( !byte_49B75B6 )
          {
            sub_1B4CF90(&TerminalPramsManager_TypeInfo, v137);
            byte_49B75B6 = 1;
          }
          v138 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
            v138 = TerminalPramsManager_TypeInfo;
          }
          v138->static_fields->_SummonType_k__BackingField = 3;
          v139 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
            v139 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          _9__51_4 = v139->static_fields->__9__51_10;
          if ( !_9__51_4 )
          {
            if ( !v139->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v139);
              v139 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
            }
            v140 = (Il2CppObject *)v139->static_fields->__9;
            _9__51_4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
            System_Action___ctor(
              _9__51_4,
              v140,
              Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_10__,
              0LL);
            v141 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            v141->__9__51_10 = _9__51_4;
            p__9__51_4 = (CGThumbnailListItem_o *)&v141->__9__51_10;
            goto LABEL_166;
          }
          return _9__51_4;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo);
        IsNullOrEmpty = (SceneJumpInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F01AD0 *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !IsNullOrEmpty )
          goto LABEL_169;
        ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                              (GachaMaster_o *)IsNullOrEmpty,
                                                                              0LL);
        v143 = (System_Predicate_object__o *)sub_1B4D1DC(System_Predicate_GachaEntity__TypeInfo);
        System_Predicate_object____ctor(
          v143,
          (Il2CppObject *)v133,
          Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3__SetTransitionFunc_b__11__,
          0LL);
        if ( !ValidGachaEntityList )
          goto LABEL_169;
        if ( System_Collections_Generic_List_object___Find(
               ValidGachaEntityList,
               (System_Predicate_T__o *)v143,
               (const MethodInfo_3580844 *)Method_System_Collections_Generic_List_GachaEntity__Find__) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo);
          v145 = LocalizationManager__Get((System_String_o *)StringLiteral_13071/*"TERMINAL_BANNER_ERROR_DIALOG_TITLE"*/, 0LL);
          IsNullOrEmpty = (SceneJumpInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13070/*"TERMINAL_BANNER_ERROR_DIALOG_MESSAGE_TO_SUMMON"*/, 0LL);
          v146 = (System_String_o *)IsNullOrEmpty;
          v147 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
            v147 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          _9__51_12 = v147->static_fields->__9__51_12;
          if ( !_9__51_12 )
          {
            if ( !v147->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v147);
              v147 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
            }
            v149 = (Il2CppObject *)v147->static_fields->__9;
            _9__51_12 = (NotificationDialog_ClickDelegate_o *)sub_1B4D1DC(NotificationDialog_ClickDelegate_TypeInfo);
            NotificationDialog_ClickDelegate___ctor(
              _9__51_12,
              v149,
              Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_12__,
              0LL);
            v150 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            v150->__9__51_12 = _9__51_12;
            sub_1B4CF34((CGThumbnailListItem_o *)&v150->__9__51_12, (int32_t)_9__51_12, v151, v152);
          }
          if ( !Instance )
            goto LABEL_169;
          CommonUI__OpenNotificationDialog_30250652(
            (CommonUI_o *)Instance,
            v145,
            v146,
            _9__51_12,
            -1,
            0,
            0,
            0,
            0,
            1,
            0LL,
            0LL,
            0,
            0,
            0LL,
            1,
            0LL,
            0LL,
            0LL,
            0LL);
          return 0LL;
        }
        v88 = *v69;
      }
      v73 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      v100 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0__SetTransitionFunc_b__1__;
      goto LABEL_114;
    }
    if ( SceneType != 22 )
      return _9__51_4;
    if ( !*v69 )
      goto LABEL_169;
    v83 = *(_QWORD *)(*v69 + 24);
    if ( !v83 )
      goto LABEL_169;
    if ( *(int *)(v83 + 24) < 2 )
    {
      v84 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
        v84 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__51_4 = v84->static_fields->__9__51_2;
      if ( !_9__51_4 )
      {
        if ( !v84->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v84);
          v84 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v85 = (Il2CppObject *)v84->static_fields->__9;
        _9__51_4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v85,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_2__,
          0LL);
        v86 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        v86->__9__51_2 = _9__51_4;
        p__9__51_4 = (CGThumbnailListItem_o *)&v86->__9__51_2;
        goto LABEL_166;
      }
      return _9__51_4;
    }
    v88 = sub_1B4D1DC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_TypeInfo);
    System_Object___ctor((Il2CppObject *)v88, 0LL);
    if ( !*v69 )
      goto LABEL_169;
    v117 = *(_QWORD *)(*v69 + 24);
    if ( !v117 )
      goto LABEL_169;
    if ( *(_DWORD *)(v117 + 24) > 1u )
    {
      v118 = *(System_String_o **)(v117 + 40);
      v119 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39216184(v119, v118, 0LL);
      if ( !v88 )
        goto LABEL_169;
      *(_QWORD *)(v88 + 16) = v119;
      v122 = v88 + 16;
      sub_1B4CF34((CGThumbnailListItem_o *)(v88 + 16), (int32_t)v119, v120, v121);
      if ( !*v69 )
        goto LABEL_169;
      v123 = *(_QWORD *)(*v69 + 24);
      if ( !v123 )
        goto LABEL_169;
      if ( *(int *)(v123 + 24) >= 3 )
      {
        eventType[0] = 0;
        v124 = *(System_String_o **)(v123 + 48);
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo);
        IsNullOrEmpty = (SceneJumpInfo_o *)System_Enum__TryParse_Int32Enum_(
                                             v124,
                                             eventType,
                                             (const MethodInfo_2F08668 *)Method_System_Enum_TryParse_ServantOperationManager_Kind___);
        if ( !*(_QWORD *)v122 )
          goto LABEL_169;
        *(_DWORD *)(*(_QWORD *)v122 + 24LL) = eventType[0];
      }
      v73 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      v100 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4__SetTransitionFunc_b__14__;
      goto LABEL_114;
    }
LABEL_170:
    sub_1B4D1F4(IsNullOrEmpty, v52);
  }
  if ( SceneType == 23 )
  {
    v104 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
      v104 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    _9__51_4 = v104->static_fields->__9__51_5;
    if ( !_9__51_4 )
    {
      if ( !v104->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v104);
        v104 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      v105 = (Il2CppObject *)v104->static_fields->__9;
      _9__51_4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      System_Action___ctor(
        _9__51_4,
        v105,
        Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_5__,
        0LL);
      v106 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
      v106->__9__51_5 = _9__51_4;
      p__9__51_4 = (CGThumbnailListItem_o *)&v106->__9__51_5;
      goto LABEL_166;
    }
    return _9__51_4;
  }
  if ( SceneType == 30 )
  {
    if ( !*v69 )
      goto LABEL_169;
    v107 = *(_QWORD *)(*v69 + 24);
    if ( !v107 )
      goto LABEL_169;
    if ( *(int *)(v107 + 24) < 2 )
    {
      v108 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
        v108 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__51_4 = v108->static_fields->__9__51_7;
      if ( !_9__51_4 )
      {
        if ( !v108->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v108);
          v108 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v109 = (Il2CppObject *)v108->static_fields->__9;
        _9__51_4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
        System_Action___ctor(
          _9__51_4,
          v109,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_7__,
          0LL);
        v110 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        v110->__9__51_7 = _9__51_4;
        p__9__51_4 = (CGThumbnailListItem_o *)&v110->__9__51_7;
        goto LABEL_166;
      }
      return _9__51_4;
    }
    IsNullOrEmpty = (SceneJumpInfo_o *)System_String__op_Equality(
                                         *(System_String_o **)(v107 + 40),
                                         (System_String_o *)StringLiteral_12349/*"Scroll"*/,
                                         0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !*v69 )
        goto LABEL_169;
      v127 = *(_QWORD *)(*v69 + 24);
      if ( !v127 )
        goto LABEL_169;
      if ( *(int *)(v127 + 24) >= 3 )
      {
        v153 = *(CGThumbnailListItem_c **)(v127 + 48);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
        if ( !byte_49B5936 )
        {
          sub_1B4CF90(&TerminalPramsManager_TypeInfo, v52);
          byte_49B5936 = 1;
        }
        v154 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo);
          v154 = TerminalPramsManager_TypeInfo;
        }
        p_TransitionScrollTabName_k__BackingField = (CGThumbnailListItem_o *)&v154->static_fields->_TransitionScrollTabName_k__BackingField;
        p_TransitionScrollTabName_k__BackingField->klass = v153;
        sub_1B4CF34(p_TransitionScrollTabName_k__BackingField, (int32_t)v153, v125, v126);
        v156 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
          v156 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        _9__51_4 = v156->static_fields->__9__51_6;
        if ( !_9__51_4 )
        {
          if ( !v156->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v156);
            v156 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          v157 = (Il2CppObject *)v156->static_fields->__9;
          _9__51_4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
          System_Action___ctor(
            _9__51_4,
            v157,
            Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_6__,
            0LL);
          v158 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
          v158->__9__51_6 = _9__51_4;
          p__9__51_4 = (CGThumbnailListItem_o *)&v158->__9__51_6;
          goto LABEL_166;
        }
        return _9__51_4;
      }
    }
    v88 = sub_1B4D1DC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_TypeInfo);
    System_Object___ctor((Il2CppObject *)v88, 0LL);
    if ( !*v69 )
      goto LABEL_169;
    v128 = *(_QWORD *)(*v69 + 24);
    if ( !v128 )
      goto LABEL_169;
    if ( *(_DWORD *)(v128 + 24) > 1u )
    {
      v129 = *(System_String_o **)(v128 + 40);
      v130 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39216184(v130, v129, 0LL);
      if ( !v88 )
        goto LABEL_169;
      *(_QWORD *)(v88 + 16) = v130;
      sub_1B4CF34((CGThumbnailListItem_o *)(v88 + 16), (int32_t)v130, v131, v132);
      v73 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      v100 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6__SetTransitionFunc_b__16__;
      goto LABEL_114;
    }
    goto LABEL_170;
  }
  if ( SceneType != 32 )
    return _9__51_4;
  if ( !*v69 )
    goto LABEL_169;
  v76 = *(_QWORD *)(*v69 + 24);
  if ( !v76 )
    goto LABEL_169;
  if ( *(int *)(v76 + 24) >= 2 )
  {
    v88 = sub_1B4D1DC(MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_TypeInfo);
    System_Object___ctor((Il2CppObject *)v88, 0LL);
    if ( !*v69 )
      goto LABEL_169;
    v112 = *(_QWORD *)(*v69 + 24);
    if ( !v112 )
      goto LABEL_169;
    if ( *(_DWORD *)(v112 + 24) > 1u )
    {
      v113 = *(System_String_o **)(v112 + 40);
      v114 = (SceneJumpInfo_o *)sub_1B4D1DC(SceneJumpInfo_TypeInfo);
      SceneJumpInfo___ctor_39216184(v114, v113, 0LL);
      if ( !v88 )
        goto LABEL_169;
      *(_QWORD *)(v88 + 16) = v114;
      sub_1B4CF34((CGThumbnailListItem_o *)(v88 + 16), (int32_t)v114, v115, v116);
      v73 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
      v100 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5__SetTransitionFunc_b__15__;
      goto LABEL_114;
    }
    goto LABEL_170;
  }
  v77 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    v77 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  }
  _9__51_4 = v77->static_fields->__9__51_3;
  if ( !_9__51_4 )
  {
    if ( !v77->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v77);
      v77 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    v78 = (Il2CppObject *)v77->static_fields->__9;
    _9__51_4 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__51_4,
      v78,
      Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_3__,
      0LL);
    v81 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    v81->__9__51_3 = _9__51_4;
    p__9__51_4 = (CGThumbnailListItem_o *)&v81->__9__51_3;
    goto LABEL_166;
  }
  return _9__51_4;
}


UnityEngine_GameObject_o *__fastcall MessageAndScrollDetailConfirmDialog__get_closeBtnObject(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  UnityEngine_Object_o *closeButton; // x20
  bool v4; // w8
  UnityEngine_GameObject_o *result; // x0

  if ( (byte_49BE1AA & 1) == 0 )
  {
    sub_1B4CF90(&UnityEngine_Object_TypeInfo, method);
    byte_49BE1AA = 1;
  }
  closeButton = (UnityEngine_Object_o *)this->fields.closeButton;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  v4 = UnityEngine_Object__op_Equality(closeButton, 0LL, 0LL);
  result = 0LL;
  if ( !v4 )
    return this->fields.closeButton;
  return result;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
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
  sub_1B4CF34((CGThumbnailListItem_o *)&this->fields.method, (int32_t)object, method, a4);
  v8 = *(unsigned __int8 *)(v6 + 82);
  this->fields.original_method_info = (struct System_Reflection_MethodInfo_o *)this;
  if ( (sub_1B4D050(v6) & 1) == 0 )
  {
    if ( !object )
    {
      v10 = sub_1B4D208(0LL, "Delegate to an instance method cannot have null 'this'.");
      sub_1B4D0B8(v10, 0LL);
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
  this->fields.m_target = (Il2CppObject *)sub_199FF08;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_199FEC0;
}


// local variable allocation has failed, the output may be wrong!
System_IAsyncResult_o *__fastcall MessageAndScrollDetailConfirmDialog_ClickDelegate__BeginInvoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        System_AsyncCallback_o *callback,
        Il2CppObject *object,
        const MethodInfo *method)
{
  __int64 v9[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10[4]; // [xsp+1Ch] [xbp-34h] BYREF

  v10[0] = isOk;
  if ( (byte_49BE1C0 & 1) == 0 )
  {
    sub_1B4CF90(&bool_TypeInfo, isOk);
    byte_49BE1C0 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10, callback, object, method);
  return (System_IAsyncResult_o *)sub_1B4CF44(this, v9, callback, object);
}


void __fastcall MessageAndScrollDetailConfirmDialog_ClickDelegate__EndInvoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1B4CF48(result, 0LL, method);
}


void __fastcall MessageAndScrollDetailConfirmDialog_ClickDelegate__Invoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        bool isOk,
        const MethodInfo *method)
{
  ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, bool, _QWORD))this->fields.m_target)(
    this->fields.original_method_info,
    isOk,
    *(_QWORD *)&this->fields.extra_arg);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  Il2CppObject *v2; // x19
  int32_t v3; // w2
  const MethodInfo *v4; // x3

  if ( (byte_49BE1C1 & 1) == 0 )
  {
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog___c_TypeInfo, v1);
    byte_49BE1C1 = 1;
  }
  v2 = (Il2CppObject *)sub_1B4D1DC(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
  System_Object___ctor(v2, 0LL);
  MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields->__9 = (struct MessageAndScrollDetailConfirmDialog___c_o *)v2;
  sub_1B4CF34(
    (CGThumbnailListItem_o *)MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields,
    (int32_t)v2,
    v3,
    v4);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___ctor(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_10(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49BE1C2 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BE1C2 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_12(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  __int64 v5; // x1
  Il2CppObject *Instance; // x0
  __int64 v7; // x1
  MessageAndScrollDetailConfirmDialog___c_c *v8; // x8
  CommonUI_o *v9; // x19
  System_Action_o *_9__51_13; // x20
  Il2CppObject *v11; // x21
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *static_fields; // x0
  int32_t v13; // w2
  const MethodInfo *v14; // x3

  if ( (byte_49BE1C3 & 1) == 0 )
  {
    sub_1B4CF90(&System_Action_TypeInfo, isDecide);
    sub_1B4CF90(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3);
    sub_1B4CF90(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_13__, v4);
    sub_1B4CF90(&MessageAndScrollDetailConfirmDialog___c_TypeInfo, v5);
    byte_49BE1C3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v8 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  v9 = (CommonUI_o *)Instance;
  if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo);
    v8 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  }
  _9__51_13 = v8->static_fields->__9__51_13;
  if ( !_9__51_13 )
  {
    if ( !v8->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v8);
      v8 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    v11 = (Il2CppObject *)v8->static_fields->__9;
    _9__51_13 = (System_Action_o *)sub_1B4D1DC(System_Action_TypeInfo);
    System_Action___ctor(
      _9__51_13,
      v11,
      Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__51_13__,
      0LL);
    static_fields = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__51_13 = _9__51_13;
    sub_1B4CF34((CGThumbnailListItem_o *)&static_fields->__9__51_13, (int32_t)_9__51_13, v13, v14);
  }
  if ( !v9 )
    sub_1B4D1EC(Instance, v7);
  CommonUI__CloseNotificationDialog_30251084(v9, _9__51_13, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_13(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49BE1C4 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BE1C4 = 1;
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_2(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49BE1C5 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BE1C5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_3(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49BE1C6 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BE1C6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_4(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49BE1C7 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BE1C7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 91, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_5(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49BE1C8 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BE1C8 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 23, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_6(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49BE1C9 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BE1C9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__51_7(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v3; // x1

  if ( (byte_49BE1CA & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BE1CA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v3);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0___SetTransitionFunc_b__1(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1B4D1EC(this, method);
  MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByLinkInfo(this->fields.__4__this, this->fields.linkInfo, v2);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1___SetTransitionFunc_b__0(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_1_o *this,
        const MethodInfo *method)
{
  TerminalSceneComponent_c *mPlayerStatus; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct MessageAndScrollDetailConfirmDialog___c__DisplayClass51_0_o *CS___8__locals1; // x9
  struct MessageAndScrollDetailConfirmDialog_o *_4__this; // x9

  if ( (byte_49BE1CB & 1) == 0 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49BE1CB = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
  if ( !byte_49B5933 )
  {
    sub_1B4CF90(&TerminalSceneComponent_TypeInfo, method);
    byte_49B5933 = 1;
  }
  mPlayerStatus = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo);
    mPlayerStatus = TerminalSceneComponent_TypeInfo;
  }
  mInstance = mPlayerStatus->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalList = mInstance->fields.mTerminalList) == 0LL
    || (CS___8__locals1 = this->fields.CS___8__locals1) == 0LL
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (mPlayerStatus = (TerminalSceneComponent_c *)mTerminalList->fields.mPlayerStatus) == 0LL )
  {
    sub_1B4D1EC(mPlayerStatus, method);
  }
  ScrPlayerStatus__ClickLoginDialogOpenMasterMission(
    (ScrPlayerStatus_o *)mPlayerStatus,
    this->fields.tabNo,
    _4__this->fields.closeNotificationCallback,
    0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2___SetTransitionFunc_b__8(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49BE1CC & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BE1CC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    72,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2___SetTransitionFunc_b__9(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_2_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49BE1CD & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BE1CD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    72,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3___SetTransitionFunc_b__11(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_3_o *this,
        GachaEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1B4D1EC(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4___SetTransitionFunc_b__14(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_4_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49BE1CE & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BE1CE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)this->fields.info, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5___SetTransitionFunc_b__15(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_5_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49BE1CF & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BE1CF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, (Il2CppObject *)this->fields.info, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6___SetTransitionFunc_b__16(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass51_6_o *this,
        const MethodInfo *method)
{
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_49BE1D0 & 1) == 0 )
  {
    sub_1B4CF90(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method);
    byte_49BE1D0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37B4410 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1B4D1EC(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, (Il2CppObject *)this->fields.info, 0LL);
}