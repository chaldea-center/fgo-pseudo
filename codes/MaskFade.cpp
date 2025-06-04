void __fastcall MaskFade___ctor(MaskFade_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0LL);
}


void __fastcall MaskFade__EndFadein(MaskFade_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *maskSprite; // x0
  Il2CppObject *Component_object; // x20
  int32_t v6; // w2
  const MethodInfo *v7; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v9; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4B04A7C & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_TweenColor___, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B04A7C = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       maskSprite,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0LL,
                                            0LL);
  if ( ((unsigned __int8)maskSprite & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  this->fields.maskKind = 0;
  if ( !maskSprite
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))maskSprite->klass[1]._1.castClass)(
          maskSprite,
          maskSprite->klass[1]._1.declaringType,
          0.0),
        (maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase) == 0LL) )
  {
LABEL_14:
    sub_1BC3264(maskSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v9 = callbackFunc;
  BYTE4(p_callbackFunc[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BC2FAC(p_callbackFunc, 0, v6, v7);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v9->fields.m_target)(
      v9->fields.original_method_info,
      *(_QWORD *)&v9->fields.extra_arg);
  }
}


void __fastcall MaskFade__EndFadeout(MaskFade_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  __int64 v4; // x1
  BalanceConfig_c *v5; // x0
  struct UISprite_o *maskSprite; // x0
  Il2CppObject *Component_object; // x20
  int32_t v8; // w2
  const MethodInfo *v9; // x3
  CGThumbnailListItem_o *p_callbackFunc; // x19
  struct System_Action_o *v11; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_4B04A79 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, method);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_TweenColor___, v3);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v4);
    byte_4B04A79 = 1;
  }
  v5 = BalanceConfig_TypeInfo;
  if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
    v5 = BalanceConfig_TypeInfo;
  }
  if ( v5->static_fields->IsEnableFadeRerunSkipped )
  {
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_16;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)maskSprite,
                         (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    maskSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality(
                                        (UnityEngine_Object_o *)Component_object,
                                        0LL,
                                        0LL);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_16;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
    }
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
LABEL_16:
    sub_1BC3264(maskSprite, method);
  ((void (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer, float))maskSprite->klass->vtable._8_set_alpha.method)(
    maskSprite,
    maskSprite->klass->vtable._9_CalculateFinalAlpha.methodPtr,
    1.0);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (CGThumbnailListItem_o *)&this->fields.callbackFunc;
  v11 = callbackFunc;
  BYTE4(p_callbackFunc[-1].fields._ThumbnailSpritePath_k__BackingField) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0LL;
    sub_1BC2FAC(p_callbackFunc, 0, v8, v9);
    ((void (__fastcall *)(struct System_Reflection_MethodInfo_o *, _QWORD))v11->fields.m_target)(
      v11->fields.original_method_info,
      *(_QWORD *)&v11->fields.extra_arg);
  }
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaskFade__FadeChangeColor(
        MaskFade_o *this,
        int32_t kind,
        float duration,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  void *maskSprite; // x0
  Il2CppObject *Component_object; // x22
  UnityEngine_GameObject_o *v17; // x19
  float v18; // s9
  UnityEngine_GameObject_o *gameObject; // x0
  TweenColor_o *v20; // x20
  int32_t v21; // w2
  const MethodInfo *v22; // x3
  int32_t v23; // w1
  int32_t v24; // w2
  const MethodInfo *v25; // x3
  const MethodInfo *v26; // x1
  BalanceConfig_c *v28; // x0
  UnityEngine_Color_o v29; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v30; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B04A7A & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_TweenColor___, v9);
    sub_1BC3008(&FadeLogger_TypeInfo, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_5951/*"EndFadeout"*/, v12);
    sub_1BC3008(&StringLiteral_25224/*"実行中"*/, v13);
    sub_1BC3008(&StringLiteral_6534/*"FadeChangeColor"*/, v14);
    byte_4B04A7A = 1;
  }
  if ( !this->fields.isExecuteMask )
    goto LABEL_13;
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_34;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)maskSprite & 1) == 0 )
    goto LABEL_13;
  if ( !Component_object )
    goto LABEL_34;
  if ( *((float *)&Component_object[9].monitor + 1) != 0.0 )
  {
LABEL_13:
    this->fields.callbackFunc = callback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, (int32_t)callback, method);
    if ( kind == 1 )
    {
      v18 = 0.0;
    }
    else
    {
      if ( kind != 2 )
      {
        v28 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v28 = BalanceConfig_TypeInfo;
        }
        if ( !v28->static_fields->IsEnableFadeRerunSkipped )
          return 0;
        goto LABEL_32;
      }
      v18 = 1.0;
    }
    maskSprite = this->fields.colliderBase;
    this->fields.maskKind = kind;
    if ( maskSprite )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
      if ( duration <= 0.0 )
        goto LABEL_26;
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_34;
      UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)((char *)maskSprite + 148), 0LL);
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_34;
      gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
      v30.fields.a = 1.0;
      v30.fields.r = v18;
      v30.fields.g = v18;
      v30.fields.b = v18;
      v20 = TweenColor__Begin(gameObject, duration, v30, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v20, 0LL, 0LL) )
      {
        this->fields.isExecuteMask = 1;
        maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v20 )
        {
          v20->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v20->fields.eventReceiver, (int32_t)maskSprite, v21, v22);
          v23 = StringLiteral_5951/*"EndFadeout"*/;
          v20->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5951/*"EndFadeout"*/;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v20->fields.callWhenFinished, v23, v24, v25);
          return 1;
        }
      }
      else
      {
LABEL_26:
        maskSprite = this->fields.maskSprite;
        if ( maskSprite )
        {
          v29.fields.a = 1.0;
          v29.fields.r = v18;
          v29.fields.g = v18;
          v29.fields.b = v18;
          UIWidget__set_color((UIWidget_o *)maskSprite, v29, 0LL);
          MaskFade__EndFadeout(this, v26);
          return 1;
        }
      }
    }
