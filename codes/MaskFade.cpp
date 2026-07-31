void MaskFade___ctor(MaskFade_o *this, const MethodInfo *method)
{
  BaseMonoBehaviour___ctor((BaseMonoBehaviour_o *)this, 0);
}


void MaskFade__EndFadein(MaskFade_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20
  System_String_o *v6; // x2
  System_String_o *v7; // x3
  int32_t v8; // w4
  int32_t v9; // w5
  bool v10; // w6
  bool v11; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v13; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_593B897 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B897 = 1;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_14;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       maskSprite,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
  maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                            (UnityEngine_Object_o *)Component_object,
                                            0,
                                            0);
  if ( ((unsigned __int8)maskSprite & 1) != 0 )
  {
    if ( !Component_object )
      goto LABEL_14;
    UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  this->fields.maskKind = 0;
  if ( !maskSprite
    || (((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))maskSprite->klass[1]._1.element_class)(
          maskSprite,
          maskSprite->klass[1]._1.castClass,
          0.0),
        (maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase) == 0) )
  {
LABEL_14:
    sub_21FFECC(maskSprite, method);
  }
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v13 = callbackFunc;
  *((_BYTE *)&p_callbackFunc[-1].fields._BoardType_k__BackingField + 4) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v6, v7, v8, v9, v10, v11);
    ((void (__fastcall *)(intptr_t, intptr_t))v13->fields.invoke_impl)(v13->fields.method_code, v13->fields.method);
  }
}


void MaskFade__EndFadeout(MaskFade_o *this, const MethodInfo *method)
{
  BalanceConfig_c *v3; // x0
  struct UISprite_o *maskSprite; // x0
  __int64 v5; // x1
  Il2CppObject *Component_object; // x20
  System_String_o *v7; // x2
  System_String_o *v8; // x3
  int32_t v9; // w4
  int32_t v10; // w5
  bool v11; // w6
  bool v12; // w7
  MissionNaviTransitionBoardItem_o *p_callbackFunc; // x19
  struct System_Action_o *v14; // x20
  struct System_Action_o *callbackFunc; // t1

  if ( (byte_593B894 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B894 = 1;
  }
  v3 = BalanceConfig_TypeInfo;
  if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
  {
    j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, method);
    v3 = BalanceConfig_TypeInfo;
  }
  if ( v3->static_fields->IsEnableFadeRerunSkipped )
  {
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_16;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         (UnityEngine_Component_o *)maskSprite,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v5);
    maskSprite = (struct UISprite_o *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_object )
        goto LABEL_16;
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    }
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
LABEL_16:
    sub_21FFECC(maskSprite, method);
  ((void (__fastcall *)(struct UISprite_o *, const MethodInfo *, float))maskSprite->klass->vtable._8_set_alpha.methodPtr)(
    maskSprite,
    maskSprite->klass->vtable._8_set_alpha.method,
    1.0);
  callbackFunc = this->fields.callbackFunc;
  p_callbackFunc = (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc;
  v14 = callbackFunc;
  *((_BYTE *)&p_callbackFunc[-1].fields._BoardType_k__BackingField + 4) = 0;
  if ( callbackFunc )
  {
    p_callbackFunc->klass = 0;
    sub_21FFBF4(p_callbackFunc, 0, v7, v8, v9, v10, v11, v12);
    ((void (__fastcall *)(intptr_t, intptr_t))v14->fields.invoke_impl)(v14->fields.method_code, v14->fields.method);
  }
}


