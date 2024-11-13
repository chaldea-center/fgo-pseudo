void __fastcall MessageAndScrollDetailConfirmDialog___cctor(const MethodInfo *method)
{
  __int64 v1; // x1
  __int64 v2; // x2
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x8
  MessageAndScrollDetailConfirmDialog_c *v4; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v5; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v6; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v7; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v8; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v9; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v10; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v11; // x9
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v12; // x8

  if ( (byte_4B193A6 & 1) == 0 )
  {
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog_TypeInfo, v1, v2);
    byte_4B193A6 = 1;
  }
  static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&static_fields->MainTitleBasePos.fields.x = 0x4361000000000000LL;
  static_fields->MainTitleBasePos.fields.z = 0.0;
  v4 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v5 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  *(_QWORD *)&v5->MainMessageBasePos.fields.x = 0x42BE000000000000LL;
  v5->MainMessageBasePos.fields.z = 0.0;
  v6 = v4->static_fields;
  *(_QWORD *)&v6->NoTitleMainMessageBasePos.fields.x = 0x42F0000000000000LL;
  v6->NoTitleMainMessageBasePos.fields.z = 0.0;
  v7 = v4->static_fields;
  *(_QWORD *)&v7->DetailTitleBasePos.fields.x = 0x4361000000000000LL;
  v7->DetailTitleBasePos.fields.z = 0.0;
  v8 = v4->static_fields;
  *(_QWORD *)&v8->DetailMessageBasePos.fields.x = 0x4357000000000000LL;
  v8->DetailMessageBasePos.fields.z = 0.0;
  v9 = v4->static_fields;
  *(_QWORD *)&v9->NoTitleDetailMessageBasePos.fields.x = 0x436B000000000000LL;
  v9->NoTitleDetailMessageBasePos.fields.z = 0.0;
  v10 = v4->static_fields;
  *(_QWORD *)&v10->OkButtonBasePos.fields.x = 0xC340800000000000LL;
  v10->OkButtonBasePos.fields.z = 0.0;
  v11 = v4->static_fields;
  *(_QWORD *)&v11->OkButtonBasePosTypeTwoAlternative.fields.x = 0xC3408000C3200000LL;
  v11->OkButtonBasePosTypeTwoAlternative.fields.z = 0.0;
  v12 = v4->static_fields;
  v12->DetailMessageBaseHeight = 1000;
  *(_OWORD *)&v12->ButtonBaseSizeX = xmmword_BD3BF0;
  *(_OWORD *)&v12->MainTitleFontSize = xmmword_BD3990;
}


void __fastcall MessageAndScrollDetailConfirmDialog___ctor(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B193A5 & 1) == 0 )
  {
    sub_1BCA7E0(&BaseDialog_TypeInfo, method, v2);
    byte_4B193A5 = 1;
  }
  this->fields.isInitPanelDepth = 1;
  *(_QWORD *)&this->fields.onClickOkSeKind = 0x800000001LL;
  if ( !BaseDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(BaseDialog_TypeInfo, method);
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
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  __int64 v15; // x1
  __int64 v16; // x2
  UnityEngine_Component_o *okBtnLabel; // x0
  UnityEngine_GameObject_o *v18; // x22
  UIWidget_o *Component_object; // x23
  __int64 v20; // x1
  Il2CppObject *v21; // x22
  __int64 v22; // x1
  MessageAndScrollDetailConfirmDialog_c *v23; // x0
  int mWidth; // s8
  int32_t ButtonBaseSizeY; // s9
  UnityEngine_GameObject_o *decideBtn; // x8
  UIWidget_o *v27; // x20
  __int64 v28; // x1
  Il2CppObject *v29; // x21
  __int64 v30; // x1
  __int64 v31; // x1
  __int64 v32; // x1
  MessageAndScrollDetailConfirmDialog_c *v33; // x0
  int v34; // s8
  int32_t v35; // s9
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  v5 = inputCancelBtnWidth;
  if ( (byte_4B1939A & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, inputCancelBtnWidth, inputDecideBtnWidth);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v7, v8);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog_TypeInfo, v9, v10);
    sub_1BCA7E0(&Method_System_Nullable_int__GetValueOrDefault__, v11, v12);
    sub_1BCA7E0(&Method_System_Nullable_int__get_HasValue__, v13, v14);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v15, v16);
    byte_4B1939A = 1;
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
  v18 = (UnityEngine_GameObject_o *)okBtnLabel;
  Component_object = (UIWidget_o *)UnityEngine_GameObject__GetComponent_object_(
                                     (UnityEngine_GameObject_o *)okBtnLabel,
                                     (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v21 = UnityEngine_GameObject__GetComponent_object_(
          v18,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v20);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      ((void (__fastcall *)(_QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(
        UnityEngine_Object_TypeInfo,
        inputCancelBtnWidth);
    okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v21, 0LL, 0LL);
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
          ((void (__fastcall *)(_QWORD, _QWORD))j_il2cpp_runtime_class_init_0)(
            MessageAndScrollDetailConfirmDialog_TypeInfo,
            inputCancelBtnWidth);
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        inputCancelBtnWidth = (System_Nullable_int__o)*(unsigned int *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr
                                                                      + 96LL);
        if ( !Component_object )
          goto LABEL_45;
      }
      UIWidget__set_width(Component_object, *(int32_t *)&inputCancelBtnWidth.fields.hasValue, 0LL);
      v23 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v22);
        v23 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      UIWidget__set_height(Component_object, v23->static_fields->ButtonBaseSizeY, 0LL);
      if ( !v21 )
        goto LABEL_45;
      mWidth = Component_object->fields.mWidth;
      ButtonBaseSizeY = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v21, 0LL);
      size.fields.x = (float)mWidth;
      size.fields.y = (float)ButtonBaseSizeY;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v21, size, 0LL);
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
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    decideBtn = this->fields.decideBtn;
    if ( !decideBtn )
      goto LABEL_45;
    v27 = (UIWidget_o *)okBtnLabel;
    v29 = UnityEngine_GameObject__GetComponent_object_(
            decideBtn,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v28);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v30);
      okBtnLabel = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v29, 0LL, 0LL);
      if ( ((unsigned __int8)okBtnLabel & 1) != 0 )
      {
        if ( inputDecideBtnWidth.fields.hasValue )
        {
          inputCancelBtnWidth = (System_Nullable_int__o)HIDWORD(*(unsigned __int64 *)&inputDecideBtnWidth);
          if ( !v27 )
            goto LABEL_45;
        }
        else
        {
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v31);
            okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          inputCancelBtnWidth = (System_Nullable_int__o)*(unsigned int *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr
                                                                        + 96LL);
          if ( !v27 )
            goto LABEL_45;
        }
        UIWidget__set_width(v27, *(int32_t *)&inputCancelBtnWidth.fields.hasValue, 0LL);
        v33 = MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v32);
          v33 = MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        UIWidget__set_height(v27, v33->static_fields->ButtonBaseSizeY, 0LL);
        if ( v29 )
        {
          v34 = v27->fields.mWidth;
          v35 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
          v37 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v29, 0LL);
          v37.fields.x = (float)v34;
          v37.fields.y = (float)v35;
          UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v29, v37, 0LL);
          return;
        }
LABEL_45:
        sub_1BCAA3C(okBtnLabel, inputCancelBtnWidth);
      }
    }
  }
}


void __fastcall MessageAndScrollDetailConfirmDialog__AdjustBtnSize_44899732(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  __int64 v9; // x1
  __int64 v10; // x2
  __int64 v11; // x1
  __int64 v12; // x2
  __int64 v13; // x1
  __int64 v14; // x2
  UnityEngine_Component_o *okBtnLabel; // x0
  UnityEngine_GameObject_o *v16; // x21
  Il2CppObject *Component_object; // x22
  __int64 v18; // x1
  Il2CppObject *v19; // x21
  _BOOL8 v20; // x0
  const MethodInfo *v21; // x3
  int32_t v22; // w23
  __int64 v23; // x1
  MessageAndScrollDetailConfirmDialog_c *v24; // x0
  int32_t ButtonBaseSizeY; // s8
  UIWidget_o *v26; // x21
  __int64 v27; // x1
  Il2CppObject *v28; // x20
  __int64 v29; // x1
  _BOOL8 v30; // x0
  const MethodInfo *v31; // x3
  int32_t v32; // w19
  __int64 v33; // x1
  MessageAndScrollDetailConfirmDialog_c *v34; // x0
  int32_t v35; // s8
  UnityEngine_Vector3_o size; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v37; // 0:s0.4,4:s1.4,8:s2.4

  if ( (byte_4B1939B & 1) == 0 )
  {
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_BoxCollider___, script, method);
    sub_1BCA7E0(&Method_UnityEngine_GameObject_GetComponent_UISprite___, v5, v6);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog_TypeInfo, v7, v8);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v9, v10);
    sub_1BCA7E0(&StringLiteral_17907/*"cancelBtnWidth"*/, v11, v12);
    sub_1BCA7E0(&StringLiteral_18704/*"decideBtnWidth"*/, v13, v14);
    byte_4B1939B = 1;
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
  v16 = (UnityEngine_GameObject_o *)okBtnLabel;
  Component_object = UnityEngine_GameObject__GetComponent_object_(
                       (UnityEngine_GameObject_o *)okBtnLabel,
                       (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
  v19 = UnityEngine_GameObject__GetComponent_object_(
          v16,
          (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v18);
  if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL) )
  {
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, script);
    v20 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v19, 0LL, 0LL);
    if ( v20 )
    {
      okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                                (MessageAndScrollDetailConfirmDialog_o *)v20,
                                                script,
                                                (System_String_o *)StringLiteral_17907/*"cancelBtnWidth"*/,
                                                v21);
      v22 = (int)okBtnLabel;
      if ( !(_DWORD)okBtnLabel )
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, script);
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        v22 = *(_DWORD *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr + 96LL);
      }
      if ( !Component_object )
        goto LABEL_43;
      UIWidget__set_width((UIWidget_o *)Component_object, v22, 0LL);
      v24 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v23);
        v24 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      UIWidget__set_height((UIWidget_o *)Component_object, v24->static_fields->ButtonBaseSizeY, 0LL);
      if ( !v19 )
        goto LABEL_43;
      ButtonBaseSizeY = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
      size = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v19, 0LL);
      size.fields.x = (float)v22;
      size.fields.y = (float)ButtonBaseSizeY;
      UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v19, size, 0LL);
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
                                              (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_UISprite___);
    if ( !this->fields.decideBtn )
      goto LABEL_43;
    v26 = (UIWidget_o *)okBtnLabel;
    v28 = UnityEngine_GameObject__GetComponent_object_(
            this->fields.decideBtn,
            (const MethodInfo_2F626D0 *)Method_UnityEngine_GameObject_GetComponent_BoxCollider___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v27);
    if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0LL, 0LL) )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v29);
      v30 = UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v28, 0LL, 0LL);
      if ( v30 )
      {
        okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                                  (MessageAndScrollDetailConfirmDialog_o *)v30,
                                                  script,
                                                  (System_String_o *)StringLiteral_18704/*"decideBtnWidth"*/,
                                                  v31);
        v32 = (int)okBtnLabel;
        if ( !(_DWORD)okBtnLabel )
        {
          okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, script);
            okBtnLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          v32 = *(_DWORD *)(*(_QWORD *)&okBtnLabel[7].fields.m_CachedPtr + 96LL);
        }
        if ( v26 )
        {
          UIWidget__set_width(v26, v32, 0LL);
          v34 = MessageAndScrollDetailConfirmDialog_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v33);
            v34 = MessageAndScrollDetailConfirmDialog_TypeInfo;
          }
          UIWidget__set_height(v26, v34->static_fields->ButtonBaseSizeY, 0LL);
          if ( v28 )
          {
            v35 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->ButtonBaseSizeY;
            v37 = UnityEngine_BoxCollider__get_size((UnityEngine_BoxCollider_o *)v28, 0LL);
            v37.fields.x = (float)v32;
            v37.fields.y = (float)v35;
            UnityEngine_BoxCollider__set_size((UnityEngine_BoxCollider_o *)v28, v37, 0LL);
            return;
          }
        }
LABEL_43:
        sub_1BCAA3C(okBtnLabel, script);
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
        const MethodInfo *method)
{
  MessageAndScrollDetailConfirmDialog_o *v18; // x26
  __int64 v19; // x1
  __int64 v20; // x2
  UILabel_o *noTitleMainMessageLabel; // x21
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v23; // x1
  MessageAndScrollDetailConfirmDialog_c *v24; // x8
  UnityEngine_GameObject_o *v25; // x27
  UnityEngine_GameObject_o *v26; // x0
  __int64 v27; // x1
  MessageAndScrollDetailConfirmDialog_c *v28; // x8
  UnityEngine_GameObject_o *v29; // x27
  struct UILabel_o *noTitleDetailMessageLabel; // x23
  UnityEngine_GameObject_o *v31; // x0
  __int64 v32; // x1
  MessageAndScrollDetailConfirmDialog_c *v33; // x8
  UnityEngine_GameObject_o *v34; // x27
  UnityEngine_GameObject_o *v35; // x0
  __int64 v36; // x1
  MessageAndScrollDetailConfirmDialog_c *v37; // x8
  UnityEngine_GameObject_o *v38; // x27
  __int64 v39; // x1
  MessageAndScrollDetailConfirmDialog_c *v40; // x0
  __int64 v41; // x1
  System_String_o *Empty; // x25
  System_String_o *v43; // x24
  MessageAndScrollDetailConfirmDialog_c *v44; // x0
  __int64 v45; // x1
  MessageAndScrollDetailConfirmDialog_c *v46; // x0
  __int64 v47; // x1
  MessageAndScrollDetailConfirmDialog_c *v48; // x0
  __int64 v49; // x1
  MessageAndScrollDetailConfirmDialog_c *v50; // x0

  v18 = this;
  if ( (byte_4B19397 & 1) == 0 )
  {
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle, isNoDetailTitle);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1BCA7E0(&string_TypeInfo, v19, v20);
    byte_4B19397 = 1;
  }
  if ( isNoMainTitle )
  {
    noTitleMainMessageLabel = v18->fields.noTitleMainMessageLabel;
    if ( !noTitleMainMessageLabel )
      goto LABEL_45;
    gameObject = UnityEngine_Component__get_gameObject(
                   (UnityEngine_Component_o *)v18->fields.noTitleMainMessageLabel,
                   0LL);
    v24 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v25 = gameObject;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v23);
      v24 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v25, v24->static_fields->NoTitleMainMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v18->fields.mainMessageLabel;
    if ( !this )
      goto LABEL_45;
  }
  else
  {
    noTitleMainMessageLabel = v18->fields.mainMessageLabel;
    if ( !noTitleMainMessageLabel )
      goto LABEL_45;
    v26 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18->fields.mainMessageLabel, 0LL);
    v28 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v29 = v26;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v27);
      v28 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v29, v28->static_fields->MainMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v18->fields.noTitleMainMessageLabel;
    if ( !this )