LABEL_34:
    sub_1BC3264(maskSprite, *(_QWORD *)&kind);
  }
  v17 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6534/*"FadeChangeColor"*/,
    kind,
    (System_String_o *)StringLiteral_25224/*"実行中"*/,
    duration,
    v17,
    0LL);
LABEL_32:
  ActionExtensions__Call(callback, 0LL);
  return 0;
}


bool __fastcall MaskFade__Fadein(MaskFade_o *this, float duration, System_Action_o *callback, const MethodInfo *method)
{
  __int64 v7; // x1
  __int64 v8; // x1
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  void *maskSprite; // x0
  int32_t v15; // w2
  const MethodInfo *v16; // x3
  Il2CppObject *Component_object; // x21
  int32_t maskKind; // w21
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 *v20; // x9
  BalanceConfig_c *v21; // x0
  float v22; // s9
  float v23; // s10
  float v24; // s11
  UnityEngine_GameObject_o *v25; // x0
  TweenColor_o *v26; // x20
  int32_t v27; // w2
  const MethodInfo *v28; // x3
  int32_t v29; // w1
  int32_t v30; // w2
  const MethodInfo *v31; // x3
  bool result; // w0
  UnityEngine_Color_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v34; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B04A7B & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, callback);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_TweenColor___, v7);
    sub_1BC3008(&FadeLogger_TypeInfo, v8);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v9);
    sub_1BC3008(&StringLiteral_6540/*"Fadein"*/, v10);
    sub_1BC3008(&StringLiteral_25224/*"実行中"*/, v11);
    sub_1BC3008(&StringLiteral_5950/*"EndFadein"*/, v12);
    sub_1BC3008(&StringLiteral_25222/*"完了状態"*/, v13);
    byte_4B04A7B = 1;
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_33;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !this->fields.isExecuteMask )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v21 = BalanceConfig_TypeInfo;
    }
    if ( v21->static_fields->IsEnableFadeRerunSkipped )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)maskSprite & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_33;
        value = TweenColor__get_value((TweenColor_o *)Component_object, 0LL);
        if ( value.fields.a <= 0.0 )
        {
          maskKind = this->fields.maskKind;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !FadeLogger_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
          v20 = &StringLiteral_25222/*"完了状態"*/;
          goto LABEL_32;
        }
      }
    }