// local variable allocation has failed, the output may be wrong!
bool MaskFade__FadeChangeColor(
        MaskFade_o *this,
        int32_t kind,
        float duration,
        System_Action_o *callback,
        UnityEngine_Color_o targetColor,
        const MethodInfo *method)
{
  int32_t v6; // w4
  int32_t v7; // w5
  bool v8; // w6
  bool v9; // w7
  float a; // s11
  float b; // s10
  float g; // s9
  float r; // s8
  void *maskSprite; // x0
  __int64 v19; // x1
  Il2CppObject *Component_object; // x22
  __int64 v21; // x1
  UnityEngine_GameObject_o *v22; // x19
  UnityEngine_GameObject_o *gameObject; // x0
  __int64 v24; // x1
  TweenColor_o *v25; // x20
  System_String_o *v26; // x2
  System_String_o *v27; // x3
  int32_t v28; // w4
  int32_t v29; // w5
  bool v30; // w6
  bool v31; // w7
  int32_t v32; // w1
  System_String_o *v33; // x2
  System_String_o *v34; // x3
  int32_t v35; // w4
  int32_t v36; // w5
  bool v37; // w6
  bool v38; // w7
  const MethodInfo *v39; // x1
  BalanceConfig_c *v41; // x0
  UnityEngine_Color_o v42; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  a = targetColor.fields.a;
  b = targetColor.fields.b;
  g = targetColor.fields.g;
  r = targetColor.fields.r;
  if ( (byte_593B895 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_21FFC50(&FadeLogger_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6247/*"EndFadeout"*/);
    sub_21FFC50(&StringLiteral_26819/*"実行中"*/);
    sub_21FFC50(&StringLiteral_6864/*"FadeChangeColor"*/);
    byte_593B895 = 1;
  }
  if ( !this->fields.isExecuteMask )
    goto LABEL_13;
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_36;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v19);
  maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)maskSprite & 1) == 0 )
    goto LABEL_13;
  if ( !Component_object )
    goto LABEL_36;
  if ( *((float *)&Component_object[9].monitor + 1) != 0.0 )
  {
LABEL_13:
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      (System_String_o *)callback,
      (System_String_o *)method,
      v6,
      v7,
      v8,
      v9);
    switch ( kind )
    {
      case 1:
        r = 0.0;
        g = 0.0;
        b = 0.0;
        break;
      case 3:
LABEL_19:
        maskSprite = this->fields.colliderBase;
        this->fields.maskKind = kind;
        if ( !maskSprite )
          goto LABEL_36;
        UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
        if ( duration <= 0.0 )
          goto LABEL_28;
        maskSprite = this->fields.maskSprite;
        if ( !maskSprite )
          goto LABEL_36;
        UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)((char *)maskSprite + 148), 0);
        maskSprite = this->fields.maskSprite;
        if ( !maskSprite )
          goto LABEL_36;
        gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
        v43.fields.r = r;
        v43.fields.g = g;
        v43.fields.b = b;
        v43.fields.a = a;
        v25 = TweenColor__Begin(gameObject, duration, v43, 0);
        if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
          j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v24);
        if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v25, 0, 0) )
        {
          this->fields.isExecuteMask = 1;
          maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( v25 )
          {
            v25->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v25->fields.eventReceiver,
              (int32_t)maskSprite,
              v26,
              v27,
              v28,
              v29,
              v30,
              v31);
            v32 = StringLiteral_6247/*"EndFadeout"*/;
            v25->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6247/*"EndFadeout"*/;
            sub_21FFBF4(
              (MissionNaviTransitionBoardItem_o *)&v25->fields.callWhenFinished,
              v32,
              v33,
              v34,
              v35,
              v36,
              v37,
              v38);
            return 1;
          }
        }
        else
        {
LABEL_28:
          maskSprite = this->fields.maskSprite;
          if ( maskSprite )
          {
            v42.fields.r = r;
            v42.fields.g = g;
            v42.fields.b = b;
            v42.fields.a = a;
            UIWidget__set_color((UIWidget_o *)maskSprite, v42, 0);
            MaskFade__EndFadeout(this, v39);
            return 1;
          }
        }
LABEL_36:
        sub_21FFECC(maskSprite, *(_QWORD *)&kind);
      case 2:
        r = 1.0;
        g = 1.0;
        b = 1.0;
        break;
      default:
        v41 = BalanceConfig_TypeInfo;
        if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
        {
          j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind);
          v41 = BalanceConfig_TypeInfo;
        }
        if ( !v41->static_fields->IsEnableFadeRerunSkipped )
          return 0;
        goto LABEL_34;
    }
    a = 1.0;
    goto LABEL_19;
  }
  v22 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&FadeLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v21);
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6864/*"FadeChangeColor"*/,
    kind,
    (System_String_o *)StringLiteral_26819/*"実行中"*/,
    duration,
    v22,
    0);
LABEL_34:
  ActionExtensions__Call(callback, 0);
  return 0;
}