LABEL_45:
      sub_1BCAA3C(this, isNoMainTitle);
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  if ( !this )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  if ( isNoDetailTitle )
  {
    noTitleDetailMessageLabel = v18->fields.noTitleDetailMessageLabel;
    if ( !noTitleDetailMessageLabel )
      goto LABEL_45;
    v31 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18->fields.noTitleDetailMessageLabel, 0LL);
    v33 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v34 = v31;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v32);
      v33 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v34, v33->static_fields->NoTitleDetailMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v18->fields.detailMessageLabel;
    if ( !this )
      goto LABEL_45;
  }
  else
  {
    noTitleDetailMessageLabel = v18->fields.detailMessageLabel;
    if ( !noTitleDetailMessageLabel )
      goto LABEL_45;
    v35 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)v18->fields.detailMessageLabel, 0LL);
    v37 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    v38 = v35;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v36);
      v37 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    GameObjectExtensions__SetLocalPosition(v38, v37->static_fields->DetailMessageBasePos, 0LL);
    this = (MessageAndScrollDetailConfirmDialog_o *)v18->fields.noTitleDetailMessageLabel;
    if ( !this )
      goto LABEL_45;
  }
  this = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                    (UnityEngine_Component_o *)this,
                                                    0LL);
  if ( !this )
    goto LABEL_45;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)this, 0, 0LL);
  v40 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v39);
    v40 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UIWidget__set_height((UIWidget_o *)noTitleDetailMessageLabel, v40->static_fields->DetailMessageBaseHeight, 0LL);
  if ( mainMessage )
  {
    Empty = System_String__Trim_62430580(mainMessage, 0xAu, 0LL);
    if ( detailMessage )
    {
LABEL_29:
      v43 = System_String__Trim_62430580(detailMessage, 0xAu, 0LL);
      goto LABEL_32;
    }
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( detailMessage )
      goto LABEL_29;
  }
  v43 = string_TypeInfo->static_fields->Empty;
LABEL_32:
  v44 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v41);
    v44 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, v44->static_fields->MainMessageFontSize, 0LL);
  UILabel__set_maxLineCount(noTitleMainMessageLabel, maxLine, 0LL);
  WrapControlText__textAdjust(noTitleMainMessageLabel, Empty, noTitleMainMessageLabel->fields.mFontSize, 0, 0, 0LL);
  if ( mainFontSize <= 0 )
  {
    v46 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v45);
      v46 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    mainFontSize = v46->static_fields->MainMessageFontSize;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, mainFontSize, 0LL);
  v48 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v47);
    v48 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v48->static_fields->DetailMessageFontSize, 0LL);
  WrapControlText__textAdjust(
    noTitleDetailMessageLabel,
    v43,
    noTitleDetailMessageLabel->fields.mFontSize,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageFontSize,
    0,
    0LL);
  if ( detailFontSize <= 0 )
  {
    v50 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v49);
      v50 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    detailFontSize = v50->static_fields->DetailMessageFontSize;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, detailFontSize, 0LL);
  UILabel__set_overflowMethod(noTitleDetailMessageLabel, 3, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel_44894380(
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
  struct UILabel_o *noTitleMainMessageLabel; // x21
  UnityEngine_Component_o *mainMessageLabel; // x0
  float y; // s12
  MessageAndScrollDetailConfirmDialog_o *gameObject; // x26
  const MethodInfo *v43; // x3
  float v44; // s12
  MessageAndScrollDetailConfirmDialog_o *v45; // x26
  const MethodInfo *v46; // x3
  struct UILabel_o *noTitleDetailMessageLabel; // x23
  float v48; // s10
  MessageAndScrollDetailConfirmDialog_o *v49; // x26
  const MethodInfo *v50; // x3
  float v51; // s10
  MessageAndScrollDetailConfirmDialog_o *v52; // x26
  const MethodInfo *v53; // x3
  _BOOL8 v54; // x0
  const MethodInfo *v55; // x3
  System_String_o *Empty; // x24
  System_String_o *v57; // x22
  MessageAndScrollDetailConfirmDialog_o *v58; // x0
  const MethodInfo *v59; // x3
  int32_t IntFromScript; // w0
  MessageAndScrollDetailConfirmDialog_o *v61; // x0
  const MethodInfo *v62; // x3
  int32_t v63; // w0
  __int64 v64; // x1
  MessageAndScrollDetailConfirmDialog_c *v65; // x0
  __int64 v66; // x1
  MessageAndScrollDetailConfirmDialog_c *v67; // x0
  MessageAndScrollDetailConfirmDialog_o *v68; // x0
  const MethodInfo *v69; // x3
  int32_t v70; // w0
  MessageAndScrollDetailConfirmDialog_o *v71; // x0
  const MethodInfo *v72; // x3
  int32_t v73; // w0
  __int64 v74; // x1
  MessageAndScrollDetailConfirmDialog_c *v75; // x0
  UnityEngine_Vector3_o VecFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v77; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v78; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v79; // 0:s0.4,4:s1.4,8:s2.4

  z = detailMessagePos.fields.z;
  x = detailMessagePos.fields.x;
  v13 = mainMessagePos.fields.z;
  v14 = mainMessagePos.fields.x;
  if ( (byte_4B19398 & 1) == 0 )
  {
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle, isNoDetailTitle);
    sub_1BCA7E0(&string_TypeInfo, v21, v22);
    sub_1BCA7E0(&StringLiteral_21483/*"mainMsgOffset"*/, v23, v24);
    sub_1BCA7E0(&StringLiteral_21482/*"mainMsgFontSize"*/, v25, v26);
    sub_1BCA7E0(&StringLiteral_18788/*"detailMsgOffset"*/, v27, v28);
    sub_1BCA7E0(&StringLiteral_18787/*"detailMsgFontSize"*/, v29, v30);
    sub_1BCA7E0(&StringLiteral_18789/*"detailMsgSpacingY"*/, v31, v32);
    sub_1BCA7E0(&StringLiteral_21481/*"mainMsg"*/, v33, v34);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v35, v36);
    sub_1BCA7E0(&StringLiteral_21484/*"mainMsgSpacingY"*/, v37, v38);
    byte_4B19398 = 1;
  }
  if ( isNoMainTitle )
  {
    noTitleMainMessageLabel = this->fields.noTitleMainMessageLabel;
    mainMessageLabel = (UnityEngine_Component_o *)noTitleMainMessageLabel;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
      mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleMainMessageLabel;
    }
    if ( !mainMessageLabel )
      goto LABEL_49;
    y = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->NoTitleMainMessageBasePos.fields.y;
    gameObject = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    VecFromScript = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
                      gameObject,
                      script,
                      (System_String_o *)StringLiteral_21483/*"mainMsgOffset"*/,
                      v43);
    VecFromScript.fields.x = v14 + VecFromScript.fields.x;
    VecFromScript.fields.y = y + VecFromScript.fields.y;
    VecFromScript.fields.z = v13 + VecFromScript.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)gameObject, VecFromScript, 0LL);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.mainMessageLabel;
    if ( !mainMessageLabel )
      goto LABEL_49;
  }
  else
  {
    noTitleMainMessageLabel = this->fields.mainMessageLabel;
    mainMessageLabel = (UnityEngine_Component_o *)noTitleMainMessageLabel;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
      mainMessageLabel = (UnityEngine_Component_o *)this->fields.mainMessageLabel;
    }
    if ( !mainMessageLabel )
      goto LABEL_49;
    v44 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageBasePos.fields.y;
    v45 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    v77 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v45,
            script,
            (System_String_o *)StringLiteral_21483/*"mainMsgOffset"*/,
            v46);
    v77.fields.x = v14 + v77.fields.x;
    v77.fields.y = v44 + v77.fields.y;
    v77.fields.z = v13 + v77.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v45, v77, 0LL);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleMainMessageLabel;
    if ( !mainMessageLabel )
LABEL_49:
      sub_1BCAA3C(mainMessageLabel, isNoMainTitle);
  }
  mainMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
  if ( !mainMessageLabel )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainMessageLabel, 0, 0LL);
  if ( isNoDetailTitle )
  {
    noTitleDetailMessageLabel = this->fields.noTitleDetailMessageLabel;
    mainMessageLabel = (UnityEngine_Component_o *)noTitleDetailMessageLabel;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
      mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleDetailMessageLabel;
    }
    if ( !mainMessageLabel )
      goto LABEL_49;
    v48 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->NoTitleDetailMessageBasePos.fields.y;
    v49 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    v78 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v49,
            script,
            (System_String_o *)StringLiteral_18788/*"detailMsgOffset"*/,
            v50);
    v78.fields.x = x + v78.fields.x;
    v78.fields.y = v48 + v78.fields.y;
    v78.fields.z = z + v78.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v49, v78, 0LL);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.detailMessageLabel;
    if ( !mainMessageLabel )
      goto LABEL_49;
  }
  else
  {
    noTitleDetailMessageLabel = this->fields.detailMessageLabel;
    mainMessageLabel = (UnityEngine_Component_o *)noTitleDetailMessageLabel;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
      mainMessageLabel = (UnityEngine_Component_o *)this->fields.detailMessageLabel;
    }
    if ( !mainMessageLabel )
      goto LABEL_49;
    v51 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageBasePos.fields.y;
    v52 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
    v79 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
            v52,
            script,
            (System_String_o *)StringLiteral_18788/*"detailMsgOffset"*/,
            v53);
    v79.fields.x = x + v79.fields.x;
    v79.fields.y = v51 + v79.fields.y;
    v79.fields.z = z + v79.fields.z;
    GameObjectExtensions__SetLocalPosition((UnityEngine_GameObject_o *)v52, v79, 0LL);
    mainMessageLabel = (UnityEngine_Component_o *)this->fields.noTitleDetailMessageLabel;
    if ( !mainMessageLabel )
      goto LABEL_49;
  }
  mainMessageLabel = (UnityEngine_Component_o *)UnityEngine_Component__get_gameObject(mainMessageLabel, 0LL);
  if ( !mainMessageLabel )
    goto LABEL_49;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainMessageLabel, 0, 0LL);
  mainMessageLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
  if ( !noTitleDetailMessageLabel )
    goto LABEL_49;
  UIWidget__set_height(
    (UIWidget_o *)noTitleDetailMessageLabel,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageBaseHeight,
    0LL);
  v54 = System_String__op_Inequality(mainMessage, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( !v54 )
    mainMessage = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                    (MessageAndScrollDetailConfirmDialog_o *)v54,
                    script,
                    (System_String_o *)StringLiteral_21481/*"mainMsg"*/,
                    v55);
  if ( mainMessage )
  {
    Empty = System_String__Trim_62430580(mainMessage, 0xAu, 0LL);
    if ( detailMessage )
    {
LABEL_32:
      v57 = System_String__Trim_62430580(detailMessage, 0xAu, 0LL);
      goto LABEL_35;
    }
  }
  else
  {
    Empty = string_TypeInfo->static_fields->Empty;
    if ( detailMessage )
      goto LABEL_32;
  }
  v57 = string_TypeInfo->static_fields->Empty;
LABEL_35:
  mainMessageLabel = (UnityEngine_Component_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, isNoMainTitle);
  if ( !noTitleMainMessageLabel )
    goto LABEL_49;
  UILabel__set_fontSize(
    noTitleMainMessageLabel,
    MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageFontSize,
    0LL);
  UILabel__set_maxLineCount(noTitleMainMessageLabel, maxLine, 0LL);
  IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                    v58,
                    script,
                    (System_String_o *)StringLiteral_21484/*"mainMsgSpacingY"*/,
                    v59);
  UILabel__set_spacingY(noTitleMainMessageLabel, IntFromScript, 0LL);
  v61 = (MessageAndScrollDetailConfirmDialog_o *)WrapControlText__textAdjust(
                                                   noTitleMainMessageLabel,
                                                   Empty,
                                                   noTitleMainMessageLabel->fields.mFontSize,
                                                   MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->MainMessageFontSize,
                                                   0,
                                                   0LL);
  v63 = MessageAndScrollDetailConfirmDialog__GetIntFromScript(v61, script, (System_String_o *)StringLiteral_21482/*"mainMsgFontSize"*/, v62);
  v64 = (unsigned int)v63;
  if ( v63 <= 0 )
  {
    v65 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v64);
      v65 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    LODWORD(v64) = v65->static_fields->MainMessageFontSize;
  }
  UILabel__set_fontSize(noTitleMainMessageLabel, v64, 0LL);
  v67 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v66);
    v67 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v67->static_fields->DetailMessageFontSize, 0LL);
  v70 = MessageAndScrollDetailConfirmDialog__GetIntFromScript(v68, script, (System_String_o *)StringLiteral_18789/*"detailMsgSpacingY"*/, v69);
  UILabel__set_spacingY(noTitleDetailMessageLabel, v70, 0LL);
  v71 = (MessageAndScrollDetailConfirmDialog_o *)WrapControlText__textAdjust(
                                                   noTitleDetailMessageLabel,
                                                   v57,
                                                   noTitleDetailMessageLabel->fields.mFontSize,
                                                   MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields->DetailMessageFontSize,
                                                   0,
                                                   0LL);
  v73 = MessageAndScrollDetailConfirmDialog__GetIntFromScript(v71, script, (System_String_o *)StringLiteral_18787/*"detailMsgFontSize"*/, v72);
  v74 = (unsigned int)v73;
  if ( v73 <= 0 )
  {
    v75 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v74);
      v75 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    LODWORD(v74) = v75->static_fields->DetailMessageFontSize;
  }
  UILabel__set_fontSize(noTitleDetailMessageLabel, v74, 0LL);
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
  __int64 v5; // x2
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  __int64 v10; // x1
  __int64 v11; // x2
  TerminalPramsManager_c *v12; // x0
  Il2CppObject *Master_object; // x0
  __int64 v14; // x1
  __int64 v15; // x2
  int32_t klass; // w19
  TerminalPramsManager_c *v17; // x0
  Il2CppObject *entity; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1939C & 1) == 0 )
  {
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, *(_QWORD *)&gachaId, method);
    sub_1BCA7E0(&DataManager_TypeInfo, v4, v5);
    sub_1BCA7E0(&Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__, v6, v7);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, v8, v9);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v10, v11);
    byte_4B1939C = 1;
  }
  entity = 0LL;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&gachaId);
  if ( !byte_4B1299C )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, *(_QWORD *)&gachaId, method);
    byte_4B1299C = 1;
  }
  v12 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, *(_QWORD *)&gachaId);
    v12 = TerminalPramsManager_TypeInfo;
  }
  v12->static_fields->_SummonType_k__BackingField = 1;
  if ( !DataManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, *(_QWORD *)&gachaId);
  Master_object = DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
  if ( !Master_object )
    goto LABEL_23;
  Master_object = (Il2CppObject *)DataMasterBase_object__object__int___TryGetEntity(
                                    (DataMasterBase_TMaster__TEntity__PKType__o *)Master_object,
                                    &entity,
                                    gachaId,
                                    (const MethodInfo_31B2E94 *)Method_DataMasterBase_GachaMaster__GachaEntity__int__TryGetEntity__);
  if ( ((unsigned __int8)Master_object & 1) != 0 )
  {
    if ( !entity )
      goto LABEL_23;
    klass = (int32_t)entity[3].klass;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
    if ( !byte_4B1299C )
    {
      sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v14, v15);
      byte_4B1299C = 1;
    }
    v17 = TerminalPramsManager_TypeInfo;
    if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v14);
      v17 = TerminalPramsManager_TypeInfo;
    }
    v17->static_fields->_SummonType_k__BackingField = klass;
  }
  Master_object = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Master_object )