LABEL_21:
    this->fields.callbackFunc = callback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v15, v16);
    this->fields.maskKind = 0;
    if ( duration <= 0.0 )
      goto LABEL_28;
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_33;
    v22 = *((float *)maskSprite + 37);
    v23 = *((float *)maskSprite + 38);
    v24 = *((float *)maskSprite + 39);
    v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
    v34.fields.a = 0.0;
    v34.fields.r = v22;
    v34.fields.g = v23;
    v34.fields.b = v24;
    v26 = TweenColor__Begin(v25, duration, v34, 0LL);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0LL, 0LL) )
    {
LABEL_28:
      MaskFade__EndFadein(this, (const MethodInfo *)callback);
      return 1;
    }
    maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
    if ( v26 )
    {
      v26->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v26->fields.eventReceiver, (int32_t)maskSprite, v27, v28);
      v29 = StringLiteral_5950/*"EndFadein"*/;
      v26->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5950/*"EndFadein"*/;
      sub_1BC2FAC((CGThumbnailListItem_o *)&v26->fields.callWhenFinished, v29, v30, v31);
      result = 1;
      this->fields.isExecuteMask = 1;
      return result;
    }
LABEL_33:
    sub_1BC3264(maskSprite, callback);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)maskSprite & 1) == 0 )
    goto LABEL_21;
  if ( !Component_object )
    goto LABEL_33;
  if ( *((float *)&Component_object[9].monitor + 1) != 0.0 )
    goto LABEL_21;
  maskKind = this->fields.maskKind;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  v20 = &StringLiteral_25224/*"実行中"*/;
LABEL_32:
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6540/*"Fadein"*/,
    maskKind,
    (System_String_o *)*v20,
    duration,
    gameObject,
    0LL);
  ActionExtensions__Call(callback, 0LL);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaskFade__Fadeout(
        MaskFade_o *this,
        int32_t kind,
        float duration,
        System_Action_o *callback,
        const MethodInfo *method)
{
  __int64 v9; // x1
  __int64 v10; // x1
  __int64 v11; // x1
  __int64 v12; // x1
  __int64 v13; // x1
  __int64 v14; // x1
  __int64 v15; // x1
  void *maskSprite; // x0
  int32_t v17; // w2
  const MethodInfo *v18; // x3
  Il2CppObject *Component_object; // x22
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 *v21; // x9
  BalanceConfig_c *v22; // x0
  float v23; // s9
  UnityEngine_GameObject_o *v24; // x0
  TweenColor_o *v25; // x20
  int32_t v26; // w2
  const MethodInfo *v27; // x3
  int32_t v28; // w1
  int32_t v29; // w2
  const MethodInfo *v30; // x3
  const MethodInfo *v31; // x1
  BalanceConfig_c *v33; // x0
  UnityEngine_Color_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v35; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v36; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v37; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_4B04A78 & 1) == 0 )
  {
    sub_1BC3008(&BalanceConfig_TypeInfo, *(_QWORD *)&kind);
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_TweenColor___, v9);
    sub_1BC3008(&FadeLogger_TypeInfo, v10);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v11);
    sub_1BC3008(&StringLiteral_6542/*"Fadeout"*/, v12);
    sub_1BC3008(&StringLiteral_5951/*"EndFadeout"*/, v13);
    sub_1BC3008(&StringLiteral_25224/*"実行中"*/, v14);
    sub_1BC3008(&StringLiteral_25222/*"完了状態"*/, v15);
    byte_4B04A78 = 1;
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_47;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !this->fields.isExecuteMask )
  {
    v22 = BalanceConfig_TypeInfo;
    if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
      v22 = BalanceConfig_TypeInfo;
    }
    if ( v22->static_fields->IsEnableFadeRerunSkipped )
    {
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
      if ( ((unsigned __int8)maskSprite & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_47;
        value = TweenColor__get_value((TweenColor_o *)Component_object, 0LL);
        if ( value.fields.a >= 1.0 )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
          if ( !FadeLogger_TypeInfo->_2.cctor_finished )
            j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
          v21 = &StringLiteral_25222/*"完了状態"*/;
          goto LABEL_44;
        }
      }
    }