bool MaskFade__Fadein(MaskFade_o *this, float duration, System_Action_o *callback, const MethodInfo *method)
{
  void *maskSprite; // x0
  __int64 v8; // x1
  System_String_o *v9; // x2
  System_String_o *v10; // x3
  int32_t v11; // w4
  int32_t v12; // w5
  bool v13; // w6
  bool v14; // w7
  Il2CppObject *Component_object; // x21
  int32_t maskKind; // w21
  __int64 v17; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 *v19; // x9
  BalanceConfig_c *v20; // x0
  float v21; // s9
  float v22; // s10
  float v23; // s11
  UnityEngine_GameObject_o *v24; // x0
  __int64 v25; // x1
  TweenColor_o *v26; // x20
  System_String_o *v27; // x2
  System_String_o *v28; // x3
  int32_t v29; // w4
  int32_t v30; // w5
  bool v31; // w6
  bool v32; // w7
  int32_t v33; // w1
  System_String_o *v34; // x2
  System_String_o *v35; // x3
  int32_t v36; // w4
  int32_t v37; // w5
  bool v38; // w6
  bool v39; // w7
  bool result; // w0
  __int64 v41; // x1
  UnityEngine_Color_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v43; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_593B896 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_21FFC50(&FadeLogger_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6870/*"Fadein"*/);
    sub_21FFC50(&StringLiteral_26819/*"実行中"*/);
    sub_21FFC50(&StringLiteral_6246/*"EndFadein"*/);
    sub_21FFC50(&StringLiteral_26817/*"完了状態"*/);
    byte_593B896 = 1;
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_33;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !this->fields.isExecuteMask )
  {
    v20 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v8);
      v20 = BalanceConfig_TypeInfo;
    }
    if ( v20->static_fields->IsEnableFadeRerunSkipped )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
      maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)maskSprite & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_33;
        value = TweenColor__get_value((TweenColor_o *)Component_object, 0);
        if ( value.fields.a <= 0.0 )
        {
          maskKind = this->fields.maskKind;
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !*(&FadeLogger_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v41);
          v19 = &StringLiteral_26817/*"完了状態"*/;
          goto LABEL_32;
        }
      }
    }
LABEL_21:
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v9,
      v10,
      v11,
      v12,
      v13,
      v14);
    this->fields.maskKind = 0;
    if ( duration <= 0.0 )
      goto LABEL_28;
    maskSprite = this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_33;
    v21 = *((float *)maskSprite + 37);
    v22 = *((float *)maskSprite + 38);
    v23 = *((float *)maskSprite + 39);
    v24 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
    v43.fields.a = 0.0;
    v43.fields.r = v21;
    v43.fields.g = v22;
    v43.fields.b = v23;
    v26 = TweenColor__Begin(v24, duration, v43, 0);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v25);
    if ( !UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v26, 0, 0) )
    {
LABEL_28:
      MaskFade__EndFadein(this, (const MethodInfo *)callback);
      return 1;
    }
    maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
    if ( v26 )
    {
      v26->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
      sub_21FFBF4(
        (MissionNaviTransitionBoardItem_o *)&v26->fields.eventReceiver,
        (int32_t)maskSprite,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32);
      v33 = StringLiteral_6246/*"EndFadein"*/;
      v26->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6246/*"EndFadein"*/;
      sub_21FFBF4((MissionNaviTransitionBoardItem_o *)&v26->fields.callWhenFinished, v33, v34, v35, v36, v37, v38, v39);
      result = 1;
      this->fields.isExecuteMask = 1;
      return result;
    }
LABEL_33:
    sub_21FFECC(maskSprite, callback);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v8);
  maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)maskSprite & 1) == 0 )
    goto LABEL_21;
  if ( !Component_object )
    goto LABEL_33;
  if ( *((float *)&Component_object[9].monitor + 1) != 0.0 )
    goto LABEL_21;
  maskKind = this->fields.maskKind;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&FadeLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v17);
  v19 = &StringLiteral_26819/*"実行中"*/;
LABEL_32:
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6870/*"Fadein"*/,
    maskKind,
    (System_String_o *)*v19,
    duration,
    gameObject,
    0);
  ActionExtensions__Call(callback, 0);
  return 0;
}