LABEL_23:
    sub_1BCAA3C(Master_object, v14);
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
    sub_1BCAA3C(this, linkInfo);
  }
  m_CancellationTokenSource = this->fields.m_CancellationTokenSource;
  if ( !m_CancellationTokenSource )
    goto LABEL_8;
  if ( !(_DWORD)m_CancellationTokenSource )
    sub_1BCAA44(this, linkInfo);
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

  MessageAndScrollDetailConfirmDialog__Close_44900812(this, 0LL, v2);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__CloseFuncDialog(
        MessageAndScrollDetailConfirmDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  __int64 v9; // x1
  __int64 v10; // x2
  System_Action_o *closeNotificationCallback; // x20
  __int64 v12; // x1
  int64_t v13; // x2
  int32_t v14; // w3
  System_String_o *v15; // x4
  BattleSetupInfo_o *v16; // x5
  FollowerInfo_o *v17; // x6
  PartyListViewItem_o *v18; // x7
  PartyOrganizationUtility_c *v19; // x21
  TerminalPramsManager_c *v20; // x0
  PartyOrganizationUtility_o *p_TransitionScrollTabName_k__BackingField; // x0
  const MethodInfo *v22; // x2

  if ( (byte_4B19396 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, result, method);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v9, v10);
    byte_4B19396 = 1;
  }
  closeNotificationCallback = this->fields.closeNotificationCallback;
  this->fields.closeNotificationCallback = 0LL;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeNotificationCallback,
    0LL,
    (int64_t)method,
    v3,
    v4,
    v5,
    v6,
    v7);
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
  v19 = (PartyOrganizationUtility_c *)StringLiteral_1/*""*/;
  if ( !byte_4B10F87 )
  {
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v12, v13);
    byte_4B10F87 = 1;
  }
  v20 = TerminalPramsManager_TypeInfo;
  if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v12);
    v20 = TerminalPramsManager_TypeInfo;
  }
  p_TransitionScrollTabName_k__BackingField = (PartyOrganizationUtility_o *)&v20->static_fields->_TransitionScrollTabName_k__BackingField;
  p_TransitionScrollTabName_k__BackingField->klass = v19;
  sub_1BCA784(p_TransitionScrollTabName_k__BackingField, (int64_t)v19, v13, v14, v15, v16, v17, v18);
  MessageAndScrollDetailConfirmDialog__Close_44900812(this, closeNotificationCallback, v22);
}


void __fastcall MessageAndScrollDetailConfirmDialog__Close_44900812(
        MessageAndScrollDetailConfirmDialog_o *this,
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

  if ( (byte_4B193A1 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, callback, method);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog_EndClose__, v10, v11);
    byte_4B193A1 = 1;
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
  System_Action___ctor(v15, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndClose__, 0LL);
  BaseDialog__Close((BaseDialog_o *)this, v15, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog__DeicedFuncDialog(
        MessageAndScrollDetailConfirmDialog_o *this,
        bool result,
        const MethodInfo *method)
{
  int32_t v3; // w3
  System_String_o *v4; // x4
  BattleSetupInfo_o *v5; // x5
  FollowerInfo_o *v6; // x6
  PartyListViewItem_o *v7; // x7
  PartyOrganizationUtility_o *p_decideNotificationCallback; // x0
  System_Action_o *decideNotificationCallback; // t1
  const MethodInfo *v11; // x2

  decideNotificationCallback = this->fields.decideNotificationCallback;
  p_decideNotificationCallback = (PartyOrganizationUtility_o *)&this->fields.decideNotificationCallback;
  p_decideNotificationCallback->klass = 0LL;
  sub_1BCA784(p_decideNotificationCallback, 0LL, (int64_t)method, v3, v4, v5, v6, v7);
  MessageAndScrollDetailConfirmDialog__Close_44900812(this, decideNotificationCallback, v11);
}


void __fastcall MessageAndScrollDetailConfirmDialog__EndClose(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
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

  MessageAndScrollDetailConfirmDialog__Init(this, method);
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
  __int64 v7; // x2
  __int64 v8; // x1
  Il2CppObject *v9; // x19
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B193A0 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, script, key);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1BCA7E0(
                                                      &Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__,
                                                      v6,
                                                      v7);
    byte_4B193A0 = 1;
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


System_String_o *__fastcall MessageAndScrollDetailConfirmDialog__GetStringFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        System_String_o *key,
        const MethodInfo *method)
{
  __int64 v6; // x1
  __int64 v7; // x2
  __int64 v8; // x1
  __int64 v9; // x2
  Il2CppObject *value; // [xsp+8h] [xbp-28h] BYREF

  if ( (byte_4B1939F & 1) == 0 )
  {
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, script, key);
    sub_1BCA7E0(&string_TypeInfo, v6, v7);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1BCA7E0(&StringLiteral_1/*""*/, v8, v9);
    byte_4B1939F = 1;
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


System_String_array *__fastcall MessageAndScrollDetailConfirmDialog__GetTransitionParam(
        MessageAndScrollDetailConfirmDialog_o *this,
        System_Collections_Generic_Dictionary_string__object__o *script,
        const MethodInfo *method)
{
  __int64 v4; // x1
  __int64 v5; // x2
  System_String_o *StringValue; // x0
  __int64 v7; // x1

  if ( (byte_4B1939D & 1) == 0 )
  {
    sub_1BCA7E0(&string_TypeInfo, script, method);
    sub_1BCA7E0(&StringLiteral_24299/*"transitionParam"*/, v4, v5);
    byte_4B1939D = 1;
  }
  StringValue = EntityScriptUtil__GetStringValue(
                  script,
                  (System_String_o *)StringLiteral_24299/*"transitionParam"*/,
                  string_TypeInfo->static_fields->Empty,
                  0LL);
  if ( !StringValue )
    sub_1BCAA3C(0LL, v7);
  return System_String__Split(StringValue, 0x2Fu, 0, 0LL);
}


UnityEngine_Vector3_o __fastcall MessageAndScrollDetailConfirmDialog__GetVecFromScript(
        MessageAndScrollDetailConfirmDialog_o *this,
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

  if ( (byte_4B1939E & 1) == 0 )
  {
    sub_1BCA7E0(&System_Convert_TypeInfo, script, key);
    sub_1BCA7E0(&Method_System_Collections_Generic_Dictionary_string__object__TryGetValue__, v6, v7);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Count__, v8, v9);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_object__get_Item__, v10, v11);
    this = (MessageAndScrollDetailConfirmDialog_o *)sub_1BCA7E0(
                                                      &System_Collections_Generic_List_object__TypeInfo,
                                                      v12,
                                                      v13);
    byte_4B1939E = 1;
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


void __fastcall MessageAndScrollDetailConfirmDialog__Init(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  UILabel_o *mainTitleLabel; // x0

  if ( (byte_4B19391 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_1/*""*/, method, v2);
    byte_4B19391 = 1;
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
      sub_1BCAA3C(mainTitleLabel, method);
    }
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 0, 0LL);
    BaseDialog__Init((BaseDialog_o *)this, 0LL);
  }
}


void __fastcall MessageAndScrollDetailConfirmDialog__OnClickDecide(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct MessageAndScrollDetailConfirmDialog_ClickDelegate_o *clickDecideBtnFunc; // x8

  if ( (byte_4B193A3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__, method, v2);
    byte_4B193A3 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__;
    if ( (*((_BYTE *)Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MessageAndScrollDetailConfirmDialog_OnClickDecide__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.onClickDecideSeKind, 0LL);
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
  __int64 v2; // x2
  _QWORD *v4; // x0
  System_Reflection_MethodBase_o *v5; // x0
  struct MessageAndScrollDetailConfirmDialog_ClickDelegate_o *clickOkBtnFunc; // x8

  if ( (byte_4B193A2 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog_OnClickOk__, method, v2);
    byte_4B193A2 = 1;
  }
  if ( this->fields.isButtonEnable )
  {
    v4 = Method_MessageAndScrollDetailConfirmDialog_OnClickOk__;
    if ( (*((_BYTE *)Method_MessageAndScrollDetailConfirmDialog_OnClickOk__ + 83) & 2) != 0 )
      v4 = (_QWORD *)sub_1BCA7F8(Method_MessageAndScrollDetailConfirmDialog_OnClickOk__);
    v5 = (System_Reflection_MethodBase_o *)sub_1BCA7C4(v4, v4[4]);
    OverwriteAssetSoundName__PlaySystemSe(v5, this->fields.onClickOkSeKind, 0LL);
    clickOkBtnFunc = this->fields.clickOkBtnFunc;
    if ( clickOkBtnFunc )
      ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, __int64, _QWORD))clickOkBtnFunc->fields.m_target)(
        clickOkBtnFunc->fields.original_method_info,
        1LL,
        *(_QWORD *)&clickOkBtnFunc->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
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
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x3
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v25; // x26
  const MethodInfo *v26; // x3
  const MethodInfo *v27; // [xsp+30h] [xbp-80h]

  if ( (byte_4B19392 & 1) == 0 )
  {
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo, mainTitle, mainMessage);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__, v20, v21);
    byte_4B19392 = 1;
  }
  this->fields.closeNotificationCallback = func;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeNotificationCallback,
    (int64_t)func,
    (int64_t)mainMessage,
    (int32_t)detailTitle,
    detailMessage,
    (BattleSetupInfo_o *)func,
    (FollowerInfo_o *)script,
    *(PartyListViewItem_o **)&panelDepth);
  v25 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                 MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo,
                                                                 v22,
                                                                 v23,
                                                                 v24);
  MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
    v25,
    (Il2CppObject *)this,
    Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__,
    v26);
  MessageAndScrollDetailConfirmDialog__OpenDialog_44887800(
    this,
    mainTitle,
    mainMessage,
    detailTitle,
    detailMessage,
    v25,
    script,
    panelDepth,
    maxLine,
    mainTitleSize,
    detailTitleSize,
    canMaskTouchClose,
    this->fields.onClickOkSeKind,
    8,
    v27);
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
        bool canMaskTouchClose,
        System_String_o *decideBtnLabelName,
        System_Nullable_int__o inputCancelBtnWidth,
        System_Nullable_int__o inputDecideBtnWidth,
        int32_t onClickOkSe,
        int32_t onClickDecideSe,
        const MethodInfo *method)
{
  int32_t v21; // w20
  int32_t v22; // w24
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
  UIPanel_o *TargetPanel; // x0
  __int64 v50; // x1
  int64_t v51; // x2
  int32_t v52; // w3
  System_String_o *v53; // x4
  BattleSetupInfo_o *v54; // x5
  FollowerInfo_o *v55; // x6
  PartyListViewItem_o *v56; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v58; // x23
  UILabel_o *mainTitleLabel; // x0
  __int64 keepPanelDepth; // x1
  MessageAndScrollDetailConfirmDialog_c *v61; // x0
  MessageAndScrollDetailConfirmDialog_c *v62; // x0
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x8
  float x; // s9
  float z; // s8
  float value; // s0
  UnityEngine_GameObject_o *gameObject; // x0
  MessageAndScrollDetailConfirmDialog_c *v68; // x0
  MessageAndScrollDetailConfirmDialog_c *v69; // x0
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v70; // x8
  float v71; // s9
  float v72; // s8
  float y; // s0
  UnityEngine_GameObject_o *v74; // x0
  __int64 v75; // x1
  bool IsNullOrEmpty; // w20
  bool v77; // w0
  __int64 v78; // x1
  UnityEngine_Object_o *okBtnLabel; // x20
  __int64 v80; // x1
  __int64 v81; // x1
  __int64 v82; // x2
  __int64 v83; // x3
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v84; // x20
  const MethodInfo *v85; // x3
  int64_t v86; // x2
  int32_t v87; // w3
  System_String_o *v88; // x4
  BattleSetupInfo_o *v89; // x5
  FollowerInfo_o *v90; // x6
  PartyListViewItem_o *v91; // x7
  __int64 v92; // x1
  UILabel_o *v93; // x20
  UnityEngine_GameObject_o *v94; // x0
  __int64 v95; // x1
  MessageAndScrollDetailConfirmDialog_c *v96; // x8
  UnityEngine_GameObject_o *v97; // x20
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v98; // x10
  System_Nullable_int__o v99; // x21
  System_Nullable_int__o v100; // x22
  float *p_x; // x8
  float *p_y; // x9
  float *p_z; // x10
  UILabel_o *v104; // x20
  UnityEngine_GameObject_o *v105; // x0
  __int64 v106; // x1
  MessageAndScrollDetailConfirmDialog_c *v107; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v108; // x10
  const MethodInfo *v109; // x3
  __int64 v110; // x1
  __int64 v111; // x2
  __int64 v112; // x3
  System_Action_o *v113; // x20
  const MethodInfo *v114; // [xsp+0h] [xbp-D0h]
  float v; // [xsp+5Ch] [xbp-74h]
  float va; // [xsp+5Ch] [xbp-74h]
  System_Nullable_int__o v121; // 0:x1.8
  System_Nullable_int__o v122; // 0:x2.8
  UnityEngine_Vector3_o v123; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v124; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v125; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v126; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v127; // 0:s3.4,4:s4.4,8:s5.4

  v21 = detailTitleFontSize;
  v22 = mainTitleFontSize;
  if ( (byte_4B19394 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, mainTitle, mainMessage);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo, v27, v28);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v29, v30);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__, v31, v32);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog_EndOpen__, v33, v34);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog_TypeInfo, v35, v36);
    sub_1BCA7E0(&Method_System_Nullable_float__GetValueOrDefault__, v37, v38);
    sub_1BCA7E0(&Method_System_Nullable_float__get_HasValue__, v39, v40);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v41, v42);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v43, v44);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v45, v46);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v47, v48);
    byte_4B19394 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v58 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  this->fields.onClickDecideSeKind = onClickDecideSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v50);
    mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v58, 0LL, 0LL);
    if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
    {
      if ( !v58 )
        goto LABEL_73;
      this->fields.keepPanelDepth = v58->fields.mDepth;
    }
  }
  this->fields.clickOkBtnFunc = okFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.clickOkBtnFunc, (int64_t)okFunc, v51, v52, v53, v54, v55, v56);
  if ( mainTitleFontSize <= 0 )
  {
    v61 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, keepPanelDepth);
      v61 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    v22 = v61->static_fields->MainTitleFontSize;
  }
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_73;
  UILabel__set_fontSize(mainTitleLabel, v22, 0LL);
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_73;
  UILabel__set_text(mainTitleLabel, mainTitle, 0LL);
  v62 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, keepPanelDepth);
    v62 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  static_fields = v62->static_fields;
  x = static_fields->MainTitleBasePos.fields.x;
  z = static_fields->MainTitleBasePos.fields.z;
  if ( mainTitlePosY.fields.hasValue )
  {
    value = mainTitlePosY.fields.value;
  }
  else
  {
    if ( !v62->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v62, keepPanelDepth);
      static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
    }
    value = static_fields->MainTitleBasePos.fields.y;
  }
  v = value;
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_73;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
  v123.fields.y = v;
  v123.fields.x = x;
  v123.fields.z = z;
  GameObjectExtensions__SetLocalPosition(gameObject, v123, 0LL);
  if ( detailTitleFontSize <= 0 )
  {
    v68 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, keepPanelDepth);
      v68 = MessageAndScrollDetailConfirmDialog_TypeInfo;
    }
    v21 = v68->static_fields->DetailTitleFontSize;
  }
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_73;
  UILabel__set_fontSize(mainTitleLabel, v21, 0LL);
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_73;
  UILabel__set_text(mainTitleLabel, detailTitle, 0LL);
  v69 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, keepPanelDepth);
    v69 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  v70 = v69->static_fields;
  v71 = v70->DetailTitleBasePos.fields.x;
  v72 = v70->DetailTitleBasePos.fields.z;
  if ( detailTitlePosY.fields.hasValue )
  {
    y = detailTitlePosY.fields.value;
  }
  else
  {
    if ( !v69->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v69, keepPanelDepth);
      v70 = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
    }
    y = v70->DetailTitleBasePos.fields.y;
  }
  va = y;
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_73;
  v74 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
  v124.fields.y = va;
  v124.fields.x = v71;
  v124.fields.z = v72;
  GameObjectExtensions__SetLocalPosition(v74, v124, 0LL);
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v75);
  IsNullOrEmpty = System_String__IsNullOrEmpty(mainTitle, 0LL);
  v77 = System_String__IsNullOrEmpty(detailTitle, 0LL);
  MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel(
    this,
    IsNullOrEmpty,
    v77,
    mainMessage,
    detailMessage,
    mainMsgFontSize,
    detailMsgFontSize,
    maxLine,
    v125,
    v127,
    v114);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v78);
  if ( UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL) )
  {
    if ( System_String__op_Inequality(decideBtnLabelName, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      mainTitleLabel = (UILabel_o *)this->fields.decideBtn;
      if ( !mainTitleLabel )
        goto LABEL_73;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 1, 0LL);
      mainTitleLabel = this->fields.decideBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_73;
      UILabel__set_text(mainTitleLabel, decideBtnLabelName, 0LL);
      v84 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                     MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo,
                                                                     v81,
                                                                     v82,
                                                                     v83);
      MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        v84,
        (Il2CppObject *)this,
        Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__,
        v85);
      this->fields.clickDecideBtnFunc = v84;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.clickDecideBtnFunc,
        (int64_t)v84,
        v86,
        v87,
        v88,
        v89,
        v90,
        v91);
      v93 = this->fields.okBtnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v92);
      mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      if ( !v93 )
        goto LABEL_73;
      UILabel__set_text(v93, (System_String_o *)mainTitleLabel, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_73;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_73;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_73;
      v94 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      v96 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v97 = v94;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v95);
        v96 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v98 = v96->static_fields;
      v100 = inputCancelBtnWidth;
      v99 = inputDecideBtnWidth;
      p_x = &v98->OkButtonBasePosTypeTwoAlternative.fields.x;
      p_y = &v98->OkButtonBasePosTypeTwoAlternative.fields.y;
      p_z = &v98->OkButtonBasePosTypeTwoAlternative.fields.z;
    }
    else
    {
      v104 = this->fields.okBtnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, keepPanelDepth);
      mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( !v104 )
        goto LABEL_73;
      UILabel__set_text(v104, (System_String_o *)mainTitleLabel, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_73;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_73;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_73;
      v105 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      v107 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v97 = v105;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v106);
        v107 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v108 = v107->static_fields;
      v100 = inputCancelBtnWidth;
      v99 = inputDecideBtnWidth;
      p_x = &v108->OkButtonBasePos.fields.x;
      p_y = &v108->OkButtonBasePos.fields.y;
      p_z = &v108->OkButtonBasePos.fields.z;
    }
    v126.fields.y = *p_y;
    v126.fields.x = *p_x;
    v126.fields.z = *p_z;
    GameObjectExtensions__SetLocalPosition(v97, v126, 0LL);
    v121 = v100;
    v122 = v99;
    MessageAndScrollDetailConfirmDialog__AdjustBtnSize(this, v121, v122, v109);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v80);
  mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v58, 0LL, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
  {
    keepPanelDepth = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      keepPanelDepth = (unsigned int)this->fields.keepPanelDepth;
    if ( v58 )
    {
      UIPanel__set_depth(v58, keepPanelDepth, 0LL);
      goto LABEL_71;
    }
LABEL_73:
    sub_1BCAA3C(mainTitleLabel, keepPanelDepth);
  }