LABEL_21:
    this->fields.callbackFunc = callback;
    sub_1BC2FAC((CGThumbnailListItem_o *)&this->fields.callbackFunc, (int32_t)callback, v17, v18);
    if ( kind == 1 )
    {
      v23 = 0.0;
    }
    else
    {
      if ( kind != 2 )
      {
        v33 = BalanceConfig_TypeInfo;
        if ( !BalanceConfig_TypeInfo->_2.cctor_finished )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo);
          v33 = BalanceConfig_TypeInfo;
        }
        if ( !v33->static_fields->IsEnableFadeRerunSkipped )
          return 0;
        goto LABEL_45;
      }
      v23 = 1.0;
    }
    maskSprite = this->fields.colliderBase;
    this->fields.maskKind = kind;
    if ( maskSprite )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0LL);
      if ( duration <= 0.0 )
        goto LABEL_34;
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_47;
      v35.fields.a = *((float *)maskSprite + 40);
      v35.fields.r = v23;
      v35.fields.g = v23;
      v35.fields.b = v23;
      UIWidget__set_color((UIWidget_o *)maskSprite, v35, 0LL);
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_47;
      v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0LL);
      v37.fields.a = 1.0;
      v37.fields.r = v23;
      v37.fields.g = v23;
      v37.fields.b = v23;
      v25 = TweenColor__Begin(v24, duration, v37, 0LL);
      if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0LL, 0LL) )
      {
        this->fields.isExecuteMask = 1;
        maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
        if ( v25 )
        {
          v25->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v25->fields.eventReceiver, (int32_t)maskSprite, v26, v27);
          v28 = StringLiteral_5951/*"EndFadeout"*/;
          v25->fields.callWhenFinished = (struct System_String_o *)StringLiteral_5951/*"EndFadeout"*/;
          sub_1BC2FAC((CGThumbnailListItem_o *)&v25->fields.callWhenFinished, v28, v29, v30);
          return 1;
        }
      }
      else
      {
LABEL_34:
        maskSprite = this->fields.maskSprite;
        if ( maskSprite )
        {
          v36.fields.a = 1.0;
          v36.fields.r = v23;
          v36.fields.g = v23;
          v36.fields.b = v23;
          UIWidget__set_color((UIWidget_o *)maskSprite, v36, 0LL);
          MaskFade__EndFadeout(this, v31);
          return 1;
        }
      }
    }
LABEL_47:
    sub_1BC3264(maskSprite, *(_QWORD *)&kind);
  }
  if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
  maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0LL, 0LL);
  if ( ((unsigned __int8)maskSprite & 1) == 0 )
    goto LABEL_21;
  if ( !Component_object )
    goto LABEL_47;
  if ( *((float *)&Component_object[9].monitor + 1) != 1.0 )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0LL);
  if ( !FadeLogger_TypeInfo->_2.cctor_finished )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo);
  v21 = &StringLiteral_25224/*"実行中"*/;
LABEL_44:
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6542/*"Fadeout"*/,
    kind,
    (System_String_o *)*v21,
    duration,
    gameObject,
    0LL);
LABEL_45:
  ActionExtensions__Call(callback, 0LL);
  return 0;
}


int32_t __fastcall MaskFade__GetFadeoutKind(MaskFade_o *this, const MethodInfo *method)
{
  if ( this->fields.isExecuteMask )
    return 0;
  else
    return this->fields.maskKind;
}