// local variable allocation has failed, the output may be wrong!
bool MaskFade__Fadeout(
        MaskFade_o *this,
        int32_t kind,
        float duration,
        System_Action_o *callback,
        const MethodInfo *method)
{
  void *maskSprite; // x0
  __int64 v10; // x1
  System_String_o *v11; // x2
  System_String_o *v12; // x3
  int32_t v13; // w4
  int32_t v14; // w5
  bool v15; // w6
  bool v16; // w7
  Il2CppObject *Component_object; // x22
  __int64 v18; // x1
  UnityEngine_GameObject_o *gameObject; // x19
  __int64 *v20; // x9
  BalanceConfig_c *v21; // x0
  unsigned int v22; // w8
  float v23; // s9
  float v24; // s10
  UnityEngine_GameObject_o *v25; // x0
  __int64 v26; // x1
  TweenColor_o *v27; // x20
  System_String_o *v28; // x2
  System_String_o *v29; // x3
  int32_t v30; // w4
  int32_t v31; // w5
  bool v32; // w6
  bool v33; // w7
  int32_t v34; // w1
  System_String_o *v35; // x2
  System_String_o *v36; // x3
  int32_t v37; // w4
  int32_t v38; // w5
  bool v39; // w6
  bool v40; // w7
  BalanceConfig_c *v41; // x0
  const MethodInfo *v42; // x1
  __int64 v44; // x1
  UnityEngine_Color_o value; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v46; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v47; // 0:s0.4,4:s1.4,8:s2.4,12:s3.4
  UnityEngine_Color_o v48; // 0:s1.4,4:s2.4,8:s3.4,12:s4.4

  if ( (byte_593B893 & 1) == 0 )
  {
    sub_21FFC50(&BalanceConfig_TypeInfo);
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_21FFC50(&FadeLogger_TypeInfo);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    sub_21FFC50(&StringLiteral_6872/*"Fadeout"*/);
    sub_21FFC50(&StringLiteral_6247/*"EndFadeout"*/);
    sub_21FFC50(&StringLiteral_26819/*"実行中"*/);
    sub_21FFC50(&StringLiteral_26817/*"完了状態"*/);
    byte_593B893 = 1;
  }
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    goto LABEL_44;
  Component_object = UnityEngine_Component__GetComponent_object_(
                       (UnityEngine_Component_o *)maskSprite,
                       (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
  if ( !this->fields.isExecuteMask )
  {
    v21 = BalanceConfig_TypeInfo;
    if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
    {
      j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, v10);
      v21 = BalanceConfig_TypeInfo;
    }
    if ( v21->static_fields->IsEnableFadeRerunSkipped )
    {
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
      maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
      if ( ((unsigned __int8)maskSprite & 1) != 0 )
      {
        if ( !Component_object )
          goto LABEL_44;
        value = TweenColor__get_value((TweenColor_o *)Component_object, 0);
        if ( value.fields.a >= 1.0 )
        {
          gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
          if ( !*(&FadeLogger_TypeInfo->_2.cctor_finished + 1) )
            j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v44);
          v20 = &StringLiteral_26817/*"完了状態"*/;
          goto LABEL_41;
        }
      }
    }
LABEL_21:
    this->fields.callbackFunc = callback;
    sub_21FFBF4(
      (MissionNaviTransitionBoardItem_o *)&this->fields.callbackFunc,
      (int32_t)callback,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16);
    v22 = kind - 1;
    if ( (unsigned int)(kind - 1) >= 3 )
    {
      v41 = BalanceConfig_TypeInfo;
      if ( !*(&BalanceConfig_TypeInfo->_2.cctor_finished + 1) )
      {
        j_il2cpp_runtime_class_init_0(BalanceConfig_TypeInfo, *(_QWORD *)&kind);
        v41 = BalanceConfig_TypeInfo;
      }
      if ( !v41->static_fields->IsEnableFadeRerunSkipped )
        return 0;
      goto LABEL_42;
    }
    maskSprite = this->fields.colliderBase;
    v23 = flt_ED1694[v22];
    v24 = flt_ED16A0[v22];
    this->fields.maskKind = kind;
    if ( maskSprite )
    {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 1, 0);
      if ( duration <= 0.0 )
        goto LABEL_35;
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_44;
      v46.fields.r = v23;
      v46.fields.g = v23;
      v46.fields.a = *((float *)maskSprite + 40);
      v46.fields.b = v23;
      UIWidget__set_color((UIWidget_o *)maskSprite, v46, 0);
      maskSprite = this->fields.maskSprite;
      if ( !maskSprite )
        goto LABEL_44;
      v25 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)maskSprite, 0);
      v48.fields.r = v23;
      v48.fields.g = v23;
      v48.fields.b = v23;
      v48.fields.a = v24;
      v27 = TweenColor__Begin(v25, duration, v48, 0);
      if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
        j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v26);
      if ( UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)v27, 0, 0) )
      {
        this->fields.isExecuteMask = 1;
        maskSprite = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
        if ( v27 )
        {
          v27->fields.eventReceiver = (struct UnityEngine_GameObject_o *)maskSprite;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v27->fields.eventReceiver,
            (int32_t)maskSprite,
            v28,
            v29,
            v30,
            v31,
            v32,
            v33);
          v34 = StringLiteral_6247/*"EndFadeout"*/;
          v27->fields.callWhenFinished = (struct System_String_o *)StringLiteral_6247/*"EndFadeout"*/;
          sub_21FFBF4(
            (MissionNaviTransitionBoardItem_o *)&v27->fields.callWhenFinished,
            v34,
            v35,
            v36,
            v37,
            v38,
            v39,
            v40);
          return 1;
        }
      }
      else
      {
LABEL_35:
        maskSprite = this->fields.maskSprite;
        if ( maskSprite )
        {
          v47.fields.r = v23;
          v47.fields.g = v23;
          v47.fields.b = v23;
          v47.fields.a = v24;
          UIWidget__set_color((UIWidget_o *)maskSprite, v47, 0);
          MaskFade__EndFadeout(this, v42);
          return 1;
        }
      }
    }