LABEL_71:
  mainTitleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !mainTitleLabel )
    goto LABEL_73;
  UIScrollView__ResetPosition((UIScrollView_o *)mainTitleLabel, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v113 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v110, v111, v112);
  System_Action___ctor(v113, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v113, 0, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog__OpenDialog_44887800(
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
  __int64 v21; // x2
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x1
  __int64 v25; // x2
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  UIPanel_o *TargetPanel; // x0
  __int64 v59; // x1
  int64_t v60; // x2
  int32_t v61; // w3
  System_String_o *v62; // x4
  BattleSetupInfo_o *v63; // x5
  FollowerInfo_o *v64; // x6
  PartyListViewItem_o *v65; // x7
  _BOOL4 isInitPanelDepth; // w8
  UIPanel_o *v67; // x22
  UILabel_o *mainTitleLabel; // x0
  __int64 monitor_high; // x1
  MessageAndScrollDetailConfirmDialog_o *v70; // x0
  const MethodInfo *v71; // x3
  int IntFromScript; // w28
  MessageAndScrollDetailConfirmDialog_c *v73; // x0
  UILabel_o *v74; // x29
  const MethodInfo *v75; // x3
  MessageAndScrollDetailConfirmDialog_o *gameObject; // x0
  __int64 v77; // x1
  const MethodInfo *v78; // x3
  MessageAndScrollDetailConfirmDialog_c *v79; // x8
  UnityEngine_GameObject_o *v80; // x27
  float *p_x; // x8
  float v82; // s8
  float v83; // s9
  float v84; // s10
  MessageAndScrollDetailConfirmDialog_o *v85; // x0
  const MethodInfo *v86; // x3
  MessageAndScrollDetailConfirmDialog_c *v87; // x0
  UILabel_o *detailTitleLabel; // x27
  const MethodInfo *v89; // x3
  MessageAndScrollDetailConfirmDialog_o *v90; // x0
  __int64 v91; // x1
  const MethodInfo *v92; // x3
  MessageAndScrollDetailConfirmDialog_c *v93; // x8
  UnityEngine_GameObject_o *v94; // x26
  float *v95; // x8
  float v96; // s8
  float v97; // s9
  float v98; // s10
  struct UILabel_o *v99; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *static_fields; // x9
  float x; // s8
  float y; // s9
  float z; // s10
  float v104; // s11
  float v105; // s12
  float v106; // s13
  struct UILabel_o *v107; // x8
  char v108; // w26
  bool IsNullOrEmpty; // w0
  const MethodInfo *v110; // x7
  __int64 v111; // x1
  UnityEngine_Object_o *okBtnLabel; // x23
  _BOOL8 v113; // x0
  __int64 v114; // x1
  const MethodInfo *v115; // x3
  System_String_o *StringFromScript; // x23
  MessageAndScrollDetailConfirmDialog_o *v117; // x0
  const MethodInfo *v118; // x3
  UILabel_o *decideBtnLabel; // x23
  const MethodInfo *v120; // x2
  struct System_Action_o *v121; // x0
  int64_t v122; // x2
  int32_t v123; // w3
  System_String_o *v124; // x4
  BattleSetupInfo_o *v125; // x5
  FollowerInfo_o *v126; // x6
  PartyListViewItem_o *v127; // x7
  __int64 v128; // x1
  __int64 v129; // x2
  __int64 v130; // x3
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v131; // x23
  const MethodInfo *v132; // x3
  int64_t v133; // x2
  int32_t v134; // w3
  System_String_o *v135; // x4
  BattleSetupInfo_o *v136; // x5
  FollowerInfo_o *v137; // x6
  PartyListViewItem_o *v138; // x7
  __int64 v139; // x1
  UILabel_o *v140; // x23
  MessageAndScrollDetailConfirmDialog_o *v141; // x0
  __int64 v142; // x1
  const MethodInfo *v143; // x3
  MessageAndScrollDetailConfirmDialog_c *v144; // x8
  UnityEngine_GameObject_o *v145; // x23
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v146; // x10
  float *v147; // x8
  float *p_y; // x9
  float *p_z; // x10
  UILabel_o *v150; // x23
  __int64 v151; // x1
  MessageAndScrollDetailConfirmDialog_c *v152; // x8
  struct MessageAndScrollDetailConfirmDialog_StaticFields *v153; // x10
  float v154; // s9
  float v155; // s8
  float v156; // s10
  MessageAndScrollDetailConfirmDialog_o *v157; // x0
  const MethodInfo *v158; // x3
  UILabel_o *v159; // x23
  const MethodInfo *v160; // x2
  __int64 v161; // x1
  __int64 v162; // x2
  __int64 v163; // x3
  System_Action_o *v164; // x20
  UnityEngine_Vector3_o VecFromScript; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v169; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v170; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v171; // 0:s0.4,4:s1.4,8:s2.4
  UnityEngine_Vector3_o v172; // 0:s3.4,4:s4.4,8:s5.4

  v18 = mainTitle;
  if ( (byte_4B19395 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, mainTitle, mainMessage);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo, v20, v21);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v22, v23);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__, v24, v25);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog_EndOpen__, v26, v27);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog_TypeInfo, v28, v29);
    sub_1BCA7E0(&UnityEngine_Object_TypeInfo, v30, v31);
    sub_1BCA7E0(&StringLiteral_21489/*"mainTitleFontSize"*/, v32, v33);
    sub_1BCA7E0(&StringLiteral_18702/*"decideBtnFontSize"*/, v34, v35);
    sub_1BCA7E0(&StringLiteral_18791/*"detailTitleFontSize"*/, v36, v37);
    sub_1BCA7E0(&StringLiteral_18790/*"detailTitle"*/, v38, v39);
    sub_1BCA7E0(&StringLiteral_21488/*"mainTitle"*/, v40, v41);
    sub_1BCA7E0(&StringLiteral_18792/*"detailTitleOffset"*/, v42, v43);
    sub_1BCA7E0(&StringLiteral_17906/*"cancelBtnFontSize"*/, v44, v45);
    sub_1BCA7E0(&StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, v46, v47);
    sub_1BCA7E0(&StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, v48, v49);
    sub_1BCA7E0(&StringLiteral_18703/*"decideBtnLabel"*/, v50, v51);
    sub_1BCA7E0(&StringLiteral_17824/*"buttonOffset"*/, v52, v53);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v54, v55);
    sub_1BCA7E0(&StringLiteral_21490/*"mainTitleOffset"*/, v56, v57);
    byte_4B19395 = 1;
  }
  TargetPanel = BaseDialog__get_TargetPanel((BaseDialog_o *)this, 0LL);
  isInitPanelDepth = this->fields.isInitPanelDepth;
  v67 = TargetPanel;
  this->fields.onClickOkSeKind = onClickOkSe;
  this->fields.onClickDecideSeKind = onClickDecideSe;
  if ( isInitPanelDepth )
  {
    this->fields.isInitPanelDepth = 0;
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v59);
    mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v67, 0LL, 0LL);
    if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
    {
      if ( !v67 )
        goto LABEL_80;
      this->fields.keepPanelDepth = v67->fields.mDepth;
    }
  }
  this->fields.clickOkBtnFunc = okFunc;
  sub_1BCA784((PartyOrganizationUtility_o *)&this->fields.clickOkBtnFunc, (int64_t)okFunc, v60, v61, v62, v63, v64, v65);
  if ( mainTitleFontSize )
  {
    IntFromScript = 0;
  }
  else
  {
    IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                      v70,
                      script,
                      (System_String_o *)StringLiteral_21489/*"mainTitleFontSize"*/,
                      v71);
    if ( IntFromScript <= 0 )
    {
      v73 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, monitor_high);
        v73 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      IntFromScript = v73->static_fields->MainTitleFontSize;
    }
  }
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_80;
  UILabel__set_fontSize(mainTitleLabel, IntFromScript, 0LL);
  v74 = this->fields.mainTitleLabel;
  mainTitleLabel = (UILabel_o *)System_String__op_Inequality(v18, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
  {
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                    (MessageAndScrollDetailConfirmDialog_o *)mainTitleLabel,
                                    script,
                                    (System_String_o *)StringLiteral_21488/*"mainTitle"*/,
                                    v75);
    v18 = (System_String_o *)mainTitleLabel;
  }
  if ( !v74 )
    goto LABEL_80;
  UILabel__set_text(v74, v18, 0LL);
  mainTitleLabel = this->fields.mainTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_80;
  gameObject = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                          (UnityEngine_Component_o *)mainTitleLabel,
                                                          0LL);
  v79 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v80 = (UnityEngine_GameObject_o *)gameObject;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v77);
    v79 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  p_x = &v79->static_fields->MainTitleBasePos.fields.x;
  v82 = *p_x;
  v83 = p_x[1];
  v84 = p_x[2];
  VecFromScript = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
                    gameObject,
                    script,
                    (System_String_o *)StringLiteral_21490/*"mainTitleOffset"*/,
                    v78);
  VecFromScript.fields.x = v82 + VecFromScript.fields.x;
  VecFromScript.fields.y = v83 + VecFromScript.fields.y;
  VecFromScript.fields.z = v84 + VecFromScript.fields.z;
  GameObjectExtensions__SetLocalPosition(v80, VecFromScript, 0LL);
  if ( !detailTitleFontSize )
  {
    IntFromScript = MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                      v85,
                      script,
                      (System_String_o *)StringLiteral_18791/*"detailTitleFontSize"*/,
                      v86);
    if ( IntFromScript <= 0 )
    {
      v87 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, monitor_high);
        v87 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      IntFromScript = v87->static_fields->DetailTitleFontSize;
    }
  }
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_80;
  UILabel__set_fontSize(mainTitleLabel, IntFromScript, 0LL);
  detailTitleLabel = this->fields.detailTitleLabel;
  mainTitleLabel = (UILabel_o *)System_String__op_Inequality(detailTitle, (System_String_o *)StringLiteral_1/*""*/, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) == 0 )
  {
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                                    (MessageAndScrollDetailConfirmDialog_o *)mainTitleLabel,
                                    script,
                                    (System_String_o *)StringLiteral_18790/*"detailTitle"*/,
                                    v89);
    detailTitle = (System_String_o *)mainTitleLabel;
  }
  if ( !detailTitleLabel )
    goto LABEL_80;
  UILabel__set_text(detailTitleLabel, detailTitle, 0LL);
  mainTitleLabel = this->fields.detailTitleLabel;
  if ( !mainTitleLabel )
    goto LABEL_80;
  v90 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                   (UnityEngine_Component_o *)mainTitleLabel,
                                                   0LL);
  v93 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  v94 = (UnityEngine_GameObject_o *)v90;
  if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v91);
    v93 = MessageAndScrollDetailConfirmDialog_TypeInfo;
  }
  v95 = &v93->static_fields->MainTitleBasePos.fields.x;
  v96 = v95[9];
  v97 = v95[10];
  v98 = v95[11];
  v169 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(v90, script, (System_String_o *)StringLiteral_18792/*"detailTitleOffset"*/, v92);
  v169.fields.x = v96 + v169.fields.x;
  v169.fields.y = v97 + v169.fields.y;
  v169.fields.z = v98 + v169.fields.z;
  GameObjectExtensions__SetLocalPosition(v94, v169, 0LL);
  v99 = this->fields.mainTitleLabel;
  if ( !v99 )
    goto LABEL_80;
  static_fields = MessageAndScrollDetailConfirmDialog_TypeInfo->static_fields;
  x = static_fields->MainMessageBasePos.fields.x;
  y = static_fields->MainMessageBasePos.fields.y;
  z = static_fields->MainMessageBasePos.fields.z;
  v104 = static_fields->DetailMessageBasePos.fields.x;
  v105 = static_fields->DetailMessageBasePos.fields.y;
  v106 = static_fields->DetailMessageBasePos.fields.z;
  mainTitleLabel = (UILabel_o *)System_String__IsNullOrEmpty(v99->fields.mText, 0LL);
  v107 = this->fields.detailTitleLabel;
  if ( !v107 )
    goto LABEL_80;
  v108 = (char)mainTitleLabel;
  IsNullOrEmpty = System_String__IsNullOrEmpty(v107->fields.mText, 0LL);
  v170.fields.x = x;
  v170.fields.y = y;
  v170.fields.z = z;
  v172.fields.x = v104;
  v172.fields.y = v105;
  v172.fields.z = v106;
  MessageAndScrollDetailConfirmDialog__AdjustScriptMessageLabel_44894380(
    this,
    v108 & 1,
    IsNullOrEmpty,
    mainMessage,
    detailMessage,
    maxLine,
    v170,
    v172,
    script,
    v110);
  okBtnLabel = (UnityEngine_Object_o *)this->fields.okBtnLabel;
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v111);
  v113 = UnityEngine_Object__op_Inequality(okBtnLabel, 0LL, 0LL);
  if ( v113 )
  {
    StringFromScript = MessageAndScrollDetailConfirmDialog__GetStringFromScript(
                         (MessageAndScrollDetailConfirmDialog_o *)v113,
                         script,
                         (System_String_o *)StringLiteral_18703/*"decideBtnLabel"*/,
                         v115);
    if ( System_String__op_Inequality(StringFromScript, (System_String_o *)StringLiteral_1/*""*/, 0LL) )
    {
      mainTitleLabel = (UILabel_o *)this->fields.decideBtn;
      if ( !mainTitleLabel )
        goto LABEL_80;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)mainTitleLabel, 1, 0LL);
      mainTitleLabel = this->fields.decideBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_80;
      UILabel__set_text(mainTitleLabel, StringFromScript, 0LL);
      mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                      v117,
                                      script,
                                      (System_String_o *)StringLiteral_18702/*"decideBtnFontSize"*/,
                                      v118);
      decideBtnLabel = this->fields.decideBtnLabel;
      monitor_high = (unsigned int)mainTitleLabel;
      if ( (int)mainTitleLabel <= 0 )
      {
        mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, monitor_high);
          mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
        }
        monitor_high = HIDWORD(mainTitleLabel->fields.onChange[1].monitor);
      }
      if ( !decideBtnLabel )
        goto LABEL_80;
      UILabel__set_fontSize(decideBtnLabel, monitor_high, 0LL);
      v121 = MessageAndScrollDetailConfirmDialog__SetTransitionFunc(this, script, v120);
      this->fields.decideNotificationCallback = v121;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.decideNotificationCallback,
        (int64_t)v121,
        v122,
        v123,
        v124,
        v125,
        v126,
        v127);
      v131 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                      MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo,
                                                                      v128,
                                                                      v129,
                                                                      v130);
      MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        v131,
        (Il2CppObject *)this,
        Method_MessageAndScrollDetailConfirmDialog_DeicedFuncDialog__,
        v132);
      this->fields.clickDecideBtnFunc = v131;
      sub_1BCA784(
        (PartyOrganizationUtility_o *)&this->fields.clickDecideBtnFunc,
        (int64_t)v131,
        v133,
        v134,
        v135,
        v136,
        v137,
        v138);
      v140 = this->fields.okBtnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v139);
      mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3786/*"COMMON_CONFIRM_CANCEL"*/, 0LL);
      if ( !v140 )
        goto LABEL_80;
      UILabel__set_text(v140, (System_String_o *)mainTitleLabel, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_80;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_80;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_80;
      v141 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)mainTitleLabel,
                                                        0LL);
      v144 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v145 = (UnityEngine_GameObject_o *)v141;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v142);
        v144 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v146 = v144->static_fields;
      v147 = &v146->OkButtonBasePosTypeTwoAlternative.fields.x;
      p_y = &v146->OkButtonBasePosTypeTwoAlternative.fields.y;
      p_z = &v146->OkButtonBasePosTypeTwoAlternative.fields.z;
    }
    else
    {
      v150 = this->fields.okBtnLabel;
      if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, monitor_high);
      mainTitleLabel = (UILabel_o *)LocalizationManager__Get((System_String_o *)StringLiteral_3787/*"COMMON_CONFIRM_CLOSE"*/, 0LL);
      if ( !v150 )
        goto LABEL_80;
      UILabel__set_text(v150, (System_String_o *)mainTitleLabel, 0LL);
      mainTitleLabel = this->fields.okBtnLabel;
      if ( !mainTitleLabel )
        goto LABEL_80;
      mainTitleLabel = (UILabel_o *)UnityEngine_Component__get_transform((UnityEngine_Component_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_80;
      mainTitleLabel = (UILabel_o *)UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)mainTitleLabel, 0LL);
      if ( !mainTitleLabel )
        goto LABEL_80;
      v141 = (MessageAndScrollDetailConfirmDialog_o *)UnityEngine_Component__get_gameObject(
                                                        (UnityEngine_Component_o *)mainTitleLabel,
                                                        0LL);
      v152 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      v145 = (UnityEngine_GameObject_o *)v141;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, v151);
        v152 = MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      v153 = v152->static_fields;
      v147 = &v153->OkButtonBasePos.fields.x;
      p_y = &v153->OkButtonBasePos.fields.y;
      p_z = &v153->OkButtonBasePos.fields.z;
    }
    v154 = *v147;
    v155 = *p_y;
    v156 = *p_z;
    v171 = MessageAndScrollDetailConfirmDialog__GetVecFromScript(
             v141,
             script,
             (System_String_o *)StringLiteral_17824/*"buttonOffset"*/,
             v143);
    v171.fields.x = v154 + v171.fields.x;
    v171.fields.y = v155 + v171.fields.y;
    v171.fields.z = v156 + v171.fields.z;
    GameObjectExtensions__SetLocalPosition(v145, v171, 0LL);
    mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog__GetIntFromScript(
                                    v157,
                                    script,
                                    (System_String_o *)StringLiteral_17906/*"cancelBtnFontSize"*/,
                                    v158);
    v159 = this->fields.okBtnLabel;
    monitor_high = (unsigned int)mainTitleLabel;
    if ( (int)mainTitleLabel <= 0 )
    {
      mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog_TypeInfo, monitor_high);
        mainTitleLabel = (UILabel_o *)MessageAndScrollDetailConfirmDialog_TypeInfo;
      }
      monitor_high = LODWORD(mainTitleLabel->fields.onChange[1].monitor);
    }
    if ( !v159 )
      goto LABEL_80;
    UILabel__set_fontSize(v159, monitor_high, 0LL);
    MessageAndScrollDetailConfirmDialog__AdjustBtnSize_44899732(this, script, v160);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v114);
  mainTitleLabel = (UILabel_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v67, 0LL, 0LL);
  if ( ((unsigned __int8)mainTitleLabel & 1) != 0 )
  {
    monitor_high = (unsigned int)panelDepth;
    if ( (panelDepth & 0x80000000) != 0 )
      monitor_high = (unsigned int)this->fields.keepPanelDepth;
    if ( v67 )
    {
      UIPanel__set_depth(v67, monitor_high, 0LL);
      goto LABEL_78;
    }
LABEL_80:
    sub_1BCAA3C(mainTitleLabel, monitor_high);
  }