void __fastcall MaskFade__Init(MaskFade_o *this, const MethodInfo *method)
{
  __int64 v3; // x1
  UnityEngine_Component_o *maskSprite; // x0
  Il2CppObject *Component_object; // x20

  if ( (byte_4B04A77 & 1) == 0 )
  {
    sub_1BC3008(&Method_UnityEngine_Component_GetComponent_TweenColor___, method);
    sub_1BC3008(&UnityEngine_Object_TypeInfo, v3);
    byte_4B04A77 = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_15;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         maskSprite,
                         (const MethodInfo_2FF8634 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !UnityEngine_Object_TypeInfo->_2.cctor_finished )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo);
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0LL,
                                              0LL);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_object || (maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite) == 0LL )
LABEL_15:
        sub_1BC3264(maskSprite, method);
      UIWidget__set_color((UIWidget_o *)maskSprite, (UnityEngine_Color_o)Component_object[9], 0LL);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0LL);
    }
    this->fields.isExecuteMask = 0;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  this->fields.maskKind = 0;
  if ( !maskSprite )
    goto LABEL_15;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, float))maskSprite->klass[1]._1.castClass)(
    maskSprite,
    maskSprite->klass[1]._1.declaringType,
    0.0);
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  if ( !maskSprite )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0LL);
}


bool __fastcall MaskFade__IsBusy(MaskFade_o *this, const MethodInfo *method)
{
  return this->fields.isExecuteMask;
}


bool __fastcall MaskFade__IsDisp(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1BC3264(0LL, method);
  return ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))maskSprite->klass->vtable._7_get_alpha.method)(
           maskSprite,
           maskSprite->klass->vtable._8_set_alpha.methodPtr) > 0.0;
}


bool __fastcall MaskFade__IsOnTop(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0

  if ( this->fields.isExecuteMask )
    return 0;
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1BC3264(0LL, method);
  return ((float (__fastcall *)(struct UISprite_o *, Il2CppMethodPointer))maskSprite->klass->vtable._7_get_alpha.method)(
           maskSprite,
           maskSprite->klass->vtable._8_set_alpha.methodPtr) >= 1.0;
}


// local variable allocation has failed, the output may be wrong!
void __fastcall MaskFade__SetInitColor(MaskFade_o *this, int32_t kind, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0
  float a; // s3
  float r; // s0
  float g; // s1
  float b; // s2

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1BC3264(0LL, kind);
  if ( kind == 1 )
  {
    r = 0.0;
    g = 0.0;
    b = 0.0;
  }
  else if ( kind == 2 )
  {
    r = 1.0;
    g = 1.0;
    b = 1.0;
  }
  else
  {
    g = maskSprite->fields.mColor.fields.g;
    b = maskSprite->fields.mColor.fields.b;
    r = maskSprite->fields.mColor.fields.r;
  }
  a = maskSprite->fields.mColor.fields.a;
  UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)&r, 0LL);
}


void __fastcall MaskFade__SetMaskCollider(MaskFade_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *colliderBase; // x0

  colliderBase = this->fields.colliderBase;
  if ( !colliderBase )
    sub_1BC3264(0LL, isEnable);
  UnityEngine_GameObject__SetActive(colliderBase, isEnable, 0LL);
}


// local variable allocation has failed, the output may be wrong!
bool __fastcall MaskFade__TryGetColorByMaskFade(
        UnityEngine_Color_o *color,
        int32_t kind,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  bool v4; // w8

  if ( kind == 1 )
  {
    v4 = 1;
    defaultColor.fields.a = 1.0;
    defaultColor.fields.r = 0.0;
    defaultColor.fields.g = 0.0;
    defaultColor.fields.b = 0.0;
  }
  else if ( kind == 2 )
  {
    v4 = 1;
    defaultColor.fields.r = 1.0;
    defaultColor.fields.g = 1.0;
    defaultColor.fields.b = 1.0;
    defaultColor.fields.a = 1.0;
  }
  else
  {
    v4 = 0;
  }
  *color = defaultColor;
  return v4;
}


int32_t __fastcall MaskFade__get_Depth(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x8

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_1BC3264(this, method);
  return maskSprite->fields.mDepth;
}


void __fastcall MaskFade__set_Depth(MaskFade_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget_o *maskSprite; // x0

  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    sub_1BC3264(0LL, value);
  UIWidget__set_depth(maskSprite, value, 0LL);
}