LABEL_44:
    sub_21FFECC(maskSprite, *(_QWORD *)&kind);
  }
  if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v10);
  maskSprite = (void *)UnityEngine_Object__op_Inequality((UnityEngine_Object_o *)Component_object, 0, 0);
  if ( ((unsigned __int8)maskSprite & 1) == 0 )
    goto LABEL_21;
  if ( !Component_object )
    goto LABEL_44;
  if ( *((float *)&Component_object[9].monitor + 1) != 1.0 )
    goto LABEL_21;
  gameObject = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)this, 0);
  if ( !*(&FadeLogger_TypeInfo->_2.cctor_finished + 1) )
    j_il2cpp_runtime_class_init_0(FadeLogger_TypeInfo, v18);
  v20 = &StringLiteral_26819/*"実行中"*/;
LABEL_41:
  FadeLogger__CreateFadeLogText(
    (System_String_o *)StringLiteral_6872/*"Fadeout"*/,
    kind,
    (System_String_o *)*v20,
    duration,
    gameObject,
    0);
LABEL_42:
  ActionExtensions__Call(callback, 0);
  return 0;
}


int32_t MaskFade__GetFadeoutKind(MaskFade_o *this, const MethodInfo *method)
{
  if ( this->fields.isExecuteMask )
    return 0;
  else
    return this->fields.maskKind;
}


void MaskFade__Init(MaskFade_o *this, const MethodInfo *method)
{
  UnityEngine_Component_o *maskSprite; // x0
  __int64 v4; // x1
  Il2CppObject *Component_object; // x20

  if ( (byte_593B892 & 1) == 0 )
  {
    sub_21FFC50(&Method_UnityEngine_Component_GetComponent_TweenColor___);
    sub_21FFC50(&UnityEngine_Object_TypeInfo);
    byte_593B892 = 1;
  }
  if ( this->fields.isExecuteMask )
  {
    maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
    if ( !maskSprite )
      goto LABEL_15;
    Component_object = UnityEngine_Component__GetComponent_object_(
                         maskSprite,
                         (const MethodInfo_37ED7E0 *)Method_UnityEngine_Component_GetComponent_TweenColor___);
    if ( !*(&UnityEngine_Object_TypeInfo->_2.cctor_finished + 1) )
      j_il2cpp_runtime_class_init_0(UnityEngine_Object_TypeInfo, v4);
    maskSprite = (UnityEngine_Component_o *)UnityEngine_Object__op_Inequality(
                                              (UnityEngine_Object_o *)Component_object,
                                              0,
                                              0);
    if ( ((unsigned __int8)maskSprite & 1) != 0 )
    {
      if ( !Component_object || (maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite) == 0 )
LABEL_15:
        sub_21FFECC(maskSprite, method);
      UIWidget__set_color((UIWidget_o *)maskSprite, (UnityEngine_Color_o)Component_object[9], 0);
      UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)Component_object, 0, 0);
    }
    this->fields.isExecuteMask = 0;
  }
  maskSprite = (UnityEngine_Component_o *)this->fields.maskSprite;
  this->fields.maskKind = 0;
  if ( !maskSprite )
    goto LABEL_15;
  ((void (__fastcall *)(UnityEngine_Component_o *, Il2CppClass *, double))maskSprite->klass[1]._1.element_class)(
    maskSprite,
    maskSprite->klass[1]._1.castClass,
    0.0);
  maskSprite = (UnityEngine_Component_o *)this->fields.colliderBase;
  if ( !maskSprite )
    goto LABEL_15;
  UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)maskSprite, 0, 0);
}