LABEL_78:
  mainTitleLabel = (UILabel_o *)this->fields.scrollView;
  if ( !mainTitleLabel )
    goto LABEL_80;
  UIScrollView__ResetPosition((UIScrollView_o *)mainTitleLabel, 0LL);
  this->fields.isButtonEnable = 0;
  BaseDialog__SetMaskTouchCloseEnabled((BaseDialog_o *)this, canMaskTouchClose, 0LL);
  v164 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v161, v162, v163);
  System_Action___ctor(v164, (Il2CppObject *)this, Method_MessageAndScrollDetailConfirmDialog_EndOpen__, 0LL);
  BaseDialog__Open((BaseDialog_o *)this, v164, 0, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog__Open_44889868(
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
        bool canMaskTouchClose,
        System_String_o *decideBtnLabelName,
        System_Nullable_int__o inputCancelBtnWidth,
        System_Nullable_int__o inputDecideBtnWidth,
        int32_t onClickOkSe,
        int32_t onClickDecideSe,
        const MethodInfo *method)
{
  __int64 v25; // x1
  __int64 v26; // x2
  int64_t v27; // x2
  int32_t v28; // w3
  System_String_o *v29; // x4
  BattleSetupInfo_o *v30; // x5
  FollowerInfo_o *v31; // x6
  PartyListViewItem_o *v32; // x7
  __int64 v33; // x1
  __int64 v34; // x2
  __int64 v35; // x3
  MessageAndScrollDetailConfirmDialog_ClickDelegate_o *v36; // x26
  const MethodInfo *v37; // x3

  if ( (byte_4B19393 & 1) == 0 )
  {
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo, mainTitle, mainMessage);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__, v25, v26);
    byte_4B19393 = 1;
  }
  this->fields.closeNotificationCallback = closeFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.closeNotificationCallback,
    (int64_t)closeFunc,
    (int64_t)mainMessage,
    (int32_t)detailTitle,
    detailMessage,
    (BattleSetupInfo_o *)closeFunc,
    (FollowerInfo_o *)decideFunc,
    *(PartyListViewItem_o **)&panelDepth);
  this->fields.decideNotificationCallback = decideFunc;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)&this->fields.decideNotificationCallback,
    (int64_t)decideFunc,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32);
  v36 = (MessageAndScrollDetailConfirmDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                 MessageAndScrollDetailConfirmDialog_ClickDelegate_TypeInfo,
                                                                 v33,
                                                                 v34,
                                                                 v35);
  MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
    v36,
    (Il2CppObject *)this,
    Method_MessageAndScrollDetailConfirmDialog_CloseFuncDialog__,
    v37);
  MessageAndScrollDetailConfirmDialog__OpenDialog(
    this,
    mainTitle,
    mainMessage,
    detailTitle,
    detailMessage,
    v36,
    panelDepth,
    maxLine,
    mainTitleFontSize,
    detailTitleFontSize,
    mainMsgFontSize,
    detailMsgFontSize,
    mainTitlePosY,
    detailTitlePosY,
    canMaskTouchClose,
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
  __int64 v3; // x3
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
  __int64 v26; // x1
  __int64 v27; // x2
  __int64 v28; // x1
  __int64 v29; // x2
  __int64 v30; // x1
  __int64 v31; // x2
  __int64 v32; // x1
  __int64 v33; // x2
  __int64 v34; // x1
  __int64 v35; // x2
  __int64 v36; // x1
  __int64 v37; // x2
  __int64 v38; // x1
  __int64 v39; // x2
  __int64 v40; // x1
  __int64 v41; // x2
  __int64 v42; // x1
  __int64 v43; // x2
  __int64 v44; // x1
  __int64 v45; // x2
  __int64 v46; // x1
  __int64 v47; // x2
  __int64 v48; // x1
  __int64 v49; // x2
  __int64 v50; // x1
  __int64 v51; // x2
  __int64 v52; // x1
  __int64 v53; // x2
  __int64 v54; // x1
  __int64 v55; // x2
  __int64 v56; // x1
  __int64 v57; // x2
  __int64 v58; // x1
  __int64 v59; // x2
  __int64 v60; // x1
  __int64 v61; // x2
  __int64 v62; // x1
  __int64 v63; // x2
  __int64 v64; // x1
  __int64 v65; // x2
  __int64 v66; // x1
  __int64 v67; // x2
  __int64 v68; // x1
  __int64 v69; // x2
  __int64 v70; // x1
  __int64 v71; // x2
  __int64 v72; // x1
  __int64 v73; // x2
  __int64 v74; // x1
  __int64 v75; // x2
  __int64 v76; // x1
  __int64 v77; // x2
  __int64 v78; // x1
  __int64 v79; // x2
  __int64 v80; // x1
  __int64 v81; // x2
  __int64 v82; // x1
  __int64 v83; // x2
  __int64 v84; // x1
  __int64 v85; // x2
  __int64 v86; // x1
  __int64 v87; // x2
  __int64 v88; // x1
  __int64 v89; // x2
  __int64 v90; // x1
  __int64 v91; // x2
  __int64 v92; // x1
  __int64 v93; // x2
  __int64 v94; // x1
  __int64 v95; // x2
  int64_t v96; // x21
  SceneJumpInfo_o *IsNullOrEmpty; // x0
  __int64 v98; // x1
  int64_t v99; // x2
  int32_t v100; // w3
  System_String_o *v101; // x4
  BattleSetupInfo_o *v102; // x5
  FollowerInfo_o *v103; // x6
  PartyListViewItem_o *v104; // x7
  MessageAndScrollDetailConfirmDialog_o *v105; // x0
  const MethodInfo *v106; // x2
  System_String_array *TransitionParam; // x0
  __int64 *v108; // x19
  int64_t v109; // x2
  int32_t v110; // w3
  System_String_o *v111; // x4
  BattleSetupInfo_o *v112; // x5
  FollowerInfo_o *v113; // x6
  PartyListViewItem_o *v114; // x7
  __int64 v115; // x8
  System_Action_o *_9__48_4; // x20
  __int64 v117; // x8
  __int64 v118; // x1
  System_String_o *v119; // x19
  int32_t SceneType; // w23
  __int64 v121; // x1
  __int64 v122; // x2
  __int64 v123; // x3
  __int64 v124; // x22
  int64_t v125; // x2
  int32_t v126; // w3
  System_String_o *v127; // x4
  BattleSetupInfo_o *v128; // x5
  FollowerInfo_o *v129; // x6
  PartyListViewItem_o *v130; // x7
  __int64 *v131; // x19
  __int64 v132; // x2
  __int64 v133; // x3
  __int64 v134; // x8
  __int64 v135; // x8
  System_String_o *v136; // x20
  System_Action_o *v137; // x0
  Il2CppObject *v138; // x1
  __int64 v139; // x2
  __int64 v140; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v141; // x0
  Il2CppObject *v142; // x19
  int64_t v143; // x2
  int32_t v144; // w3
  System_String_o *v145; // x4
  BattleSetupInfo_o *v146; // x5
  FollowerInfo_o *v147; // x6
  PartyListViewItem_o *v148; // x7
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v149; // x0
  PartyOrganizationUtility_o *p__9__48_4; // x0
  __int64 v151; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v152; // x0
  Il2CppObject *v153; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v154; // x0
  __int64 v155; // x8
  __int64 v156; // x21
  __int64 v157; // x8
  int32_t v158; // w22
  __int64 v159; // x1
  __int64 v160; // x2
  __int64 v161; // x3
  SceneJumpInfo_o *v162; // x20
  int64_t v163; // x2
  int32_t v164; // w3
  System_String_o *v165; // x4
  BattleSetupInfo_o *v166; // x5
  FollowerInfo_o *v167; // x6
  PartyListViewItem_o *v168; // x7
  __int64 v169; // x1
  __int64 v170; // x2
  __int64 v171; // x3
  __int64 v172; // x8
  __int64 v173; // x1
  __int64 v174; // x1
  __int64 v175; // x2
  __int64 v176; // x3
  int32_t v177; // w19
  int32_t v178; // w20
  SceneJumpInfo_o *v179; // x23
  int64_t v180; // x2
  int32_t v181; // w3
  System_String_o *v182; // x4
  BattleSetupInfo_o *v183; // x5
  FollowerInfo_o *v184; // x6
  PartyListViewItem_o *v185; // x7
  __int64 v186; // x1
  __int64 v187; // x2
  __int64 v188; // x3
  __int64 *v189; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v190; // x0
  Il2CppObject *v191; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *static_fields; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v193; // x0
  Il2CppObject *v194; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v195; // x0
  __int64 v196; // x8
  MessageAndScrollDetailConfirmDialog___c_c *v197; // x0
  Il2CppObject *v198; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v199; // x0
  __int64 v200; // x8
  __int64 v201; // x2
  __int64 v202; // x3
  __int64 v203; // x8
  System_String_o *v204; // x20
  SceneJumpInfo_o *v205; // x19
  int64_t v206; // x2
  int32_t v207; // w3
  System_String_o *v208; // x4
  BattleSetupInfo_o *v209; // x5
  FollowerInfo_o *v210; // x6
  PartyListViewItem_o *v211; // x7
  __int64 v212; // x1
  __int64 v213; // x2
  __int64 v214; // x3
  __int64 v215; // x2
  __int64 v216; // x3
  __int64 v217; // x8
  System_String_o *v218; // x20
  SceneJumpInfo_o *v219; // x22
  int64_t v220; // x2
  int32_t v221; // w3
  System_String_o *v222; // x4
  BattleSetupInfo_o *v223; // x5
  FollowerInfo_o *v224; // x6
  PartyListViewItem_o *v225; // x7
  __int64 v226; // x20
  __int64 v227; // x2
  __int64 v228; // x3
  __int64 v229; // x8
  System_String_o *v230; // x19
  int64_t v231; // x2
  __int64 v232; // x3
  System_String_o *v233; // x4
  BattleSetupInfo_o *v234; // x5
  FollowerInfo_o *v235; // x6
  PartyListViewItem_o *v236; // x7
  __int64 v237; // x8
  __int64 v238; // x2
  __int64 v239; // x3
  __int64 v240; // x8
  System_String_o *v241; // x20
  SceneJumpInfo_o *v242; // x19
  int64_t v243; // x2
  int32_t v244; // w3
  System_String_o *v245; // x4
  BattleSetupInfo_o *v246; // x5
  FollowerInfo_o *v247; // x6
  PartyListViewItem_o *v248; // x7
  __int64 v249; // x1
  __int64 v250; // x2
  __int64 v251; // x3
  __int64 v252; // x20
  __int64 v253; // x8
  __int64 v254; // x8
  System_String_o *v255; // x21
  __int64 v256; // x1
  __int64 v257; // x2
  __int64 v258; // x3
  TerminalPramsManager_c *v259; // x0
  MessageAndScrollDetailConfirmDialog___c_c *v260; // x0
  Il2CppObject *v261; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v262; // x0
  System_Collections_Generic_List_object__o *ValidGachaEntityList; // x21
  __int64 v264; // x1
  __int64 v265; // x2
  __int64 v266; // x3
  System_Predicate_object__o *v267; // x22
  __int64 v268; // x1
  Il2CppObject *Instance; // x19
  System_String_o *v270; // x20
  __int64 v271; // x2
  __int64 v272; // x3
  System_String_o *v273; // x21
  MessageAndScrollDetailConfirmDialog___c_c *v274; // x8
  NotificationDialog_ClickDelegate_o *_9__48_12; // x22
  Il2CppObject *v276; // x23
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v277; // x0
  int64_t v278; // x2
  int32_t v279; // w3
  System_String_o *v280; // x4
  BattleSetupInfo_o *v281; // x5
  FollowerInfo_o *v282; // x6
  PartyListViewItem_o *v283; // x7
  int64_t v284; // x19
  TerminalPramsManager_c *v285; // x0
  PartyOrganizationUtility_o *p_TransitionScrollTabName_k__BackingField; // x0
  __int64 v287; // x1
  __int64 v288; // x2
  __int64 v289; // x3
  MessageAndScrollDetailConfirmDialog___c_c *v290; // x0
  Il2CppObject *v291; // x19
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *v292; // x0
  int32_t eventType[2]; // [xsp+68h] [xbp-48h] BYREF
  int32_t result[2]; // [xsp+78h] [xbp-38h] BYREF

  if ( (byte_4B19399 & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, script, method);
    sub_1BCA7E0(&NotificationDialog_ClickDelegate_TypeInfo, v6, v7);
    sub_1BCA7E0(&Method_DataManager_GetMaster_EventRewardSceneMaster___, v8, v9);
    sub_1BCA7E0(&Method_DataManager_GetMaster_GachaMaster___, v10, v11);
    sub_1BCA7E0(&DataManager_TypeInfo, v12, v13);
    sub_1BCA7E0(&Method_System_Enum_TryParse_ServantOperationManager_Kind___, v14, v15);
    sub_1BCA7E0(&Method_System_Enum_TryParse_MasterMissionComponent_Type___, v16, v17);
    sub_1BCA7E0(&Method_System_Enum_TryParse_PayType_Type___, v18, v19);
    sub_1BCA7E0(&System_Enum_TypeInfo, v20, v21);
    sub_1BCA7E0(&Method_System_Collections_Generic_List_GachaEntity__Find__, v22, v23);
    sub_1BCA7E0(&LocalizationManager_TypeInfo, v24, v25);
    sub_1BCA7E0(&System_Predicate_GachaEntity__TypeInfo, v26, v27);
    sub_1BCA7E0(&SceneJumpInfo_TypeInfo, v28, v29);
    sub_1BCA7E0(&SceneList_TypeInfo, v30, v31);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v32, v33);
    sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v34, v35);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_10__, v36, v37);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_12__, v38, v39);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_2__, v40, v41);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_3__, v42, v43);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_4__, v44, v45);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_5__, v46, v47);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_6__, v48, v49);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_7__, v50, v51);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_0__SetTransitionFunc_b__1__, v52, v53);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog___c__DisplayClass48_0_TypeInfo, v54, v55);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_1__SetTransitionFunc_b__0__, v56, v57);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog___c__DisplayClass48_1_TypeInfo, v58, v59);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_2__SetTransitionFunc_b__8__, v60, v61);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_2__SetTransitionFunc_b__9__, v62, v63);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog___c__DisplayClass48_2_TypeInfo, v64, v65);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_3__SetTransitionFunc_b__11__, v66, v67);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog___c__DisplayClass48_3_TypeInfo, v68, v69);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_4__SetTransitionFunc_b__14__, v70, v71);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog___c__DisplayClass48_4_TypeInfo, v72, v73);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_5__SetTransitionFunc_b__15__, v74, v75);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog___c__DisplayClass48_5_TypeInfo, v76, v77);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_6__SetTransitionFunc_b__16__, v78, v79);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog___c__DisplayClass48_6_TypeInfo, v80, v81);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog___c_TypeInfo, v82, v83);
    sub_1BCA7E0(&StringLiteral_9660/*"NormalEventShop"*/, v84, v85);
    sub_1BCA7E0(&StringLiteral_13439/*"TERMINAL_BANNER_ERROR_DIALOG_MESSAGE_TO_SUMMON"*/, v86, v87);
    sub_1BCA7E0(&StringLiteral_12699/*"Scroll"*/, v88, v89);
    sub_1BCA7E0(&StringLiteral_1/*""*/, v90, v91);
    sub_1BCA7E0(&StringLiteral_13440/*"TERMINAL_BANNER_ERROR_DIALOG_TITLE"*/, v92, v93);
    sub_1BCA7E0(&StringLiteral_12667/*"Scene"*/, v94, v95);
    byte_4B19399 = 1;
  }
  *(_QWORD *)result = 0LL;
  *(_QWORD *)eventType = 0LL;
  v96 = sub_1BCAA2C(MessageAndScrollDetailConfirmDialog___c__DisplayClass48_0_TypeInfo, script, method, v3);
  System_Object___ctor((Il2CppObject *)v96, 0LL);
  if ( !v96 )
    goto LABEL_169;
  *(_QWORD *)(v96 + 16) = this;
  sub_1BCA784((PartyOrganizationUtility_o *)(v96 + 16), (int64_t)this, v99, v100, v101, v102, v103, v104);
  TransitionParam = MessageAndScrollDetailConfirmDialog__GetTransitionParam(v105, script, v106);
  *(_QWORD *)(v96 + 24) = TransitionParam;
  v108 = (__int64 *)(v96 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v96 + 24), (int64_t)TransitionParam, v109, v110, v111, v112, v113, v114);
  v115 = *(_QWORD *)(v96 + 24);
  if ( !v115 )
    goto LABEL_169;
  if ( !*(_DWORD *)(v115 + 24) )
    goto LABEL_170;
  IsNullOrEmpty = (SceneJumpInfo_o *)System_String__IsNullOrEmpty(*(System_String_o **)(v115 + 32), 0LL);
  _9__48_4 = 0LL;
  if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    return _9__48_4;
  v117 = *v108;
  if ( !*v108 )
    goto LABEL_169;
  if ( !*(_DWORD *)(v117 + 24) )
    goto LABEL_170;
  v119 = System_String__Concat_62401220(*(System_String_o **)(v117 + 32), (System_String_o *)StringLiteral_12667/*"Scene"*/, 0LL);
  if ( !SceneList_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(SceneList_TypeInfo, v118);
  SceneType = SceneList__getSceneType(v119, 0LL);
  v124 = sub_1BCAA2C(MessageAndScrollDetailConfirmDialog___c__DisplayClass48_1_TypeInfo, v121, v122, v123);
  System_Object___ctor((Il2CppObject *)v124, 0LL);
  if ( !v124 )
    goto LABEL_169;
  *(_QWORD *)(v124 + 24) = v96;
  v131 = (__int64 *)(v124 + 24);
  sub_1BCA784((PartyOrganizationUtility_o *)(v124 + 24), v96, v125, v126, v127, v128, v129, v130);
  if ( SceneType > 32 )
  {
    if ( SceneType != 72 )
    {
      if ( SceneType != 91 )
      {
        if ( SceneType == 100 )
        {
          *(_DWORD *)(v124 + 16) = -1;
          v134 = *(_QWORD *)(v124 + 24);
          if ( v134 )
          {
            v135 = *(_QWORD *)(v134 + 24);
            if ( v135 )
            {
              if ( *(int *)(v135 + 24) >= 2 )
              {
                v136 = *(System_String_o **)(v135 + 40);
                if ( !System_Enum_TypeInfo->_2.cctor_finished )
                  j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v98);
                System_Enum__TryParse_Int32Enum_(
                  v136,
                  (int32_t *)(v124 + 16),
                  (const MethodInfo_2F19EE8 *)Method_System_Enum_TryParse_MasterMissionComponent_Type___);
              }
              v137 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v98, v132, v133);
              _9__48_4 = v137;
              v138 = (Il2CppObject *)v124;
              LODWORD(v139) = Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_1__SetTransitionFunc_b__0__;
              goto LABEL_115;
            }
          }
LABEL_169:
          sub_1BCAA3C(IsNullOrEmpty, v98);
        }
        return 0LL;
      }
      v190 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v98);
        v190 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__48_4 = v190->static_fields->__9__48_4;
      if ( !_9__48_4 )
      {
        if ( !v190->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v190, v98);
          v190 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v191 = (Il2CppObject *)v190->static_fields->__9;
        _9__48_4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v98, v132, v133);
        System_Action___ctor(
          _9__48_4,
          v191,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_4__,
          0LL);
        static_fields = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        static_fields->__9__48_4 = _9__48_4;
        p__9__48_4 = (PartyOrganizationUtility_o *)&static_fields->__9__48_4;