bool MaskFade__IsBusy(MaskFade_o *this, const MethodInfo *method)
{
  return this->fields.isExecuteMask;
}


bool MaskFade__IsDisp(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_21FFECC(0, method);
  return ((float (__fastcall *)(struct UISprite_o *, const MethodInfo *))maskSprite->klass->vtable._7_get_alpha.methodPtr)(
           maskSprite,
           maskSprite->klass->vtable._7_get_alpha.method) > 0.0;
}


bool MaskFade__IsOnTop(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0

  if ( this->fields.isExecuteMask )
    return 0;
  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_21FFECC(0, method);
  return ((float (__fastcall *)(struct UISprite_o *, const MethodInfo *))maskSprite->klass->vtable._7_get_alpha.methodPtr)(
           maskSprite,
           maskSprite->klass->vtable._7_get_alpha.method) >= 1.0;
}


// local variable allocation has failed, the output may be wrong!
void MaskFade__SetInitColor(MaskFade_o *this, int32_t kind, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x0
  float a; // s3
  float r; // s0 OVERLAPPED
  float g; // s1
  float b; // s2

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_21FFECC(0, *(_QWORD *)&kind);
  if ( kind == 1 )
  {
    r = 0.0;
    g = 0.0;
    b = 0.0;
  }
  else
  {
    r = maskSprite->fields.mColor.fields.r;
    g = maskSprite->fields.mColor.fields.g;
    b = maskSprite->fields.mColor.fields.b;
    if ( kind == 2 )
    {
      r = 1.0;
      g = 1.0;
      b = 1.0;
    }
  }
  a = maskSprite->fields.mColor.fields.a;
  UIWidget__set_color((UIWidget_o *)maskSprite, *(UnityEngine_Color_o *)&r, 0);
}


// local variable allocation has failed, the output may be wrong!
void MaskFade__SetMaskCollider(MaskFade_o *this, bool isEnable, const MethodInfo *method)
{
  UnityEngine_GameObject_o *colliderBase; // x0

  colliderBase = this->fields.colliderBase;
  if ( !colliderBase )
    sub_21FFECC(0, isEnable);
  UnityEngine_GameObject__SetActive(colliderBase, isEnable, 0);
}


bool MaskFade__TryGetColorByMaskFade(
        UnityEngine_Color_o *color,
        int32_t kind,
        UnityEngine_Color_o defaultColor,
        const MethodInfo *method)
{
  bool result; // w0

  if ( kind == 1 )
  {
    defaultColor.fields.r = 0.0;
    defaultColor.fields.g = 0.0;
    defaultColor.fields.b = 0.0;
LABEL_6:
    defaultColor.fields.a = 1.0;
    goto LABEL_7;
  }
  if ( kind != 3 )
  {
    if ( kind != 2 )
    {
      result = 0;
      goto LABEL_9;
    }
    defaultColor.fields.r = 1.0;
    defaultColor.fields.g = 1.0;
    defaultColor.fields.b = 1.0;
    goto LABEL_6;
  }
LABEL_7:
  result = 1;
LABEL_9:
  *color = defaultColor;
  return result;
}


int32_t MaskFade__get_Depth(MaskFade_o *this, const MethodInfo *method)
{
  struct UISprite_o *maskSprite; // x8

  maskSprite = this->fields.maskSprite;
  if ( !maskSprite )
    sub_21FFECC(this, method);
  return maskSprite->fields.mDepth;
}


// local variable allocation has failed, the output may be wrong!
void MaskFade__set_Depth(MaskFade_o *this, int32_t value, const MethodInfo *method)
{
  UIWidget_o *maskSprite; // x0

  maskSprite = (UIWidget_o *)this->fields.maskSprite;
  if ( !maskSprite )
    sub_21FFECC(0, *(_QWORD *)&value);
  UIWidget__set_depth(maskSprite, value, 0);
}