LABEL_166:
        sub_1BCA784(p__9__48_4, (int64_t)_9__48_4, v143, v144, v145, v146, v147, v148);
        return _9__48_4;
      }
      return _9__48_4;
    }
    if ( !*v131 )
      goto LABEL_169;
    v155 = *(_QWORD *)(*v131 + 24);
    if ( !v155 )
      goto LABEL_169;
    if ( *(int *)(v155 + 24) < 2 )
      return 0LL;
    v156 = sub_1BCAA2C(MessageAndScrollDetailConfirmDialog___c__DisplayClass48_2_TypeInfo, v98, v132, v133);
    System_Object___ctor((Il2CppObject *)v156, 0LL);
    if ( !*v131 )
      goto LABEL_169;
    v157 = *(_QWORD *)(*v131 + 24);
    if ( !v157 )
      goto LABEL_169;
    if ( *(_DWORD *)(v157 + 24) > 1u )
    {
      System_Int32__TryParse(*(System_String_o **)(v157 + 40), result, 0LL);
      v158 = result[0];
      v162 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v159, v160, v161);
      SceneJumpInfo___ctor_39380884(v162, (System_String_o *)StringLiteral_9660/*"NormalEventShop"*/, v158, 0LL);
      if ( !v156 )
        goto LABEL_169;
      *(_QWORD *)(v156 + 16) = v162;
      sub_1BCA784((PartyOrganizationUtility_o *)(v156 + 16), (int64_t)v162, v163, v164, v165, v166, v167, v168);
      IsNullOrEmpty = *(SceneJumpInfo_o **)(v156 + 16);
      if ( !IsNullOrEmpty )
        goto LABEL_169;
      SceneJumpInfo__SetReturnNowScene(IsNullOrEmpty, 0LL);
      _9__48_4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v169, v170, v171);
      System_Action___ctor(
        _9__48_4,
        (Il2CppObject *)v156,
        Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_2__SetTransitionFunc_b__8__,
        0LL);
      if ( !*v131 )
        goto LABEL_169;
      v172 = *(_QWORD *)(*v131 + 24);
      if ( !v172 )
        goto LABEL_169;
      if ( *(int *)(v172 + 24) < 3 )
        return _9__48_4;
      System_Int32__TryParse(*(System_String_o **)(v172 + 48), &eventType[1], 0LL);
      if ( !DataManager_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v173);
      IsNullOrEmpty = (SceneJumpInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_EventRewardSceneMaster___);
      if ( !IsNullOrEmpty )
        goto LABEL_169;
      if ( !EventRewardSceneMaster__getEntityFromIdAndEventType(
              (EventRewardSceneMaster_o *)IsNullOrEmpty,
              result[0],
              eventType[1],
              0LL) )
        return _9__48_4;
      v177 = result[0];
      v178 = eventType[1];
      v179 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v174, v175, v176);
      SceneJumpInfo___ctor_39380944(v179, (System_String_o *)StringLiteral_1/*""*/, v177, v178, 0LL);
      *(_QWORD *)(v156 + 16) = v179;
      sub_1BCA784((PartyOrganizationUtility_o *)(v156 + 16), (int64_t)v179, v180, v181, v182, v183, v184, v185);
      v137 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v186, v187, v188);
      v189 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_2__SetTransitionFunc_b__9__;
LABEL_114:
      v139 = *v189;
      _9__48_4 = v137;
      v138 = (Il2CppObject *)v156;
LABEL_115:
      System_Action___ctor(v137, v138, v139, 0LL);
      return _9__48_4;
    }
    goto LABEL_170;
  }
  _9__48_4 = 0LL;
  if ( SceneType <= 22 )
  {
    if ( SceneType == 20 )
    {
      result[1] = 1;
      v156 = *v131;
      if ( !*v131 )
        goto LABEL_169;
      v200 = *(_QWORD *)(v156 + 24);
      if ( !v200 )
        goto LABEL_169;
      if ( *(int *)(v200 + 24) >= 2 )
      {
        v252 = sub_1BCAA2C(MessageAndScrollDetailConfirmDialog___c__DisplayClass48_3_TypeInfo, v98, v132, v133);
        System_Object___ctor((Il2CppObject *)v252, 0LL);
        if ( !*v131 )
          goto LABEL_169;
        v253 = *(_QWORD *)(*v131 + 24);
        if ( !v253 )
          goto LABEL_169;
        if ( *(_DWORD *)(v253 + 24) <= 1u )
          goto LABEL_170;
        if ( !v252 )
          goto LABEL_169;
        IsNullOrEmpty = (SceneJumpInfo_o *)System_Int32__TryParse(
                                             *(System_String_o **)(v253 + 40),
                                             (int32_t *)(v252 + 16),
                                             0LL);
        if ( !*v131 )
          goto LABEL_169;
        v254 = *(_QWORD *)(*v131 + 24);
        if ( !v254 )
          goto LABEL_169;
        if ( *(_DWORD *)(v254 + 24) <= 1u )
          goto LABEL_170;
        v255 = *(System_String_o **)(v254 + 40);
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v98);
        System_Enum__TryParse_Int32Enum_(
          v255,
          &result[1],
          (const MethodInfo_2F19EE8 *)Method_System_Enum_TryParse_PayType_Type___);
        if ( result[1] == 3 )
        {
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v256);
          if ( !byte_4B1299C )
          {
            sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v256, v257);
            byte_4B1299C = 1;
          }
          v259 = TerminalPramsManager_TypeInfo;
          if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v256);
            v259 = TerminalPramsManager_TypeInfo;
          }
          v259->static_fields->_SummonType_k__BackingField = 3;
          v260 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v256);
            v260 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          _9__48_4 = v260->static_fields->__9__48_10;
          if ( !_9__48_4 )
          {
            if ( !v260->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v260, v256);
              v260 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
            }
            v261 = (Il2CppObject *)v260->static_fields->__9;
            _9__48_4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v256, v257, v258);
            System_Action___ctor(
              _9__48_4,
              v261,
              Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_10__,
              0LL);
            v262 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            v262->__9__48_10 = _9__48_4;
            p__9__48_4 = (PartyOrganizationUtility_o *)&v262->__9__48_10;
            goto LABEL_166;
          }
          return _9__48_4;
        }
        if ( !DataManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(DataManager_TypeInfo, v256);
        IsNullOrEmpty = (SceneJumpInfo_o *)DataManager__GetMaster_object_((const MethodInfo_2F12C3C *)Method_DataManager_GetMaster_GachaMaster___);
        if ( !IsNullOrEmpty )
          goto LABEL_169;
        ValidGachaEntityList = (System_Collections_Generic_List_object__o *)GachaMaster__GetValidGachaEntityList(
                                                                              (GachaMaster_o *)IsNullOrEmpty,
                                                                              0LL);
        v267 = (System_Predicate_object__o *)sub_1BCAA2C(System_Predicate_GachaEntity__TypeInfo, v264, v265, v266);
        System_Predicate_object____ctor(
          v267,
          (Il2CppObject *)v252,
          Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_3__SetTransitionFunc_b__11__,
          0LL);
        if ( !ValidGachaEntityList )
          goto LABEL_169;
        if ( System_Collections_Generic_List_object___Find(
               ValidGachaEntityList,
               (System_Predicate_T__o *)v267,
               (const MethodInfo_35A22C4 *)Method_System_Collections_Generic_List_GachaEntity__Find__) )
        {
          Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
          if ( !LocalizationManager_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(LocalizationManager_TypeInfo, v268);
          v270 = LocalizationManager__Get((System_String_o *)StringLiteral_13440/*"TERMINAL_BANNER_ERROR_DIALOG_TITLE"*/, 0LL);
          IsNullOrEmpty = (SceneJumpInfo_o *)LocalizationManager__Get((System_String_o *)StringLiteral_13439/*"TERMINAL_BANNER_ERROR_DIALOG_MESSAGE_TO_SUMMON"*/, 0LL);
          v273 = (System_String_o *)IsNullOrEmpty;
          v274 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v98);
            v274 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          _9__48_12 = v274->static_fields->__9__48_12;
          if ( !_9__48_12 )
          {
            if ( !v274->_2.cctor_finished )
            {
              j_il2cpp_runtime_class_init_0(v274, v98);
              v274 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
            }
            v276 = (Il2CppObject *)v274->static_fields->__9;
            _9__48_12 = (NotificationDialog_ClickDelegate_o *)sub_1BCAA2C(
                                                                NotificationDialog_ClickDelegate_TypeInfo,
                                                                v98,
                                                                v271,
                                                                v272);
            NotificationDialog_ClickDelegate___ctor(
              _9__48_12,
              v276,
              Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_12__,
              0LL);
            v277 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
            v277->__9__48_12 = _9__48_12;
            sub_1BCA784(
              (PartyOrganizationUtility_o *)&v277->__9__48_12,
              (int64_t)_9__48_12,
              v278,
              v279,
              v280,
              v281,
              v282,
              v283);
          }
          if ( !Instance )
            goto LABEL_169;
          CommonUI__OpenNotificationDialog_30768824(
            (CommonUI_o *)Instance,
            v270,
            v273,
            _9__48_12,
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
        v156 = *v131;
      }
      v137 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v98, v132, v133);
      v189 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_0__SetTransitionFunc_b__1__;
      goto LABEL_114;
    }
    if ( SceneType != 22 )
      return _9__48_4;
    if ( !*v131 )
      goto LABEL_169;
    v151 = *(_QWORD *)(*v131 + 24);
    if ( !v151 )
      goto LABEL_169;
    if ( *(int *)(v151 + 24) < 2 )
    {
      v152 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v98);
        v152 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__48_4 = v152->static_fields->__9__48_2;
      if ( !_9__48_4 )
      {
        if ( !v152->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v152, v98);
          v152 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v153 = (Il2CppObject *)v152->static_fields->__9;
        _9__48_4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v98, v132, v133);
        System_Action___ctor(
          _9__48_4,
          v153,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_2__,
          0LL);
        v154 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        v154->__9__48_2 = _9__48_4;
        p__9__48_4 = (PartyOrganizationUtility_o *)&v154->__9__48_2;
        goto LABEL_166;
      }
      return _9__48_4;
    }
    v156 = sub_1BCAA2C(MessageAndScrollDetailConfirmDialog___c__DisplayClass48_4_TypeInfo, v98, v132, v133);
    System_Object___ctor((Il2CppObject *)v156, 0LL);
    if ( !*v131 )
      goto LABEL_169;
    v217 = *(_QWORD *)(*v131 + 24);
    if ( !v217 )
      goto LABEL_169;
    if ( *(_DWORD *)(v217 + 24) > 1u )
    {
      v218 = *(System_String_o **)(v217 + 40);
      v219 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v98, v215, v216);
      SceneJumpInfo___ctor_39380796(v219, v218, 0LL);
      if ( !v156 )
        goto LABEL_169;
      *(_QWORD *)(v156 + 16) = v219;
      v226 = v156 + 16;
      sub_1BCA784((PartyOrganizationUtility_o *)(v156 + 16), (int64_t)v219, v220, v221, v222, v223, v224, v225);
      if ( !*v131 )
        goto LABEL_169;
      v229 = *(_QWORD *)(*v131 + 24);
      if ( !v229 )
        goto LABEL_169;
      if ( *(int *)(v229 + 24) >= 3 )
      {
        eventType[0] = 0;
        v230 = *(System_String_o **)(v229 + 48);
        if ( !System_Enum_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(System_Enum_TypeInfo, v98);
        IsNullOrEmpty = (SceneJumpInfo_o *)System_Enum__TryParse_Int32Enum_(
                                             v230,
                                             eventType,
                                             (const MethodInfo_2F19EE8 *)Method_System_Enum_TryParse_ServantOperationManager_Kind___);
        if ( !*(_QWORD *)v226 )
          goto LABEL_169;
        *(_DWORD *)(*(_QWORD *)v226 + 24LL) = eventType[0];
      }
      v137 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v98, v227, v228);
      v189 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_4__SetTransitionFunc_b__14__;
      goto LABEL_114;
    }
LABEL_170:
    sub_1BCAA44(IsNullOrEmpty, v98);
  }
  if ( SceneType == 23 )
  {
    v193 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v98);
      v193 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    _9__48_4 = v193->static_fields->__9__48_5;
    if ( !_9__48_4 )
    {
      if ( !v193->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(v193, v98);
        v193 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      v194 = (Il2CppObject *)v193->static_fields->__9;
      _9__48_4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v98, v132, v133);
      System_Action___ctor(
        _9__48_4,
        v194,
        Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_5__,
        0LL);
      v195 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
      v195->__9__48_5 = _9__48_4;
      p__9__48_4 = (PartyOrganizationUtility_o *)&v195->__9__48_5;
      goto LABEL_166;
    }
    return _9__48_4;
  }
  if ( SceneType == 30 )
  {
    if ( !*v131 )
      goto LABEL_169;
    v196 = *(_QWORD *)(*v131 + 24);
    if ( !v196 )
      goto LABEL_169;
    if ( *(int *)(v196 + 24) < 2 )
    {
      v197 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
      {
        j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v98);
        v197 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
      }
      _9__48_4 = v197->static_fields->__9__48_7;
      if ( !_9__48_4 )
      {
        if ( !v197->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(v197, v98);
          v197 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        v198 = (Il2CppObject *)v197->static_fields->__9;
        _9__48_4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v98, v132, v133);
        System_Action___ctor(
          _9__48_4,
          v198,
          Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_7__,
          0LL);
        v199 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
        v199->__9__48_7 = _9__48_4;
        p__9__48_4 = (PartyOrganizationUtility_o *)&v199->__9__48_7;
        goto LABEL_166;
      }
      return _9__48_4;
    }
    IsNullOrEmpty = (SceneJumpInfo_o *)System_String__op_Equality(
                                         *(System_String_o **)(v196 + 40),
                                         (System_String_o *)StringLiteral_12699/*"Scroll"*/,
                                         0LL);
    if ( ((unsigned __int8)IsNullOrEmpty & 1) != 0 )
    {
      if ( !*v131 )
        goto LABEL_169;
      v237 = *(_QWORD *)(*v131 + 24);
      if ( !v237 )
        goto LABEL_169;
      if ( *(int *)(v237 + 24) >= 3 )
      {
        v284 = *(_QWORD *)(v237 + 48);
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v98);
        if ( !byte_4B10F87 )
        {
          sub_1BCA7E0(&TerminalPramsManager_TypeInfo, v98, v231);
          byte_4B10F87 = 1;
        }
        v285 = TerminalPramsManager_TypeInfo;
        if ( !TerminalPramsManager_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(TerminalPramsManager_TypeInfo, v98);
          v285 = TerminalPramsManager_TypeInfo;
        }
        p_TransitionScrollTabName_k__BackingField = (PartyOrganizationUtility_o *)&v285->static_fields->_TransitionScrollTabName_k__BackingField;
        p_TransitionScrollTabName_k__BackingField->klass = (PartyOrganizationUtility_c *)v284;
        sub_1BCA784(p_TransitionScrollTabName_k__BackingField, v284, v231, v232, v233, v234, v235, v236);
        v290 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v287);
          v290 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
        }
        _9__48_4 = v290->static_fields->__9__48_6;
        if ( !_9__48_4 )
        {
          if ( !v290->_2.cctor_finished )
          {
            j_il2cpp_runtime_class_init_0(v290, v287);
            v290 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
          }
          v291 = (Il2CppObject *)v290->static_fields->__9;
          _9__48_4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v287, v288, v289);
          System_Action___ctor(
            _9__48_4,
            v291,
            Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_6__,
            0LL);
          v292 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
          v292->__9__48_6 = _9__48_4;
          p__9__48_4 = (PartyOrganizationUtility_o *)&v292->__9__48_6;
          goto LABEL_166;
        }
        return _9__48_4;
      }
    }
    v156 = sub_1BCAA2C(MessageAndScrollDetailConfirmDialog___c__DisplayClass48_6_TypeInfo, v98, v231, v232);
    System_Object___ctor((Il2CppObject *)v156, 0LL);
    if ( !*v131 )
      goto LABEL_169;
    v240 = *(_QWORD *)(*v131 + 24);
    if ( !v240 )
      goto LABEL_169;
    if ( *(_DWORD *)(v240 + 24) > 1u )
    {
      v241 = *(System_String_o **)(v240 + 40);
      v242 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v98, v238, v239);
      SceneJumpInfo___ctor_39380796(v242, v241, 0LL);
      if ( !v156 )
        goto LABEL_169;
      *(_QWORD *)(v156 + 16) = v242;
      sub_1BCA784((PartyOrganizationUtility_o *)(v156 + 16), (int64_t)v242, v243, v244, v245, v246, v247, v248);
      v137 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v249, v250, v251);
      v189 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_6__SetTransitionFunc_b__16__;
      goto LABEL_114;
    }
    goto LABEL_170;
  }
  if ( SceneType != 32 )
    return _9__48_4;
  if ( !*v131 )
    goto LABEL_169;
  v140 = *(_QWORD *)(*v131 + 24);
  if ( !v140 )
    goto LABEL_169;
  if ( *(int *)(v140 + 24) >= 2 )
  {
    v156 = sub_1BCAA2C(MessageAndScrollDetailConfirmDialog___c__DisplayClass48_5_TypeInfo, v98, v132, v133);
    System_Object___ctor((Il2CppObject *)v156, 0LL);
    if ( !*v131 )
      goto LABEL_169;
    v203 = *(_QWORD *)(*v131 + 24);
    if ( !v203 )
      goto LABEL_169;
    if ( *(_DWORD *)(v203 + 24) > 1u )
    {
      v204 = *(System_String_o **)(v203 + 40);
      v205 = (SceneJumpInfo_o *)sub_1BCAA2C(SceneJumpInfo_TypeInfo, v98, v201, v202);
      SceneJumpInfo___ctor_39380796(v205, v204, 0LL);
      if ( !v156 )
        goto LABEL_169;
      *(_QWORD *)(v156 + 16) = v205;
      sub_1BCA784((PartyOrganizationUtility_o *)(v156 + 16), (int64_t)v205, v206, v207, v208, v209, v210, v211);
      v137 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v212, v213, v214);
      v189 = &Method_MessageAndScrollDetailConfirmDialog___c__DisplayClass48_5__SetTransitionFunc_b__15__;
      goto LABEL_114;
    }
    goto LABEL_170;
  }
  v141 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v98);
    v141 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  }
  _9__48_4 = v141->static_fields->__9__48_3;
  if ( !_9__48_4 )
  {
    if ( !v141->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v141, v98);
      v141 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    v142 = (Il2CppObject *)v141->static_fields->__9;
    _9__48_4 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v98, v132, v133);
    System_Action___ctor(
      _9__48_4,
      v142,
      Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_3__,
      0LL);
    v149 = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    v149->__9__48_3 = _9__48_4;
    p__9__48_4 = (PartyOrganizationUtility_o *)&v149->__9__48_3;
    goto LABEL_166;
  }
  return _9__48_4;
}


System_String_o *__fastcall MessageAndScrollDetailConfirmDialog__get_closeBtnPath(
        MessageAndScrollDetailConfirmDialog_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2

  if ( (byte_4B193A4 & 1) == 0 )
  {
    sub_1BCA7E0(&StringLiteral_15819/*"Window/OkBtn"*/, method, v2);
    byte_4B193A4 = 1;
  }
  return (System_String_o *)StringLiteral_15819/*"Window/OkBtn"*/;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog_ClickDelegate___ctor(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
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
  this->fields.m_target = (Il2CppObject *)sub_1A10A08;
LABEL_6:
  this->fields.method_info = (struct System_Reflection_MethodInfo_o *)sub_1A109C0;
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
  if ( (byte_4B193A7 & 1) == 0 )
  {
    sub_1BCA7E0(&bool_TypeInfo, isOk, callback);
    byte_4B193A7 = 1;
  }
  v9[1] = 0LL;
  v9[0] = j_il2cpp_value_box_0(bool_TypeInfo, v10);
  return (System_IAsyncResult_o *)sub_1BCA794(this, v9, callback, object);
}


void __fastcall MessageAndScrollDetailConfirmDialog_ClickDelegate__EndInvoke(
        MessageAndScrollDetailConfirmDialog_ClickDelegate_o *this,
        System_IAsyncResult_o *result,
        const MethodInfo *method)
{
  sub_1BCA798(result, 0LL, method);
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
  __int64 v2; // x2
  __int64 v3; // x3
  Il2CppObject *v4; // x19
  int64_t v5; // x2
  int32_t v6; // w3
  System_String_o *v7; // x4
  BattleSetupInfo_o *v8; // x5
  FollowerInfo_o *v9; // x6
  PartyListViewItem_o *v10; // x7

  if ( (byte_4B193A8 & 1) == 0 )
  {
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog___c_TypeInfo, v1, v2);
    byte_4B193A8 = 1;
  }
  v4 = (Il2CppObject *)sub_1BCAA2C(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v1, v2, v3);
  System_Object___ctor(v4, 0LL);
  MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields->__9 = (struct MessageAndScrollDetailConfirmDialog___c_o *)v4;
  sub_1BCA784(
    (PartyOrganizationUtility_o *)MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields,
    (int64_t)v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___ctor(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__48_10(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B193A9 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B193A9 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 20, 1, 0LL, 0LL);
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__48_12(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        bool isDecide,
        const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x2
  __int64 v7; // x1
  __int64 v8; // x2
  Il2CppObject *Instance; // x0
  __int64 v10; // x1
  __int64 v11; // x2
  __int64 v12; // x3
  MessageAndScrollDetailConfirmDialog___c_c *v13; // x8
  CommonUI_o *v14; // x19
  System_Action_o *_9__48_13; // x20
  Il2CppObject *v16; // x21
  struct MessageAndScrollDetailConfirmDialog___c_StaticFields *static_fields; // x0
  int64_t v18; // x2
  int32_t v19; // w3
  System_String_o *v20; // x4
  BattleSetupInfo_o *v21; // x5
  FollowerInfo_o *v22; // x6
  PartyListViewItem_o *v23; // x7

  if ( (byte_4B193AA & 1) == 0 )
  {
    sub_1BCA7E0(&System_Action_TypeInfo, isDecide, method);
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_CommonUI__get_Instance__, v3, v4);
    sub_1BCA7E0(&Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_13__, v5, v6);
    sub_1BCA7E0(&MessageAndScrollDetailConfirmDialog___c_TypeInfo, v7, v8);
    byte_4B193AA = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_CommonUI__get_Instance__);
  v13 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  v14 = (CommonUI_o *)Instance;
  if ( !MessageAndScrollDetailConfirmDialog___c_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(MessageAndScrollDetailConfirmDialog___c_TypeInfo, v10);
    v13 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
  }
  _9__48_13 = v13->static_fields->__9__48_13;
  if ( !_9__48_13 )
  {
    if ( !v13->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(v13, v10);
      v13 = MessageAndScrollDetailConfirmDialog___c_TypeInfo;
    }
    v16 = (Il2CppObject *)v13->static_fields->__9;
    _9__48_13 = (System_Action_o *)sub_1BCAA2C(System_Action_TypeInfo, v10, v11, v12);
    System_Action___ctor(
      _9__48_13,
      v16,
      Method_MessageAndScrollDetailConfirmDialog___c__SetTransitionFunc_b__48_13__,
      0LL);
    static_fields = MessageAndScrollDetailConfirmDialog___c_TypeInfo->static_fields;
    static_fields->__9__48_13 = _9__48_13;
    sub_1BCA784(
      (PartyOrganizationUtility_o *)&static_fields->__9__48_13,
      (int64_t)_9__48_13,
      v18,
      v19,
      v20,
      v21,
      v22,
      v23);
  }
  if ( !v14 )
    sub_1BCAA3C(Instance, v10);
  CommonUI__CloseNotificationDialog_30769256(v14, _9__48_13, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__48_13(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B193AB & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B193AB = 1;
  }
  TopLoginRequest__ResetAccesTime(0LL);
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionSceneRefresh((AvalonSceneManager_o *)Instance, 34, 1, 0LL, 0, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__48_2(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B193AC & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B193AC = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__48_3(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B193AD & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B193AD = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__48_4(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B193AE & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B193AE = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 91, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__48_5(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B193AF & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B193AF = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 23, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__48_6(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B193B0 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B193B0 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c___SetTransitionFunc_b__48_7(
        MessageAndScrollDetailConfirmDialog___c_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v4; // x1

  if ( (byte_4B193B1 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B193B1 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v4);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, 0LL, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_0___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_0___SetTransitionFunc_b__1(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_0_o *this,
        const MethodInfo *method)
{
  const MethodInfo *v2; // x2

  if ( !this->fields.__4__this )
    sub_1BCAA3C(this, method);
  MessageAndScrollDetailConfirmDialog__ChangeSummonSceneByLinkInfo(this->fields.__4__this, this->fields.linkInfo, v2);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_1___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_1_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_1___SetTransitionFunc_b__0(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_1_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  TerminalSceneComponent_c *mPlayerStatus; // x0
  struct TerminalSceneComponent_o *mInstance; // x8
  struct ScrTerminalListTop_o *mTerminalList; // x8
  struct MessageAndScrollDetailConfirmDialog___c__DisplayClass48_0_o *CS___8__locals1; // x9
  struct MessageAndScrollDetailConfirmDialog_o *_4__this; // x9

  if ( (byte_4B193B2 & 1) == 0 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B193B2 = 1;
  }
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
  if ( !byte_4B10F83 )
  {
    sub_1BCA7E0(&TerminalSceneComponent_TypeInfo, method, v2);
    byte_4B10F83 = 1;
  }
  mPlayerStatus = TerminalSceneComponent_TypeInfo;
  if ( !TerminalSceneComponent_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(TerminalSceneComponent_TypeInfo, method);
    mPlayerStatus = TerminalSceneComponent_TypeInfo;
  }
  mInstance = mPlayerStatus->static_fields->mInstance;
  if ( !mInstance
    || (mTerminalList = mInstance->fields.mTerminalList) == 0LL
    || (CS___8__locals1 = this->fields.CS___8__locals1) == 0LL
    || (_4__this = CS___8__locals1->fields.__4__this) == 0LL
    || (mPlayerStatus = (TerminalSceneComponent_c *)mTerminalList->fields.mPlayerStatus) == 0LL )
  {
    sub_1BCAA3C(mPlayerStatus, method);
  }
  ScrPlayerStatus__ClickLoginDialogOpenMasterMission(
    (ScrPlayerStatus_o *)mPlayerStatus,
    this->fields.tabNo,
    _4__this->fields.closeNotificationCallback,
    0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_2___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_2_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_2___SetTransitionFunc_b__8(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B193B3 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B193B3 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    72,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_2___SetTransitionFunc_b__9(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_2_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B193B4 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B193B4 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__transitionScene(
    (AvalonSceneManager_o *)Instance,
    72,
    1,
    (Il2CppObject *)this->fields.sceneJumpInfo,
    0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_3___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_3_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


bool __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_3___SetTransitionFunc_b__11(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_3_o *this,
        GachaEntity_o *n,
        const MethodInfo *method)
{
  if ( !n )
    sub_1BCAA3C(this, 0LL);
  return n->fields.id == this->fields.gachaId;
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_4___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_4_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_4___SetTransitionFunc_b__14(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_4_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B193B5 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B193B5 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 22, 1, (Il2CppObject *)this->fields.info, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_5___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_5_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_5___SetTransitionFunc_b__15(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_5_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B193B6 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B193B6 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 32, 1, (Il2CppObject *)this->fields.info, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_6___ctor(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_6_o *this,
        const MethodInfo *method)
{
  System_Object___ctor((Il2CppObject *)this, 0LL);
}


void __fastcall MessageAndScrollDetailConfirmDialog___c__DisplayClass48_6___SetTransitionFunc_b__16(
        MessageAndScrollDetailConfirmDialog___c__DisplayClass48_6_o *this,
        const MethodInfo *method)
{
  __int64 v2; // x2
  Il2CppObject *Instance; // x0
  __int64 v5; // x1

  if ( (byte_4B193B7 & 1) == 0 )
  {
    sub_1BCA7E0(&Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__, method, v2);
    byte_4B193B7 = 1;
  }
  Instance = SingletonMonoBehaviour_object___get_Instance((const MethodInfo_37DEB14 *)Method_SingletonMonoBehaviour_AvalonSceneManager__get_Instance__);
  if ( !Instance )
    sub_1BCAA3C(0LL, v5);
  AvalonSceneManager__transitionScene((AvalonSceneManager_o *)Instance, 30, 1, (Il2CppObject *)this->fields.info, 0LL);
}